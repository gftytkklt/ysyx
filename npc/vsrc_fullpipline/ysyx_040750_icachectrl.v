module ysyx_040750_icachectrl #(
    parameter BLOCK_SIZE = 32,
    parameter CACHE_SIZE = 4096,
    parameter GROUP_NUM = 2,
    parameter BLOCK_NUM = CACHE_SIZE / BLOCK_SIZE,
    parameter OFFT_LEN = $clog2(BLOCK_SIZE),
    parameter INDEX_LEN = $clog2(BLOCK_NUM/GROUP_NUM),
    parameter TAG_LEN = 32-OFFT_LEN-INDEX_LEN
)(
    input I_clk,
    input I_rst,
    // cpu addr & rd req
    // pc 
    input [31:0] I_cpu_addr,
    input I_cpu_rd_req,
    output O_cpu_rd_ready,
    input I_cpu_fencei,// from cpu, fencei begin, disable pc_ready
    input I_dcache_clean,// from dcache, fencei end, enable pc_ready
    // cache rd addr & req, low level valid en
    input [255:0] I_way0_rdata,
    input [255:0] I_way1_rdata,
    output [5:0] O_sram_addr,
    // msb-lsb: bram 3-0
    // wen=0 -> wr, wen=1 -> rd
    // wmask[i]=0 -> wvalid[i]
    output [3:0] O_sram_cen,
    output [3:0] O_sram_wen,
    output [255:0] O_sram_wdata,
    output [255:0] O_sram_wmask,
    // mem data, rd addr & req
    input [63:0] I_mem_rdata,
    input I_mem_arready,
    input I_mem_rvalid,
    input I_mem_rlast,
    output [31:0] O_mem_araddr,// addr to mem
    output O_mem_arvalid,
    output O_mem_rready,
    //output O_mem_bready,
    output [7:0] O_mem_arlen,
    output [2:0] O_mem_arsize,
    output [1:0] O_mem_arburst,
    // data & valid flag to cpu
    output [31:0] O_cpu_inst,
    output O_cpu_rvalid
);
    // ctrl sram 0-3 only, 4-7 ctrled by dcachectrl
    // addr division
    // cpu IDLE info
    // wire [OFFT_LEN-1:0] offset;
    wire [INDEX_LEN-1:0] index;
    wire [TAG_LEN-1:0] tag;
    // cache miss mem info
    wire [OFFT_LEN-1:0] mem_offset;
    wire [INDEX_LEN-1:0] mem_index;
    wire [TAG_LEN-1:0] mem_tag;
    // mem addr reg
    reg [31:0] mem_addr;
    // lookup table
    // table index LSB indecates way num, remaining 7-bit MSB indicate cacheline index[6:0]
    genvar i;
    reg [TAG_LEN-1:0] lookup_table [BLOCK_NUM-1:0];
    reg [BLOCK_NUM-1:0] valid_table;
    wire [BLOCK_NUM-1:0] lookup_table_index;
    wire [TAG_LEN-1:0] way0_tag, way1_tag;
    wire way0_valid, way1_valid;
    wire way0_hit, way1_hit;
    wire way0_replace, way1_replace;
    reg [1:0] hit_flag;// 01 for way0 hit, 10 for way1 hit;
    // final data rd src
    wire [255:0] mem_rdata;
    // cache hit data source
    wire [255:0] hit_rdata;
    // mem wb reg
    reg [255:0] cacheline_reg;
    // ctrl signal
    wire rd_hit, rd_miss, rd_handshake, rd_reload, rd_allocate, pc_handshake;
    wire mmio_flag;
    reg mmio_process;
    wire mmio_rvalid;
    wire mem_ar_req;
    // mmio & cache inst
    wire [31:0] mmio_inst, cache_inst;
    wire fencei_ready, fencei_flag;
    reg fencei_reg;
    // FSM
    `define ysyx_040750_IFSM_WIDTH 7
    localparam IDLE = `ysyx_040750_IFSM_WIDTH'b000000; 
    localparam RD_HIT = `ysyx_040750_IFSM_WIDTH'b000001;
    localparam RD_MISS = `ysyx_040750_IFSM_WIDTH'b000010;
    localparam RD_RELOAD = `ysyx_040750_IFSM_WIDTH'b000100;
    localparam RD_ALLOCATE = `ysyx_040750_IFSM_WIDTH'b001000;
    localparam MMIO_AR = `ysyx_040750_IFSM_WIDTH'b010000;
    localparam MMIO_RD = `ysyx_040750_IFSM_WIDTH'b100000;
    localparam FENCEI = `ysyx_040750_IFSM_WIDTH'b1000000;
    reg [`ysyx_040750_IFSM_WIDTH-1:0] current_state, next_state;
    // cache addr cen gen
    reg [3:0] cen_icache; // TODO: add ctrl logic
    // fence.i
    assign fencei_ready = (current_state == IDLE) || (current_state == RD_HIT);// CPU_rd_ready actually
    always @(posedge I_clk)
        if(I_rst)
            fencei_reg <= 0;
        else if(~fencei_ready & I_cpu_fencei)
            fencei_reg <= 1;
        else if(fencei_ready & fencei_flag)
            fencei_reg <= 0;
        else
            fencei_reg <= fencei_reg;
    assign fencei_flag = I_cpu_fencei | fencei_reg;
    // axi constant
    assign O_mem_rready = 1;// always enable rdata
    //assign O_mem_bready = 0;// always disable wresp
    assign O_mem_arlen = mmio_process ? 0 : 3;// 32/8 - 1
    assign O_mem_arsize = mmio_process ? 3'b010 : 3'b011;// 8B
    assign O_mem_arburst = mmio_process ? 2'b00 : 2'b01;
    // cache addr/en logic
    assign O_sram_addr = rd_hit ? index : mem_index;// 64 depth ram index
    assign O_sram_cen = cen_icache;
    // tag & valid flag impl
    generate for(i=0;i<BLOCK_NUM;i=i+1) begin
        assign lookup_table_index[i] = (i == {mem_index, way1_replace}) ? 1 : 0;
        always @(posedge I_clk)
            if(I_rst) begin
                lookup_table[i] <= 0;
                valid_table[i] <= 0;
            end
            else if(I_cpu_fencei) begin
                lookup_table[i] <= 0;
                valid_table[i] <= 0;
            end
            // else if(rd_allocate) begin
            //     lookup_table[{mem_index, way1_replace}] <= mem_tag;
            //     valid_table[{mem_index, way1_replace}] <= 1;
            // end
            else if(rd_allocate && lookup_table_index[i]) begin
                lookup_table[i] <= mem_tag;
                valid_table[i] <= 1;
            end
            else begin
                lookup_table[i] <= lookup_table[i];
                valid_table[i] <= valid_table[i];
            end
        end
    endgenerate
    // cen impl: rd_hit impl cache rd, I_mem_rvalid impl cache reload
    always @(*)
        if(rd_hit)// rd_hit case, cacheline rd
            case({way0_hit, way1_hit})
                2'b10: cen_icache = 4'b1100; // way 0: sram 0-1
                2'b01: cen_icache = 4'b0011; // way 1: sram 2-3
                default: cen_icache = 4'b1111;// should not reach here!
            endcase
        else if(rd_allocate)// load cacheline case, cacheline wr
            case({way0_replace, way1_replace})
                2'b10: cen_icache = 4'b1100; // way 0: sram 0-1
                2'b01: cen_icache = 4'b0011; // way 1: sram 2-3
                default: cen_icache = 4'b1111;// should not reach here!
            endcase
        else
            cen_icache = 4'b1111;
    // icache rd hit/miss logic
    // assign {tag, index, offset} = I_cpu_addr;
    assign {tag, index} = I_cpu_addr[31:OFFT_LEN];
    assign {mem_tag, mem_index, mem_offset} = mem_addr;
    assign way0_tag = lookup_table[{index,1'b0}];
    assign way1_tag = lookup_table[{index,1'b1}];
    assign way0_valid = valid_table[{index,1'b0}];
    assign way1_valid = valid_table[{index,1'b1}];
    assign way0_hit = (tag == way0_tag) && way0_valid && pc_handshake;
    assign way1_hit = (tag == way1_tag) && way1_valid && pc_handshake;
    assign rd_hit = way0_hit || way1_hit;
    assign rd_miss = pc_handshake && ~rd_hit;
    // rd miss signal
    assign mem_ar_req = (current_state == RD_MISS) || (current_state == MMIO_AR);
    assign O_mem_arvalid = mem_ar_req ? 1 : 0;
    assign rd_handshake = I_mem_arready && O_mem_arvalid;
    assign pc_handshake = I_cpu_rd_req && O_cpu_rd_ready;
    // assign O_mem_araddr = {mem_addr[31:OFFT_LEN],{OFFT_LEN{1'b0}}};
    assign O_mem_araddr = mem_ar_req ? {mem_addr[31:OFFT_LEN],{{OFFT_LEN{mmio_process}} & mem_offset}} : 0;
    // latch mem addr
    always @(posedge I_clk)
        if(I_rst)
            mem_addr <= 0;
        else if(pc_handshake)
            mem_addr <= I_cpu_addr;
        else
            mem_addr <= mem_addr;
    // rd reload signal
    assign rd_reload = (current_state == RD_RELOAD);
    always @(posedge I_clk)
        if(I_rst)
            cacheline_reg <= 0;
        //else if(rd_hit)
        //    cacheline_reg <= way0_hit ? I_way0_rdata : I_way1_rdata;
        else if(rd_reload && I_mem_rvalid)
            cacheline_reg <= {I_mem_rdata, cacheline_reg[255 -: 192]};
        else
            cacheline_reg <= cacheline_reg;
    // rd allocate signal
    assign rd_allocate = (current_state == RD_ALLOCATE) ? 1 : 0;
    assign mmio_rvalid = (current_state == MMIO_RD) && I_mem_rvalid;
    assign O_cpu_rvalid = (current_state == RD_HIT) || rd_allocate || mmio_rvalid;
    always @(posedge I_clk)
        if(I_rst)
            hit_flag <= 2'b00;
        else if(rd_hit)
            hit_flag <= way0_hit ? 2'b01 : 2'b10;
        else
            hit_flag <= 2'b00;
    //assign hit_rdata = way0_hit ? I_way0_rdata : I_way1_rdata;
    assign hit_rdata = (I_way0_rdata & {256{hit_flag[0]}}) | (I_way1_rdata & {256{hit_flag[1]}});
    assign mem_rdata = (current_state == RD_HIT) ? hit_rdata : cacheline_reg;
    assign cache_inst = mem_rdata[{mem_offset[OFFT_LEN-1:2],2'b0,3'b0} +: 32];
    assign mmio_inst = I_mem_rdata[31:0];
    assign O_cpu_inst = mmio_process ? mmio_inst : cache_inst;
    // assign O_cpu_inst = mem_rdata[{mem_offset[OFFT_LEN-1:2],2'b0,3'b0} +: 32];
    //assign O_cpu_inst = cacheline_reg[{mem_offset[OFFT_LEN-1:2],2'b0,3'b0} +: 32];
    assign O_sram_wen = rd_allocate ? 4'b0 : 4'hf;
    assign O_sram_wmask = rd_allocate ? 0 : {256{1'b1}};
    assign O_sram_wdata = cacheline_reg;
    assign way0_replace = rd_allocate && ~way1_replace;
    assign way1_replace = rd_allocate && (valid_table[{mem_index,1'b0}]) && ~(valid_table[{mem_index,1'b1}]);
    // FSM impl
    // IDLE: wait for valid sig, if rd_en, check tag & valid
    // RD_HIT: return rdata & valid flag
    // RD_MISS: rd mem req
    // RD_RELOAD: get axi rdata
    // RD_ALLOCATE: reload cacheline & send data to cpu
    assign mmio_flag = !I_cpu_addr[31] && I_cpu_rd_req;
    always @(posedge I_clk)
        if(I_rst)
            mmio_process <= 0;
        else if(mmio_flag)
            mmio_process <= 1;
        else if(I_mem_rlast)
            mmio_process <= 0;

    assign O_cpu_rd_ready = (current_state == IDLE) || (current_state == RD_HIT);
    always @(posedge I_clk)
        if(I_rst)
            current_state <= IDLE;
        else
            current_state <= next_state;
    always @(*) begin
        next_state = IDLE;
        case(current_state)
            IDLE, RD_HIT: begin
                if(fencei_flag)
                    next_state = FENCEI;
                else if(mmio_flag)
                    next_state = MMIO_AR;
                else if(rd_hit)
                    next_state = RD_HIT;
                else if(rd_miss)
                    next_state = RD_MISS;
                else
                    next_state = IDLE;
            end
            RD_MISS: next_state = rd_handshake ? RD_RELOAD : current_state;
            RD_RELOAD: next_state = I_mem_rlast ? RD_ALLOCATE : current_state;
            RD_ALLOCATE: next_state = IDLE;
            MMIO_AR: next_state = rd_handshake ? MMIO_RD : current_state;
            MMIO_RD: next_state = I_mem_rlast ? IDLE : current_state;
            FENCEI: next_state = I_dcache_clean ? IDLE : current_state;
            default: next_state = IDLE;
        endcase
    end
endmodule

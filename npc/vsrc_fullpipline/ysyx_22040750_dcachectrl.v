`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2022/12/01 10:58:43
// Design Name: 
// Module Name: ysyx_22040750_dcachectrl
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// ctrl sram 0-3 only, 4-7 ctrled by dcachectrl
//////////////////////////////////////////////////////////////////////////////////


module ysyx_22040750_dcachectrl #(
    parameter BLOCK_SIZE = 32,
    parameter CACHE_SIZE = 4096,
    parameter GROUP_NUM = 2,
    parameter BLOCK_NUM = CACHE_SIZE / BLOCK_SIZE,//128
    parameter OFFT_LEN = $clog2(BLOCK_SIZE),//5
    parameter INDEX_LEN = $clog2(BLOCK_NUM/GROUP_NUM),//6
    parameter TAG_LEN = 32-OFFT_LEN-INDEX_LEN//21
)(
    input I_clk,
    input I_rst,
    // cpu addr & w/r req
    input [31:0] I_cpu_addr,
    input [63:0] I_cpu_data,
    input [7:0] I_cpu_wmask,
    input I_cpu_rd_req,
    input I_cpu_wr_req,
    output O_cpu_mem_ready,
    input I_cpu_fencei,
    output O_dcache_clean,
    // cache rd addr & req, low level valid en
    input [255:0] I_way0_rdata,
    input [255:0] I_way1_rdata,
    output [5:0] O_sram_addr,
    // msb-lsb: bram 7-4
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
    output [7:0] O_mem_arlen,
    output [2:0] O_mem_arsize,
    output [1:0] O_mem_arburst,
    // mem data, wr addr & req
    input I_mem_awready,
    input I_mem_wready,
    input I_mem_bvalid,
    output [63:0] O_mem_wdata,
    output [31:0] O_mem_awaddr,
    output O_mem_awvalid,
    output O_mem_wvalid,
    output O_mem_bready,
    output O_mem_wlast,
    output [7:0] O_mem_awlen,
    output [2:0] O_mem_awsize,
    output [1:0] O_mem_awburst,
    output [7:0] O_mem_wstrb,
    // data & valid flag to cpu
    output reg [63:0] O_cpu_data,
    output O_cpu_rvalid,
    output O_cpu_bvalid
);
    // FSM signal
    `define FSM_WIDTH 16
    parameter IDLE = `FSM_WIDTH'h1, RD_HIT = `FSM_WIDTH'h2, RD_MISS = `FSM_WIDTH'h4, RD_RELOAD = `FSM_WIDTH'h8, RD_WB = `FSM_WIDTH'h10, RD_ALLOCATE = `FSM_WIDTH'h20;
    parameter WR_HIT = `FSM_WIDTH'h40, WR_MISS = `FSM_WIDTH'h80, WR_RELOAD = `FSM_WIDTH'h100, WR_WB = `FSM_WIDTH'h200, WR_ALLOCATE = `FSM_WIDTH'h400;
    parameter MMIO_AR = `FSM_WIDTH'h800, MMIO_AW = `FSM_WIDTH'h1000, MMIO_RD = `FSM_WIDTH'h2000, MMIO_WR = `FSM_WIDTH'h4000;
    parameter FENCEI = `FSM_WIDTH'h8000;
    reg [`FSM_WIDTH-1:0] current_state, next_state;
    wire replace_dirty;
    wire rd_hit, rd_miss, rd_handshake, rd_reload, rd_wb, rd_allocate;
    wire wr_hit, wr_miss, wr_reload, wr_wb, wr_allocate;
    // compare tag signal(IDLE/MISS)
    wire [OFFT_LEN-1:0] offset,mem_offset;
    wire [INDEX_LEN-1:0] index,mem_index;
    wire [TAG_LEN-1:0] tag,mem_tag;
    reg [31:0] mem_addr;
    // cacheline & cpu_wb reg
    wire [7:0] sram_wmask;// cpu wmask;
    reg [31:0] sram_wmaskB;// Bytewise wmask
    reg [1:0] hit_flag;// rd_only, 01 for way0 hit, 10 for way1 hit;
    // final data rd src
    wire [255:0] mem_rdata;
    // cache hit data source
    wire [255:0] hit_rdata;
    reg [255:0] cacheline_reg;
    reg [63:0] cpu_reg;
    reg [7:0] cpu_mask_reg;
    reg [3:0] cen_dcache;
    reg [3:0] wen_dcache;
    wire sram_wflag, sram_rflag;
    // lookup table
    genvar i;
    reg [TAG_LEN-1:0] lookup_table [BLOCK_NUM-1:0];
    reg [BLOCK_NUM-1:0] valid_table, dirty_table;
    // signals below compare hit & miss(use in IDLE state)
    wire [TAG_LEN-1:0] way0_tag, way1_tag;
    wire way0_valid, way1_valid;
    wire way0_hit, way1_hit;
    wire hit;
    // signals below determine wb/allocate op(use in XX_RELOAD state)
    wire way0_dirty, way1_dirty;
    // cacheline sel signal at comp stage
    wire way1_op;
    reg isway0_op;// high indicate way0 op
    // wb fsm
    parameter WB_IDLE = 4'b0001, WB_HANDSHAKE = 4'b0010, WB_DATA = 4'b0100, WB_BVALID = 4'b1000;
    reg [3:0] wb_state, wb_next_state;
    // axi interface handshake && wdata cnt
    wire mem_ar_req, mem_aw_req;
    wire aw_handshake, wr_handshake;// awaddr/wdata handshake
    reg [1:0] wdata_cnt;
    wire [255:0] wdata;
    wire [63:0] cache_wdata, cache_rdata;
    wire [31:0] cache_awaddr;
    //wire cache_wvalid;
    // MMIO signal
    wire mmio_flag;
    reg mmio_process;
    wire [63:0] mmio_wdata, mmio_rdata;
    wire [31:0] mmio_awaddr;
    // fencei
    wire fencei_process;
    reg [INDEX_LEN:0] fencei_index;// index for cacheline in two groups
    wire [31:0] fencei_addr;
    wire [5:0] fencei_sram_addr;
    wire [3:0] fencei_sram_cen;
    wire fencei_group;
    assign fencei_sram_addr = fencei_index[INDEX_LEN:1];
    assign fencei_group = fencei_index[0];
    assign fencei_process = (current_state == FENCEI);
    assign fencei_addr = {lookup_table[fencei_index], fencei_index[INDEX_LEN:1], {OFFT_LEN{1'b0}}};
    assign fencei_sram_cen = fencei_group ? 4'b0011 : 4'b1100;
    always @(posedge I_clk)
        if(I_rst)
            fencei_index <= 0;
        else if(fencei_process & (~dirty_table[fencei_index] | I_mem_bvalid))
            fencei_index <= fencei_index + 1;
        else
            fencei_index <= fencei_index;
    // dcache clean: fencei_index incr to max(all 1) and (last cacheline clean or wb finish)
    assign O_dcache_clean = fencei_process && (&fencei_index) && (~dirty_table[fencei_index] | I_mem_bvalid);
    // // pending fence.i req
    // reg fencei_process;
    // always @(posedge I_clk)
    //     if(I_rst)
    //         fencei_process <= 0;
    //     else if(I_cpu_fencei)
    //         fencei_process <= 1;
    //     else if(O_dcache_clean)
    //         fencei_process <= 0;
    //     else
    //         fencei_process <= fencei_process;
    //wire mmio_wvalid;
    // data reg impl
    always @(posedge I_clk)
        if(I_rst)
            cacheline_reg <= 0;
        //else if(rd_hit)
        //    cacheline_reg <= way0_hit ? I_way0_rdata : I_way1_rdata;
        else if(wr_hit)
            cacheline_reg[{offset[OFFT_LEN-1:3],3'b0,3'b0} +: 64] <= I_cpu_data;
        else if(wr_allocate)
            cacheline_reg[{mem_offset[OFFT_LEN-1:3],3'b0,3'b0} +: 64] <= cpu_reg;
        else if((rd_reload || wr_reload) && I_mem_rvalid)
            cacheline_reg <= {I_mem_rdata, cacheline_reg[255 -: 192]};
        else
            cacheline_reg <= cacheline_reg;
    always @(posedge I_clk)
        if(I_rst)
            {cpu_mask_reg, cpu_reg} <= 0;
        else if(I_cpu_wr_req)
            {cpu_mask_reg, cpu_reg} <= {I_cpu_wmask, I_cpu_data};
        else
            {cpu_mask_reg, cpu_reg} <= {cpu_mask_reg, cpu_reg};
    // cpu interface impl
    assign O_cpu_rvalid = (current_state == RD_HIT) || rd_allocate || ((current_state == MMIO_RD) && I_mem_rvalid);
    always @(posedge I_clk)
        if(I_rst)
            hit_flag <= 2'b00;
        else if(rd_hit)
            hit_flag <= way0_hit ? 2'b01 : 2'b10;
        else
            hit_flag <= 2'b00;
    assign hit_rdata = (I_way0_rdata & {256{hit_flag[0]}}) | (I_way1_rdata & {256{hit_flag[1]}});
    assign mem_rdata = (current_state == RD_HIT) ? hit_rdata : cacheline_reg;
    assign cache_rdata = mem_rdata[{mem_offset[OFFT_LEN-1:3],3'b0,3'b0} +: 64];
    assign mmio_rdata = I_mem_rdata;
    assign O_cpu_data = mmio_process ? mmio_rdata : cache_rdata;
    assign O_cpu_bvalid = (current_state == WR_HIT) || ((current_state == MMIO_WR) && I_mem_bvalid);
    // mem interface impl
    assign aw_handshake = I_mem_awready && O_mem_awvalid;
    assign wr_handshake = I_mem_wready && O_mem_wvalid;
    assign mem_ar_req = (current_state == RD_MISS) || (current_state == WR_MISS) || (current_state == MMIO_AR);
    assign mem_aw_req = (wb_state == WB_HANDSHAKE) || (current_state == MMIO_AW);
    always @(posedge I_clk)
        if(I_rst)
            wdata_cnt <= 0;
        else if(wr_handshake)
            wdata_cnt <= O_mem_wlast ? 0 : wdata_cnt + 1;
        else
            wdata_cnt <= wdata_cnt;
    assign wdata = ((isway0_op & ~fencei_process) | (fencei_process & ~fencei_group)) ? I_way0_rdata : I_way1_rdata;
    assign O_mem_wlast = O_mem_wvalid && (wdata_cnt == O_mem_awlen[1:0]);
    assign O_mem_arvalid = mem_ar_req ? 1 : 0;
    assign O_mem_rready = 1;
    assign O_mem_arlen = mmio_process ? 0 : 3;// 32/8 - 1
    assign O_mem_arsize = mmio_process ? 3'b010 : 3'b011;// 8B
    assign O_mem_arburst = mmio_process ? 2'b00 : 2'b01;
    assign O_mem_araddr = mem_ar_req ? {mem_addr[31:OFFT_LEN],{{OFFT_LEN{mmio_process}} & mem_offset}} : 0;// 32B alignment
    // cache wb: cacheline tag + index + offt'b0
    assign cache_awaddr = ({32{fencei_process}} & fencei_addr) | ({32{~fencei_process}} & {lookup_table[{mem_index, ~isway0_op}],mem_index,{OFFT_LEN{1'b0}}});
    assign mmio_awaddr = mem_addr;
    assign O_mem_awaddr = mem_aw_req ? ((cache_awaddr & {32{~mmio_process}}) | (mmio_awaddr & {32{mmio_process}})) : 0;
    assign O_mem_awlen = mmio_process ? 0 : 3;// 32/8 - 1
    assign O_mem_awsize = mmio_process ? 3'b010 : 3'b011;// 8B
    assign O_mem_awburst = mmio_process ? 2'b00 : 2'b01;
    assign O_mem_awvalid = mem_aw_req ? 1 : 0;
    assign O_mem_wvalid = (wb_state == WB_DATA) ? 1 : 0;
    assign mmio_wdata = cpu_reg;
    assign cache_wdata = wdata[{wdata_cnt,3'b0,3'b0} +: 64];
    assign O_mem_wdata = mmio_process ? mmio_wdata : cache_wdata;
    assign O_mem_wstrb = mmio_process ? cpu_mask_reg : 8'hff;
    assign O_mem_bready = 1;
    // sram interface impl
    // sram wr_en happen at WR_HIT(cpu partial wr), XX_ALLOCATE(cacheline replacement)
    assign sram_wmask = ~cpu_mask_reg;// cpu wmask is high level valid
    assign sram_wflag = (current_state == WR_HIT) || rd_allocate || wr_allocate;
    assign sram_rflag = (I_mem_rlast && !mmio_process) || rd_wb || wr_wb;
    always @(*)
        if(current_state == WR_HIT)
            case(mem_offset[OFFT_LEN-1:3])
                2'b11: sram_wmaskB = {sram_wmask, 24'hffffff};
                2'b10: sram_wmaskB = {8'hff, sram_wmask, 16'hffff};
                2'b01: sram_wmaskB = {16'hffff, sram_wmask, 8'hff};
                2'b00: sram_wmaskB = {24'hffffff, sram_wmask};
            endcase
        else
            sram_wmaskB = (rd_allocate || wr_allocate) ? 0 : {32{1'b1}};
    assign O_sram_wdata = cacheline_reg;
    // only rd_hit case sram_op happen at IDLE
    assign O_sram_addr = fencei_process ? fencei_sram_addr : rd_hit ? index : mem_index;
    assign O_sram_cen = fencei_process ? fencei_sram_cen : cen_dcache;
    assign O_sram_wen = wen_dcache;
    for(i=0;i<32;i=i+1)
        assign O_sram_wmask[8*i +: 8] = {8{sram_wmaskB[i]}};
    // sram wen
    always @(*)
        if(sram_wflag)
            wen_dcache = isway0_op ? 4'b1100 : 4'b0011;
        else
            wen_dcache = 4'b1111;
    // sram cen
    always @(*)
        if(rd_hit)
            cen_dcache = way0_hit ? 4'b1100 : 4'b0011;
        else if(sram_rflag | sram_wflag)
            cen_dcache = isway0_op ? 4'b1100 : 4'b0011;
        else
            cen_dcache = 4'b1111;
    // fsm ctrl signal impl
    assign way0_tag = lookup_table[{index,1'b0}];
    assign way1_tag = lookup_table[{index,1'b1}];
    assign way0_valid = valid_table[{index,1'b0}];
    assign way1_valid = valid_table[{index,1'b1}];
    assign way0_hit = (tag == way0_tag) && way0_valid;
    assign way1_hit = (tag == way1_tag) && way1_valid;
    assign hit = way0_hit || way1_hit;
    assign rd_hit = hit && I_cpu_rd_req && ~mmio_flag;
    assign rd_miss = ~hit && I_cpu_rd_req && ~mmio_flag;
    assign wr_hit = hit && I_cpu_wr_req && ~mmio_flag;
    assign wr_miss = ~hit && I_cpu_wr_req && ~mmio_flag;
    assign rd_handshake = O_mem_arvalid && I_mem_arready;
    assign rd_reload = (current_state == RD_RELOAD) ? 1 : 0;
    assign wr_reload = (current_state == WR_RELOAD) ? 1 : 0;
    assign rd_wb = (current_state == RD_WB) ? 1 : 0;
    assign wr_wb = (current_state == WR_WB) ? 1 : 0;
    assign rd_allocate = (current_state == RD_ALLOCATE) ? 1 : 0;
    assign wr_allocate = (current_state == WR_ALLOCATE) ? 1 : 0;
    // if way1_hit, impl way1; else if miss && way0_valid && way1_empty, impl way1
    // else, impl way0
    assign way1_op = way1_hit || (~hit && valid_table[{index,1'b0}]) && ~(valid_table[{index,1'b1}]);
    // determine way to be replaced at comp stage
    always @(posedge I_clk)
        if(I_rst)
            isway0_op <= 0;
        else if(I_cpu_rd_req || I_cpu_wr_req)
            isway0_op <= way1_op ? 0 : 1;
        else
            isway0_op <= isway0_op;
    // check if replace dirty block at miss stage
    assign way0_dirty = dirty_table[{mem_index,1'b0}];
    assign way1_dirty = dirty_table[{mem_index,1'b1}];
    assign replace_dirty = (way0_dirty && isway0_op) || (way1_dirty && ~isway0_op);
    // lookup table impl
    generate for(i=0;i<BLOCK_NUM;i=i+1) begin
    always @(posedge I_clk)
        if(I_rst) begin
            lookup_table[i] <= 0;
            valid_table[i] <= 0;
        end
        else if(rd_allocate || wr_allocate) begin
            lookup_table[{mem_index, ~isway0_op}] <= mem_tag;
            valid_table[{mem_index, ~isway0_op}] <= 1;
        end
        else begin
            lookup_table[i] <= lookup_table[i];
            valid_table[i] <= valid_table[i];
        end
    always @(posedge I_clk)
        if(I_rst) begin
            dirty_table[i] <= 0;
        end
        else if(wr_hit)
            dirty_table[{index, way1_hit}] <= 1;
        else if(rd_wb && I_mem_bvalid)
            dirty_table[{mem_index, ~isway0_op}] <= 0;
        else if(wr_allocate)
            dirty_table[{mem_index, ~isway0_op}] <= 1;
        else if(fencei_process & I_mem_bvalid)
            dirty_table[fencei_index] <= 0;
        else begin
            dirty_table[i] <= dirty_table[i];
        end
    end
    endgenerate
    // FSM impl
    // wb
    always @(posedge I_clk)
        if(I_rst)
            wb_state <= WB_IDLE;
        else
            wb_state <= wb_next_state;
    always @(*) begin
        wb_next_state = WB_IDLE;
        case(wb_state)
            // cache wb and mmio wr, cache wb case must consider ~mmio_process
            // three case cause wb: replace dirty, mmio wr, fence.i
            WB_IDLE: wb_next_state = ((I_mem_rlast && replace_dirty && ~mmio_process) || (mmio_flag && I_cpu_wr_req) || (fencei_process && dirty_table[fencei_index])) ? WB_HANDSHAKE : wb_state;
            WB_HANDSHAKE: wb_next_state = aw_handshake ? WB_DATA : wb_state;
            WB_DATA: wb_next_state = (wr_handshake && O_mem_wlast) ? (I_mem_bvalid ? WB_IDLE : WB_BVALID) : wb_state;
            WB_BVALID: wb_next_state = I_mem_bvalid ? WB_IDLE : wb_state;
            default: wb_next_state = wb_state;
        endcase
    end
    // overall
    // mmio_flag: current mem range: 80000000-87ffffff, other addr means mmio_addr
    // simple impl: [31:24] 1000_0000-1000_0111, so cached addr must have addr[31:27] == 10000
    // this impl holds only at block mem query case!
    always @(posedge I_clk)
        if(I_rst)
            mmio_process <= 0;
        else if(mmio_flag)
            mmio_process <= 1;
        else if(I_mem_rlast | I_mem_bvalid)
            mmio_process <= 0;
        
    // assign mmio_flag = (I_cpu_addr[31:27] != 5'b10000) && (I_cpu_rd_req || I_cpu_wr_req);
    assign mmio_flag = !I_cpu_addr[31] && (I_cpu_rd_req || I_cpu_wr_req);
    assign O_cpu_mem_ready = (current_state == IDLE) || (current_state == RD_HIT) || (current_state == WR_HIT);
    always @(posedge I_clk)
        if(I_rst)
            current_state <= IDLE;
        else
            current_state <= next_state;
    always @(*) begin
        next_state = IDLE;
        case(current_state)
            IDLE, RD_HIT, WR_HIT: begin
                if(I_cpu_fencei)
                    next_state = FENCEI;
                else if(mmio_flag)
                    next_state = I_cpu_rd_req ? MMIO_AR : MMIO_AW;
                else if(rd_hit)
                    next_state = RD_HIT;
                else if(rd_miss)
                    next_state = RD_MISS;
                else if(wr_hit)
                    next_state = WR_HIT;
                else if(wr_miss)
                    next_state = WR_MISS;
                else
                    next_state = IDLE;
            end
            RD_MISS: next_state = rd_handshake ? RD_RELOAD : current_state;
            RD_RELOAD: next_state = I_mem_rlast ? (replace_dirty ? RD_WB : RD_ALLOCATE) : current_state;
            RD_WB: next_state = I_mem_bvalid ? RD_ALLOCATE : current_state;
            RD_ALLOCATE: next_state = IDLE;
            WR_MISS: next_state = rd_handshake ? WR_RELOAD : current_state;
            WR_RELOAD: next_state = I_mem_rlast ? (replace_dirty ? WR_WB : WR_ALLOCATE) : current_state;
            WR_WB: next_state = I_mem_bvalid ? WR_ALLOCATE : current_state;
            WR_ALLOCATE: next_state = WR_HIT;
            MMIO_AR: next_state = rd_handshake ? MMIO_RD : current_state;
            MMIO_AW: next_state = aw_handshake ? MMIO_WR : current_state;
            MMIO_RD: next_state = I_mem_rlast ? IDLE : current_state;
            MMIO_WR: next_state = I_mem_bvalid ? IDLE : current_state;
            FENCEI: next_state = O_dcache_clean ? IDLE : current_state;
            //MMIO_WR: next_state = (wr_handshake && O_mem_wlast) ? IDLE : current_state;
            default: next_state = current_state;
        endcase
    end
    // compare tag signal impl
    assign {tag, index, offset} = I_cpu_addr;
    assign {mem_tag, mem_index, mem_offset} = mem_addr;
    always @(posedge I_clk)
        if(I_rst)
            mem_addr <= 0;
        else if(I_cpu_rd_req | I_cpu_wr_req)
            mem_addr <= I_cpu_addr;
        else
            mem_addr <= mem_addr;
endmodule
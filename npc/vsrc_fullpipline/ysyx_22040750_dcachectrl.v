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
    parameter BLOCK_NUM = CACHE_SIZE / BLOCK_SIZE,
    parameter OFFT_LEN = $clog2(BLOCK_SIZE),
    parameter INDEX_LEN = $clog2(BLOCK_NUM/GROUP_NUM),
    parameter TAG_LEN = 32-OFFT_LEN-INDEX_LEN
)(
    input I_clk,
    input I_rst,
    // cpu addr & w/r req
    input [31:0] I_cpu_addr,
    input [63:0] I_cpu_data,
    input [7:0] I_cpu_wmask,
    input I_cpu_rd_req,
    input I_cpu_wr_req,
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
    output [7:0] O_mem_wstrb,
    // data & valid flag to cpu
    output reg [63:0] O_cpu_data,
    output O_cpu_rvalid,
    output O_cpu_bvalid
);
    // FSM signal
    parameter IDLE = 13'h1, RD_HIT = 13'h2, RD_MISS = 13'h4, RD_RELOAD = 13'h8, RD_WB = 13'h10, RD_ALLOCATE = 13'h20;
    parameter WR_HIT = 13'h40, WR_MISS = 13'h80, WR_RELOAD = 13'h100, WR_WB = 13'h200, WR_ALLOCATE = 13'h400;
    parameter MMIO_RD = 13'h800, MMIO_WR = 13'h1000;
    wire mmio_flag;
    reg [12:0] current_state, next_state;
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
    reg [255:0] cacheline_reg;
    reg [63:0] cpu_reg;
    reg [7:0] cpu_mask_reg;
    reg [3:0] cen_dcache;
    reg [3:0] wen_dcache;
    wire sram_wflag, sram_rflag;
    // lookup table
    genvar i;
    reg [TAG_LEN-1:0] lookup_table [0:BLOCK_NUM-1];
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
    parameter WB_IDLE = 3'b001, WB_HANDSHAKE = 3'b010, WB_DATA = 3'b100;
    reg [2:0] wb_state, wb_next_state;
    // axi interface handshake && wdata cnt
    wire aw_handshake, wr_handshake;// awaddr/wdata handshake
    reg [1:0] wdata_cnt;
    wire [255:0] wdata;
    // data reg impl
    always @(posedge I_clk)
        if(I_rst)
            cacheline_reg <= 0;
        else if(rd_hit)
            cacheline_reg <= way0_hit ? I_way0_rdata : I_way1_rdata;
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
    assign O_cpu_rvalid = (current_state == RD_HIT) || rd_allocate;
    assign O_cpu_data = cacheline_reg[{mem_index[OFFT_LEN-1:3],3'b0,3'b0} +: 64];
    assign O_cpu_bvalid = (current_state == WR_HIT);
    // mem interface impl
    assign aw_handshake = I_mem_awready && O_mem_awvalid;
    assign wr_handshake = I_mem_wready && O_mem_wvalid;
    always @(posedge I_clk)
        if(I_rst)
            wdata_cnt <= 0;
        else if(wr_handshake)
            wdata_cnt <= wdata_cnt + 1;
        else
            wdata_cnt <= wdata_cnt;
    assign wdata = isway0_op ? I_way0_rdata : I_way1_rdata;
    assign O_mem_wlast = O_mem_wvalid && (wdata_cnt == 2'b11);
    assign O_mem_arvalid = ((current_state == RD_MISS) || (current_state == WR_MISS)) ? 1 : 0;
    assign O_mem_rready = 1;
    assign O_mem_arlen = 3;// 32/8 - 1
    assign O_mem_arsize = 3'b011;// 8B
    assign O_mem_araddr = {mem_addr[31:OFFT_LEN],{OFFT_LEN{1'b0}}};// 32B alignment
    assign O_mem_awaddr = (wb_state == WB_HANDSHAKE) ? O_mem_araddr : 0;
    assign O_mem_awlen = 3;// 32/8 - 1
    assign O_mem_awsize = 3'b011;// 8B
    assign O_mem_awvalid = (wb_state == WB_HANDSHAKE) ? 1 : 0;
    assign O_mem_wvalid = (wb_state == WB_DATA) ? 1 : 0;
    assign O_mem_wdata = wdata[{wdata_cnt,3'b0,3'b0} +: 64];
    assign O_mem_wstrb = 8'hff;
    assign O_mem_bready = 1;
    // sram interface impl
    // sram wr_en happen at WR_HIT(cpu partial wr), XX_ALLOCATE(cacheline replacement)
    assign sram_wmask = ~cpu_mask_reg;// cpu wmask is high level valid
    assign sram_wflag = (current_state == WR_HIT) || rd_allocate || wr_allocate;
    assign sram_rflag = I_mem_rlast || rd_wb || wr_wb;
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
    assign O_sram_addr = rd_hit ? index : mem_index;
    assign O_sram_cen = cen_dcache;
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
            WB_IDLE: wb_next_state = (I_mem_rlast && replace_dirty) ? WB_HANDSHAKE : wb_state;
            WB_HANDSHAKE: wb_next_state = aw_handshake ? WB_DATA : wb_state;
            WB_DATA: wb_next_state = (wr_handshake && O_mem_wlast) ? WB_IDLE : wb_state;
            default: wb_next_state = wb_state;
        endcase
    end
    // overall
    // mmio_flag: current mem range: 80000000-87ffffff, other addr means mmio_addr
    // simple impl: [31:24] 1000_0000-1000_0111, so cached addr must have addr[31:27] == 10000
    assign mmio_flag = (I_cpu_addr[31:27] != 5'b10000) && (I_cpu_rd_req || I_cpu_wr_req);
    always @(posedge I_clk)
        if(I_rst)
            current_state <= IDLE;
        else
            current_state <= next_state;
    always @(*) begin
        next_state = IDLE;
        case(current_state)
            IDLE: begin
                if(mmio_flag)
                    next_state = I_cpu_rd_req ? MMIO_RD : MMIO_WR;
                else if(rd_hit)
                    next_state = RD_HIT;
                else if(rd_miss)
                    next_state = RD_MISS;
                else if(wr_hit)
                    next_state = WR_HIT;
                else if(wr_miss)
                    next_state = WR_MISS;
                else
                    next_state = current_state;
            end
            RD_HIT: next_state = IDLE;
            RD_MISS: next_state = rd_handshake ? RD_RELOAD : current_state;
            RD_RELOAD: next_state = I_mem_rlast ? (replace_dirty ? RD_WB : RD_ALLOCATE) : current_state;
            RD_WB: next_state = I_mem_bvalid ? RD_ALLOCATE : current_state;
            RD_ALLOCATE: next_state = IDLE;
            WR_HIT: next_state = IDLE;
            WR_MISS: next_state = rd_handshake ? WR_RELOAD : current_state;
            WR_RELOAD: next_state = I_mem_rlast ? (replace_dirty ? WR_WB : WR_ALLOCATE) : current_state;
            WR_WB: next_state = I_mem_bvalid ? WR_ALLOCATE : current_state;
            WR_ALLOCATE: next_state = WR_HIT;
            MMIO_RD: next_state = I_mem_rlast ? IDLE : current_state;
            MMIO_WR: next_state = I_mem_bvalid ? IDLE : current_state;
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
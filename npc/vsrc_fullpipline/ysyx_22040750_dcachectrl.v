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
    parameter TAG_LEN = 32-OFFT_LEN-OFFT_LEN
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
    parameter IDLE = 11'h1, RD_HIT = 11'h2, RD_MISS = 11'h4, RD_RELOAD = 11'h8, RD_WB = 11'h10, RD_ALLOCATE = 11'h20;
    parameter WR_HIT = 11'h40, WR_MISS = 11'h80, WR_RELOAD = 11'h100, WR_WB = 11'h200, WR_ALLOCATE = 11'h400;
    reg [10:0] current_state, next_state;
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
    wire [1:0] wmask_offt;// 8*wmask_offt B
    reg [255:0] cacheline_reg;
    reg [63:0] cpu_reg;
    reg [7:0] cpu_mask_reg;
    reg [3:0] cen_dcache;
    reg [3:0] wen_dcache;
    // lookup table
    integer i;
    reg [TAG_LEN-1:0] lookup_table [0:BLOCK_NUM-1];
    reg [BLOCK_NUM-1:0] valid_table, dirty_table;
    // signals below compare hit & miss(use in IDLE state)
    wire [TAG_LEN-1:0] way0_tag, way1_tag;
    wire way0_valid, way1_valid;
    wire way0_hit, way1_hit;
    wire hit;
    // signals below determine wb/allocate op(use in XX_RELOAD state)
    wire way0_dirty, way1_dirty;
    // signals below determine cacheline allocate(use in XX_ALLOCATE state)
    wire way0_replace, way1_replace;
    // data reg impl
    always @(posedge I_clk)
        if(I_rst)
            cacheline_reg <= 0;
        else if(rd_hit)
            cacheline_reg <= way0_hit ? I_way0_rdata : I_way1_rdata;
        else if(wr_hit)
            cacheline_reg[{offset[OFFT_LEN-1:OFFT_LEN-2],3'b0} +: 64] <= I_cpu_data;
        else if(wr_allocate)
            cacheline_reg[{mem_offset[OFFT_LEN-1:OFFT_LEN-2],3'b0} +: 64] <= cpu_reg;
        else if((rd_reload || wr_reload) && I_mem_rvalid)
            cacheline_reg <= {cacheline_reg[191:0], I_mem_rdata};
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
    assign O_cpu_rdata = cacheline_reg[{mem_index[OFFT_LEN-1:OFFT_LEN-2],3'b0,3'b0} +: 64];
    // mem interface impl
    assign O_mem_arvalid = ((current_state == RD_MISS) || (current_state == WR_MISS)) ? 1 : 0;
    assign O_mem_rready = 1;
    assign O_mem_arlen = 3;// 32/8 - 1
    assign O_mem_arsize = 3'b011;// 8B
    assign O_mem_araddr = {mem_addr[31:OFFT_LEN],{OFFT_LEN{1'b0}}};// 32B alignment
    assign O_mem_awaddr = O_mem_araddr;
    assign O_mem_awlen = 3;// 32/8 - 1
    assign O_mem_awsize = 3'b011;// 8B
    assign O_mem_wstrb = 8'hff;
    assign O_mem_bready = 1;
    // sram interface impl
    assign sram_wmask = wr_hit ? I_cpu_wmask : cpu_mask_reg;
    assign wmask_offt = wr_hit ? offset[OFFT_LEN-1 -: 2] : 
    assign O_sram_wdata = cacheline_reg;
    assign O_sram_addr = (rd_hit || wr_hit) ? index : mem_index;// 64 depth ram index
    assign O_sram_cen = cen_dcache;
    assign O_sram_wen = wen_dcache;
    for(i=0;i<32;i=i+1)
        assign O_sram_wmask[8*i +: 8] = sram_wmaskB[i];
    // sram wr
    always @(*)
        if(wr_hit)// write 
        else if(rd_allocate || wr_allocate)
        else
            O_sram_wen = 4'b1111;
    // fsm ctrl signal impl
    assign way0_tag = lookup_table[{index,1'b0}];
    assign way1_tag = lookup_table[{index,1'b1}];
    assign way0_valid = valid_table[{index,1'b0}];
    assign way1_valid = valid_table[{index,1'b1}];
    assign way0_hit = (tag == way0_tag) && way0_valid;
    assign way1_hit = (tag == way1_tag) && way1_valid;
    assign hit = way0_hit || way1_hit;
    assign rd_hit = hit && I_cpu_rd_req;
    assign rd_miss = ~hit && I_cpu_rd_req;
    assign wr_hit = hit && I_cpu_wr_req;
    assign wr_miss = ~hit && I_cpu_wr_req;
    assign rd_handshake = O_mem_arvalid && I_mem_arready;
    assign rd_reload = (current_state == RD_RELOAD) ? 1 : 0;
    assign wr_reload = (current_state == WR_RELOAD) ? 1 : 0;
    assign rd_wb = (current_state == RD_WB) ? 1 : 0;
    assign wr_wb = (current_state == WR_WB) ? 1 : 0;
    assign rd_allocate = (current_state == RD_ALLOCATE) ? 1 : 0;
    assign wr_allocate = (current_state == WR_ALLOCATE) ? 1 : 0;
    // lookup table impl
    always @(posedge I_clk)
        if(I_rst) begin
            for(i=0;i<BLOCK_NUM;i=i+1) begin
                lookup_table[i] <= 0;
                valid_table[i] <= 0;
            end
        end
        else if(rd_allocate || wr_allocate) begin
            lookup_table[{mem_index, way1_replace}] <= mem_tag;
            valid_table[{mem_index, way1_replace}] <= 1;
        end
        else begin
            for(i=0;i<BLOCK_NUM;i=i+1) begin
                lookup_table[i] <= lookup_table[i];
                valid_table[i] <= valid_table[i];
            end
        end
    always @(posedge I_clk)
        if(I_rst) begin
            for(i=0;i<BLOCK_NUM;i=i+1) begin
                dirty_table[i] <= 0;
            end
        end
        else if(rd_wb && I_mem_bvalid)
            dirty_table[{mem_index, way1_replace}] <= 0;
        else if(wr_allocate)
            dirty_table[{mem_index, way1_replace}] <= 1;
        else begin
            for(i=0;i<BLOCK_NUM;i=i+1) begin
                dirty_table[i] <= dirty_table[i];
            end
        end
    // FSM impl
    always @(posedge I_clk)
        if(I_rst)
            current_state <= IDLE;
        else
            current_state <= next_state;
    always @(*) begin
        next_state = IDLE;
        case(current_state)
            IDLE: begin
                if(rd_hit)
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
        endcase
    end
    // compare tag signal impl
    assign {tag, index, offset} = I_addr;
    assign {mem_tag, mem_index, mem_offset} = mem_addr;
    always @(posedge I_clk)
        if(I_rst)
            mem_addr <= 0;
        else if(I_cpu_rd_req | I_cpu_wr_req)
            mem_addr <= I_cpu_addr;
        else
            mem_addr <= mem_addr;
endmodule
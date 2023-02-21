`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2022/12/01 10:58:43
// Design Name: 
// Module Name: ysyx_22040750_booth_mul_serial
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
    // cpu addr & rd req
    input [31:0] I_cpu_addr,
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
    output [31:0] O_mem_addr,// addr to mem
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
    output reg O_mem_awvalid,
    output reg O_mem_wvalid,
    output reg O_mem_bready,
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
    wire wr_hit, wr_miss, wr_reload, wr_allocate;
    // compare tag signal(IDLE/MISS)
    wire [3:0] offset,mem_offset;
    wire [6:0] index,mem_index;
    wire [20:0] tag,mem_tag;
    reg [31:0] mem_addr;
    // lookup table
    integer i;
    reg [20:0] lookup_table [0:255];
    reg [255:0] valid_table, dirty_table;
    wire [20:0] way0_tag, way1_tag;
    wire way0_valid, way1_valid;
    wire way0_hit, way1_hit;
    wire way0_dirty, way1_dirty;
    wire way0_replace, way1_replace;
    // lookup table impl
    always @(posedge I_clk)
        if(I_rst) begin
            for(i=0;i<256;i=i+1) begin
                lookup_table[i] <= 0;
                valid_table[i] <= 0;
            end
        end
        else if(rd_allocate | wr_allocate) begin
            lookup_table[{mem_index, way1_replace}] <= mem_tag;
            valid_table[{mem_index, way1_replace}] <= 1;
        end
        else begin
            for(i=0;i<256;i=i+1) begin
                lookup_table[i] <= lookup_table[i];
                valid_table[i] <= valid_table[i];
            end
        end
    always @(posedge I_clk)
        if(I_rst) begin
            for(i=0;i<256;i=i+1) begin
                dirty_table[i] <= 0;
            end
        end
        else if(rd_wb)
            dirty_table[{mem_index, way1_replace}] <= 0;
        else if(wr_allocate)
            dirty_table[{mem_index, way1_replace}] <= 1;
        else
            for(i=0;i<256;i=i+1) begin
                dirty_table[i] <= dirty_table[i];
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
            WR_ALLOCATE: next_state = IDLE;
        endcase
    end
    // compare tag signal impl
    assign {tag, index, offset} = I_addr;
    assign {mem_tag, mem_index, mem_offset} = mem_addr;
    always @(posedge I_clk)
        if(I_rst)
            mem_addr <= 0;
        else if(rd_miss | wr_miss)
            mem_addr <= I_cpu_addr;
        else
            mem_addr <= mem_addr;
endmodule
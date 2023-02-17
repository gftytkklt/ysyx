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
// cen [7:0] for 8 bram, [3:0] for icache, [7:4] for dcache
// 3-8 decoder produce one-hot cen, {isdcache_op, index[6:5]} -> cen[7:0]
//////////////////////////////////////////////////////////////////////////////////


module ysyx_22040750_cache(
    input I_clk,
    input I_rst,
    // cpu addr & w/r req
    input [31:0] I_cpu_addr,
    input [7:0] I_cpu_wmask,
    input I_cpu_rd_req,
    input I_cpu_wr_req,
    // cache w/r addr & req, low level valid en
    input [128:0] I_sram_rdata,
    output [5:0] O_sram_addr,
    output [7:0] O_sram_cen,
    output O_sram_wen,
    output [127:0] O_sram_wdata,
    output [127:0] O_sram_wmask,
    // mem data, w/r addr & req
    input [63:0] I_mem_rdata,
    input I_mem_rvalid,
    input I_mem_bvalid,
    output [31:0] O_mem_addr,// addr to mem
    output [63:0] O_mem_wdata,
    output O_mem_rd_en,
    output O_mem_wr_en,
     // data & valid flag to cpu
    output [63:0] O_cpu_rdata,
    output reg O_cpu_rvalid,
    output O_cpu_bvalid
);
    // addr division
    wire [3:0] offset;
    wire [6:0] index;
    wire [20:0] tag;
    // lookup table
    // table index LSB indecates way num, remaining 7-bit MSB indicate cacheline index[6:0]
    reg [20:0] lookup_itable [0:255];
    reg [20:0] lookup_dtable [0:255];
    reg valid_itable [0:255];
    reg valid_dtable [0:255];
    reg dirty_dtable [0:255];
    wire [20:0] way0_tag, way1_tag;
    wire way0_valid, way1_valid;
    wire way0_hit, way1_hit;
    // ctrl signal
    wire rd_hit, rd_reload, wr_hit, wr_writeback;
    // FSM
    localparam IDLE = 'b0000, RD_HIT = 'b0001, RD_MISS = 'b0010, RD_RELOAD='b0100;
    reg [3:0] current_state, next_state;
    // cache addr cen gen
    reg [7:0] cen_icache;
    always @(*)
        case()
    // cache addr/en logic
    assign O_sram_addr = index[5:0];// 64 depth ram index
    assign O_sram_cen = 8'hff;// TODO
    // icache rd hit/miss logic
    assign {tag, index, offset} = I_addr;
    assign way0_tag = lookup_itable[{index,1'b0}];
    assign way1_tag = lookup_itable[{index,1'b1}];
    assign way0_valid = valid_itable[{index,1'b0}];
    assign way1_valid = valid_itable[{index,1'b1}];
    assign way0_hit = (tag == way0_tag) && way0_valid;
    assign way1_hit = (tag == way1_tag) && way1_valid;
    assign rd_hit = I_cpu_rd_req && (way0_hit || way1_hit);
    assign rd_reload = I_cpu_rd_req && ~rd_hit;
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
                else if(rd_reload)
                    next_state = RD_MISS;
                else
                    next_state = current_state;
            end
            RD_HIT: next_state = IDLE;
            RD_MISS: next_state = I_mem_rvalid ? RD_RELOAD : current_state;
            default: next_state = IDLE;
        endcase
    end
endmodule
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
    input [127:0] I_sram0_rdata,
    input [127:0] I_sram1_rdata,
    input [127:0] I_sram2_rdata,
    input [127:0] I_sram3_rdata,
    input [127:0] I_sram4_rdata,
    input [127:0] I_sram5_rdata,
    input [127:0] I_sram6_rdata,
    input [127:0] I_sram7_rdata,
    // ixxx -> icache, dxxx -> dcache
    output [5:0] O_sram_iaddr,
    output [5:0] O_sram_daddr,
    output [7:0] O_sram_cen,
    output [7:0] O_sram_wen,
    output [127:0] O_sram0_wdata,
    output [127:0] O_sram1_wdata,
    output [127:0] O_sram2_wdata,
    output [127:0] O_sram3_wdata,
    output [127:0] O_sram4_wdata,
    output [127:0] O_sram5_wdata,
    output [127:0] O_sram6_wdata,
    output [127:0] O_sram7_wdata,
    output [127:0] O_sram0_wmask,
    output [127:0] O_sram1_wmask,
    output [127:0] O_sram2_wmask,
    output [127:0] O_sram3_wmask,
    output [127:0] O_sram4_wmask,
    output [127:0] O_sram5_wmask,
    output [127:0] O_sram6_wmask,
    output [127:0] O_sram7_wmask,
    // mem data, w/r addr & req
    // axi interface
    input [63:0] I_mem_rdata,
    input I_mem_rvalid,
    input I_mem_bvalid,
    output [31:0] O_mem_addr,// addr to mem
    output [63:0] O_mem_wdata,
    output O_mem_rd_en,
    output O_mem_wr_en,
     // data & valid flag to cpu
    output [63:0] O_cpu_rdata,
    output [31:0] O_cpu_inst,
    output reg O_cpu_rvalid,
    output O_cpu_bvalid
);
endmodule
`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2022/04/05 10:58:43
// Design Name: 
// Module Name: ysyx_22040750_axi_crossbar
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
// simplified axi crossbar
// use round-robin arbiter logic
//////////////////////////////////////////////////////////////////////////////////

module ysyx_22040750_axi_crossbar(
    input I_clk,
    input I_rst,
    // to axi bus
    input [63:0] I_axi_rdata,
    input I_axi_rvalid,
    input I_axi_rlast,
    output O_axi_rready,
    output [31:0] O_axi_araddr,
    input I_axi_arready,
    output O_axi_arvalid,
    output [7:0] O_axi_arlen,
    output [2:0] O_axi_arsize,
    // ch0
    output [63:0] O_ch0_rdata,
    output O_ch0_rvalid,
    output O_ch0_rlast,
    input I_ch0_rready,
    input [31:0] I_ch0_araddr,
    output O_ch0_arready,
    input I_ch0_arvalid,
    input [7:0] I_ch0_arlen,
    input [2:0] I_ch0_arsize,
    // ch1
    output [63:0] O_ch1_rdata,
    output O_ch1_rvalid,
    output O_ch1_rlast,
    input I_ch1_rready,
    input [31:0] I_ch1_araddr,
    output O_ch1_arready,
    input I_ch1_arvalid,
    input [7:0] I_ch1_arlen,
    input [2:0] I_ch1_arsize,
);
endmodule
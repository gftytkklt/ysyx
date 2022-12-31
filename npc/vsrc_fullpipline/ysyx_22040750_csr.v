`timescale 1ns / 1ps
module ysyx_22040750_csr(
    input I_sys_clk,
    input I_rst,
    input I_csr_wen,
    input [11:0] I_wr_addr,
    input [11:0] I_rd_addr,
    input [63:0] I_wr_data,
    output [63:0] O_rd_data
);
    localparam MEPC = 12'h341;
    localparam MSTATUS = 12'h300;
    localparam MTVEC = 12'h305;
    localparam MCAUSE = 12'h342;
    reg [63:0] mepc, mstatus, mtvec, mcause;
    reg [63:0] mip, mie, mtime, mtimecmp;
endmodule
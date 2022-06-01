`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2022/04/12 20:07:52
// Design Name: 
// Module Name: pc
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
// 
//////////////////////////////////////////////////////////////////////////////////


module pc(
    input I_sys_clk,
    input I_rst,
    input [63:0] I_dnpc,
    //input I_dnpc_en,
    output reg [63:0] O_pc
    );
    localparam PC_RESET = 64'h80000000;
    always @(posedge I_sys_clk)
        if(I_rst)
            O_pc <= PC_RESET;
//        else if(I_dnpc_en)
//            O_pc <= I_dnpc;
        else
            O_pc <= I_dnpc;
endmodule

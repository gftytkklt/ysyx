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
    input I_dnpc_en,
    output reg [63:0] O_pc,
    output reg O_pc_valid
    );
    import "DPI-C" function void set_pc_ptr(input logic [63:0] a []);
    initial set_pc_ptr(O_pc);
    localparam PC_RESET = 64'h7FFFFFF8;
    always @(posedge I_sys_clk)
        if(I_rst)
            O_pc <= PC_RESET;
        else if(I_dnpc_en)
            O_pc <= I_dnpc;
        else
            O_pc <= O_pc;
    always @(posedge I_sys_clk)
	if(I_rst)
	    O_pc_valid <= 0;
	else
	    O_pc_valid <= 1;
endmodule

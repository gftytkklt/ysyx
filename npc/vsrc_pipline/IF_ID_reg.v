`timescale 1ns / 1ps
// storage PC for PC related calculation
module IF_ID_reg(
    input I_sys_clk,
    input I_rst,
    input [63:0] I_pc,
    input [31:0] I_inst,
    input I_IF_ID_valid,
    output reg [63:0] O_pc,
    output reg [31:0] O_inst,
    output reg O_IF_ID_valid
    );
    always @(posedge I_sys_clk)
	if(I_rst)
	    {O_pc, O_inst} <= {64'h7FFFFFFC, 32'h0};
	else if(I_IF_ID_valid)
	    {O_pc, O_inst} <= {I_pc, I_inst};
	else
	    {O_pc, O_inst} <= {O_pc, O_inst};
    always @(posedge I_sys_clk)
	if(I_rst)
	    O_IF_ID_valid <= 0;
	else
	    O_IF_ID_valid <= I_IF_ID_valid;
endmodule

`timescale 1ns / 1ps
// storage PC for PC related calculation
module ysyx_22040750_IF_ID_reg(
    input I_sys_clk,
    input I_rst,
    input [31:0] I_pc,
    input [31:0] I_inst,
    input I_IF_ID_valid,// mem data valid
    input I_IF_ID_allowout,// receive ID_EX input en
    input I_IF_ID_stall,
    input I_IF_ID_jmp,
    output O_IF_ID_allowin,// send IF_ID input en
    output reg [31:0] O_pc,
    output reg [31:0] O_inst,
    output reg O_bubble_inst_debug,
    output O_IF_ID_input_valid,// data in IF_ID valid
    output O_IF_ID_valid// corresponding to pip1_to_pip2_valid
    );
    reg input_valid;// input data valid
    wire output_valid;// output data valid
    assign output_valid = ~I_IF_ID_stall;// one cycle decoder
    assign O_IF_ID_input_valid = input_valid;
    assign O_IF_ID_allowin = !input_valid || (output_valid && I_IF_ID_allowout);// no valid input data or output data trans enable
    assign O_IF_ID_valid = input_valid && output_valid;
    always @(posedge I_sys_clk)
    	if(I_rst)
    	    input_valid <= 0;
    	else if(O_IF_ID_allowin)
    	    input_valid <= I_IF_ID_valid;
    	else
    	    input_valid <= input_valid;
    always @(posedge I_sys_clk)
	if(I_rst)
	    {O_pc, O_inst} <= {32'h0, 32'h0};
	    // if inst jump, induce a bubble
	else if(I_IF_ID_valid && O_IF_ID_allowin)
	    {O_pc, O_inst} <= I_IF_ID_jmp ? {O_pc, 32'h00000013} : {I_pc, I_inst};
	else
	    {O_pc, O_inst} <= {O_pc, O_inst};
    always @(posedge I_sys_clk)
	if(I_rst)
	    O_bubble_inst_debug <= 0;
	else if(I_IF_ID_valid && O_IF_ID_allowin)
	    O_bubble_inst_debug <= I_IF_ID_jmp;
	else
	    O_bubble_inst_debug <= O_bubble_inst_debug;
endmodule

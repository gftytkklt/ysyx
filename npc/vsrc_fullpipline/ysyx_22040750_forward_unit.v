`timescale 1ns / 1ps
module ysyx_22040750_forward_unit(
    input [63:0] I_ID_rs1_data,// ID_EX out to alu
    input [63:0] I_ID_rs2_data,// ID_EX out to alu
    input [63:0] I_EX_data,// EX_MEM out
    input [63:0] I_MEM_data,// MEM_WB out
    input [63:0] I_WB_data,// reg rd port
    // input [1:0] I_stall_en,
    input [1:0] I_EX_stall,
    input [1:0] I_MEM_stall,
    input [1:0] I_WB_stall,
    input I_EX_reg_wen,
    input I_MEM_reg_wen,
    input I_WB_reg_wen,
    output reg [63:0] O_ID_EX_rs1_data,
    output reg [63:0] O_ID_EX_rs2_data
);
	always @(*)
		if(I_EX_stall[1] & I_EX_reg_wen)
			O_ID_EX_rs1_data = I_EX_data;
		else if(I_MEM_stall[1] & I_MEM_reg_wen)
			O_ID_EX_rs1_data = I_MEM_data;
		else if(I_WB_stall[1] & I_WB_reg_wen)
			O_ID_EX_rs1_data = I_WB_data;
		else
			O_ID_EX_rs1_data = I_ID_rs1_data;
	always @(*)
		if(I_EX_stall[0] & I_EX_reg_wen)
			O_ID_EX_rs2_data = I_EX_data;
		else if(I_MEM_stall[0] & I_MEM_reg_wen)
			O_ID_EX_rs2_data = I_MEM_data;
		else if(I_WB_stall[0] & I_WB_reg_wen)
			O_ID_EX_rs2_data = I_WB_data;
		else
			O_ID_EX_rs2_data = I_ID_rs2_data;
endmodule

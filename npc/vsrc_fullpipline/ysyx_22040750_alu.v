`timescale 1ns/1ps
module ysyx_22040750_alu(
    input I_sys_clk,
    input I_rst,
    input [63:0] I_op1,
    input [63:0] I_op2,
    input [14:0] I_alu_op_sel,
    input [1:0] I_alu_op_sext,
    input I_word_op_mask,
    input I_multicycle,
    input I_EX_MEM_ready,
    input [63:0] I_csr_data,
    input [4:0] I_uimm,
    input [6:0] I_csr_op_sel,
    output [63:0] O_result,
    //output [63:0] O_mem_addr,
    output [63:0] O_csr_data,
    output O_result_valid
);
    ysyx_22040750_gpr_alu gpr_alu_e(
    .I_sys_clk(I_sys_clk),
    .I_rst(I_rst),
		.I_csr_data(I_csr_data),
		.I_op1(I_op1),
		.I_op2(I_op2),
		.I_alu_op_sel(I_alu_op_sel),
		.I_alu_op_sext(I_alu_op_sext),
		.I_word_op_mask(I_word_op_mask),
		.I_multicycle(I_multicycle),
		.I_EX_MEM_ready(I_EX_MEM_ready),
		//.O_mem_addr(O_mem_addr),
		.O_result(O_result),
		.O_result_valid(O_result_valid)
    );

    ysyx_22040750_csr_alu csr_alu_e(
		.I_csr_data(I_csr_data),
		.I_rs_data(I_op1),
		.I_uimm(I_uimm),
		.I_csr_op_sel(I_csr_op_sel),
		.O_csr_data(O_csr_data)
	);
endmodule
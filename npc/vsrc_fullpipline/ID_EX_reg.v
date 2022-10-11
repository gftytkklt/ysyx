`timescale 1ns / 1ps
module ID_EX_reg(
    input I_sys_clk,
    input I_rst,
    input I_ID_EX_valid,
    output reg O_ID_EX_valid,
    input [63:0] I_imm,
    input [63:0] I_rs1,
    input [63:0] I_rs2,
    input [4:0] I_rd_addr,
    input I_reg_wen,
    input I_mem_wen,
    input [7:0] I_wstrb,
    input [8:0] I_rstrb,
    //input [3:0] I_dnpc_sel,
    input [2:0] I_regin_sel,
    input [2:0] I_op1_sel,
    input [1:0] I_op2_sel,
    input [1:0] I_alu_sext,
    input [14:0] I_alu_op_sel,
    input I_word_op_mask,
    output reg [63:0] O_imm,
    output reg [63:0] O_rs1,
    output reg [63:0] O_rs2,
    output reg [4:0] O_rd_addr,
    output reg O_reg_wen,
    output reg O_mem_wen,
    output reg [7:0] O_wstrb,
    output reg [8:0] O_rstrb,
    //output reg [3:0] O_dnpc_sel,
    output reg [2:0] O_regin_sel,
    output reg [2:0] O_op1_sel,
    output reg [1:0] O_op2_sel,
    output reg [1:0] O_alu_sext,
    output reg [14:0] O_alu_op_sel,
    output reg O_word_op_mask,
    input [63:0] I_pc,
    output reg [63:0] O_pc
);
    always @(posedge I_sys_clk)
		if(I_rst) begin
			O_imm <= 0;
			O_rs1 <= 0;
			O_rs2 <= 0;
			O_rd_addr <= 0;
			O_reg_wen <= 0;
			O_mem_wen <= 0;
			O_wstrb <= 0;
			O_rstrb <= 0;
			O_regin_sel <= 0;
			O_op1_sel <= 0;
			O_op2_sel <= 0;
			O_alu_sext <= 0;
			O_alu_op_sel <= 0;
			O_word_op_mask <= 0;
			O_pc <= 0;
		end
		else if(I_ID_EX_valid) begin
			O_imm <= I_imm;
			O_rs1 <= I_rs1;
			O_rs2 <= I_rs2;
			O_rd_addr <= I_rd_addr;
			O_reg_wen <= I_reg_wen;
			O_mem_wen <= I_mem_wen;
			O_wstrb <= I_wstrb;
			O_rstrb <= I_rstrb;
			O_regin_sel <= I_regin_sel;
			O_op1_sel <= I_op1_sel;
			O_op2_sel <= I_op2_sel;
			O_alu_sext <= I_alu_sext;
			O_alu_op_sel <= I_alu_op_sel;
			O_word_op_mask <= I_word_op_mask;
			O_pc <= I_pc;
		end
		else begin
			O_imm <= O_imm;
			O_rs1 <= O_rs1;
			O_rs2 <= O_rs2;
			O_rd_addr <= O_rd_addr;
			O_reg_wen <= O_reg_wen;
			O_mem_wen <= O_mem_wen;
			O_wstrb <= O_wstrb;
			O_rstrb <= O_rstrb;
			O_regin_sel <= O_regin_sel;
			O_op1_sel <= O_op1_sel;
			O_op2_sel <= O_op2_sel;
			O_alu_sext <= O_alu_sext;
			O_alu_op_sel <= O_alu_op_sel;
			O_word_op_mask <= O_word_op_mask;
			O_pc <= O_pc;
		end
		
    always @(posedge I_sys_clk)
		if(I_rst)
	    	O_ID_EX_valid <= 0;
		else
	    	O_ID_EX_valid <= I_ID_EX_valid;
endmodule

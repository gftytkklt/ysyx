`timescale 1ns / 1ps
module ysyx_22040750_ID_EX_reg(
    input I_sys_clk,
    input I_rst,
    input I_ID_EX_valid,// mem data valid
    input I_ID_EX_allowout,// receive EX_MEM input en
    output O_ID_EX_allowin,// send ID_EX input en
    output O_ID_EX_valid,
    input I_alu_output_valid,
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
    input [2:0] I_op2_sel,
    input [1:0] I_alu_sext,
    input [14:0] I_alu_op_sel,
    input I_word_op_mask,
	input [6:0] I_csr_op_sel,
	input [4:0] I_csr_imm,
	input [11:0] I_csr_addr,
	input I_csr_wen,
	input I_csr_intr,
	input [63:0] I_csr_intr_no,
	input [63:0] I_csr,
	input I_csr_mret,
    //input I_ID_EX_block,
	output reg [6:0] O_csr_op_sel,
	output reg [4:0] O_csr_imm,
	output reg [11:0] O_csr_addr,
	output reg O_csr_wen,
	output reg O_csr_intr,
	output reg [63:0] O_csr_intr_no,
	output reg [63:0] O_csr,
	output reg O_csr_mret,

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
    output reg [2:0] O_op2_sel,
    output reg [1:0] O_alu_sext,
    output reg [14:0] O_alu_op_sel,
    output reg O_word_op_mask,
    input [31:0] I_pc,
    output reg [31:0] O_pc,
    output O_ID_EX_input_valid,
    output reg O_alu_multicycle,
    input [31:0] I_inst_debug,
    output reg [31:0] O_inst_debug,
    input I_bubble_inst_debug,
    output reg O_bubble_inst_debug
    );
    reg input_valid;
    wire output_valid;
    assign O_ID_EX_input_valid = input_valid;
    assign output_valid = I_alu_output_valid;// single cycle alu, for multicycle case, use alu_valid signal
    assign O_ID_EX_allowin = !input_valid || (output_valid && I_ID_EX_allowout);
    assign O_ID_EX_valid = input_valid && output_valid;
    always @(posedge I_sys_clk)
    	if(I_rst)
    		O_alu_multicycle <= 0;
    	else if(I_ID_EX_valid && O_ID_EX_allowin && (|I_alu_op_sel[13:10]))
    		O_alu_multicycle <= 1;
    	else
    		O_alu_multicycle <= 0;
    always @(posedge I_sys_clk)
    	if(I_rst)
    	    input_valid <= 0;
	else if(O_ID_EX_allowin)
	    input_valid <= I_ID_EX_valid;
	else
	    input_valid <= input_valid;
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
			O_inst_debug <= 0;
			O_bubble_inst_debug <= 0;
			O_csr <= 0;
			O_csr_op_sel <= 0;
			O_csr_imm <= 0;
			O_csr_addr <= 0;
			O_csr_wen <= 0;
			O_csr_intr <= 0;
			O_csr_intr_no <= 0;
			O_csr_mret <= 0;
		end
    	else if(I_ID_EX_valid && O_ID_EX_allowin) begin
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
			O_inst_debug <= I_inst_debug;
			O_bubble_inst_debug <= I_bubble_inst_debug;
			O_csr <= I_csr;
			O_csr_op_sel <= I_csr_op_sel;
			O_csr_imm <= I_csr_imm;
			O_csr_addr <= I_csr_addr;
			O_csr_wen <= I_csr_wen;
			O_csr_intr <= I_csr_intr;
			O_csr_intr_no <= I_csr_intr_no;
			O_csr_mret <= I_csr_mret;
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
			O_inst_debug <= O_inst_debug;
			O_bubble_inst_debug <= O_bubble_inst_debug;
			O_csr <= O_csr;
			O_csr_op_sel <= O_csr_op_sel;
			O_csr_imm <= O_csr_imm;
			O_csr_addr <= O_csr_addr;
			O_csr_wen <= O_csr_wen;
			O_csr_intr <= O_csr_intr;
			O_csr_intr_no <= O_csr_intr_no;
			O_csr_mret <= O_csr_mret;
		end
endmodule

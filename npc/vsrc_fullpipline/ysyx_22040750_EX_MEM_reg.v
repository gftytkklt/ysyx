`timescale 1ns / 1ps
module ysyx_22040750_EX_MEM_reg(
    input I_sys_clk,
    input I_rst,
    input I_EX_MEM_valid,
    input I_EX_MEM_allowout,
    output reg O_EX_MEM_allowin,
    output O_EX_MEM_valid,
    //output reg O_EX_MEM_valid,
    input [8:0] I_rstrb,
    input [7:0] I_wstrb,
    input [63:0] I_alu_out,
    //input [63:0] I_mem_addr,
    input [63:0] I_rs2_data,// for ld inst
    input I_mem_wen,
    input [31:0] I_pc,
    input I_reg_wen,
    input [4:0] I_rd_addr,
    input [1:0] I_regin_sel,
    //input [63:0] I_mem_data,
	input I_mem_ready,
    input I_mem_data_rvalid,
	input I_mem_data_bvalid,
	//input [6:0] I_csr_op_sel,
	//input [4:0] I_csr_imm,
	input [11:0] I_csr_addr,
	input I_csr_wen,
	input I_csr_intr,
	// input I_csr_mtip,
	input [63:0] I_csr_intr_no,
	input I_csr_mret,
	input [63:0] I_csr,
	input I_fencei,
	// output reg [6:0] O_csr_op_sel,
	// output reg [4:0] O_csr_imm,
	output reg [11:0] O_csr_addr,
	output reg O_csr_wen,
	output reg O_csr_intr,
	// output reg O_csr_mtip,
	output reg [63:0] O_csr_intr_no,
	output reg O_csr_mret,
	output reg [63:0] O_csr,
    //input I_EX_MEM_block,
    output reg [8:0] O_rstrb,
    output reg [7:0] O_wstrb,
    output reg [63:0] O_alu_out,
    //output reg [63:0] O_mem_addr,
    output reg [63:0] O_rs2_data,
    output O_mem_rd_en,
	output O_mem_wr_en,
    output reg O_mem_wen,
    output reg [31:0] O_pc,
    output reg O_reg_wen,
    output reg [4:0] O_rd_addr,
    output reg [1:0] O_regin_sel,
    output O_EX_MEM_input_valid,
	output reg O_fencei,
    //output reg [63:0] O_mem_data,
    input [31:0] I_inst_debug,
    output reg [31:0] O_inst_debug,
    input I_bubble_inst_debug,
    output reg O_bubble_inst_debug
    );
    //wire mem_rd_en;
    reg mem_rd_en, mem_wr_en;
    reg input_valid;
    wire output_valid;
	wire rd_handshake, wr_handshake;
    //reg mem_data_valid;
    //assign mem_rd_en = O_regin_sel[1];
    //always @(posedge I_sys_clk)
    //	mem_rd_en_d <= mem_rd_en;
    //assign O_mem_rd_en = mem_rd_en & (!mem_rd_en_d);
    assign rd_handshake = mem_rd_en & I_mem_ready;
	assign wr_handshake = mem_wr_en & I_mem_ready;
	assign O_mem_rd_en = mem_rd_en;
	assign O_mem_wr_en = mem_wr_en;
    assign O_EX_MEM_input_valid = input_valid;
    //assign output_valid = (input_valid & ~mem_rd_en) | I_mem_data_rvalid;
	assign output_valid = (input_valid & ~O_regin_sel[1] & ~O_mem_wen) | I_mem_data_rvalid | I_mem_data_bvalid;
    /*always @(posedge I_sys_clk)
    	if(I_rst)
	    output_valid <= 0;
	else
	    output_valid <= ((I_EX_MEM_valid & ~mem_rd_en) | I_mem_data_rvalid);*/
    assign O_EX_MEM_allowin = !input_valid || (output_valid && I_EX_MEM_allowout);
    assign O_EX_MEM_valid = input_valid && output_valid;
    /*always @(posedge I_sys_clk)
	if(I_rst)
	    O_EX_MEM_valid <= 0;
	else
	    O_EX_MEM_valid <= input_valid && output_valid;*/
	// I_regin_sel[1] indicates mem rd op;
    always @(posedge I_sys_clk)
		if(I_rst)
			mem_wr_en <= 0;
		else if(wr_handshake)
			mem_wr_en <= 0;
		else if(I_EX_MEM_valid && O_EX_MEM_allowin && I_mem_wen)
			mem_wr_en <= 1;
		else
			mem_wr_en <= mem_wr_en;
	always @(posedge I_sys_clk)
		if(I_rst)
			mem_rd_en <= 0;
		else if(rd_handshake)
			mem_rd_en <= 0;
		else if(I_EX_MEM_valid && O_EX_MEM_allowin && I_regin_sel[1])
			mem_rd_en <= 1;
		else
			mem_rd_en <= mem_rd_en;
    always @(posedge I_sys_clk)
		if(I_rst)
			input_valid <= 0;
		else if(O_EX_MEM_allowin)
			input_valid <= I_EX_MEM_valid;
		else
			input_valid <= input_valid;
    always @(posedge I_sys_clk)
    	if(I_rst) begin
			O_reg_wen <= 0;
			O_rstrb <= 0;
			O_pc <= 0;
			O_wstrb <= 0;
			O_alu_out <= 0;
			//O_mem_addr <= 0;
			O_rs2_data <= 0;
			O_mem_wen <= 0;
			O_reg_wen <= 0;
			O_rd_addr <= 0;
			O_regin_sel <= 0;
			//O_mem_data <= 0;
			O_inst_debug <= 0;
			O_bubble_inst_debug <= 0;
			O_csr_addr <= 0;
			O_csr_wen <= 0;
			O_csr_intr <= 0;
			// O_csr_mtip <= 0;
			O_csr_intr_no <= 0;
			O_csr_mret <= 0;
			O_csr <= 0;
			O_fencei <= 0;
    	end
    	else if(I_EX_MEM_valid && O_EX_MEM_allowin) begin
			O_reg_wen <= I_reg_wen;
			O_rstrb <= I_rstrb;
			O_pc <= I_pc;
			O_wstrb <= I_wstrb;
			O_alu_out <= I_alu_out;
			//O_mem_addr <= I_mem_addr;
			O_rs2_data <= I_rs2_data;
			O_mem_wen <= I_mem_wen;
			O_reg_wen <= I_reg_wen;
			O_rd_addr <= I_rd_addr;
			O_regin_sel <= I_regin_sel;
			//O_mem_data <= I_mem_data;
			O_inst_debug <= I_inst_debug;
			O_bubble_inst_debug <= I_bubble_inst_debug;
			O_csr_addr <= I_csr_addr;
			O_csr_wen <= I_csr_wen;
			O_csr_intr <= I_csr_intr;
			// O_csr_mtip <= I_csr_mtip;
			O_csr_intr_no <= I_csr_intr_no;
			O_csr_mret <= I_csr_mret;
			O_csr <= I_csr;
			O_fencei <= I_fencei;
    	end
    	else begin
    	    O_reg_wen <= O_reg_wen;
    	    O_rstrb <= O_rstrb;
    	    O_pc <= O_pc;
    	    O_wstrb <= O_wstrb;
    	    O_alu_out <= O_alu_out;
    	    //O_mem_addr <= O_mem_addr;
    	    O_rs2_data <= O_rs2_data;
    	    O_mem_wen <= O_mem_wen;
    	    O_reg_wen <= O_reg_wen;
    	    O_rd_addr <= O_rd_addr;
    	    O_regin_sel <= O_regin_sel;
    	    //O_mem_data <= O_mem_data;
    	    O_inst_debug <= O_inst_debug;
	    	O_bubble_inst_debug <= O_bubble_inst_debug;
			O_csr_addr <= O_csr_addr;
			O_csr_wen <= O_csr_wen;
			O_csr_intr <= O_csr_intr;
			// O_csr_mtip <= O_csr_mtip;
			O_csr_intr_no <= O_csr_intr_no;
			O_csr_mret <= O_csr_mret;
			O_csr <= O_csr;
			O_fencei <= O_fencei;
    	end			
endmodule

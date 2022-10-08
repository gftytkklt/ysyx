`timescale 1ns / 1ps
module EX_MEM_reg(
    input I_sys_clk,
    input I_rst,
    input I_EX_MEM_valid,
    output reg O_EX_MEM_valid,
    input [8:0] I_rstrb,
    input [7:0] I_wstrb,
    input [63:0] I_alu_out,
    input [63:0] I_mem_addr,
    input [63:0] I_rs2_data,// for ld inst
    input I_mem_wen,
    input [63:0] I_pc,
    input I_reg_wen,
    input [4:0] I_rd_addr,
    input [2:0] I_regin_sel,
    output reg [8:0] O_rstrb,
    output reg [7:0] O_wstrb,
    output reg [63:0] O_alu_out,
    output reg [63:0] O_mem_addr,
    output reg [63:0] O_rs2_data,
    output reg O_mem_wen,
    output reg [63:0] O_pc,
    output reg O_reg_wen,
    output reg [4:0] O_rd_addr,
    output reg [2:0] O_regin_sel
    );
    always @(posedge I_sys_clk)
    	if(I_rst)
    		O_EX_MEM_valid <= 0;
    	else
    		O_EX_MEM_valid <= I_EX_MEM_valid;
    always @(posedge I_sys_clk)
    	if(I_rst) begin
    		O_reg_wen <= 0;
    		O_rstrb <= 0;
    		O_pc <= 0;
    		O_wstrb <= 0;
    		O_alu_out <= 0;
    		O_mem_addr <= 0;
    		O_rs2_data <= 0;
    		O_mem_wen <= 0;
    		O_reg_wen <= 0;
    		O_rd_addr <= 0;
    		O_regin_sel <= 0;
    	end
    	else if(I_EX_MEM_valid) begin
    		O_reg_wen <= I_reg_wen;
    		O_rstrb <= I_rstrb;
    		O_pc <= I_pc;
    		O_wstrb <= I_wstrb;
    		O_alu_out <= I_alu_out;
    		O_mem_addr <= I_mem_addr;
    		O_rs2_data <= I_rs2_data;
    		O_mem_wen <= I_mem_wen;
    		O_reg_wen <= I_reg_wen;
    		O_rd_addr <= I_rd_addr;
    		O_regin_sel <= I_regin_sel;
    	end
    	else begin
    		O_reg_wen <= O_reg_wen;
    		O_rstrb <= O_rstrb;
    		O_pc <= O_pc;
    		O_wstrb <= O_wstrb;
    		O_alu_out <= O_alu_out;
    		O_mem_addr <= O_mem_addr;
    		O_rs2_data <= O_rs2_data;
    		O_mem_wen <= O_mem_wen;
    		O_reg_wen <= O_reg_wen;
    		O_rd_addr <= O_rd_addr;
    		O_regin_sel <= O_regin_sel;
    	end		
	
endmodule

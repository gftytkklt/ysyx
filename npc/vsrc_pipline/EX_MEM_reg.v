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
    	if(!I_rst)
    		O_rstrb <= 0;
    	else if(I_EX_MEM_valid)
    		O_rstrb <= I_rstrb;
    	else
    		O_rstrb <= O_rstrb;
    always @(posedge I_sys_clk)
    	if(!I_rst)
    		O_wstrb <= 0;
    	else if(I_EX_MEM_valid)
    		O_wstrb <= I_wstrb;
    	else
    		O_wstrb <= O_wstrb;
    always @(posedge I_sys_clk)
    	if(!I_rst)
    		O_alu_out <= 0;
    	else if(I_EX_MEM_valid)
    		O_alu_out <= I_alu_out;
    	else
    		O_alu_out <= O_alu_out;
    always @(posedge I_sys_clk)
    	if(!I_rst)
    		O_mem_addr <= 0;
    	else if(I_EX_MEM_valid)
    		O_mem_addr <= I_mem_addr;
    	else
    		O_mem_addr <= O_mem_addr;
    always @(posedge I_sys_clk)
    	if(!I_rst)
    		O_rs2_data <= 0;
    	else if(I_EX_MEM_valid)
    		O_rs2_data <= I_rs2_data;
    	else
    		O_rs2_data <= O_rs2_data;
    always @(posedge I_sys_clk)
    	if(!I_rst)
    		O_mem_wen <= 0;
    	else if(I_EX_MEM_valid)
    		O_mem_wen <= I_mem_wen;
    	else
    		O_mem_wen <= O_mem_wen;
    always @(posedge I_sys_clk)
    	if(!I_rst)
    		O_pc <= 0;
    	else if(I_EX_MEM_valid)
    		O_pc <= I_pc;
    	else
    		O_pc <= O_pc;
    always @(posedge I_sys_clk)
    	if(!I_rst)
    		O_reg_wen <= 0;
    	else if(I_EX_MEM_valid)
    		O_reg_wen <= I_reg_wen;
    	else
    		O_reg_wen <= O_reg_wen;
    always @(posedge I_sys_clk)
    	if(!I_rst)
    		O_rd_addr <= 0;
    	else if(I_EX_MEM_valid)
    		O_rd_addr <= I_rd_addr;
    	else
    		O_rd_addr <= O_rd_addr;
    always @(posedge I_sys_clk)
    	if(!I_rst)
    		O_regin_sel <= 0;
    	else if(I_EX_MEM_valid)
    		O_regin_sel <= I_regin_sel;
    	else
    		O_regin_sel <= O_regin_sel;
endmodule

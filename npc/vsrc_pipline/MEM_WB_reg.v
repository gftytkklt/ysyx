`timescale 1ns / 1ps
module MEM_WB_reg(
    input I_sys_clk,
    input I_rst,
    input I_EX_MEM_valid,
    output reg O_MEM_WB_valid,
    input [63:0] I_mem_data,
    input I_mem_data_valid,
    input [8:0] I_mem_rstrb,
    input [63:0] I_alu_out,
    input I_reg_wen,
    input [4:0] I_rd_addr,
    output reg [63:0] O_mem_data,
    output reg [8:0] O_mem_rstrb,
    output reg [63:0] O_alu_out,
    output reg [4:0] O_rd_addr
    );
    // intention: WB valid after EX_MEM_valid and reg wr
    // another case is EX_MEM_valid and mem wr
    // in this case WB valid after mem_data_valid
    always @(posedge I_sys_clk)
		if(I_rst) begin
			O_MEM_WB_valid <= 0;
			O_mem_data <= 0;
			O_mem_rstrb <= 0;
			O_alu_out <= 0;
			O_rd_addr <= 0;
		end
		else if(O_EX_MEM_valid && I_reg_wen) begin
			O_MEM_WB_valid <= 1;
			O_mem_data <= O_mem_data;
			O_mem_rstrb <= O_mem_rstrb;
			O_alu_out <= I_alu_out;
			O_rd_addr <= I_rd_addr;
		end
		else begin
			O_MEM_WB_valid <= I_mem_data_valid;
		end
	

`timescale 1ns / 1ps
module MEM_WB_reg(
    input I_sys_clk,
    input I_rst,
    input I_MEM_WB_valid,
    output reg O_MEM_WB_allowin,
    output O_MEM_WB_valid,
    input [63:0] I_pc,
    input [63:0] I_mem_data,
    input I_mem_data_valid,
    input [8:0] I_mem_rstrb,
    input [2:0] I_mem_shamt,
    input [63:0] I_alu_out,
    input I_reg_wen,
    input [4:0] I_rd_addr,
    input [2:0] I_regin_sel,
    output reg [63:0] O_pc,
    output reg [63:0] O_mem_data,
    output reg [8:0] O_mem_rstrb,
    output reg [2:0] O_mem_shamt,
    output reg [63:0] O_alu_out,
    output reg O_reg_wen,
    output reg [4:0] O_rd_addr,
    output reg [2:0] O_regin_sel,
    input [31:0] I_inst_debug,
    output reg [31:0] O_inst_debug,
    input I_bubble_inst_debug,
    output reg O_bubble_inst_debug
    );
    // valid case: mem rd or non-mem rd
    // the second case contains reg wb or nop op
    // regin_sel[1] indicates data from mem
    reg input_valid;
    wire output_valid;
    wire mem_rd_en;
    //wire WB_data_valid;
    //assign mem_rd_en = I_regin_sel[1];
    assign mem_rd_en = O_regin_sel[1];
    assign output_valid = (input_valid & (!mem_rd_en | I_mem_data_valid));
    assign O_MEM_WB_valid = output_valid;
    assign O_MEM_WB_allowin = !input_valid || output_valid;// MEM_WB_allowout is always 1
   	//assign WB_data_valid = (I_MEM_WB_valid & ~mem_rd_en) | I_mem_data_valid;
    always @(posedge I_sys_clk)
    	if(I_rst)
    		input_valid <= 0;
    	else if(O_MEM_WB_allowin)
    		input_valid <= I_MEM_WB_valid;
    	else
    		input_valid <= input_valid;
	always @(posedge I_sys_clk)
		if(I_rst) begin
			O_pc <= 0;
			O_mem_data <= 0;
			O_mem_rstrb <= 0;
			O_mem_shamt <= 0;
			O_alu_out <= 0;
			O_reg_wen <= 0;
			O_rd_addr <= 0;
			O_regin_sel <= 0;
			O_inst_debug <= 0;
			O_bubble_inst_debug <= 0;
		end
		else if(O_MEM_WB_allowin && I_MEM_WB_valid) begin
			O_pc <= I_pc;
			O_mem_data <= I_mem_data;
			O_mem_rstrb <= I_mem_rstrb;
			O_mem_shamt <= I_mem_shamt;
			O_alu_out <= I_alu_out;
			O_reg_wen <= I_reg_wen;
			O_rd_addr <= I_rd_addr;
			O_regin_sel <= I_regin_sel;
			O_inst_debug <= I_inst_debug;
			O_bubble_inst_debug <= I_bubble_inst_debug;
		end
		else begin
			O_pc <= O_pc;
			O_mem_data <= O_mem_data;
			O_mem_rstrb <= O_mem_rstrb;
			O_mem_shamt <= O_mem_shamt;
			O_alu_out <= O_alu_out;
			O_reg_wen <= O_reg_wen;
			O_rd_addr <= O_rd_addr;
			O_regin_sel <= O_regin_sel;
			O_inst_debug <= O_inst_debug;
			O_bubble_inst_debug <= O_bubble_inst_debug;
		end
endmodule

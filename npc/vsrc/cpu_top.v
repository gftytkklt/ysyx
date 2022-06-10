`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2022/05/25 20:46:57
// Design Name: 
// Module Name: cpu_top
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


module cpu_top(
    input I_sys_clk,
    input I_rst,
    input [31:0] I_inst,
    output [63:0] O_pc,
    output [63:0] O_mem_addr,
    output O_mem_rd_en,
    output O_mem_wen,
    input [63:0] I_mem_rd_data,
    output [63:0] O_mem_wr_data,
    output [7:0] O_mem_wr_strb  
    //output O_sim_end
    );
    wire [63:0] current_pc,dnpc,snpc;
    wire [63:0] imm,wr_data,rs1_data,rs2_data,alu_op1,alu_op2,alu_out,mem_in,mem_out,mem_addr;
    wire [4:0] rs1_addr,rs2_addr,rd_addr;
    //wire [2:0] funct3;
    wire [2:0] dnpc_sel;
    wire [2:0] regin_sel;
    wire [2:0] opnum1_sel;
    wire [1:0] opnum2_sel;
    wire [14:0] alu_op_sel;
    wire [7:0] mem_wstrb;
    wire [8:0] mem_rstrb;
    wire reg_wen,mem_wen;
    wire word_op_mask;
    wire [1:0] alu_op_sext;
    assign snpc = current_pc + 4;
    assign O_pc = current_pc;
    //assign mem_in = I_mem_rd_data;
    assign O_mem_rd_en = regin_sel[1];
    assign O_mem_wr_data = mem_out;
    assign O_mem_addr = mem_addr;
    assign O_mem_wen = mem_wen;
    assign O_mem_wr_strb = mem_wstrb;
    assign mem_out = rs2_data;
    mux_Nbit_Msel #(64, 3)
    nextpc_64bit_3sel (
    .I_sel_data({{alu_out[63:1],1'b0},alu_out,snpc}),
    .I_sel(dnpc_sel),
    .O_sel_data(dnpc)
    );
    pc pc_e(
    .I_sys_clk(I_sys_clk),
    .I_rst(I_rst),
    .I_dnpc(dnpc),
    .O_pc(current_pc)
    );
    data_ld mem_ld_e(
    .I_data_in(I_mem_rd_data),
    .I_rd_strb(mem_rstrb),
    .O_load_data(mem_in)
    );
    //assign imm[63:32] = 0;
    mux_Nbit_Msel #(64, 3)
    regin_64bit_3sel (
    .I_sel_data({snpc,mem_in,alu_out}),
    .I_sel(regin_sel),
    .O_sel_data(wr_data)
    );
    gpr gpr_e(
    .I_sys_clk(I_sys_clk),
    .I_rst(I_rst),
    .I_wr_data(wr_data),
    .I_wen(reg_wen),
    .I_rd_addr(rd_addr),
    .I_rs1_addr(rs1_addr),
    .O_rs1_data(rs1_data),
    .I_rs2_addr(rs2_addr),
    .O_rs2_data(rs2_data)
    );
    decoder decoder_e(
    .I_sys_clk(I_sys_clk),
    .I_rst(I_rst),
    .I_inst(I_inst),
    .O_imm(imm),
    .I_rs1_data(rs1_data),
    .O_rs1(rs1_addr),
    .I_rs2_data(rs2_data),
    .O_rs2(rs2_addr),
    .O_rd(rd_addr),
    .O_reg_wen(reg_wen),
    .O_mem_wen(mem_wen),
    .O_mem_wstrb(mem_wstrb),
    .O_mem_rstrb(mem_rstrb),
    //.O_funct3(funct3),
    //.O_funct7(funct7),
    .O_dnpc_sel(dnpc_sel),
    .O_regin_sel(regin_sel),
    .O_opnum1_sel(opnum1_sel),
    .O_opnum2_sel(opnum2_sel),
    .O_alu_op_sel(alu_op_sel),
    .O_alu_op_sext(alu_op_sext),
    .O_word_op_mask(word_op_mask)
    //.O_sim_end(O_sim_end)
    );
    mux_Nbit_Msel #(64, 3)
    alu_op1_64bit_3sel (
    .I_sel_data({64'b0,current_pc,rs1_data}),
    .I_sel(opnum1_sel),
    .O_sel_data(alu_op1)
    );
    mux_Nbit_Msel #(64, 2)
    alu_op2_64bit_2sel (
    .I_sel_data({imm,rs2_data}),
    .I_sel(opnum2_sel),
    .O_sel_data(alu_op2)
    );
    alu alu_e(
    .I_op1(alu_op1),
    .I_op2(alu_op2),
    .I_alu_op_sel(alu_op_sel),
    .I_alu_op_sext(alu_op_sext),
    .I_word_op_mask(word_op_mask),
    .O_mem_addr(mem_addr),
    .O_result(alu_out)
    );
endmodule

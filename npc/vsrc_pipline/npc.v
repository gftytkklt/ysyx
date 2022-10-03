`timescale 1ns / 1ps
module npc(
    input [63:0] I_rs1_data,
    input [63:0] I_rs2_data,
    input [63:0] I_imm,
    input [63:0] I_pc,
    input [63:0] I_snpc,
    input [3:0] I_dnpc_sel,
    output [63:0] O_dnpc
    );
    wire [63:0] dnpc_src1,dnpc_src2, dnpc_sum;
    assign dnpc_src1 = I_dnpc_sel[1] ? I_imm : I_rs1_data;
    assign dnpc_src2 = I_dnpc_sel[3] ? I_rs2_data : I_pc;
    assign dnpc_sum = dnpc_src1 + dnpc_src2;
    mux_Nbit_Msel #(64, 3)
    nextpc_64bit_3sel (
	.I_sel_data({{dnpc_sum[63:1],1'b0},dnpc_sum,I_snpc}),
	.I_sel({I_dnpc_sel[3],(I_dnpc_sel[2]|I_dnpc_sel[1]),I_dnpc_sel[0]}),
	.O_sel_data(O_dnpc)
    );
    //assign dnpc = I_dnpc_sel[3] ? dnpc_sum : {dnpc_sum[63:1], 1'b0};
endmodule

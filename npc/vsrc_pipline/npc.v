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
    // I_dnpc_sel[3]: jalr
    // I_dnpc_sel[2]: jal
    // I_dnpc_sel[1]: B jr
    // I_dnpc_sel[0]: snpc
    wire [63:0] dnpc_src1,dnpc_src2, dnpc_sum, dnpc;
    wire dnpc_sel;
    assign dnpc_sel = ~I_dnpc_sel[0];
    assign dnpc_src1 = I_imm;
    assign dnpc_src2 = I_dnpc_sel[3] ? I_rs1_data : I_pc;
    assign dnpc_sum = dnpc_src1 + dnpc_src2;
    mux_Nbit_Msel #(64, 2)
    nextpc_64bit_2sel (
	.I_sel_data({dnpc_sum,I_snpc}),
	.I_sel({dnpc_sel,I_dnpc_sel[0]}),
	.O_sel_data(dnpc)
    );
    assign O_dnpc = {dnpc[63:1], dnpc[0]&(~I_dnpc_sel[3])};
    //assign dnpc = I_dnpc_sel[3] ? dnpc_sum : {dnpc_sum[63:1], 1'b0};
endmodule

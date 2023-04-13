`timescale 1ns / 1ps
module ysyx_22040750_npc(
    input [63:0] I_rs1_data,
    input [63:0] I_rs2_data,
    input [63:0] I_imm,
    input [63:0] I_intr_pc,
    input [31:0] I_pc,// IF_ID_pc actually, use for jmps cal
    input [31:0] I_snpc,// snpc
    input [4:0] I_dnpc_sel,
    output [31:0] O_dnpc
    );
    // I_dnpc_sel[4]: csr
    // I_dnpc_sel[3]: jalr
    // I_dnpc_sel[2]: jal
    // I_dnpc_sel[1]: B jr
    // I_dnpc_sel[0]: snpc
    wire [31:0] dnpc_src1,dnpc_src2, dnpc_sum, dnpc;
    wire dnpc_sel, intr_sel;
    assign dnpc_sel = ~(I_dnpc_sel[0] | I_dnpc_sel[4]);
    assign intr_sel = I_dnpc_sel[4];
    assign dnpc_src1 = I_imm[31:0];
    assign dnpc_src2 = I_dnpc_sel[3] ? I_rs1_data[31:0] : I_pc;
    assign dnpc_sum = dnpc_src1 + dnpc_src2;
    ysyx_22040750_mux_Nbit_Msel #(32, 3)
    nextpc_64bit_3sel (
	.I_sel_data({I_intr_pc[31:0],dnpc_sum,I_snpc}),
	.I_sel({intr_sel,dnpc_sel,I_dnpc_sel[0]}),
	.O_sel_data(dnpc)
    );
    assign O_dnpc = {dnpc[31:1], dnpc[0]&(~I_dnpc_sel[3])};
    //assign dnpc = I_dnpc_sel[3] ? dnpc_sum : {dnpc_sum[63:1], 1'b0};
endmodule

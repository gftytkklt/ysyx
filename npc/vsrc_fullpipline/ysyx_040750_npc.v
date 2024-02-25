module ysyx_040750_npc(
    input I_clk,
    input I_rst,
    input I_pc_valid,// dnpc valid
    input I_pc_ready,// dnpc ready
    input I_IF_ID_valid,// valid but not stored jmp dnpc
    input [31:0] I_rs1_data,
    // input [31:0] I_rs2_data,
    input [31:0] I_imm,
    input [31:0] I_intr_pc,
    input [31:0] I_pc,// IF_ID_pc actually, use for jmps cal
    input [31:0] I_snpc,// snpc
    input [3:0] I_dnpc_sel,
    output [31:0] O_dnpc
    );
    // I_dnpc_sel[3]: fence.i
    // I_dnpc_sel[2]: csr
    // I_dnpc_sel[1]: jalr
    // I_dnpc_sel[0]: snpc
    // fence.i & jal & typeB_jr addr cal here

    wire pc_handshake;
    wire [31:0] dnpc_src1,dnpc_src2, dnpc_sum, dnpc;
    reg [31:0] dnpc_reg;
    reg dnpc_reg_valid;
    wire dnpc_sel, intr_sel;
    wire store_dnpc;// indicate latch useful data
    assign dnpc_sel = ~(I_dnpc_sel[0] | I_dnpc_sel[2]);
    assign intr_sel = I_dnpc_sel[2];
    // assign dnpc_src1 = I_imm;
    assign dnpc_src1 = I_dnpc_sel[3] ? 4 : I_imm;// sel dnpc op1
    assign dnpc_src2 = I_dnpc_sel[1] ? I_rs1_data : I_pc;
    assign dnpc_sum = dnpc_src1 + dnpc_src2;
    assign pc_handshake = I_pc_ready && I_pc_valid;
    assign store_dnpc = (I_pc_valid && !I_pc_ready && !dnpc_reg_valid) || (I_IF_ID_valid && !pc_handshake && dnpc_sel) || (I_IF_ID_valid && (dnpc_sel | intr_sel) && (dnpc != O_dnpc));
    //assign store_dnpc = (I_pc_valid && !I_pc_ready && !dnpc_reg_valid) || (I_IF_ID_valid && dnpc_sel && (dnpc != O_dnpc));
    // case 2: dnpc is generated, but next reg wb flush valid dnpc
    //assign store_dnpc = (I_pc_valid && !I_pc_ready && !dnpc_reg_valid) || (I_IF_ID_valid && dnpc_sel && !I_pc_valid && !dnpc_reg_valid);
    //assign store_dnpc = (I_IF_ID_valid && (!I_pc_valid || !I_pc_ready)) || (dnpc_reg_valid && I_IF_ID_valid);
    ysyx_040750_mux_Nbit_Msel #(32, 3)
    nextpc_64bit_3sel (
	.I_sel_data({I_intr_pc,dnpc_sum,I_snpc}),
	.I_sel({intr_sel,dnpc_sel,I_dnpc_sel[0]}),
	.O_sel_data(dnpc)
    );
    always @(posedge I_clk)
        if(I_rst)
            dnpc_reg <= 0;
        else if(store_dnpc)
            dnpc_reg <= dnpc;
        else
            dnpc_reg <= dnpc_reg;
    always @(posedge I_clk)
        if(I_rst)
            dnpc_reg_valid <= 0;
        else if(store_dnpc)
            dnpc_reg_valid <= 1;
        else if(pc_handshake)
            dnpc_reg_valid <= 0;
        else
            dnpc_reg_valid <= dnpc_reg_valid;
    assign O_dnpc = dnpc_reg_valid ? dnpc_reg : {dnpc[31:1], dnpc[0]&(~I_dnpc_sel[1])};
    //assign dnpc = I_dnpc_sel[3] ? dnpc_sum : {dnpc_sum[63:1], 1'b0};
endmodule
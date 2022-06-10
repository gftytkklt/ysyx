`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2022/04/12 20:07:52
// Design Name: 
// Module Name: alu
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


module alu(
    input [63:0] I_op1,
    input [63:0] I_op2,
    input [14:0] I_alu_op_sel,
    input [1:0] I_alu_op_sext,
    input I_word_op_mask,
    output [63:0] O_mem_addr,
    output [63:0] O_result
    );
    // op
    wire op_add,op_sub,op_slt,op_sltu,op_xor,op_or,op_and,op_sll,op_srl,op_sra,op_mul,op_mulh,op_div,op_rem;
    assign op_add = I_alu_op_sel[0];
    assign op_sub = I_alu_op_sel[1];
    assign op_slt = I_alu_op_sel[2];
    assign op_sltu = I_alu_op_sel[3];
    assign op_xor = I_alu_op_sel[4];
    assign op_or = I_alu_op_sel[5];
    assign op_and = I_alu_op_sel[6];
    assign op_sll = I_alu_op_sel[7];
    assign op_srl = I_alu_op_sel[8];
    assign op_sra = I_alu_op_sel[9];
    assign op_mul = I_alu_op_sel[10];
    assign op_mulh = I_alu_op_sel[11];
    assign op_div = I_alu_op_sel[12];
    //assign op_divu = I_alu_op_sel[12];
    assign op_rem = I_alu_op_sel[13];
    //assign op_remu = I_alu_op_sel[14];
    // result
    wire [63:0] add_sub_result;
    wire [63:0] slt_result;
    wire [63:0] sltu_result;
    wire [63:0] xor_result;
    wire [63:0] or_result;
    wire [63:0] and_result;
    wire [63:0] sll_result;
    wire [63:0] srl_result;
    wire [63:0] sra_result;
    wire [63:0] mul_result;
    wire [63:0] mulh_result;
    wire [63:0] div_result;
    //wire [63:0] divu_result;
    wire [63:0] rem_result;
    //wire [63:0] remu_result;
    wire [64:0] op1_sext, op2_sext;
    assign op1_sext[64] = I_alu_op_sext[1] ? I_op1[63] : 0;
    assign op1_sext[63:0] = I_op1;
    assign op2_sext[64] = I_alu_op_sext[0] ? I_op2[63] : 0;
    assign op2_sext[63:0] = I_op2;
    assign and_result = I_op1 & I_op2;
    assign xor_result = I_op1 ^ I_op2;
    assign or_result = I_op1 | I_op2;
    assign {mulh_result, mul_result} = ($signed(op1_sext)) * ($signed(op2_sext));
    wire div_sink, rem_sink;
    assign {div_sink, div_result} = ($signed(op1_sext)) / ($signed(op2_sext));
    assign {rem_sink, rem_result} = ($signed(op1_sext)) % ($signed(op2_sext));
    //assign mul_result = ($signed(I_op1)) * ($signed(I_op2));
    //assign div_result = ($signed(I_op1)) / ($signed(I_op2));
    //assign divu_result = I_op1 / I_op2;
    //assign rem_result = ($signed(I_op1)) % ($signed(I_op2));
    //assign remu_result = I_op1 % I_op2;
    // add, sub, slt, sltu
    wire [63:0] adder1, adder2, result;
    //wire cin,cout;
    wire cout;
    assign adder1 = I_op1;
    assign adder2 = (op_sub | op_slt | op_sltu) ? (~I_op2+1) : I_op2;
    //assign cin = (op_sub | op_slt | op_sltu) ? 1 : 0;
    //assign {cout, result} = adder1+adder2+cin;
    assign {cout, result} = adder1+adder2;
    assign add_sub_result = result;
    assign slt_result[63:1] = 0;
    assign slt_result[0] = (I_op1[63] & ~I_op2[63]) | (~(I_op1[63] ^ I_op2[63]) & result[63]);
    assign sltu_result[63:1] = 0;
    assign sltu_result[0] = ~cout;
    // sll, srl, sra
    wire [63:0] reverse_op1;
    generate for(genvar i = 0;i<64;i=i+1) begin
        assign reverse_op1[i] = I_op1[63-i];
    end
    endgenerate
    wire [63:0] shift_op;
    assign shift_op = op_sll ? reverse_op1 : I_op1;
    wire [5:0] shamt;
    assign shamt = I_word_op_mask ? I_op2[5:0] : {1'b0, I_op2[4:0]};
    wire [63:0] sra_mask;
    assign sra_mask = ~(64'hffff_ffff_ffff_ffff >> shamt);
    wire [63:0] shift_result;
    assign shift_result = shift_op >> shamt;
    assign srl_result = shift_result;
    assign sra_result = ({64{shift_op[63]}} & sra_mask) | shift_result;
    generate for(genvar i = 0;i<64;i=i+1) begin
        assign sll_result[i] = shift_result[63-i];
    end
    endgenerate
    assign O_mem_addr = add_sub_result;
    wire [63:0] dword_result, word_sext_result;
    assign dword_result = ({64{op_add | op_sub}} & add_sub_result)
                        | ({64{op_slt}} & slt_result)
                        | ({64{op_sltu}} & sltu_result)
                        | ({64{op_xor}} & xor_result)
                        | ({64{op_or}} & or_result)
                        | ({64{op_and}} & and_result)
                        | ({64{op_sll}} & sll_result)
                        | ({64{op_srl}} & srl_result)
                        | ({64{op_sra}} & sra_result)
                        | ({64{op_mul}} & mul_result)
                        | ({64{op_mulh}} & mulh_result)
                        | ({64{op_div}} & div_result)
                        //| ({64{op_divu}} & divu_result)
                        | ({64{op_rem}} & rem_result);
                        //| ({64{op_remu}} & remu_result);
    // only divuw and remuw produce 0 sext
    wire word_sext;
    assign word_sext = ((op_div | op_rem) && (~|I_alu_op_sext)) ? 0 : dword_result[31];
    assign word_sext_result = {{32{word_sext}}, dword_result[31:0]};
    assign O_result = I_word_op_mask ? word_sext_result : dword_result;
endmodule

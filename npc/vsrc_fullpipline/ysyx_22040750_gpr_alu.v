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


module ysyx_22040750_gpr_alu(
    input I_sys_clk,
    input I_rst,
    input [63:0] I_csr_data,
    input [63:0] I_op1,
    input [63:0] I_op2,
    input [14:0] I_alu_op_sel,
    input [1:0] I_alu_op_sext,
    input I_word_op_mask,
    input I_multicycle,// ID_EX input valid
    input I_EX_MEM_ready,// EX_MEM ready for multicycle result
    //output [63:0] O_mem_addr,
    output [63:0] O_result,
    output O_result_valid
    );
    // op
    wire op_add,op_sub,op_slt,op_sltu,op_xor,op_or,op_and,op_sll,op_srl,op_sra,op_mul,op_mulh,op_div,op_rem,op_csr;
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
    assign op_csr = I_alu_op_sel[14];
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
    wire [63:0] csr_result;
    //wire [64:0] op1_sext, op2_sext;
    wire [63:0] op1_sext, op2_sext;
    wire sign_bit1, sign_bit2;
    wire sext1, sext2;
    
    // reg mul_valid_d, div_valid_d;
    wire mul_flag, div_flag;
    wire mul_valid, div_valid;
    wire mul_out_valid, div_out_valid;
    reg [63:0] mulh_reg, mul_reg, div_reg, rem_reg;
    reg mul_reg_valid, div_reg_valid;
    wire [63:0] mulh_final, mul_final, div_final, rem_final;
    // if sext, use sign bit to extend bit[64](bit[64:32] for w case)
    // sign bit sel
    assign sign_bit1 = I_word_op_mask ? I_op1[31] : I_op1[63];
    assign sign_bit2 = I_word_op_mask ? I_op2[31] : I_op2[63];
    // sext bit sel : sign bit for signed, 0 for unsigned
    assign sext1 = I_alu_op_sext[1] ? sign_bit1 : 0;
    assign sext2 = I_alu_op_sext[0] ? sign_bit2 : 0;
    //assign op1_sext[64] = sext1;
    //assign op2_sext[64] = sext2;
    // DW/W sel
    //assign op1_sext[63:0] = I_word_op_mask ? {{32{sext1}}, I_op1[31:0]} : I_op1;
    //assign op2_sext[63:0] = I_word_op_mask ? {{32{sext2}}, I_op2[31:0]} : I_op2;
    assign op1_sext = I_word_op_mask ? {{32{sext1}}, I_op1[31:0]} : I_op1;
    assign op2_sext = I_word_op_mask ? {{32{sext2}}, I_op2[31:0]} : I_op2;
    //assign op1_sext[64] = I_alu_op_sext[1] ? sign_bit1 : 0;
    //assign op1_sext[63:0] = I_word_op_mask ? {{32{op1_sext[64]}}, I_op1[31:0]}: I_op1;
    //assign op2_sext[64] = I_alu_op_sext[0] ? sign_bit2 : 0;
    //assign op2_sext[63:0] = I_word_op_mask ? {{32{op2_sext[64]}}, I_op2[31:0]}: I_op2;
    assign and_result = I_op1 & I_op2;
    assign xor_result = I_op1 ^ I_op2;
    assign or_result = I_op1 | I_op2;
    
    // single cycle mul/div
    /*assign mul_out_valid = |I_alu_op_sel[11:10];
    assign div_out_valid = |I_alu_op_sel[13:12];
    assign {mulh_result, mul_result} = ($signed(op1_sext)) * ($signed(op2_sext));
    wire div_sink, rem_sink;
    assign {div_sink, div_result} = ($signed(op1_sext)) / ($signed(op2_sext));
    assign {rem_sink, rem_result} = ($signed(op1_sext)) % ($signed(op2_sext));*/
    
    // multicycle mul/div
    // select mul / div
    assign mul_flag = op_mul | op_mulh;
    assign div_flag = op_div | op_rem;
    assign mul_valid = mul_flag & I_multicycle;
    assign div_valid = div_flag & I_multicycle;

    // mul / div inst
    ysyx_22040750_booth_mul_serial booth_mul_serial_e(
    	.clk(I_sys_clk),
    	.rst(I_rst),
    	// .mul1(op1_sext[63:0]),
    	// .mul2(op2_sext[63:0]),
        .mul1(op1_sext),
    	.mul2(op2_sext),
    	// .is_signed(sext1),
        .sext_flag(I_alu_op_sext),
    	.mul_valid(mul_valid),
    	.P_valid(mul_out_valid),
    	.P({mulh_result, mul_result})
    );
    ysyx_22040750_radix2_div radix2_div_e(
		.clk(I_sys_clk),
		.rst(I_rst),
		// out = dividend / divisor
		// .dividend(op1_sext[63:0]),
		// .divisor(op2_sext[63:0]),
        .dividend(op1_sext),
		.divisor(op2_sext),
		// .is_signed(sext1),
        .is_signed(|I_alu_op_sext),
		.div_valid(div_valid),
		.quotient(div_result),
		.remainder(rem_result),
		.Q_valid(div_out_valid)
    );
    // if MEM & WB blocked, cache data & valid flag
    always @(posedge I_sys_clk)
    	if(I_rst)
    		{mulh_reg, mul_reg} <= 128'b0;
    	else if(mul_out_valid & ~I_EX_MEM_ready)
    		{mulh_reg, mul_reg} <= {mulh_result, mul_result};
    	else
    		{mulh_reg, mul_reg} <= {mulh_reg, mul_reg};
    always @(posedge I_sys_clk)
    	if(I_rst)
    		mul_reg_valid <= 0;
    	else if(mul_out_valid & ~I_EX_MEM_ready)
    		mul_reg_valid <= 1;
    	else if(mul_reg_valid & I_EX_MEM_ready)
    		mul_reg_valid <= 0;
    	else
    		mul_reg_valid <= mul_reg_valid;
    always @(posedge I_sys_clk)
    	if(I_rst)
    		{div_reg, rem_reg} <= 128'b0;
    	else if(div_out_valid & ~I_EX_MEM_ready)
    		{div_reg, rem_reg} <= {div_result, rem_result};
    	else
    		{div_reg, rem_reg} <= {div_reg, rem_reg};
    always @(posedge I_sys_clk)
    	if(I_rst)
    		div_reg_valid <= 0;
    	else if(div_out_valid & ~I_EX_MEM_ready)
    		div_reg_valid <= 1;
    	else if(div_reg_valid & I_EX_MEM_ready)
    		div_reg_valid <= 0;
    	else
    		div_reg_valid <= div_reg_valid;
    assign {mulh_final, mul_final} = mul_reg_valid ? {mulh_reg, mul_reg} : {mulh_result, mul_result};
    assign {div_final, rem_final} = div_reg_valid ? {div_reg, rem_reg} : {div_result, rem_result};
    // add, sub, slt, sltu
    wire [63:0] adder1, adder2, result;
    wire [63:0] cin;
    wire cout;
    //wire cout;
    assign adder1 = I_op1;
    assign adder2 = (op_sub | op_slt | op_sltu) ? ~I_op2 : I_op2;
    assign cin = (op_sub | op_slt | op_sltu) ? 1 : 0;
    assign {cout, result} = adder1+adder2+cin;
    //assign {cout, result} = adder1+adder2;
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
    // sign for sra mask
    wire shift_sign;
    assign shift_sign = I_word_op_mask ? I_op1[31] : I_op1[63];
    // op for sll/srl
    wire [63:0] shift_op;
    assign shift_op = op_sll ? reverse_op1 : I_op1;
    // w/dw shamt
    wire [5:0] shamt;
    assign shamt = I_word_op_mask ?  {1'b0, I_op2[4:0]} : I_op2[5:0];
    // w/dw sra mask
    wire [63:0] sra_mask;
    assign sra_mask = I_word_op_mask ? ~(64'h0000_0000_ffff_ffff >> shamt) : ~(64'hffff_ffff_ffff_ffff >> shamt);
    // unified shift result
    wire [63:0] shift_result;
    // for W op
    wire [31:0] shift_opW;
    // sll op is on msb
    assign shift_opW = op_sll ? shift_op[63:32] : shift_op[31:0];
    // dw/w unified right shift op sel
    wire [63:0] srl_op;
    assign srl_op = I_word_op_mask ? {32'b0, shift_opW} : shift_op;
    assign shift_result = srl_op >> shamt;
    //assign shift_result = I_word_op_mask ? ({32'b0, shift_opW} >> shamt) : (shift_op >> shamt);
    assign srl_result = shift_result;
    assign sra_result = ({64{shift_sign}} & sra_mask) | shift_result;
    // w/dw sll result
    wire [63:0] sllw_result;
    wire [63:0] slldw_result;
    assign sll_result = I_word_op_mask ? sllw_result : slldw_result;
    assign sllw_result = {{32{shift_result[0]}}, slldw_result[63:32]};
    generate for(genvar i = 0;i<64;i=i+1) begin
        assign slldw_result[i] = shift_result[63-i];
    end
    endgenerate
    //assign O_mem_addr = add_sub_result;
    assign csr_result = I_csr_data;
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
                        | ({64{op_mul}} & mul_final)
                        | ({64{op_mulh}} & mulh_final)
                        | ({64{op_div}} & div_final)
                        //| ({64{op_divu}} & divu_result)
                        | ({64{op_rem}} & rem_final)
                        | ({64{op_csr}} & csr_result);
    // only divuw and remuw produce 0 sext
    wire word_sext;
    assign word_sext = ((op_div | op_rem) && (~|I_alu_op_sext)) ? 0 : dword_result[31];
    assign word_sext_result = {{32{word_sext}}, dword_result[31:0]};
    assign O_result = I_word_op_mask ? word_sext_result : dword_result;
    assign O_result_valid = |I_alu_op_sel[13:10] ? (div_out_valid | mul_out_valid | mul_reg_valid | div_reg_valid) : 1;
endmodule

`timescale 1ns / 1ps
module ysyx_22040750_csr_alu(
    input [63:0] I_csr_data,
    input [63:0] I_rs_data,
    input [4:0] I_uimm,
    input [5:0] I_csr_op_sel,
    output [63:0] O_csr_data
    //output O_csr_data_valid,
);
    wire direct_rs, direct_uimm, set_rs, set_uimm, clr_rs, clr_uimm;
    wire direct, set, clr;
    wire from_rs, from_uimm;
    wire [63:0] op;
    wire [63:0] direct_result, set_result, clr_result;
    
    assign direct = direct_rs | direct_uimm;
    assign set = set_rs | set_uimm;
    assign clr = clr_rs | clr_uimm;
    assign from_rs = |I_csr_op_sel[5:3];
    assign from_uimm = |I_csr_op_sel[2:0];
    assign {direct_rs, set_rs, clr_rs, direct_uimm, set_uimm, clr_uimm} = I_csr_op_sel;
    assign op = from_rs ? I_rs_data : from_uimm ? {59'b0, I_uimm} : 0;
    assign direct_result = op;
    assign set_result = I_csr_data | op;
    assign clr_result = I_csr_data & (~op);
    assign O_csr_data = (direct_result & {64{direct}})
                | (set_result & {64{set}})
                | (clr_result & {64{clr}});
    //assign O_csr_data_valid = |I_csr_op_sel;
endmodule
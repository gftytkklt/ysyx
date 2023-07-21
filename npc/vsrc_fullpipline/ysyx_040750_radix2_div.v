`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2022/12/02 19:59:45
// Design Name: 
// Module Name: ysyx_040750_radix2_div
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


module ysyx_040750_radix2_div(
    input clk,
    input rst,
    // out = dividend / divisor
    input [63:0] dividend,
    input [63:0] divisor,
    input is_signed,
    input div_valid,
    output [63:0] quotient,
    output [63:0] remainder,
    output reg Q_valid
    );
    // dividend extention
    reg [127:0] abs_dividend;
    // divisor extention
    reg [127:0] abs_divisor;
    // current bit quotient
    wire [127:0] current_sub_result;
    wire current_q;
    // dividend & divisor sign flag, 1 indecate neg, 0 indicate pos
    wire dividend_flag, divisor_flag;
    // quotion & remainder sign flag, 1 indecate neg, 0 indicate pos
    wire q_flag, rem_flag;
    // abs_quotient
    reg [63:0] abs_quotient;
    // abs_remainder
//    reg [127:0] abs_remainder;
    // div process
    reg div_process;
    reg [5:0] iter_cnt;
    always @(posedge clk)
        if(rst)
            div_process <= 0;
        else if(div_valid)
            div_process <= 1;
        else if(Q_valid)
            div_process <= 0;
        else
            div_process <= div_process;
    always @(posedge clk)
        if(rst)
            iter_cnt <= 0;
        else if(div_process)
            iter_cnt <= iter_cnt + 1;
        else
            iter_cnt <= 0;
//    assign Q_valid = &iter_cnt;
    always @(posedge clk)
        if(rst)
            Q_valid <= 0;
        else
            Q_valid <= &iter_cnt ? 1 : 0;
    // dividend & divisor sign flag
    assign dividend_flag = dividend[63] & is_signed;
    assign divisor_flag = divisor[63] & is_signed;
    // quotient & reminder sign flag
    assign q_flag = dividend_flag ^ divisor_flag;
    assign rem_flag = dividend_flag;
    // get abs dividend & divisor
    always @(posedge clk)
        if(rst)
            abs_dividend <= 0;
        else if(div_valid)
            abs_dividend <= dividend_flag ? {64'b0,-dividend} : {64'b0,dividend};
        else
            abs_dividend <= current_q ? current_sub_result : abs_dividend;
    always @(posedge clk)
        if(rst)
            abs_divisor <= 0;
        else if(div_valid)
            abs_divisor <= divisor_flag ? {1'b0, -divisor, 63'b0} : {1'b0, divisor, 63'b0};
        else
            abs_divisor <= abs_divisor >> 1;
    assign current_sub_result = abs_dividend - abs_divisor;
    assign current_q = div_process ? ~current_sub_result[127] : 0;
    always @(posedge clk)
        if(rst)
            abs_quotient <= 0;
        else if(div_process)
            abs_quotient <= {abs_quotient[62:0],current_q};
        else
            abs_quotient <= 0;
//    always @(posedge clk)
//        if(rst)
//            abs_remainder <= 0;
//        else if(div_valid)
//            abs_remainder <= dividend_flag ? {64'b0,-dividend} : {64'b0,dividend};
//        else
//            abs_remainder <= current_q ? current_sub_result : abs_remainder;
    assign quotient = q_flag ? -abs_quotient : abs_quotient;
//    assign remainder = rem_flag ? -abs_remainder[63:0] : abs_remainder;
    assign remainder = rem_flag ? -abs_dividend[63:0] : abs_dividend[63:0];
endmodule

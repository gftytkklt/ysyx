`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2022/12/01 10:58:43
// Design Name: 
// Module Name: ysyx_040750_booth_mul_serial
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


module ysyx_040750_booth_mul_serial(
    input clk,
    input rst,
    input [63:0] mul1,
    input [63:0] mul2,
    //input is_signed,
    input [1:0] sext_flag,
    input mul_valid,
    output P_valid,
    output [127:0] P
    );
    // sign extention flag
    wire sgn_ext1,sgn_ext2;
    // radix 4 booth mul
    reg [66:0] booth_mul1;
    // normal mul
    reg [131:0] booth_mul2;
    // booth partial sum & product
    wire [131:0] partial_sum;
    wire partial_c;
    reg [131:0] mid_result;
    wire [2:0] booth;
    wire [131:0] S;// 132 bit addend A
    wire Ci;// 132 bit adder carry_in
    // wire end_flag;
    reg mul_process;
    reg [5:0] iter_cnt;
    // mul num
    //assign {sgn_ext1,sgn_ext2} = {mul1[63]&is_signed,mul2[63]&is_signed};
    assign {sgn_ext1, sgn_ext2} = {mul1[63] & sext_flag[1], mul2[63] & sext_flag[0]};
    always @(posedge clk)
        if(rst)
            booth_mul1 <= 0;
        else if(mul_valid)
            booth_mul1 <= {{2{sgn_ext1}},mul1,1'b0};
        else
            booth_mul1 <= {2'b0,booth_mul1[66:2]};
    always @(posedge clk)
        if(rst)
            booth_mul2 <= 0;
        else if(mul_valid)
            booth_mul2 <= {{68{sgn_ext2}},mul2};
        else
            booth_mul2 <= {booth_mul2[129:0],2'b0};
    assign booth = booth_mul1[2:0];
    // booth mul
    ysyx_040750_radix4_unit radix4_unit_e(booth,booth_mul2,partial_sum,partial_c);
    // mid sum
    always @(posedge clk)
        if(rst)
            mid_result <= 0;
        else if(mul_valid)
            mid_result <= 0;
        else
            mid_result <= S;
    // 132 bit adder
    assign Ci = partial_c;
    assign S = partial_sum + mid_result + {131'b0,Ci};
//    always @(posedge clk)
//        if(rst)
//            S <= 0;
//        else
//            S <= partial_sum + S + Ci;
    assign P = S[127:0];
    // output valid
    always @(posedge clk)
        if(rst)
            mul_process <= 0;
        else if(mul_valid)
            mul_process <= 1;
        else if(P_valid)
            mul_process <= 0;
        else
            mul_process <= mul_process;
    //assign P_valid = ~|booth_mul1[66:1] & mul_process;
    
    always @(posedge clk)
        if(rst)
            iter_cnt <= 0;
        else if(P_valid)
            iter_cnt <= 0;
        else if(mul_process)
            iter_cnt <= iter_cnt + 1;
        else
            iter_cnt <= 0;
    assign P_valid = (iter_cnt[5]) || (~|booth_mul1[66:1] & mul_process);
    //assign out_valid = (iter_cnt == 33);
//    assign end_flag = ~&booth_mul1 & mul_process;
//    always @(posedge clk)
//        if(rst)
//            P_valid <= 0;
//        else if(iter_cnt == 32)
//            P_valid <= 1;
//        else
//            P_valid <= 0;
endmodule

`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2022/11/25 17:11:10
// Design Name: 
// Module Name: booth_mul
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


module booth_mul(
    input clk,
    input rst,
    input [63:0] mul1,
    input [63:0] mul2,
    input is_signed,
    input mul_valid,
    output reg P_valid,
    output [127:0] P
    );
    // sign extention flag
    wire sgn_ext1,sgn_ext2;
    // radix 4 booth mul
    wire [66:0] booth_mul1;
    // normal mul
    wire [131:0] booth_mul2;
    // booth partial sum & product
    wire [131:0] partial_sum [0:32];
    wire [32:0] wallace_in [0:131];
    wire [29:0] wallace_c [0:132];
    wire [32:0] partial_c;// c[32] is always 0
    wire [131:0] S;// 132 bit addend A
    wire [132:0] C;// 132 bit addend B(C[132] is deprecated)
    wire Ci;// 132 bit adder carry_in
    // pipelining
    // stage1: booth out
//    reg [131:0] partial_sum_R [0:32];
//    reg [32:0] partial_c_R;
    // stage2: wallace out
    reg [131:0] S_R, C_R;
    reg Ci_R;
    
    assign {sgn_ext1,sgn_ext2} = {mul1[63]&is_signed,mul2[63]&is_signed};
    assign booth_mul1 = {{2{sgn_ext1}},mul1,1'b0};
    assign booth_mul2 = {{68{sgn_ext2}},mul2};
//    assign wallace_c[0] = partial_c_R[29:0];
//    assign C[0] = partial_c_R[30];
    assign wallace_c[0] = partial_c[29:0];
    assign C[0] = partial_c[30];
    assign Ci = partial_c[31];
    
    genvar i,j;
//    generate for(i=0;i<33;i=i+1) begin: psum_R
//    always @(posedge clk)
//        if(rst) begin
//            partial_sum_R[i] <= 0;
//            partial_c_R[i] <= 0;
//        end
//        else begin
//            partial_sum_R[i] <= partial_sum[i];
//            partial_c_R[i] <= partial_c[i];
//        end
//    end
//    endgenerate
    always @(posedge clk)
        if(rst)
            P_valid <= 1'b0;
        else
            P_valid <= mul_valid;
            
    always @(posedge clk)
        if(rst) begin
            S_R <= 0;
            C_R <= 0;
            Ci_R <= 0;
        end
        else begin
            S_R <= S;
            C_R <= C[131:0];
            Ci_R <= partial_c[31];
//            Ci_R <= partial_c_R[31];
        end
    generate for(i=0;i<=32;i=i+1) begin: booth_gen
        ysyx_22040750_radix4_unit radix4_unit_e(booth_mul1[i*2 +: 3],{booth_mul2[0 +: (132-2*i)],{2*i{1'b0}}},partial_sum[i],partial_c[i]);
        for(j=0;j<132;j=j+1) begin: transpose
            assign wallace_in[j][i] = partial_sum[i][j];
//            assign wallace_in[j][i] = partial_sum_R[i][j];
        end
        //ysyx_22040750_radix4_unit radix4_unit_e(booth_mul1[i*2 +: 3],booth_mul2,partial_sum[i]);
        //assign partial_sum[i] = booth_sum[i] << (2*i);
        //assign partial_sum[i] = {booth_sum[i][0 +: (128-2*i)],{2*i{1'b0}}};
    end
    endgenerate
    
    generate for(i=0;i<132;i=i+1) begin: wallace_gen
        wallace_33bit wallace_e(.N(wallace_in[i]),.Ci(wallace_c[i]),.Cout(wallace_c[i+1]),.S(S[i]),.C(C[i+1]));
    end
    endgenerate
    assign P = S_R + C_R + Ci_R;
    //assign P = S + C[131:0] + Ci;
//    assign P = partial_sum[0]
//              + partial_sum[1]
//              + partial_sum[2]
//              + partial_sum[3]
//              + partial_sum[4]
//              + partial_sum[5]
//              + partial_sum[6]
//              + partial_sum[7]
//              + partial_sum[8]
//              + partial_sum[9]
//              + partial_sum[10]
//              + partial_sum[11]
//              + partial_sum[12]
//              + partial_sum[13]
//              + partial_sum[14]
//              + partial_sum[15]
//              + partial_sum[16]
//              + partial_sum[17]
//              + partial_sum[18]
//              + partial_sum[19]
//              + partial_sum[20]
//              + partial_sum[21]
//              + partial_sum[22]
//              + partial_sum[23]
//              + partial_sum[24]
//              + partial_sum[25]
//              + partial_sum[26]
//              + partial_sum[27]
//              + partial_sum[28]
//              + partial_sum[29]
//              + partial_sum[30]
//              + partial_sum[31]
//              + partial_sum[32];

endmodule

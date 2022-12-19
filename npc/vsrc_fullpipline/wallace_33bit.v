`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2022/11/29 11:23:35
// Design Name: 
// Module Name: wallace_33bit
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


module wallace_33bit(
    input [32:0] N,// input adder
    input [29:0] Ci,// carry in
    output [29:0] Cout,// carry out to higher wallace tree
    output S,// sum bit to adder
    output C// carry out bit to adder
    );
    wire [29:0] Si;// intermediate S
    // lvl 1: 11 FA
    genvar i;
    generate
    for (i=0;i<11;i=i+1) begin: lvl1_gen
        //assign {Cout[i],Si[i]} = N[i*3] + N[i*3+1] + N[i*3+2];
        FA_1bit lvl1 (.a(N[i*3 +: 3]),.s(Si[i]),.c(Cout[i]));
    end
    endgenerate
    // lvl 2: 7 FA
    FA_1bit lvl2_1 (.a(Si[2:0]),.s(Si[11]),.c(Cout[11]));
    FA_1bit lvl2_2 (.a(Si[5:3]),.s(Si[12]),.c(Cout[12]));
    FA_1bit lvl2_3 (.a(Si[8:6]),.s(Si[13]),.c(Cout[13]));
    FA_1bit lvl2_4 (.a({Si[10:9],Ci[0]}),.s(Si[14]),.c(Cout[14]));
    FA_1bit lvl2_5 (.a(Ci[3:1]),.s(Si[15]),.c(Cout[15]));
    FA_1bit lvl2_6 (.a(Ci[6:4]),.s(Si[16]),.c(Cout[16]));
    FA_1bit lvl2_7 (.a(Ci[9:7]),.s(Si[17]),.c(Cout[17]));
    // lvl 3: 5 FA
    FA_1bit lvl3_1 (.a(Si[13:11]),.s(Si[18]),.c(Cout[18]));
    FA_1bit lvl3_2 (.a(Si[16:14]),.s(Si[19]),.c(Cout[19]));
    FA_1bit lvl3_3 (.a({Si[17],Ci[11:10]}),.s(Si[20]),.c(Cout[20]));
    FA_1bit lvl3_4 (.a(Ci[14:12]),.s(Si[21]),.c(Cout[21]));
    FA_1bit lvl3_5 (.a(Ci[17:15]),.s(Si[22]),.c(Cout[22]));
    // lvl 4: 3 FA
    FA_1bit lvl4_1 (.a(Si[20:18]),.s(Si[23]),.c(Cout[23]));
    FA_1bit lvl4_2 (.a({Si[22:21],Ci[18]}),.s(Si[24]),.c(Cout[24]));
    FA_1bit lvl4_3 (.a(Ci[21:19]),.s(Si[25]),.c(Cout[25]));
    // lvl 5: 2 FA
    FA_1bit lvl5_1 (.a(Si[25:23]),.s(Si[26]),.c(Cout[26]));
    FA_1bit lvl5_2 (.a(Ci[24:22]),.s(Si[27]),.c(Cout[27]));
    // lvl 6: 1 FA
    FA_1bit lvl6_1 (.a({Si[27:26],Ci[25]}),.s(Si[28]),.c(Cout[28]));
    // lvl 7: 1 FA
    FA_1bit lvl7_1 (.a({Si[28],Ci[27:26]}),.s(Si[29]),.c(Cout[29]));
    // out
    FA_1bit lvl_out (.a({Si[29],Ci[29:28]}),.s(S),.c(C));
endmodule

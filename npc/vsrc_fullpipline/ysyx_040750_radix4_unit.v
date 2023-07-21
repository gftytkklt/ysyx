`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2022/11/25 18:11:44
// Design Name: 
// Module Name: ysyx_040750_radix4_unit
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


module ysyx_040750_radix4_unit(
    input [2:0] booth,
    //input [64:0] X,
    input [131:0] X,
    output [131:0] P,
    output c
    //output reg [65:0] Y
    );
//////// a correct version��LESS LUT��
//    wire [127:0] X_sext, X_comp;
//    reg [127:0] Y;
//    assign P=Y;
//    assign X_comp = -X_sext;
//    assign X_sext = {{63{X[64]}},X};
//    always @(*)
//        case(booth)
//            3'h0,3'h7:Y=0;
//            3'h1,3'h2:Y=X_sext;
//            3'h3:Y={X_sext,1'b0};
//            3'h4:Y={X_comp,1'b0};
//            3'h5,3'h6:Y=X_comp;
//        endcase
//////// a correct version
//    reg [65:0] Y;
//    wire [64:0] X_comp;
//    assign P = {{62{Y[65]}},Y};
//    assign X_comp = -X;
//    always @(*)
//        case(booth)
//            3'h0,3'h7:Y=0;
//            3'h1,3'h2:Y={X[64],X};
//            3'h3:Y={X,1'b0};
//            3'h4:Y={X_comp,1'b0};
//            3'h5,3'h6:Y={X_comp[64],X_comp};
//        endcase
//////// ysyx version
    //wire [127:0] X_sext;
    //wire c;
    wire y_add,y,y_sub;
    wire sel_negative,sel_double_negative,sel_positive,sel_double_positive;
//    debug
//    wire [127:0] posX, dposX, negX, dnegX;
//    assign posX = X_sext;
//    assign dposX = {X_sext,1'b0};
//    assign negX = -posX;
//    assign dnegX = -dposX;
//    assign X_sext = {{63{X[64]}},X};

    assign {y_add,y,y_sub} = booth;
    assign sel_negative =  y_add & (y & ~y_sub | ~y & y_sub);
    assign sel_positive = ~y_add & (y & ~y_sub | ~y & y_sub);
    assign sel_double_negative =  y_add & ~y & ~y_sub;
    assign sel_double_positive = ~y_add &  y &  y_sub;
    assign P = ~(~({132{sel_negative}} & ~X) & ~({132{sel_double_negative}} & {~X[130:0],1'b1}) 
           & ~({132{sel_positive}} & X ) & ~({132{sel_double_positive}} & {X[130:0],1'b0}));
    assign c = sel_double_negative | sel_negative;
endmodule

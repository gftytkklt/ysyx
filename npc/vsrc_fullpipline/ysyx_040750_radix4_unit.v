module ysyx_040750_radix4_unit(
    input [2:0] booth,
    //input [64:0] X,
    input [131:0] X,
    output [131:0] P,
    output c
    //output reg [65:0] Y
    );

//////// ysyx version
    wire y_add,y,y_sub;
    wire sel_negative,sel_double_negative,sel_positive,sel_double_positive;
    assign {y_add,y,y_sub} = booth;
    assign sel_negative =  y_add & (y & ~y_sub | ~y & y_sub);
    assign sel_positive = ~y_add & (y & ~y_sub | ~y & y_sub);
    assign sel_double_negative =  y_add & ~y & ~y_sub;
    assign sel_double_positive = ~y_add &  y &  y_sub;
    assign P = ~(~({132{sel_negative}} & ~X) & ~({132{sel_double_negative}} & {~X[130:0],1'b1}) 
           & ~({132{sel_positive}} & X ) & ~({132{sel_double_positive}} & {X[130:0],1'b0}));
    assign c = sel_double_negative | sel_negative;
endmodule

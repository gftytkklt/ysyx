`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2022/05/29 14:52:28
// Design Name: 
// Module Name: mux_Nbit_Msel
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
// parameter N: in data bitwidth
// parameter M: in data num(one_hot encoding)
//////////////////////////////////////////////////////////////////////////////////


module ysyx_22040750_mux_Nbit_Msel#(
    parameter N = 64,
    parameter M = 4
    )(
    input [N*M-1:0] I_sel_data,
    input [M-1:0] I_sel,
    output reg [N-1:0] O_sel_data
    );
    wire [N-1:0] sel_data [M-1:0];
    generate
    	for(genvar i = 0;i<M;i=i+1) begin
    	    assign sel_data[i] = I_sel_data[i*N +: N];  
    	end
    endgenerate
    always @(*) begin
    	O_sel_data = 0;
    	for (integer i=0;i<M;i=i+1) begin
    	    O_sel_data = O_sel_data | ({N{I_sel[i]}} & sel_data[i]);
    	end
    end
    //generate for(genvar i = 0;i<N;i=i+1) begin
    //    for(genvar j = 0;j<M;j=j+1) begin
    //        assign O_sel_data[i] = |(I_sel[j] & I_sel_data[N*j+i]);
    //    end
    //end
    //endgenerate
    
endmodule

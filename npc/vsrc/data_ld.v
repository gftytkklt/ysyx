`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2022/06/09 20:24:17
// Design Name: 
// Module Name: mem_ld
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

module data_ld(
    input [63:0] I_data_in,
    input [8:0] I_rd_strb,
    output [63:0] O_load_data
    );
    wire sext_flag;
    reg sext_bit;
    wire [7:0] sext_mask;
    assign sext_mask = ~I_rd_strb[7:0];
    assign sext_flag = I_rd_strb[8];
    always @(*)
    	if(sext_flag)
    	    case(I_rd_strb[7:0])
    	        //8'hff: sext_bit = I_mem_in[63];
    	        8'h0f: sext_bit = I_data_in[31];
    	        8'h03: sext_bit = I_data_in[15];
    	        8'h01: sext_bit = I_data_in[7];
    	        default: sext_bit = 0;
    	    endcase
    	else
    	    sext_bit = 0;
    assign O_load_data = (I_data_in & {{8{I_rd_strb[7]}}, {8{I_rd_strb[6]}}, {8{I_rd_strb[5]}}, {8{I_rd_strb[4]}}, {8{I_rd_strb[3]}}, {8{I_rd_strb[2]}}, {8{I_rd_strb[1]}}, {8{I_rd_strb[0]}}}) | ({64{sext_bit}} & {{8{sext_mask[7]}}, {8{sext_mask[6]}}, {8{sext_mask[5]}}, {8{sext_mask[4]}}, {8{sext_mask[3]}}, {8{sext_mask[2]}}, {8{sext_mask[1]}}, {8{sext_mask[0]}}});
endmodule

`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2022/04/12 20:07:52
// Design Name: 
// Module Name: gpr
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


module ysyx_22040750_gpr(
    input I_sys_clk,
    input I_rst,
    input [63:0] I_wr_data,
    input I_wen,
    input [4:0] I_rd_addr,
    input [4:0] I_rs1_addr,
    output [63:0] O_rs1_data,
    input [4:0] I_rs2_addr,
    output [63:0] O_rs2_data
    );
    //export "DPI-C" function check;
    import "DPI-C" function void set_gpr_ptr(input logic [63:0] a []);
    reg [63:0] gpr [0:31];
    initial set_gpr_ptr(gpr);
    wire wen [31:0];
    assign wen[0] = 0;
    generate for(genvar i=1;i<32;i=i+1) begin
        assign wen[i] = (i == I_rd_addr) ? I_wen : 0;
    end
    endgenerate
    generate for(genvar i=0;i<32;i=i+1) begin
        always @(posedge I_sys_clk)
            if(I_rst)
                gpr[i] <= 0;
            else if(wen[i])
                gpr[i] <= I_wr_data;
            else
                gpr[i] <= gpr[i];
    end
    endgenerate
    assign O_rs1_data = gpr[I_rs1_addr];
    assign O_rs2_data = gpr[I_rs2_addr];
    //function void check();
    //	$display("%d\n", gpr[10]);
    //endfunction
    
endmodule

`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2022/04/12 20:07:52
// Design Name: 
// Module Name: pc
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


module ysyx_22040750_pc(
    input I_sys_clk,
    input I_rst,
    input [31:0] I_dnpc,
    input [31:0] I_inst,
    input I_inst_valid,
    input I_inst_ready,
    input I_IF_ID_allowin,// allow next inst rd
    input I_fencei,
    output O_IF_valid,
    output reg [31:0] O_pc,
    output [31:0] O_inst,
    output O_pc_valid
    );
    // import "DPI-C" function void set_pc_ptr(input logic [31:0] a []);
    // initial set_pc_ptr(O_pc);
    localparam PC_RESET = 32'h2FFFFFFC;
    wire IF_ready_go;
    wire IF_allow_in;
    wire IF_handshake;
    reg IF_valid;
    reg IF_en;
    //reg [63:0] pc_cache;
    reg [31:0] inst_cache;
    reg cache_valid;
    // latch data cannot be received by IF_ID
    always @(posedge I_sys_clk)
    	if(I_rst)
    		cache_valid <= 0;
    	else if(IF_ready_go && (!I_IF_ID_allowin))
    		cache_valid <= 1;
    	else if(cache_valid && I_IF_ID_allowin)
    		cache_valid <= 0;
    	else
    		cache_valid <= cache_valid;
    always @(posedge I_sys_clk)
    	if(I_rst)
    		inst_cache <= 32'b0;
    	//else if(IF_ready_go && (!I_IF_ID_allowin))
      else if(I_inst_valid && (!I_IF_ID_allowin))
    		inst_cache <= I_inst;
    	else
    		inst_cache <= inst_cache;
    assign O_pc_valid = IF_allow_in && IF_en;
    assign O_IF_valid = IF_ready_go && IF_valid;
    assign IF_ready_go = I_inst_valid || cache_valid;
    assign IF_allow_in = (!IF_valid) || (IF_ready_go && I_IF_ID_allowin);
    assign IF_handshake = O_pc_valid && I_inst_ready && ~I_fencei;
    assign O_inst = cache_valid ? inst_cache : I_inst;
    always @(posedge I_sys_clk)
    	if(I_rst)
    		IF_en <= 0;
    	else
    		IF_en <= 1;
    // inst is fetched by I_dnpc, so take I_dnpc when fetch an inst
    always @(posedge I_sys_clk)
    	if(I_rst)
    		O_pc <= PC_RESET;
    	else if(IF_handshake)
    		O_pc <= I_dnpc;
    	else
    		O_pc <= O_pc;
    // if valid data has gone && no valid ifetch, IF_valid <= 0;
    always @(posedge I_sys_clk)
    	if(I_rst)
    		IF_valid <= 0;
    	else if(IF_handshake)
    		IF_valid <= 1;
    	else if(O_IF_valid && I_IF_ID_allowin)
    		IF_valid <= 0;
    	else
    		IF_valid <= IF_valid;
endmodule

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


module pc(
    input I_sys_clk,
    input I_rst,
    input [63:0] I_dnpc,
    input [31:0] I_inst,
    input I_inst_valid,
    input I_inst_ready,
    input I_IF_ID_allowin,// allow next inst rd
    output O_IF_valid,
    output [63:0] O_pc,
    output [31:0] O_inst,
    output O_pc_valid
    );
    import "DPI-C" function void set_pc_ptr(input logic [63:0] a []);
    initial set_pc_ptr(O_pc);
    localparam PC_RESET = 64'h7FFFFFFC;
    wire rd_handshake;
    reg pc_valid;
    reg [63:0] pc;
    wire [63:0] next_pc;
    reg input_valid;// indicate there exists a valid pc
    wire output_valid;// indicate there exists a valid inst
    wire IF_allowin;// indicate pre-IF can fetch next inst
    reg [63:0] pc_cache;
    reg [31:0] inst_cache;
    wire ifetch_valid;
    reg cache_valid;
    assign O_IF_valid = ifetch_valid | cache_valid;
    assign output_valid = I_inst_valid;
    assign ifetch_valid = input_valid & output_valid;
    assign IF_allowin = !(input_valid) | (output_valid & I_IF_ID_allowin);
    always @(posedge I_sys_clk)
    	if(I_rst)
    		{pc_cache, inst_cache} <= 0;
    	else if(ifetch_valid)
    		{pc_cache, inst_cache} <= {pc, I_inst};
    	else
    		{pc_cache, inst_cache} <= {pc_cache, inst_cache};
    always @(posedge I_sys_clk)
    	if(I_rst)
    		cache_valid <= 0;
    	else if(ifetch_valid & !IF_allowin)
    		cache_valid <= 1;
    	else if(cache_valid & I_IF_ID_allowin)
    		cache_valid <= 0;
    	else
    		cache_valid <= cache_valid;
    always @(posedge I_sys_clk)
    	if(I_rst)
    		input_valid <= 0;
    	else
    		input_valid <= O_pc_valid;
    assign O_pc = cache_valid ? pc_cache : pc;
    assign O_inst = cache_valid ? inst_cache : I_inst;
    assign rd_handshake = O_pc_valid & I_inst_ready;
    assign O_pc_valid = pc_valid & I_IF_ID_allowin;
    assign next_pc = (rd_handshake & I_IF_ID_allowin) ? I_dnpc : pc;
    always @(posedge I_sys_clk)
        if(I_rst)
            pc <= PC_RESET;
        //else if(I_IF_ID_allowin)
        //else if(rd_handshake)
        else
            pc <= next_pc;
    always @(posedge I_sys_clk)
		if(I_rst)
			pc_valid <= 0;
		else
			pc_valid <= IF_allowin;
endmodule

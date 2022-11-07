`timescale 1ns / 1ps
module ysyx_22040750_stall_unit(
    input [4:0] I_rs1_addr,// from ID only
    input [4:0] I_rs2_addr,// from ID only
    input I_ID_valid,// IF_ID input valid
    input [4:0] I_EX_rd_addr,// 
    input I_EX_valid,// ID_EX input valid
    input I_EX_mem_rd_en,
    input [4:0] I_MEM_rd_addr,// 
    input I_MEM_valid,// EX_MEM input valid
    input I_MEM_mem_rd_en,
    input [4:0] I_WB_rd_addr,// 
    input I_WB_valid,// MEM_WB input valid
    input [1:0] I_stall_en,// [1] for rs1, [0] for rs2 enable
    output O_ID_stall,
    // stall signal
    /*output O_EX_stall,
    output O_MEM_stall,
    output O_WB_stall*/
    // forward signal
    output [1:0] O_EX_stall,
    output [1:0] O_MEM_stall,
    output [1:0] O_WB_stall
    );
    
    // pipeline stall code
    /*
    wire EX_stall, MEM_stall, WB_stall;
    assign O_ID_stall = (O_WB_stall | O_MEM_stall | O_EX_stall) & I_ID_valid;
    assign EX_stall = ((I_rs1_addr == I_EX_rd_addr) & I_stall_en[1]) | ((I_rs2_addr == I_EX_rd_addr) & I_stall_en[0]);
    assign MEM_stall = ((I_rs1_addr == I_MEM_rd_addr) & I_stall_en[1]) | ((I_rs2_addr == I_MEM_rd_addr) & I_stall_en[0]);
    assign WB_stall = ((I_rs1_addr == I_WB_rd_addr) & I_stall_en[1]) | ((I_rs2_addr == I_WB_rd_addr) & I_stall_en[0]);
    assign O_WB_stall = I_WB_valid ? WB_stall : 0;
    assign O_MEM_stall = I_MEM_valid ? MEM_stall : 0;
    assign O_EX_stall = I_EX_valid? EX_stall : 0;
    */
    // forward code
    wire [1:0] EX_stall, MEM_stall, WB_stall;
    assign O_ID_stall = I_ID_valid & ((|O_EX_stall & I_EX_mem_rd_en) | (|O_MEM_stall & I_MEM_mem_rd_en));
    assign EX_stall = {((I_rs1_addr == I_EX_rd_addr) & I_stall_en[1]), ((I_rs2_addr == I_EX_rd_addr) & I_stall_en[0])};
    assign MEM_stall = {((I_rs1_addr == I_MEM_rd_addr) & I_stall_en[1]), ((I_rs2_addr == I_MEM_rd_addr) & I_stall_en[0])};
    assign WB_stall = {((I_rs1_addr == I_WB_rd_addr) & I_stall_en[1]), ((I_rs2_addr == I_WB_rd_addr) & I_stall_en[0])};
    assign O_WB_stall = I_WB_valid ? WB_stall : 0;
    assign O_MEM_stall = I_MEM_valid ? MEM_stall : 0;
    assign O_EX_stall = I_EX_valid? EX_stall : 0;
endmodule

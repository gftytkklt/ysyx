`timescale 1ns / 1ps
module blocking_unit(
    input [4:0] I_rs1_addr,// from ID only
    input [4:0] I_rs2_addr,// from ID only
    input I_ID_valid,// IF_ID input valid
    input [4:0] I_EX_rd_addr,// 
    input I_EX_valid,// ID_EX input valid
    input [4:0] I_MEM_rd_addr,// 
    input I_MEM_valid,// EX_MEM input valid
    input [4:0] I_WB_rd_addr,// 
    input I_WB_valid,// MEM_WB input valid
    input [1:0] I_block_en,// [1] for rs1, [0] for rs2 enable
    output O_block
    );
    wire EX_cong, MEM_cong, WB_cong;
    wire MEM_block, EX_block, ID_block;
    assign O_block = (MEM_block | EX_block | ID_block) & I_ID_valid;
    assign EX_cong = ((I_rs1_addr == I_EX_rd_addr) & I_block_en[1]) | ((I_rs2_addr == I_EX_rd_addr) & I_block_en[0]);
    assign MEM_cong = ((I_rs1_addr == I_MEM_rd_addr) & I_block_en[1]) | ((I_rs2_addr == I_MEM_rd_addr) & I_block_en[0]);
    assign WB_cong = ((I_rs1_addr == I_WB_rd_addr) & I_block_en[1]) | ((I_rs2_addr == I_WB_rd_addr) & I_block_en[0]);
    assign MEM_block = I_WB_valid ? WB_cong : 0;
    assign EX_block = I_MEM_valid ? MEM_cong : 0;
    assign ID_block = I_EX_valid? EX_cong : 0;
endmodule

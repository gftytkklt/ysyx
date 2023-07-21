`timescale 1ns / 1ps
module ysyx_040750_csr_foward(
    input [63:0] I_csr_ID,
    input [63:0] I_csr_EX,
    input [63:0] I_csr_MEM,
    input [63:0] I_csr_WB,
    input [11:0] I_csr_addr_ID,
    input [11:0] I_csr_addr_EX,
    input [11:0] I_csr_addr_MEM,
    input [11:0] I_csr_addr_WB,
    input I_csr_wen_ID,
    input I_csr_wen_EX,
    input I_csr_wen_MEM,
    input I_csr_wen_WB,
    output reg [63:0] O_csr_foward_data
);
    wire EX_foward,MEM_foward,WB_foward;
    assign EX_foward = (I_csr_wen_ID & I_csr_wen_EX) & (I_csr_addr_ID == I_csr_addr_EX);
    assign MEM_foward = (I_csr_wen_ID & I_csr_wen_MEM) & (I_csr_addr_ID == I_csr_addr_MEM);
    assign WB_foward = (I_csr_wen_ID & I_csr_wen_WB) & (I_csr_addr_ID == I_csr_addr_WB);
    always @(*)
        if(EX_foward)
            O_csr_foward_data = I_csr_EX;
        else if(MEM_foward)
            O_csr_foward_data = I_csr_MEM;
        else if(WB_foward)
            O_csr_foward_data = I_csr_WB;
        else
            O_csr_foward_data = I_csr_ID;
endmodule
`timescale 1ns / 1ps
module ysyx_22040750_csr(
    input I_sys_clk,
    input I_rst,
    input I_csr_wen,
    input [11:0] I_wr_addr,
    input [11:0] I_rd_addr,
    input [63:0] I_wr_data,
    output [63:0] O_rd_data
);
    localparam CSR_NUM = 1 << 12;
    localparam MEPC = 12'h341;
    localparam MSTATUS = 12'h300;
    localparam MTVEC = 12'h305;
    localparam MCAUSE = 12'h342;
    reg [63:0] mepc, mstatus, mtvec, mcause;
    reg [63:0] rd_data;
    assign O_rd_data = rd_data;
    //reg [63:0] mip, mie, mtime, mtimecmp; clint as mmio p
    always @(posedge I_sys_clk)
        if(I_rst) begin
            {mepc, mtvec, mcause} <= 'h0;
            mstatus <= 'ha00001800;
        end
        else if(I_csr_wen) 
            case(I_wr_addr)
                `MEPC: mepc <= I_wr_data;
                `MSTATUS: mstatus <= I_wr_data;
                `MTVEC: mtvec <= I_wr_data;
                `MCAUSE: mcause <= I_wr_data;
                default:;
            endcase
        else begin
            mepc <= mepc;
            mstatus <= mstatus;
            mtvec <= mtvec;
            mcause <= mcause;
        end
    always @(*)
        case(I_rd_addr)
            `MEPC: rd_data = mepc;
            `MSTATUS: rd_data = mstatus;
            `MTVEC: rd_data = mtvec;
            `MCAUSE: rd_data = mcause;
            default: rd_data = 'h0;
        endcase
endmodule
`timescale 1ns / 1ps
module ysyx_22040750_csr(
    input I_sys_clk,
    input I_rst,
    input I_MEM_WB_valid,
    input I_csr_wen,
    input I_csr_intr_wr,
    input I_csr_intr_rd,
    input [31:0] I_intr_pc,
    input [63:0] I_csr_intr_no,
    input I_csr_mret_wr,
    input I_csr_mret_rd,
    input [11:0] I_wr_addr,
    input [11:0] I_rd_addr,
    input [63:0] I_wr_data,
    output [63:0] O_rd_data
);
    // localparam CSR_NUM = 1 << 12;
    localparam MEPC = 12'h341;
    localparam MSTATUS = 12'h300;
    localparam MTVEC = 12'h305;
    localparam MCAUSE = 12'h342;
    localparam MSCRATCH = 12'h340;
    reg [63:0] mepc, mstatus, mtvec, mcause, mscratch;
    reg [63:0] rd_data;
    wire mie, mpie;
    wire csr_wen, csr_intr_wr, csr_mret_wr;
    assign {csr_wen, csr_intr_wr, csr_mret_wr} = {I_csr_wen, I_csr_intr_wr, I_csr_mret_wr} & {3{I_MEM_WB_valid}};
    assign mie = mstatus[3];
    assign mpie = mstatus[7];
    assign O_rd_data = rd_data;
    //reg [63:0] mip, mie, mtime, mtimecmp; clint as mmio p
    always @(posedge I_sys_clk)
        if(I_rst) begin
            {mepc, mtvec, mcause, mscratch} <= 'h0;
            mstatus <= 64'ha00001800;
        end
        // these ena signals will not occur at the same time
        else if(csr_wen) 
            case(I_wr_addr)
                MEPC: mepc <= I_wr_data;
                MSTATUS: mstatus <= I_wr_data;
                MTVEC: mtvec <= I_wr_data;
                MCAUSE: mcause <= I_wr_data;
                MSCRATCH: mscratch <= I_wr_data;
                default:;
            endcase
        else if(csr_intr_wr) begin
            mcause <= I_csr_intr_no;
            mepc <= {32'b0, I_intr_pc};
            mstatus <= {mstatus[63:8],mie,mstatus[6:4],1'b0,mstatus[2:0]};
            mtvec <= mtvec;
            mscratch <= mscratch;
        end
        else if(csr_mret_wr) begin
            mcause <= mcause;
            mepc <= mepc;
            mstatus <= {mstatus[63:8],1'b1,mstatus[6:4],mpie,mstatus[2:0]};
            mtvec <= mtvec;
            mscratch <= mscratch;
        end
        else begin
            mepc <= mepc;
            mstatus <= mstatus;
            mtvec <= mtvec;
            mcause <= mcause;
            mscratch <= mscratch;
        end
    always @(*)
        case({I_csr_intr_rd, I_csr_mret_rd})
            2'b10: rd_data = mtvec;
            2'b01: rd_data = mepc;
            2'b00:
                case(I_rd_addr)
                    MEPC: rd_data = mepc;
                    MSTATUS: rd_data = mstatus;
                    MTVEC: rd_data = mtvec;
                    MCAUSE: rd_data = mcause;
                    MSCRATCH: rd_data = mscratch;
                    default: rd_data = 'h0;
                endcase
            default: rd_data = 'h0;// should not reach here!
        endcase
endmodule
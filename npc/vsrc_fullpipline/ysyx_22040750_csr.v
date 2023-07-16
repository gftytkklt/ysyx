`timescale 1ns / 1ps
module ysyx_22040750_csr(
    input I_sys_clk,
    input I_rst,
    // timer intr, ID intr = I_csr_intr_rd
    input I_mtip,
    input I_EX_intr,// from ID_EX
    input I_MEM_intr,// from EX_MEM
    input I_WB_intr,// from MEM_WB
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
    input I_timer_intr_wb,
    output [63:0] O_rd_data,
    output O_timer_intr
);
    // localparam CSR_NUM = 1 << 12;
    localparam SATP = 12'h180;
    localparam MSTATUS = 12'h300;
    localparam MIE = 12'h304;
    localparam MTVEC = 12'h305;
    // localparam MSCRATCH = 12'h340;
    localparam MEPC = 12'h341;
    localparam MCAUSE = 12'h342;
    localparam MIP = 12'h344;
    
    reg [63:0] satp, mstatus, mie, mtvec, mepc, mcause, mip;
    reg [63:0] rd_data;
    wire mstatus_mie, mstatus_mpie;
    wire csr_wen, csr_intr_wr, csr_mret_wr;
    assign {csr_wen, csr_intr_wr, csr_mret_wr} = {I_csr_wen, I_csr_intr_wr, I_csr_mret_wr} & {3{I_MEM_WB_valid}};
    assign mstatus_mie = mstatus[3];
    assign mstatus_mpie = mstatus[7];
    assign O_rd_data = rd_data;
    assign O_timer_intr = (mip[7] & mie[7] & mstatus_mie) & ~(I_EX_intr & I_MEM_intr & I_WB_intr);
    //reg [63:0] mip, mie, mtime, mtimecmp; clint as mmio p
    always @(posedge I_sys_clk)
        if(I_rst)
            mip <= 0;
        else
            mip <= {mip[63:8],I_mtip,mip[6:0]};
    always @(posedge I_sys_clk)
        if(I_rst) begin
            {satp, mie, mtvec, mepc, mcause, mip} <= 'h0;
            mstatus <= 64'ha00001800;
        end
        // these ena signals will not occur at the same time
        else if(csr_wen) 
            case(I_wr_addr)
                SATP: satp <= I_wr_data;
                MSTATUS: mstatus <= I_wr_data;
                MIE: mie <= I_wr_data;
                MTVEC: mtvec <= I_wr_data;
                MEPC: mepc <= I_wr_data;
                MCAUSE: mcause <= I_wr_data;
                // MIP: mip <= I_wr_data;
                // MSCRATCH: mscratch <= I_wr_data;
                default:;
            endcase
        else if(csr_intr_wr | I_timer_intr_wb) begin
            satp <= satp;
            mstatus <= {mstatus[63:8],mstatus_mie,mstatus[6:4],1'b0,mstatus[2:0]};
            mie <= mie;
            mtvec <= mtvec;
            mepc <= {32'b0, I_intr_pc};
            mcause <= I_csr_intr_no;
            // mip <= mip;
            // mscratch <= mscratch;
        end
        else if(csr_mret_wr) begin
            satp <= satp;
            mstatus <= {mstatus[63:8],1'b1,mstatus[6:4],mstatus_mpie,mstatus[2:0]};
            mie <= mie;
            mtvec <= mtvec;
            mepc <= mepc;
            mcause <= mcause;
            // mip <= mip;
            // mscratch <= mscratch;
        end
        else begin
            satp <= satp;
            mstatus <= mstatus;
            mie <= mie;
            mtvec <= mtvec;
            mepc <= mepc;
            mcause <= mcause;
            // mie <= mie;
            // mscratch <= mscratch;
        end
    always @(*)
        if(O_timer_intr)
            rd_data = mtvec;
        else
            case({I_csr_intr_rd, I_csr_mret_rd})
                2'b10: rd_data = mtvec;
                2'b01: rd_data = mepc;
                2'b00:
                    case(I_rd_addr)
                        SATP: rd_data = satp;
                        MSTATUS: rd_data = mstatus;
                        MIE: rd_data = mie;
                        MTVEC: rd_data = mtvec;
                        MEPC: rd_data = mepc;
                        MCAUSE: rd_data = mcause;
                        MIP: rd_data = mip;
                        // MSCRATCH: rd_data = mscratch;
                        default: rd_data = 'h0;
                    endcase
                default: rd_data = 'h0;// should not reach here!
            endcase
endmodule
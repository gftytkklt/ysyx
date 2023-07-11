`timescale 1ns/1ps

module ysyx_22040750_clint(
    input I_clk,
    input I_rst,
    input [63:0] I_wr_data,
    input [31:0] I_addr,
    input I_wr_en,
    output [63:0] O_rd_data,
    output O_mtip
);
    parameter BASE_ADDR = 'h02000000;
    parameter MTIMECMP_ADDR = 'h4000 + BASE_ADDR;
    parameter MTIME_ADDR = 'hBFF8 + BASE_ADDR;
    parameter TICKCNT = 12'h100;
    reg [63:0] mtime, mtimecmp;
    reg [11:0] tick_cnt;
    wire incr_en;
    assign O_mtip = (mtime >= mtimecmp);
    assign incr_en = (tick_cnt == TICKCNT-1);
    always @(posedge I_clk)
        if(I_rst)
            tick_cnt <= 0;
        else
            tick_cnt <= incr_en ? 0 : tick_cnt + 1;
    always @(posedge I_clk)
        if(I_rst) begin
            mtime <= 0;
            mtimecmp  <= 0;
        end
        else if(I_wr_en)
            case(I_addr)
                MTIME_ADDR: mtime <= I_wr_data;
                MTIMECMP_ADDR: mtimecmp <= I_wr_data;
                default:;
            endcase
        else if(incr_en) begin
            mtime <= mtime + 1;
            mtimecmp <= mtimecmp;
        end
        else begin
            mtime <= mtime;
            mtimecmp <= mtimecmp;
        end
    always @(*)
        case(I_addr)
            MTIME_ADDR: O_rd_data = mtime;
            MTIMECMP_ADDR: O_rd_data = mtimecmp;
            default: O_rd_data = 0;
        endcase
endmodule
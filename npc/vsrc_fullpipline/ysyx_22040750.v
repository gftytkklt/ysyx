`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2022/05/25 20:46:57
// Design Name: 
// Module Name: cpu_top
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
// This core is for cpu core top only, for top module with standard interface, use a new top module.
//////////////////////////////////////////////////////////////////////////////////

module ysyx_22040750(
    input clock,
    input reset,

    input io_interrupt,

    input io_master_awready,
    output io_master_awvalid,
    output [3:0] io_master_awid,
    output [31:0] io_master_awaddr,
    output [7:0] io_master_awlen,
    output [2:0] io_master_awsize,
    output [1:0] io_master_awburst,
    input io_master_wready,
    output io_master_wvalid,
    output [63:0] io_master_wdata,
    output [7:0] io_master_wstrb,
    output io_master_wlast,
    output io_master_bready,
    input io_master_bvalid,
    input [3:0] io_master_bid,
    input [1:0] io_master_bresp,
    input io_master_arready,
    output io_master_arvalid,
    output [3:0] io_master_arid,
    output [31:0] io_master_araddr,
    output [7:0] io_master_arlen,
    output [2:0] io_master_arsize,
    output [1:0] io_master_arburst,
    output io_master_rready,
    input io_master_rvalid,
    input [3:0] io_master_rid,
    input [1:0] io_master_rresp,
    input [63:0] io_master_rdata,
    input io_master_rlast,

    input io_slave_awready,
    output io_slave_awvalid,
    output [3:0] io_slave_awid,
    output [31:0] io_slave_awaddr,
    output [7:0] io_slave_awlen,
    output [2:0] io_slave_awsize,
    output [1:0] io_slave_awburst,
    input io_slave_wready,
    output io_slave_wvalid,
    output [63:0] io_slave_wdata,
    output [7:0] io_slave_wstrb,
    output io_slave_wlast,
    output io_slave_bready,
    input io_slave_bvalid,
    input [3:0] io_slave_bid,
    input [1:0] io_slave_bresp,
    input io_slave_arready,
    output io_slave_arvalid,
    output [3:0] io_slave_arid,
    output [31:0] io_slave_araddr,
    output [7:0] io_slave_arlen,
    output [2:0] io_slave_arsize,
    output [1:0] io_slave_arburst,
    output io_slave_rready,
    input io_slave_rvalid,
    input [3:0] io_slave_rid,
    input [1:0] io_slave_rresp,
    input [63:0] io_slave_rdata,
    input io_slave_rlast,

    output [5:0] io_sram0_addr,
    output io_sram0_cen,
    output io_sram0_wen,
    output [127:0] io_sram0_wmask,
    output [127:0] io_sram0_wdata,
    input [127:0] io_sram0_rdata,
    output [5:0] io_sram1_addr,
    output io_sram1_cen,
    output io_sram1_wen,
    output [127:0] io_sram1_wmask,
    output [127:0] io_sram1_wdata,
    input [127:0] io_sram1_rdata,
    output [5:0] io_sram2_addr,
    output io_sram2_cen,
    output io_sram2_wen,
    output [127:0] io_sram2_wmask,
    output [127:0] io_sram2_wdata,
    input [127:0] io_sram2_rdata,
    output [5:0] io_sram3_addr,
    output io_sram3_cen,
    output io_sram3_wen,
    output [127:0] io_sram3_wmask,
    output [127:0] io_sram3_wdata,
    input [127:0] io_sram3_rdata,
    output [5:0] io_sram4_addr,
    output io_sram4_cen,
    output io_sram4_wen,
    output [127:0] io_sram4_wmask,
    output [127:0] io_sram4_wdata,
    input [127:0] io_sram4_rdata,
    output [5:0] io_sram5_addr,
    output io_sram5_cen,
    output io_sram5_wen,
    output [127:0] io_sram5_wmask,
    output [127:0] io_sram5_wdata,
    input [127:0] io_sram5_rdata,
    output [5:0] io_sram6_addr,
    output io_sram6_cen,
    output io_sram6_wen,
    output [127:0] io_sram6_wmask,
    output [127:0] io_sram6_wdata,
    input [127:0] io_sram6_rdata,
    output [5:0] io_sram7_addr,
    output io_sram7_cen,
    output io_sram7_wen,
    output [127:0] io_sram7_wmask,
    output [127:0] io_sram7_wdata,
    input [127:0] io_sram7_rdata
);
    wire [5:0] iaddr, daddr;
    wire [31:0] cpu_inst;
    // modify to 31 later!
    wire [63:0] cpu_pc;
    wire cpu_inst_valid, cpu_pc_valid, cpu_pc_ready;
    // modify to 31 later!
    wire [63:0] mem_addr;
    wire cpu_rreq, cpu_wreq;
    wire [63:0] mem_rdata, mem_wdata;
    wire mem_rvalid, mem_bvalid;
    wire [7:0] cpu_wmask;

    assign io_sram3_addr = iaddr;
    assign io_sram2_addr = iaddr;
    assign io_sram1_addr = iaddr;
    assign io_sram0_addr = iaddr;
    assign io_sram7_addr = daddr;
    assign io_sram6_addr = daddr;
    assign io_sram5_addr = daddr;
    assign io_sram4_addr = daddr;
    ysyx_22040750_cpu_core cpu_core_e(
        .I_sys_clk(clock),
        .I_rst(reset),
        .I_inst(cpu_inst),
        .I_inst_valid(cpu_inst_valid),
        .I_pc_ready(cpu_pc_ready),
        .O_pc(cpu_pc),
        .O_pc_valid(cpu_pc_valid),
        .O_mem_addr(mem_addr),
        .O_mem_rd_en(cpu_rreq),
        .O_mem_wen(cpu_wreq),
        .I_mem_rd_data(mem_rdata),
        .I_mem_rd_data_valid(mem_rvalid),
        .I_mem_wr_data_valid(mem_bvalid),
        .O_mem_wr_data(mem_wdata),
        .O_mem_wr_strb(cpu_wmask)
    );

    ysyx_22040750_cache cache_e(
        .I_clk(clock),
        .I_rst(reset),
        // pc & inst
        .I_cpu_pc(cpu_pc[31:0]),
        .I_cpu_pc_valid(cpu_pc_valid),
        .O_cpu_pc_ready(cpu_pc_ready),
        .O_cpu_inst(cpu_inst),
        .O_cpu_inst_valid(cpu_inst_valid),
        // cpu addr & w/r req
        .I_cpu_addr(mem_addr[31:0]),
        .I_cpu_wmask(cpu_wmask),
        .I_cpu_rd_req(cpu_rreq),
        .I_cpu_wr_req(cpu_wreq),
        .I_cpu_wdata(mem_wdata),
        .O_cpu_rdata(mem_rdata),
        .O_cpu_rvalid(mem_rvalid),
        .O_cpu_bvalid(mem_bvalid),
        // cache w/r addr & req, low level valid en
        .I_sram0_rdata(io_sram0_rdata),
        .I_sram1_rdata(io_sram1_rdata),
        .I_sram2_rdata(io_sram2_rdata),
        .I_sram3_rdata(io_sram3_rdata),
        .I_sram4_rdata(io_sram4_rdata),
        .I_sram5_rdata(io_sram5_rdata),
        .I_sram6_rdata(io_sram6_rdata),
        .I_sram7_rdata(io_sram7_rdata),
        // ixxx -> icache, dxxx -> dcache
        .O_sram_iaddr(iaddr),
        .O_sram_daddr(daddr),
        .O_sram_cen({io_sram7_cen,io_sram6_cen,io_sram5_cen,io_sram4_cen,io_sram3_cen,io_sram2_cen,io_sram1_cen,io_sram0_cen}),
        .O_sram_wen({io_sram7_wen,io_sram6_wen,io_sram5_wen,io_sram4_wen,io_sram3_wen,io_sram2_wen,io_sram1_wen,io_sram0_wen}),
        .O_sram0_wdata(io_sram0_wdata),
        .O_sram1_wdata(io_sram1_wdata),
        .O_sram2_wdata(io_sram2_wdata),
        .O_sram3_wdata(io_sram3_wdata),
        .O_sram4_wdata(io_sram4_wdata),
        .O_sram5_wdata(io_sram5_wdata),
        .O_sram6_wdata(io_sram6_wdata),
        .O_sram7_wdata(io_sram7_wdata),
        .O_sram0_wmask(io_sram0_wmask),
        .O_sram1_wmask(io_sram1_wmask),
        .O_sram2_wmask(io_sram2_wmask),
        .O_sram3_wmask(io_sram3_wmask),
        .O_sram4_wmask(io_sram4_wmask),
        .O_sram5_wmask(io_sram5_wmask),
        .O_sram6_wmask(io_sram6_wmask),
        .O_sram7_wmask(io_sram7_wmask),
        // mem data, w/r addr & req
        // axi interface(unused slave interface)
        .I_mem_rdata(io_master_rdata),
        .I_mem_rvalid(io_master_rvalid),
        .O_mem_rready(io_master_rready),
        .I_mem_rlast(io_master_rlast),
        //.I_mem_rid(io_master_rid),
        //.I_mem_rresp(io_master_rresp),

        .O_mem_araddr(io_master_araddr),
        .I_mem_arready(io_master_arready),
        .O_mem_arvalid(io_master_arvalid),
        .O_mem_arlen(io_master_arlen),
        .O_mem_arsize(io_master_arsize),
        //.O_mem_arid(io_master_arid),
        //.O_mem_arburst(io_master_arburst),

        .O_mem_wdata(io_master_wdata),
        .O_mem_wvalid(io_master_wvalid),
        .I_mem_wready(io_master_wready),
        .O_mem_wlast(io_master_wlast),
        .O_mem_wstrb(io_master_wstrb),

        .O_mem_awaddr(io_master_awaddr),
        .O_mem_awvalid(io_master_awvalid),
        .I_mem_awready(io_master_awready),
        .O_mem_awlen(io_master_awlen),
        .O_mem_awsize(io_master_awsize),
        //.O_mem_awid(io_master_awid),
        //.O_mem_awburst(io_master_awburst),

        .I_mem_bvalid(io_master_bvalid),
        .O_mem_bready(io_master_bready)
        //.I_mem_bid(io_master_bid),
        //.I_mem_bresp(io_master_bresp),
    );
endmodule
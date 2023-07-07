`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2022/12/01 10:58:43
// Design Name: 
// Module Name: ysyx_22040750_booth_mul_serial
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
// cen [7:0] for 8 bram, [3:0] for icache, [7:4] for dcache
// 3-8 decoder produce one-hot cen, {isdcache_op, index[6:5]} -> cen[7:0]
//////////////////////////////////////////////////////////////////////////////////


module ysyx_22040750_cache(
    input I_clk,
    input I_rst,
    // pc & pc valid
    input [31:0] I_cpu_pc,
    input I_cpu_pc_valid,
    output O_cpu_pc_ready,
    output O_cpu_mem_ready,
    // cpu addr & w/r req
    input [31:0] I_cpu_addr,
    input [7:0] I_cpu_wmask,
    input I_cpu_rd_req,
    input I_cpu_wr_req,
    input [63:0] I_cpu_wdata,
    // cache w/r addr & req, low level valid en
    input [127:0] I_sram0_rdata,
    input [127:0] I_sram1_rdata,
    input [127:0] I_sram2_rdata,
    input [127:0] I_sram3_rdata,
    input [127:0] I_sram4_rdata,
    input [127:0] I_sram5_rdata,
    input [127:0] I_sram6_rdata,
    input [127:0] I_sram7_rdata,
    // ixxx -> icache, dxxx -> dcache
    output [5:0] O_sram_iaddr,
    output [5:0] O_sram_daddr,
    output [7:0] O_sram_cen,
    output [7:0] O_sram_wen,
    output [127:0] O_sram0_wdata,
    output [127:0] O_sram1_wdata,
    output [127:0] O_sram2_wdata,
    output [127:0] O_sram3_wdata,
    output [127:0] O_sram4_wdata,
    output [127:0] O_sram5_wdata,
    output [127:0] O_sram6_wdata,
    output [127:0] O_sram7_wdata,
    output [127:0] O_sram0_wmask,
    output [127:0] O_sram1_wmask,
    output [127:0] O_sram2_wmask,
    output [127:0] O_sram3_wmask,
    output [127:0] O_sram4_wmask,
    output [127:0] O_sram5_wmask,
    output [127:0] O_sram6_wmask,
    output [127:0] O_sram7_wmask,
    // mem data, w/r addr & req
    // axi interface(unused slave interface)
    input [63:0] I_mem_rdata,
    input I_mem_rvalid,
    output O_mem_rready,
    input I_mem_rlast,

    output [31:0] O_mem_araddr,
    input I_mem_arready,
    output O_mem_arvalid,
    output [7:0] O_mem_arlen,
    output [2:0] O_mem_arsize,
    output [1:0] O_mem_arburst,

    output [63:0] O_mem_wdata,
    output O_mem_wvalid,
    input I_mem_wready,
    output O_mem_wlast,
    output [7:0] O_mem_wstrb,

    output [31:0] O_mem_awaddr,
    output O_mem_awvalid,
    input I_mem_awready,
    output [7:0] O_mem_awlen,
    output [2:0] O_mem_awsize,
    output [1:0] O_mem_awburst,

    input I_mem_bvalid,
    output O_mem_bready,
     // data & valid flag to cpu
    output [63:0] O_cpu_rdata,
    output [31:0] O_cpu_inst,
    output O_cpu_inst_valid,
    output O_cpu_rvalid,
    output O_cpu_bvalid
);
    // sram data & ctrl signal
    wire [3:0] icache_cen, icache_wen;
    wire [255:0] icache_way0_rdata, icache_way1_rdata;
    wire [255:0] icache_wdata, icache_wmask;
    wire [3:0] dcache_cen, dcache_wen;
    wire [255:0] dcache_way0_rdata, dcache_way1_rdata;
    wire [255:0] dcache_wdata, dcache_wmask;
    // axi data & ctrl signal
    // icache will not use w & aw & b channel
    // r channel
    wire [63:0] axi_icache_rdata, axi_dcache_rdata;
    wire axi_icache_rready, axi_dcache_rready;
    wire axi_icache_rvalid, axi_dcache_rvalid;
    wire axi_icache_rlast, axi_dcache_rlast;
    // ar channel
    wire [31:0] axi_icache_araddr, axi_dcache_araddr;
    wire axi_icache_arready, axi_dcache_arready;
    wire axi_icache_arvalid, axi_dcache_arvalid;
    wire [7:0] axi_icache_arlen, axi_dcache_arlen;
    wire [2:0] axi_icache_arsize, axi_dcache_arsize;
    wire [1:0] axi_icache_arburst, axi_dcache_arburst;
    // w channel
    wire [63:0] axi_dcache_wdata;
    wire axi_dcache_wvalid, axi_dcache_wready, axi_dcache_wlast;
    wire [7:0] axi_dcache_wstrb;
    // aw channel
    wire [31:0] axi_dcache_awaddr;
    wire axi_dcache_awvalid, axi_dcache_awready;
    wire [7:0] axi_dcache_awlen;
    wire [2:0] axi_dcache_awsize;
    wire [1:0] axi_dcache_awburst;
    // b channel
    wire axi_dcache_bvalid, axi_dcache_bready;

    assign O_sram_cen = {dcache_cen, icache_cen};
    assign O_sram_wen = {dcache_wen, icache_wen};
    assign icache_way0_rdata = {I_sram1_rdata, I_sram0_rdata};
    assign icache_way1_rdata = {I_sram3_rdata, I_sram2_rdata};
    assign dcache_way0_rdata = {I_sram5_rdata, I_sram4_rdata};
    assign dcache_way1_rdata = {I_sram7_rdata, I_sram6_rdata};
    // wdata & wmask is boardcasted to sram, enabled by wen/cen
    assign {O_sram1_wdata, O_sram0_wdata} = icache_wdata;
    assign {O_sram3_wdata, O_sram2_wdata} = icache_wdata;
    assign {O_sram1_wmask, O_sram0_wmask} = icache_wmask;
    assign {O_sram3_wmask, O_sram2_wmask} = icache_wmask;
    assign {O_sram5_wdata, O_sram4_wdata} = dcache_wdata;
    assign {O_sram7_wdata, O_sram6_wdata} = dcache_wdata;
    assign {O_sram5_wmask, O_sram4_wmask} = dcache_wmask;
    assign {O_sram7_wmask, O_sram6_wmask} = dcache_wmask;
    // mem w signal, used by dcache only
    assign O_mem_wdata = axi_dcache_wdata;
    assign O_mem_wvalid = axi_dcache_wvalid;
    assign axi_dcache_wready = I_mem_wready;
    assign O_mem_wlast = axi_dcache_wlast;
    assign O_mem_wstrb = axi_dcache_wstrb;
    assign O_mem_awaddr = axi_dcache_awaddr;
    assign O_mem_awvalid = axi_dcache_awvalid;
    assign axi_dcache_awready = I_mem_awready;
    assign O_mem_awlen = axi_dcache_awlen;
    assign O_mem_awsize = axi_dcache_awsize;
    assign O_mem_awburst = axi_dcache_awburst;
    assign axi_dcache_bvalid = I_mem_bvalid;
    assign O_mem_bready = axi_dcache_bready;
    // axi crossbar(simplified for ar & r ch only)
    ysyx_22040750_axi_crossbar crossbar_e(
        .I_clk(I_clk),
        .I_rst(I_rst),
        // to axi bus
        .I_axi_rdata(I_mem_rdata),
        .I_axi_rvalid(I_mem_rvalid),
        .I_axi_rlast(I_mem_rlast),
        .O_axi_rready(O_mem_rready),
        .O_axi_araddr(O_mem_araddr),
        .I_axi_arready(I_mem_arready),
        .O_axi_arvalid(O_mem_arvalid),
        .O_axi_arlen(O_mem_arlen),
        .O_axi_arsize(O_mem_arsize),
        .O_axi_arburst(O_mem_arburst),
        // ch0: icache
        .O_ch0_rdata(axi_icache_rdata),
        .O_ch0_rvalid(axi_icache_rvalid),
        .O_ch0_rlast(axi_icache_rlast),
        .I_ch0_rready(axi_icache_rready),
        .I_ch0_araddr(axi_icache_araddr),
        .O_ch0_arready(axi_icache_arready),
        .I_ch0_arvalid(axi_icache_arvalid),
        .I_ch0_arlen(axi_icache_arlen),
        .I_ch0_arsize(axi_icache_arsize),
        .I_ch0_arburst(axi_icache_arburst),
        // ch1: dcache
        .O_ch1_rdata(axi_dcache_rdata),
        .O_ch1_rvalid(axi_dcache_rvalid),
        .O_ch1_rlast(axi_dcache_rlast),
        .I_ch1_rready(axi_dcache_rready),
        .I_ch1_araddr(axi_dcache_araddr),
        .O_ch1_arready(axi_dcache_arready),
        .I_ch1_arvalid(axi_dcache_arvalid),
        .I_ch1_arlen(axi_dcache_arlen),
        .I_ch1_arsize(axi_dcache_arsize),
        .I_ch1_arburst(axi_dcache_arburst)
    );
    // icache
    ysyx_22040750_icachectrl icache_e(
        .I_clk(I_clk),
        .I_rst(I_rst),
        .I_cpu_addr(I_cpu_pc),
        .I_cpu_rd_req(I_cpu_pc_valid),
        .O_cpu_rd_ready(O_cpu_pc_ready),
        .I_way0_rdata(icache_way0_rdata),
        .I_way1_rdata(icache_way1_rdata),
        .O_sram_addr(O_sram_iaddr),
        .O_sram_cen(icache_cen),
        .O_sram_wen(icache_wen),
        .O_sram_wdata(icache_wdata),
        .O_sram_wmask(icache_wmask),
        .I_mem_rdata(axi_icache_rdata),
        .I_mem_arready(axi_icache_arready),
        .I_mem_rvalid(axi_icache_rvalid),
        .I_mem_rlast(axi_icache_rlast),
        .O_mem_araddr(axi_icache_araddr),
        .O_mem_arvalid(axi_icache_arvalid),
        .O_mem_rready(axi_icache_rready),
        .O_mem_arlen(axi_icache_arlen),
        .O_mem_arsize(axi_icache_arsize),
        .O_mem_arburst(axi_icache_arburst),
        // data & valid flag to cpu
        .O_cpu_inst(O_cpu_inst),
        .O_cpu_rvalid(O_cpu_inst_valid)
    );
    // dcache
    ysyx_22040750_dcachectrl dcache_e(
        .I_clk(I_clk),
        .I_rst(I_rst),
        .I_cpu_addr(I_cpu_addr),
        .I_cpu_data(I_cpu_wdata),
        .I_cpu_wmask(I_cpu_wmask),
        .I_cpu_rd_req(I_cpu_rd_req),
        .I_cpu_wr_req(I_cpu_wr_req),
        .O_cpu_mem_ready(O_cpu_mem_ready),
        .I_way0_rdata(dcache_way0_rdata),
        .I_way1_rdata(dcache_way1_rdata),
        .O_sram_addr(O_sram_daddr),
        .O_sram_cen(dcache_cen),
        .O_sram_wen(dcache_wen),
        .O_sram_wdata(dcache_wdata),
        .O_sram_wmask(dcache_wmask),
        .I_mem_rdata(axi_dcache_rdata),
        .I_mem_arready(axi_dcache_arready),
        .I_mem_rvalid(axi_dcache_rvalid),
        .I_mem_rlast(axi_dcache_rlast),
        .O_mem_araddr(axi_dcache_araddr),
        .O_mem_arvalid(axi_dcache_arvalid),
        .O_mem_rready(axi_dcache_rready),
        .O_mem_arlen(axi_dcache_arlen),
        .O_mem_arsize(axi_dcache_arsize),
        .O_mem_arburst(axi_dcache_arburst),
        .I_mem_awready(axi_dcache_awready),
        .I_mem_wready(axi_dcache_wready),
        .I_mem_bvalid(axi_dcache_bvalid),
        .O_mem_wdata(axi_dcache_wdata),
        .O_mem_awaddr(axi_dcache_awaddr),
        .O_mem_awvalid(axi_dcache_awvalid),
        .O_mem_wvalid(axi_dcache_wvalid),
        .O_mem_bready(axi_dcache_bready),
        .O_mem_wlast(axi_dcache_wlast),
        .O_mem_awlen(axi_dcache_awlen),
        .O_mem_awsize(axi_dcache_awsize),
        .O_mem_awburst(axi_dcache_awburst),
        .O_mem_wstrb(axi_dcache_wstrb),
        // data & valid flag to cpu
        .O_cpu_data(O_cpu_rdata),
        .O_cpu_rvalid(O_cpu_rvalid),
        .O_cpu_bvalid(O_cpu_bvalid)
    );
endmodule
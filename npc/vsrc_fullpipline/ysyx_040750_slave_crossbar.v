`timescale 1ns/1ps

module ysyx_040750_slave_crossbar(
    input I_clk,
    input I_rst,
    // interface with cache
    output [63:0] O_cache_rdata,
    output O_cache_rvalid,
    output O_cache_rlast,
    input I_cache_rready,
    input [31:0] I_cache_araddr,
    output O_cache_arready,
    input I_cache_arvalid,
    input [7:0] I_cache_arlen,
    input [2:0] I_cache_arsize,
    input [1:0] I_cache_arburst,
    input [63:0] I_cache_wdata,
    input I_cache_wvalid,
    output O_cache_wready,
    input I_cache_wlast,
    input [7:0] I_cache_wstrb,
    input [31:0] I_cache_awaddr,
    input I_cache_awvalid,
    output O_cache_awready,
    input [7:0] I_cache_awlen,
    input [2:0] I_cache_awsize,
    input [1:0] I_cache_awburst,
    output O_cache_bvalid,
    input I_cache_bready,
    // with axi bus
    input [63:0] I_bus_rdata,
    input I_bus_rvalid,
    input I_bus_rlast,
    output O_bus_rready,
    output [31:0] O_bus_araddr,
    input I_bus_arready,
    output O_bus_arvalid,
    output [7:0] O_bus_arlen,
    output [2:0] O_bus_arsize,
    output [1:0] O_bus_arburst,
    output [63:0] O_bus_wdata,
    output O_bus_wvalid,
    input I_bus_wready,
    output O_bus_wlast,
    output [7:0] O_bus_wstrb,
    output [31:0] O_bus_awaddr,
    output O_bus_awvalid,
    input I_bus_awready,
    output [7:0] O_bus_awlen,
    output [2:0] O_bus_awsize,
    output [1:0] O_bus_awburst,
    input I_bus_bvalid,
    output O_bus_bready,
    // with clint
    // AXI4-Lite interface
    // rlast for cache equal to rvalid
    input [63:0] I_clint_rdata,
    input I_clint_rvalid,
    // input I_clint_rlast,
    output O_clint_rready,
    output [31:0] O_clint_araddr,
    input I_clint_arready,
    output O_clint_arvalid,
    // output [7:0] O_clint_arlen,
    // output [2:0] O_clint_arsize,
    // output [1:0] O_clint_arburst,
    output [63:0] O_clint_wdata,
    output O_clint_wvalid,
    input I_clint_wready,
    // output O_clint_wlast,
    output [7:0] O_clint_wstrb,
    output [31:0] O_clint_awaddr,
    output O_clint_awvalid,
    input I_clint_awready,
    // output [7:0] O_clint_awlen,
    // output [2:0] O_clint_awsize,
    // output [1:0] O_clint_awburst,
    input I_clint_bvalid,
    output O_clint_bready
);
    parameter CLINT_START  = 'h02000000;
    parameter CLINT_END = 'h0200C000;
    wire clint_ar_flag, clint_aw_flag, bus_ar_flag, bus_aw_flag;
    wire clint_ar_handshake, clint_aw_handshake, bus_ar_handshake, bus_aw_handshake;
    // indicate last rd data handshake from bus
    // clint only return single data beats
    wire bus_rlasthandshake, clint_rlasthandshake;
    reg clint_rd_process, bus_rd_process;
    reg clint_wr_process, bus_wr_process;
    assign clint_ar_flag = (I_cache_araddr >= CLINT_START) && (I_cache_araddr < CLINT_END);
    assign clint_aw_flag = (I_cache_awaddr >= CLINT_START) && (I_cache_awaddr < CLINT_END);
    assign bus_ar_flag = ~clint_ar_flag;
    assign bus_aw_flag = ~clint_aw_flag;
    assign clint_ar_handshake = I_clint_arready && O_clint_arvalid;
    assign clint_aw_handshake = I_clint_awready && O_clint_awvalid;
    assign bus_ar_handshake = I_bus_arready && O_bus_arvalid;
    assign bus_aw_handshake = I_bus_awready && O_bus_awvalid;
    assign clint_rlasthandshake = I_clint_rvalid && O_clint_rready;
    assign bus_rlasthandshake = I_bus_rvalid && O_bus_rready && I_bus_rlast;
    always @(posedge I_clk)
        if(I_rst)
            clint_rd_process <= 0;
        else if(clint_ar_handshake)
            clint_rd_process <= 1;
        else if(clint_rlasthandshake)// bready is always 1
            clint_rd_process <= 0;
        else
            clint_rd_process <= clint_rd_process;
    always @(posedge I_clk)
        if(I_rst)
            bus_rd_process <= 0;
        else if(bus_ar_handshake)
            bus_rd_process <= 1;
        else if(bus_rlasthandshake)// bready is always 1
            bus_rd_process <= 0;
        else
            bus_rd_process <= bus_rd_process;
    always @(posedge I_clk)
        if(I_rst)
            clint_wr_process <= 0;
        else if(clint_aw_handshake)
            clint_wr_process <= 1;
        else if(I_clint_bvalid)// bready is always 1
            clint_wr_process <= 0;
        else
            clint_wr_process <= clint_wr_process;
    always @(posedge I_clk)
        if(I_rst)
            bus_wr_process <= 0;
        else if(bus_aw_handshake)
            bus_wr_process <= 1;
        else if(I_bus_bvalid)// bready is always 1
            bus_wr_process <= 0;
        else
            bus_wr_process <= bus_wr_process;
    // always @(posedge I_clk)
    //     if(I_rst)
    //         clint_process <= 0;
    //     else if(clint_ar_handshake | clint_aw_handshake)
    //         clint_process <= 1;
    //     else if(clint_rlasthandshake | I_clint_bvalid)// bready is always 1
    //         clint_process <= 0;
    //     else
    //         clint_process <= clint_process;
    // always @(posedge I_clk)
    //     if(I_rst)
    //         bus_process <= 0;
    //     else if(bus_ar_handshake | bus_aw_handshake)
    //         bus_process <= 1;
    //     else if(bus_rlasthandshake | I_bus_bvalid)// bready is always 1
    //         bus_process <= 0;
    //     else
    //         bus_process <= bus_process;
    // signal boardcast, clint don't have last signal
    // ar process, notice flag here is combinational logic
    assign O_bus_araddr = bus_ar_flag ? I_cache_araddr : 0;
    assign O_bus_arburst = bus_ar_flag ? I_cache_arburst : 0;
    assign O_bus_arlen = bus_ar_flag ? I_cache_arlen : 0;
    assign O_bus_arsize = bus_ar_flag ? I_cache_arsize : 0;
    assign O_bus_arvalid = bus_ar_flag & I_cache_arvalid;
    assign O_clint_araddr = clint_ar_flag ? I_cache_araddr : 0;
    assign O_clint_arvalid = clint_ar_flag & I_cache_arvalid;
    assign O_cache_arready = clint_ar_flag ? I_clint_arready : I_bus_arready;
    // r process
    assign O_bus_rready = I_cache_rready & bus_rd_process;
    assign O_clint_rready = I_cache_rready & clint_rd_process;
    assign O_cache_rdata = ({64{clint_rd_process}} & I_clint_rdata) | ({64{bus_rd_process}} & I_bus_rdata);
    assign O_cache_rvalid = (clint_rd_process & I_clint_rvalid) | (bus_rd_process & I_bus_rvalid);
    assign O_cache_rlast = (clint_rd_process & I_clint_rvalid) | (bus_rd_process & I_bus_rlast);
    // aw process
    assign O_bus_awaddr = bus_aw_flag ? I_cache_awaddr : 0;
    assign O_bus_awburst = bus_aw_flag ? I_cache_awburst : 0;
    assign O_bus_awlen = bus_aw_flag ? I_cache_awlen : 0;
    assign O_bus_awsize = bus_aw_flag ? I_cache_awsize : 0;
    assign O_bus_awvalid = bus_aw_flag & I_cache_awvalid;
    assign O_clint_awaddr = clint_aw_flag ? I_cache_awaddr : 0;
    assign O_clint_awvalid = clint_aw_flag & I_cache_awvalid;
    assign O_cache_awready = clint_aw_flag ? I_clint_awready : I_bus_awready;
    // w process
    assign O_bus_wdata = bus_wr_process ? I_cache_wdata : 0;
    assign O_bus_wstrb = bus_wr_process ? I_cache_wstrb : 0;
    assign O_bus_wvalid = bus_wr_process & I_cache_wvalid;
    assign O_bus_wlast = bus_wr_process & I_cache_wlast;
    assign O_clint_wdata = clint_wr_process ? I_cache_wdata : 0;
    assign O_clint_wstrb = clint_wr_process ? I_cache_wstrb : 0;
    assign O_clint_wvalid = clint_wr_process & I_cache_wvalid;
    assign O_cache_wready = (clint_wr_process & I_clint_wready) | (bus_wr_process & I_bus_wready);
    // b process
    assign O_bus_bready = bus_wr_process & I_cache_bready;
    assign O_clint_bready = clint_wr_process & I_cache_bready;
    assign O_cache_bvalid = (clint_wr_process & I_clint_bvalid) | (bus_wr_process & I_bus_bvalid);
endmodule
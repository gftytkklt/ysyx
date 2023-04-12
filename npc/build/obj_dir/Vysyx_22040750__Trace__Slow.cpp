// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_22040750__Syms.h"


void Vysyx_22040750___024root__traceInitSub0(Vysyx_22040750___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vysyx_22040750___024root__traceInitTop(Vysyx_22040750___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040750__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vysyx_22040750___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vysyx_22040750___024root__traceInitSub0(Vysyx_22040750___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040750__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+821,"clock", false,-1);
        tracep->declBit(c+822,"reset", false,-1);
        tracep->declBit(c+823,"io_interrupt", false,-1);
        tracep->declBit(c+824,"io_master_awready", false,-1);
        tracep->declBit(c+825,"io_master_awvalid", false,-1);
        tracep->declBus(c+826,"io_master_awid", false,-1, 3,0);
        tracep->declBus(c+827,"io_master_awaddr", false,-1, 31,0);
        tracep->declBus(c+828,"io_master_awlen", false,-1, 7,0);
        tracep->declBus(c+829,"io_master_awsize", false,-1, 2,0);
        tracep->declBus(c+830,"io_master_awburst", false,-1, 1,0);
        tracep->declBit(c+831,"io_master_wready", false,-1);
        tracep->declBit(c+832,"io_master_wvalid", false,-1);
        tracep->declQuad(c+833,"io_master_wdata", false,-1, 63,0);
        tracep->declBus(c+835,"io_master_wstrb", false,-1, 7,0);
        tracep->declBit(c+836,"io_master_wlast", false,-1);
        tracep->declBit(c+837,"io_master_bready", false,-1);
        tracep->declBit(c+838,"io_master_bvalid", false,-1);
        tracep->declBus(c+839,"io_master_bid", false,-1, 3,0);
        tracep->declBus(c+840,"io_master_bresp", false,-1, 1,0);
        tracep->declBit(c+841,"io_master_arready", false,-1);
        tracep->declBit(c+842,"io_master_arvalid", false,-1);
        tracep->declBus(c+843,"io_master_arid", false,-1, 3,0);
        tracep->declBus(c+844,"io_master_araddr", false,-1, 31,0);
        tracep->declBus(c+845,"io_master_arlen", false,-1, 7,0);
        tracep->declBus(c+846,"io_master_arsize", false,-1, 2,0);
        tracep->declBus(c+847,"io_master_arburst", false,-1, 1,0);
        tracep->declBit(c+848,"io_master_rready", false,-1);
        tracep->declBit(c+849,"io_master_rvalid", false,-1);
        tracep->declBus(c+850,"io_master_rid", false,-1, 3,0);
        tracep->declBus(c+851,"io_master_rresp", false,-1, 1,0);
        tracep->declQuad(c+852,"io_master_rdata", false,-1, 63,0);
        tracep->declBit(c+854,"io_master_rlast", false,-1);
        tracep->declBit(c+855,"io_slave_awready", false,-1);
        tracep->declBit(c+856,"io_slave_awvalid", false,-1);
        tracep->declBus(c+857,"io_slave_awid", false,-1, 3,0);
        tracep->declBus(c+858,"io_slave_awaddr", false,-1, 31,0);
        tracep->declBus(c+859,"io_slave_awlen", false,-1, 7,0);
        tracep->declBus(c+860,"io_slave_awsize", false,-1, 2,0);
        tracep->declBus(c+861,"io_slave_awburst", false,-1, 1,0);
        tracep->declBit(c+862,"io_slave_wready", false,-1);
        tracep->declBit(c+863,"io_slave_wvalid", false,-1);
        tracep->declQuad(c+864,"io_slave_wdata", false,-1, 63,0);
        tracep->declBus(c+866,"io_slave_wstrb", false,-1, 7,0);
        tracep->declBit(c+867,"io_slave_wlast", false,-1);
        tracep->declBit(c+868,"io_slave_bready", false,-1);
        tracep->declBit(c+869,"io_slave_bvalid", false,-1);
        tracep->declBus(c+870,"io_slave_bid", false,-1, 3,0);
        tracep->declBus(c+871,"io_slave_bresp", false,-1, 1,0);
        tracep->declBit(c+872,"io_slave_arready", false,-1);
        tracep->declBit(c+873,"io_slave_arvalid", false,-1);
        tracep->declBus(c+874,"io_slave_arid", false,-1, 3,0);
        tracep->declBus(c+875,"io_slave_araddr", false,-1, 31,0);
        tracep->declBus(c+876,"io_slave_arlen", false,-1, 7,0);
        tracep->declBus(c+877,"io_slave_arsize", false,-1, 2,0);
        tracep->declBus(c+878,"io_slave_arburst", false,-1, 1,0);
        tracep->declBit(c+879,"io_slave_rready", false,-1);
        tracep->declBit(c+880,"io_slave_rvalid", false,-1);
        tracep->declBus(c+881,"io_slave_rid", false,-1, 3,0);
        tracep->declBus(c+882,"io_slave_rresp", false,-1, 1,0);
        tracep->declQuad(c+883,"io_slave_rdata", false,-1, 63,0);
        tracep->declBit(c+885,"io_slave_rlast", false,-1);
        tracep->declBus(c+886,"io_sram0_addr", false,-1, 5,0);
        tracep->declBit(c+887,"io_sram0_cen", false,-1);
        tracep->declBit(c+888,"io_sram0_wen", false,-1);
        tracep->declArray(c+889,"io_sram0_wmask", false,-1, 127,0);
        tracep->declArray(c+893,"io_sram0_wdata", false,-1, 127,0);
        tracep->declArray(c+897,"io_sram0_rdata", false,-1, 127,0);
        tracep->declBus(c+901,"io_sram1_addr", false,-1, 5,0);
        tracep->declBit(c+902,"io_sram1_cen", false,-1);
        tracep->declBit(c+903,"io_sram1_wen", false,-1);
        tracep->declArray(c+904,"io_sram1_wmask", false,-1, 127,0);
        tracep->declArray(c+908,"io_sram1_wdata", false,-1, 127,0);
        tracep->declArray(c+912,"io_sram1_rdata", false,-1, 127,0);
        tracep->declBus(c+916,"io_sram2_addr", false,-1, 5,0);
        tracep->declBit(c+917,"io_sram2_cen", false,-1);
        tracep->declBit(c+918,"io_sram2_wen", false,-1);
        tracep->declArray(c+919,"io_sram2_wmask", false,-1, 127,0);
        tracep->declArray(c+923,"io_sram2_wdata", false,-1, 127,0);
        tracep->declArray(c+927,"io_sram2_rdata", false,-1, 127,0);
        tracep->declBus(c+931,"io_sram3_addr", false,-1, 5,0);
        tracep->declBit(c+932,"io_sram3_cen", false,-1);
        tracep->declBit(c+933,"io_sram3_wen", false,-1);
        tracep->declArray(c+934,"io_sram3_wmask", false,-1, 127,0);
        tracep->declArray(c+938,"io_sram3_wdata", false,-1, 127,0);
        tracep->declArray(c+942,"io_sram3_rdata", false,-1, 127,0);
        tracep->declBus(c+946,"io_sram4_addr", false,-1, 5,0);
        tracep->declBit(c+947,"io_sram4_cen", false,-1);
        tracep->declBit(c+948,"io_sram4_wen", false,-1);
        tracep->declArray(c+949,"io_sram4_wmask", false,-1, 127,0);
        tracep->declArray(c+953,"io_sram4_wdata", false,-1, 127,0);
        tracep->declArray(c+957,"io_sram4_rdata", false,-1, 127,0);
        tracep->declBus(c+961,"io_sram5_addr", false,-1, 5,0);
        tracep->declBit(c+962,"io_sram5_cen", false,-1);
        tracep->declBit(c+963,"io_sram5_wen", false,-1);
        tracep->declArray(c+964,"io_sram5_wmask", false,-1, 127,0);
        tracep->declArray(c+968,"io_sram5_wdata", false,-1, 127,0);
        tracep->declArray(c+972,"io_sram5_rdata", false,-1, 127,0);
        tracep->declBus(c+976,"io_sram6_addr", false,-1, 5,0);
        tracep->declBit(c+977,"io_sram6_cen", false,-1);
        tracep->declBit(c+978,"io_sram6_wen", false,-1);
        tracep->declArray(c+979,"io_sram6_wmask", false,-1, 127,0);
        tracep->declArray(c+983,"io_sram6_wdata", false,-1, 127,0);
        tracep->declArray(c+987,"io_sram6_rdata", false,-1, 127,0);
        tracep->declBus(c+991,"io_sram7_addr", false,-1, 5,0);
        tracep->declBit(c+992,"io_sram7_cen", false,-1);
        tracep->declBit(c+993,"io_sram7_wen", false,-1);
        tracep->declArray(c+994,"io_sram7_wmask", false,-1, 127,0);
        tracep->declArray(c+998,"io_sram7_wdata", false,-1, 127,0);
        tracep->declArray(c+1002,"io_sram7_rdata", false,-1, 127,0);
        tracep->declBit(c+821,"ysyx_22040750 clock", false,-1);
        tracep->declBit(c+822,"ysyx_22040750 reset", false,-1);
        tracep->declBit(c+823,"ysyx_22040750 io_interrupt", false,-1);
        tracep->declBit(c+824,"ysyx_22040750 io_master_awready", false,-1);
        tracep->declBit(c+825,"ysyx_22040750 io_master_awvalid", false,-1);
        tracep->declBus(c+826,"ysyx_22040750 io_master_awid", false,-1, 3,0);
        tracep->declBus(c+827,"ysyx_22040750 io_master_awaddr", false,-1, 31,0);
        tracep->declBus(c+828,"ysyx_22040750 io_master_awlen", false,-1, 7,0);
        tracep->declBus(c+829,"ysyx_22040750 io_master_awsize", false,-1, 2,0);
        tracep->declBus(c+830,"ysyx_22040750 io_master_awburst", false,-1, 1,0);
        tracep->declBit(c+831,"ysyx_22040750 io_master_wready", false,-1);
        tracep->declBit(c+832,"ysyx_22040750 io_master_wvalid", false,-1);
        tracep->declQuad(c+833,"ysyx_22040750 io_master_wdata", false,-1, 63,0);
        tracep->declBus(c+835,"ysyx_22040750 io_master_wstrb", false,-1, 7,0);
        tracep->declBit(c+836,"ysyx_22040750 io_master_wlast", false,-1);
        tracep->declBit(c+837,"ysyx_22040750 io_master_bready", false,-1);
        tracep->declBit(c+838,"ysyx_22040750 io_master_bvalid", false,-1);
        tracep->declBus(c+839,"ysyx_22040750 io_master_bid", false,-1, 3,0);
        tracep->declBus(c+840,"ysyx_22040750 io_master_bresp", false,-1, 1,0);
        tracep->declBit(c+841,"ysyx_22040750 io_master_arready", false,-1);
        tracep->declBit(c+842,"ysyx_22040750 io_master_arvalid", false,-1);
        tracep->declBus(c+843,"ysyx_22040750 io_master_arid", false,-1, 3,0);
        tracep->declBus(c+844,"ysyx_22040750 io_master_araddr", false,-1, 31,0);
        tracep->declBus(c+845,"ysyx_22040750 io_master_arlen", false,-1, 7,0);
        tracep->declBus(c+846,"ysyx_22040750 io_master_arsize", false,-1, 2,0);
        tracep->declBus(c+847,"ysyx_22040750 io_master_arburst", false,-1, 1,0);
        tracep->declBit(c+848,"ysyx_22040750 io_master_rready", false,-1);
        tracep->declBit(c+849,"ysyx_22040750 io_master_rvalid", false,-1);
        tracep->declBus(c+850,"ysyx_22040750 io_master_rid", false,-1, 3,0);
        tracep->declBus(c+851,"ysyx_22040750 io_master_rresp", false,-1, 1,0);
        tracep->declQuad(c+852,"ysyx_22040750 io_master_rdata", false,-1, 63,0);
        tracep->declBit(c+854,"ysyx_22040750 io_master_rlast", false,-1);
        tracep->declBit(c+855,"ysyx_22040750 io_slave_awready", false,-1);
        tracep->declBit(c+856,"ysyx_22040750 io_slave_awvalid", false,-1);
        tracep->declBus(c+857,"ysyx_22040750 io_slave_awid", false,-1, 3,0);
        tracep->declBus(c+858,"ysyx_22040750 io_slave_awaddr", false,-1, 31,0);
        tracep->declBus(c+859,"ysyx_22040750 io_slave_awlen", false,-1, 7,0);
        tracep->declBus(c+860,"ysyx_22040750 io_slave_awsize", false,-1, 2,0);
        tracep->declBus(c+861,"ysyx_22040750 io_slave_awburst", false,-1, 1,0);
        tracep->declBit(c+862,"ysyx_22040750 io_slave_wready", false,-1);
        tracep->declBit(c+863,"ysyx_22040750 io_slave_wvalid", false,-1);
        tracep->declQuad(c+864,"ysyx_22040750 io_slave_wdata", false,-1, 63,0);
        tracep->declBus(c+866,"ysyx_22040750 io_slave_wstrb", false,-1, 7,0);
        tracep->declBit(c+867,"ysyx_22040750 io_slave_wlast", false,-1);
        tracep->declBit(c+868,"ysyx_22040750 io_slave_bready", false,-1);
        tracep->declBit(c+869,"ysyx_22040750 io_slave_bvalid", false,-1);
        tracep->declBus(c+870,"ysyx_22040750 io_slave_bid", false,-1, 3,0);
        tracep->declBus(c+871,"ysyx_22040750 io_slave_bresp", false,-1, 1,0);
        tracep->declBit(c+872,"ysyx_22040750 io_slave_arready", false,-1);
        tracep->declBit(c+873,"ysyx_22040750 io_slave_arvalid", false,-1);
        tracep->declBus(c+874,"ysyx_22040750 io_slave_arid", false,-1, 3,0);
        tracep->declBus(c+875,"ysyx_22040750 io_slave_araddr", false,-1, 31,0);
        tracep->declBus(c+876,"ysyx_22040750 io_slave_arlen", false,-1, 7,0);
        tracep->declBus(c+877,"ysyx_22040750 io_slave_arsize", false,-1, 2,0);
        tracep->declBus(c+878,"ysyx_22040750 io_slave_arburst", false,-1, 1,0);
        tracep->declBit(c+879,"ysyx_22040750 io_slave_rready", false,-1);
        tracep->declBit(c+880,"ysyx_22040750 io_slave_rvalid", false,-1);
        tracep->declBus(c+881,"ysyx_22040750 io_slave_rid", false,-1, 3,0);
        tracep->declBus(c+882,"ysyx_22040750 io_slave_rresp", false,-1, 1,0);
        tracep->declQuad(c+883,"ysyx_22040750 io_slave_rdata", false,-1, 63,0);
        tracep->declBit(c+885,"ysyx_22040750 io_slave_rlast", false,-1);
        tracep->declBus(c+886,"ysyx_22040750 io_sram0_addr", false,-1, 5,0);
        tracep->declBit(c+887,"ysyx_22040750 io_sram0_cen", false,-1);
        tracep->declBit(c+888,"ysyx_22040750 io_sram0_wen", false,-1);
        tracep->declArray(c+889,"ysyx_22040750 io_sram0_wmask", false,-1, 127,0);
        tracep->declArray(c+893,"ysyx_22040750 io_sram0_wdata", false,-1, 127,0);
        tracep->declArray(c+897,"ysyx_22040750 io_sram0_rdata", false,-1, 127,0);
        tracep->declBus(c+901,"ysyx_22040750 io_sram1_addr", false,-1, 5,0);
        tracep->declBit(c+902,"ysyx_22040750 io_sram1_cen", false,-1);
        tracep->declBit(c+903,"ysyx_22040750 io_sram1_wen", false,-1);
        tracep->declArray(c+904,"ysyx_22040750 io_sram1_wmask", false,-1, 127,0);
        tracep->declArray(c+908,"ysyx_22040750 io_sram1_wdata", false,-1, 127,0);
        tracep->declArray(c+912,"ysyx_22040750 io_sram1_rdata", false,-1, 127,0);
        tracep->declBus(c+916,"ysyx_22040750 io_sram2_addr", false,-1, 5,0);
        tracep->declBit(c+917,"ysyx_22040750 io_sram2_cen", false,-1);
        tracep->declBit(c+918,"ysyx_22040750 io_sram2_wen", false,-1);
        tracep->declArray(c+919,"ysyx_22040750 io_sram2_wmask", false,-1, 127,0);
        tracep->declArray(c+923,"ysyx_22040750 io_sram2_wdata", false,-1, 127,0);
        tracep->declArray(c+927,"ysyx_22040750 io_sram2_rdata", false,-1, 127,0);
        tracep->declBus(c+931,"ysyx_22040750 io_sram3_addr", false,-1, 5,0);
        tracep->declBit(c+932,"ysyx_22040750 io_sram3_cen", false,-1);
        tracep->declBit(c+933,"ysyx_22040750 io_sram3_wen", false,-1);
        tracep->declArray(c+934,"ysyx_22040750 io_sram3_wmask", false,-1, 127,0);
        tracep->declArray(c+938,"ysyx_22040750 io_sram3_wdata", false,-1, 127,0);
        tracep->declArray(c+942,"ysyx_22040750 io_sram3_rdata", false,-1, 127,0);
        tracep->declBus(c+946,"ysyx_22040750 io_sram4_addr", false,-1, 5,0);
        tracep->declBit(c+947,"ysyx_22040750 io_sram4_cen", false,-1);
        tracep->declBit(c+948,"ysyx_22040750 io_sram4_wen", false,-1);
        tracep->declArray(c+949,"ysyx_22040750 io_sram4_wmask", false,-1, 127,0);
        tracep->declArray(c+953,"ysyx_22040750 io_sram4_wdata", false,-1, 127,0);
        tracep->declArray(c+957,"ysyx_22040750 io_sram4_rdata", false,-1, 127,0);
        tracep->declBus(c+961,"ysyx_22040750 io_sram5_addr", false,-1, 5,0);
        tracep->declBit(c+962,"ysyx_22040750 io_sram5_cen", false,-1);
        tracep->declBit(c+963,"ysyx_22040750 io_sram5_wen", false,-1);
        tracep->declArray(c+964,"ysyx_22040750 io_sram5_wmask", false,-1, 127,0);
        tracep->declArray(c+968,"ysyx_22040750 io_sram5_wdata", false,-1, 127,0);
        tracep->declArray(c+972,"ysyx_22040750 io_sram5_rdata", false,-1, 127,0);
        tracep->declBus(c+976,"ysyx_22040750 io_sram6_addr", false,-1, 5,0);
        tracep->declBit(c+977,"ysyx_22040750 io_sram6_cen", false,-1);
        tracep->declBit(c+978,"ysyx_22040750 io_sram6_wen", false,-1);
        tracep->declArray(c+979,"ysyx_22040750 io_sram6_wmask", false,-1, 127,0);
        tracep->declArray(c+983,"ysyx_22040750 io_sram6_wdata", false,-1, 127,0);
        tracep->declArray(c+987,"ysyx_22040750 io_sram6_rdata", false,-1, 127,0);
        tracep->declBus(c+991,"ysyx_22040750 io_sram7_addr", false,-1, 5,0);
        tracep->declBit(c+992,"ysyx_22040750 io_sram7_cen", false,-1);
        tracep->declBit(c+993,"ysyx_22040750 io_sram7_wen", false,-1);
        tracep->declArray(c+994,"ysyx_22040750 io_sram7_wmask", false,-1, 127,0);
        tracep->declArray(c+998,"ysyx_22040750 io_sram7_wdata", false,-1, 127,0);
        tracep->declArray(c+1002,"ysyx_22040750 io_sram7_rdata", false,-1, 127,0);
        tracep->declBus(c+1,"ysyx_22040750 iaddr", false,-1, 5,0);
        tracep->declBus(c+2,"ysyx_22040750 daddr", false,-1, 5,0);
        tracep->declBus(c+3,"ysyx_22040750 cpu_inst", false,-1, 31,0);
        tracep->declQuad(c+4,"ysyx_22040750 cpu_pc", false,-1, 63,0);
        tracep->declBit(c+6,"ysyx_22040750 cpu_inst_valid", false,-1);
        tracep->declBit(c+7,"ysyx_22040750 cpu_pc_valid", false,-1);
        tracep->declQuad(c+8,"ysyx_22040750 mem_addr", false,-1, 63,0);
        tracep->declBit(c+10,"ysyx_22040750 cpu_rreq", false,-1);
        tracep->declBit(c+11,"ysyx_22040750 cpu_wreq", false,-1);
        tracep->declQuad(c+12,"ysyx_22040750 mem_rdata", false,-1, 63,0);
        tracep->declQuad(c+14,"ysyx_22040750 mem_wdata", false,-1, 63,0);
        tracep->declBit(c+16,"ysyx_22040750 mem_rvalid", false,-1);
        tracep->declBit(c+17,"ysyx_22040750 mem_bvalid", false,-1);
        tracep->declBus(c+18,"ysyx_22040750 cpu_wmask", false,-1, 7,0);
        tracep->declBit(c+821,"ysyx_22040750 cpu_core_e I_sys_clk", false,-1);
        tracep->declBit(c+822,"ysyx_22040750 cpu_core_e I_rst", false,-1);
        tracep->declBus(c+3,"ysyx_22040750 cpu_core_e I_inst", false,-1, 31,0);
        tracep->declBit(c+6,"ysyx_22040750 cpu_core_e I_inst_valid", false,-1);
        tracep->declQuad(c+4,"ysyx_22040750 cpu_core_e O_pc", false,-1, 63,0);
        tracep->declBit(c+7,"ysyx_22040750 cpu_core_e O_pc_valid", false,-1);
        tracep->declQuad(c+8,"ysyx_22040750 cpu_core_e O_mem_addr", false,-1, 63,0);
        tracep->declBit(c+10,"ysyx_22040750 cpu_core_e O_mem_rd_en", false,-1);
        tracep->declBit(c+11,"ysyx_22040750 cpu_core_e O_mem_wen", false,-1);
        tracep->declQuad(c+12,"ysyx_22040750 cpu_core_e I_mem_rd_data", false,-1, 63,0);
        tracep->declBit(c+16,"ysyx_22040750 cpu_core_e I_mem_rd_data_valid", false,-1);
        tracep->declBit(c+17,"ysyx_22040750 cpu_core_e I_mem_wr_data_valid", false,-1);
        tracep->declQuad(c+14,"ysyx_22040750 cpu_core_e O_mem_wr_data", false,-1, 63,0);
        tracep->declBus(c+18,"ysyx_22040750 cpu_core_e O_mem_wr_strb", false,-1, 7,0);
        tracep->declQuad(c+19,"ysyx_22040750 cpu_core_e current_pc", false,-1, 63,0);
        tracep->declQuad(c+4,"ysyx_22040750 cpu_core_e dnpc", false,-1, 63,0);
        tracep->declQuad(c+21,"ysyx_22040750 cpu_core_e snpc", false,-1, 63,0);
        tracep->declBus(c+23,"ysyx_22040750 cpu_core_e current_inst", false,-1, 31,0);
        tracep->declQuad(c+24,"ysyx_22040750 cpu_core_e imm", false,-1, 63,0);
        tracep->declQuad(c+26,"ysyx_22040750 cpu_core_e wr_data", false,-1, 63,0);
        tracep->declQuad(c+28,"ysyx_22040750 cpu_core_e rs1_data", false,-1, 63,0);
        tracep->declQuad(c+30,"ysyx_22040750 cpu_core_e rs2_data", false,-1, 63,0);
        tracep->declQuad(c+32,"ysyx_22040750 cpu_core_e alu_op1", false,-1, 63,0);
        tracep->declQuad(c+34,"ysyx_22040750 cpu_core_e alu_op2", false,-1, 63,0);
        tracep->declQuad(c+36,"ysyx_22040750 cpu_core_e alu_out", false,-1, 63,0);
        tracep->declQuad(c+38,"ysyx_22040750 cpu_core_e mem_in", false,-1, 63,0);
        tracep->declQuad(c+40,"ysyx_22040750 cpu_core_e mem_out", false,-1, 63,0);
        tracep->declQuad(c+42,"ysyx_22040750 cpu_core_e mem_addr", false,-1, 63,0);
        tracep->declQuad(c+44,"ysyx_22040750 cpu_core_e csr_rd_data", false,-1, 63,0);
        tracep->declQuad(c+46,"ysyx_22040750 cpu_core_e alu_csr_data", false,-1, 63,0);
        tracep->declBus(c+48,"ysyx_22040750 cpu_core_e rs1_addr", false,-1, 4,0);
        tracep->declBus(c+49,"ysyx_22040750 cpu_core_e rs2_addr", false,-1, 4,0);
        tracep->declBus(c+50,"ysyx_22040750 cpu_core_e rd_addr", false,-1, 4,0);
        tracep->declBus(c+51,"ysyx_22040750 cpu_core_e dnpc_sel", false,-1, 4,0);
        tracep->declBus(c+52,"ysyx_22040750 cpu_core_e regin_sel", false,-1, 2,0);
        tracep->declBus(c+53,"ysyx_22040750 cpu_core_e opnum1_sel", false,-1, 2,0);
        tracep->declBus(c+54,"ysyx_22040750 cpu_core_e opnum2_sel", false,-1, 2,0);
        tracep->declBus(c+55,"ysyx_22040750 cpu_core_e alu_op_sel", false,-1, 14,0);
        tracep->declBus(c+56,"ysyx_22040750 cpu_core_e mem_wstrb", false,-1, 7,0);
        tracep->declBus(c+57,"ysyx_22040750 cpu_core_e mem_rstrb", false,-1, 8,0);
        tracep->declBit(c+58,"ysyx_22040750 cpu_core_e reg_wen", false,-1);
        tracep->declBit(c+59,"ysyx_22040750 cpu_core_e mem_wen", false,-1);
        tracep->declBit(c+60,"ysyx_22040750 cpu_core_e word_op_mask", false,-1);
        tracep->declBus(c+61,"ysyx_22040750 cpu_core_e alu_op_sext", false,-1, 1,0);
        tracep->declBus(c+62,"ysyx_22040750 cpu_core_e csr_addr", false,-1, 11,0);
        tracep->declBit(c+63,"ysyx_22040750 cpu_core_e csr_wen", false,-1);
        tracep->declBit(c+64,"ysyx_22040750 cpu_core_e csr_intr", false,-1);
        tracep->declBit(c+65,"ysyx_22040750 cpu_core_e csr_mret", false,-1);
        tracep->declBus(c+66,"ysyx_22040750 cpu_core_e csr_op_sel", false,-1, 6,0);
        tracep->declBus(c+48,"ysyx_22040750 cpu_core_e csr_uimm", false,-1, 4,0);
        tracep->declQuad(c+67,"ysyx_22040750 cpu_core_e csr_intr_no", false,-1, 63,0);
        tracep->declBit(c+69,"ysyx_22040750 cpu_core_e IF_valid", false,-1);
        tracep->declQuad(c+70,"ysyx_22040750 cpu_core_e IF_ID_pc", false,-1, 63,0);
        tracep->declBus(c+72,"ysyx_22040750 cpu_core_e IF_ID_inst", false,-1, 31,0);
        tracep->declBit(c+73,"ysyx_22040750 cpu_core_e IF_ID_allowin", false,-1);
        tracep->declBit(c+74,"ysyx_22040750 cpu_core_e IF_ID_valid", false,-1);
        tracep->declBit(c+75,"ysyx_22040750 cpu_core_e IF_ID_stall", false,-1);
        tracep->declBit(c+76,"ysyx_22040750 cpu_core_e IF_ID_bubble", false,-1);
        tracep->declBit(c+77,"ysyx_22040750 cpu_core_e IF_ID_input_valid", false,-1);
        tracep->declQuad(c+78,"ysyx_22040750 cpu_core_e ID_EX_imm", false,-1, 63,0);
        tracep->declQuad(c+80,"ysyx_22040750 cpu_core_e ID_EX_pc", false,-1, 63,0);
        tracep->declQuad(c+82,"ysyx_22040750 cpu_core_e ID_EX_rs1", false,-1, 63,0);
        tracep->declQuad(c+84,"ysyx_22040750 cpu_core_e ID_EX_rs2", false,-1, 63,0);
        tracep->declQuad(c+86,"ysyx_22040750 cpu_core_e ID_EX_csr", false,-1, 63,0);
        tracep->declBus(c+88,"ysyx_22040750 cpu_core_e ID_EX_rd_addr", false,-1, 4,0);
        tracep->declBus(c+89,"ysyx_22040750 cpu_core_e ID_EX_wstrb", false,-1, 7,0);
        tracep->declBus(c+90,"ysyx_22040750 cpu_core_e ID_EX_rstrb", false,-1, 8,0);
        tracep->declBus(c+91,"ysyx_22040750 cpu_core_e ID_EX_op2_sel", false,-1, 2,0);
        tracep->declBus(c+92,"ysyx_22040750 cpu_core_e ID_EX_op1_sel", false,-1, 2,0);
        tracep->declBus(c+93,"ysyx_22040750 cpu_core_e ID_EX_regin_sel", false,-1, 2,0);
        tracep->declBus(c+94,"ysyx_22040750 cpu_core_e ID_EX_alu_sext", false,-1, 1,0);
        tracep->declBus(c+95,"ysyx_22040750 cpu_core_e ID_EX_alu_op_sel", false,-1, 14,0);
        tracep->declBit(c+96,"ysyx_22040750 cpu_core_e ID_EX_reg_wen", false,-1);
        tracep->declBit(c+97,"ysyx_22040750 cpu_core_e ID_EX_mem_wen", false,-1);
        tracep->declBit(c+98,"ysyx_22040750 cpu_core_e ID_EX_word_op_mask", false,-1);
        tracep->declBit(c+99,"ysyx_22040750 cpu_core_e ID_EX_valid", false,-1);
        tracep->declBit(c+100,"ysyx_22040750 cpu_core_e ID_EX_allowin", false,-1);
        tracep->declBus(c+101,"ysyx_22040750 cpu_core_e ID_EX_stall", false,-1, 1,0);
        tracep->declBus(c+102,"ysyx_22040750 cpu_core_e ID_EX_inst", false,-1, 31,0);
        tracep->declBit(c+103,"ysyx_22040750 cpu_core_e ID_EX_bubble", false,-1);
        tracep->declBit(c+104,"ysyx_22040750 cpu_core_e ID_EX_input_valid", false,-1);
        tracep->declBit(c+105,"ysyx_22040750 cpu_core_e ID_EX_alu_multicycle", false,-1);
        tracep->declBit(c+106,"ysyx_22040750 cpu_core_e alu_out_valid", false,-1);
        tracep->declBus(c+107,"ysyx_22040750 cpu_core_e ID_EX_csr_addr", false,-1, 11,0);
        tracep->declBit(c+108,"ysyx_22040750 cpu_core_e ID_EX_csr_wen", false,-1);
        tracep->declBit(c+109,"ysyx_22040750 cpu_core_e ID_EX_csr_intr", false,-1);
        tracep->declBit(c+110,"ysyx_22040750 cpu_core_e ID_EX_csr_mret", false,-1);
        tracep->declBus(c+111,"ysyx_22040750 cpu_core_e ID_EX_csr_op_sel", false,-1, 6,0);
        tracep->declBus(c+112,"ysyx_22040750 cpu_core_e ID_EX_csr_uimm", false,-1, 4,0);
        tracep->declQuad(c+113,"ysyx_22040750 cpu_core_e ID_EX_csr_intr_no", false,-1, 63,0);
        tracep->declBit(c+115,"ysyx_22040750 cpu_core_e EX_MEM_valid", false,-1);
        tracep->declBus(c+116,"ysyx_22040750 cpu_core_e EX_MEM_rstrb", false,-1, 8,0);
        tracep->declBus(c+117,"ysyx_22040750 cpu_core_e EX_MEM_wstrb", false,-1, 7,0);
        tracep->declQuad(c+118,"ysyx_22040750 cpu_core_e EX_MEM_alu_out", false,-1, 63,0);
        tracep->declQuad(c+8,"ysyx_22040750 cpu_core_e EX_MEM_mem_addr", false,-1, 63,0);
        tracep->declQuad(c+40,"ysyx_22040750 cpu_core_e EX_MEM_rs2", false,-1, 63,0);
        tracep->declQuad(c+120,"ysyx_22040750 cpu_core_e EX_MEM_csr", false,-1, 63,0);
        tracep->declBit(c+122,"ysyx_22040750 cpu_core_e EX_MEM_mem_wen", false,-1);
        tracep->declBit(c+10,"ysyx_22040750 cpu_core_e EX_MEM_mem_rd_en", false,-1);
        tracep->declBit(c+11,"ysyx_22040750 cpu_core_e EX_MEM_mem_wr_en", false,-1);
        tracep->declQuad(c+123,"ysyx_22040750 cpu_core_e EX_MEM_pc", false,-1, 63,0);
        tracep->declQuad(c+1027,"ysyx_22040750 cpu_core_e EX_MEM_mem_data", false,-1, 63,0);
        tracep->declBit(c+125,"ysyx_22040750 cpu_core_e EX_MEM_reg_wen", false,-1);
        tracep->declBus(c+126,"ysyx_22040750 cpu_core_e EX_MEM_rd_addr", false,-1, 4,0);
        tracep->declBus(c+127,"ysyx_22040750 cpu_core_e EX_MEM_regin_sel", false,-1, 2,0);
        tracep->declBus(c+128,"ysyx_22040750 cpu_core_e EX_MEM_shamt", false,-1, 2,0);
        tracep->declBit(c+129,"ysyx_22040750 cpu_core_e EX_MEM_allowin", false,-1);
        tracep->declBus(c+130,"ysyx_22040750 cpu_core_e EX_MEM_stall", false,-1, 1,0);
        tracep->declBus(c+131,"ysyx_22040750 cpu_core_e EX_MEM_inst", false,-1, 31,0);
        tracep->declBit(c+132,"ysyx_22040750 cpu_core_e EX_MEM_bubble", false,-1);
        tracep->declBit(c+133,"ysyx_22040750 cpu_core_e EX_MEM_input_valid", false,-1);
        tracep->declBus(c+134,"ysyx_22040750 cpu_core_e EX_MEM_csr_addr", false,-1, 11,0);
        tracep->declBit(c+135,"ysyx_22040750 cpu_core_e EX_MEM_csr_wen", false,-1);
        tracep->declBit(c+136,"ysyx_22040750 cpu_core_e EX_MEM_csr_intr", false,-1);
        tracep->declBit(c+137,"ysyx_22040750 cpu_core_e EX_MEM_csr_mret", false,-1);
        tracep->declQuad(c+138,"ysyx_22040750 cpu_core_e EX_MEM_csr_intr_no", false,-1, 63,0);
        tracep->declQuad(c+140,"ysyx_22040750 cpu_core_e MEM_WB_pc", false,-1, 63,0);
        tracep->declBit(c+142,"ysyx_22040750 cpu_core_e MEM_WB_valid", false,-1);
        tracep->declQuad(c+143,"ysyx_22040750 cpu_core_e MEM_WB_mem_data", false,-1, 63,0);
        tracep->declBus(c+145,"ysyx_22040750 cpu_core_e MEM_WB_mem_rstrb", false,-1, 8,0);
        tracep->declQuad(c+146,"ysyx_22040750 cpu_core_e MEM_WB_alu_out", false,-1, 63,0);
        tracep->declQuad(c+148,"ysyx_22040750 cpu_core_e MEM_WB_csr", false,-1, 63,0);
        tracep->declBit(c+150,"ysyx_22040750 cpu_core_e MEM_WB_reg_wen", false,-1);
        tracep->declBus(c+151,"ysyx_22040750 cpu_core_e MEM_WB_rd_addr", false,-1, 4,0);
        tracep->declBus(c+152,"ysyx_22040750 cpu_core_e MEM_WB_regin_sel", false,-1, 2,0);
        tracep->declBus(c+153,"ysyx_22040750 cpu_core_e MEM_WB_shamt", false,-1, 2,0);
        tracep->declBit(c+154,"ysyx_22040750 cpu_core_e MEM_WB_allowin", false,-1);
        tracep->declBus(c+155,"ysyx_22040750 cpu_core_e MEM_WB_inst", false,-1, 31,0);
        tracep->declBit(c+156,"ysyx_22040750 cpu_core_e MEM_WB_bubble", false,-1);
        tracep->declBit(c+142,"ysyx_22040750 cpu_core_e MEM_WB_input_valid", false,-1);
        tracep->declBus(c+157,"ysyx_22040750 cpu_core_e MEM_WB_stall", false,-1, 1,0);
        tracep->declBus(c+158,"ysyx_22040750 cpu_core_e MEM_WB_csr_addr", false,-1, 11,0);
        tracep->declBit(c+159,"ysyx_22040750 cpu_core_e MEM_WB_csr_wen", false,-1);
        tracep->declBit(c+160,"ysyx_22040750 cpu_core_e MEM_WB_csr_intr", false,-1);
        tracep->declBit(c+161,"ysyx_22040750 cpu_core_e MEM_WB_csr_mret", false,-1);
        tracep->declQuad(c+162,"ysyx_22040750 cpu_core_e MEM_WB_csr_intr_no", false,-1, 63,0);
        tracep->declBus(c+164,"ysyx_22040750 cpu_core_e stall_en", false,-1, 1,0);
        tracep->declQuad(c+165,"ysyx_22040750 cpu_core_e rs1_forward_data", false,-1, 63,0);
        tracep->declQuad(c+167,"ysyx_22040750 cpu_core_e rs2_forward_data", false,-1, 63,0);
        tracep->declQuad(c+169,"ysyx_22040750 cpu_core_e csr_forward_data", false,-1, 63,0);
        tracep->declBit(c+171,"ysyx_22040750 cpu_core_e EX_MEM_mem_op", false,-1);
        tracep->declBit(c+172,"ysyx_22040750 cpu_core_e MEM_WB_mem_op", false,-1);
        tracep->declQuad(c+173,"ysyx_22040750 cpu_core_e MEM_WB_mem_addr", false,-1, 63,0);
        tracep->declBit(c+1029,"ysyx_22040750 cpu_core_e inst_ready", false,-1);
        tracep->declQuad(c+165,"ysyx_22040750 cpu_core_e npc_e I_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+167,"ysyx_22040750 cpu_core_e npc_e I_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+24,"ysyx_22040750 cpu_core_e npc_e I_imm", false,-1, 63,0);
        tracep->declQuad(c+169,"ysyx_22040750 cpu_core_e npc_e I_intr_pc", false,-1, 63,0);
        tracep->declQuad(c+70,"ysyx_22040750 cpu_core_e npc_e I_pc", false,-1, 63,0);
        tracep->declQuad(c+21,"ysyx_22040750 cpu_core_e npc_e I_snpc", false,-1, 63,0);
        tracep->declBus(c+51,"ysyx_22040750 cpu_core_e npc_e I_dnpc_sel", false,-1, 4,0);
        tracep->declQuad(c+4,"ysyx_22040750 cpu_core_e npc_e O_dnpc", false,-1, 63,0);
        tracep->declQuad(c+24,"ysyx_22040750 cpu_core_e npc_e dnpc_src1", false,-1, 63,0);
        tracep->declQuad(c+175,"ysyx_22040750 cpu_core_e npc_e dnpc_src2", false,-1, 63,0);
        tracep->declQuad(c+177,"ysyx_22040750 cpu_core_e npc_e dnpc_sum", false,-1, 63,0);
        tracep->declQuad(c+179,"ysyx_22040750 cpu_core_e npc_e dnpc", false,-1, 63,0);
        tracep->declBit(c+181,"ysyx_22040750 cpu_core_e npc_e dnpc_sel", false,-1);
        tracep->declBit(c+182,"ysyx_22040750 cpu_core_e npc_e intr_sel", false,-1);
        tracep->declBus(c+1030,"ysyx_22040750 cpu_core_e npc_e nextpc_64bit_3sel N", false,-1, 31,0);
        tracep->declBus(c+1031,"ysyx_22040750 cpu_core_e npc_e nextpc_64bit_3sel M", false,-1, 31,0);
        tracep->declArray(c+183,"ysyx_22040750 cpu_core_e npc_e nextpc_64bit_3sel I_sel_data", false,-1, 191,0);
        tracep->declBus(c+189,"ysyx_22040750 cpu_core_e npc_e nextpc_64bit_3sel I_sel", false,-1, 2,0);
        tracep->declQuad(c+179,"ysyx_22040750 cpu_core_e npc_e nextpc_64bit_3sel O_sel_data", false,-1, 63,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+190+i*2,"ysyx_22040750 cpu_core_e npc_e nextpc_64bit_3sel sel_data", true,(i+0), 63,0);}}
        tracep->declBus(c+1032,"ysyx_22040750 cpu_core_e npc_e nextpc_64bit_3sel unnamedblk1 i", false,-1, 31,0);
        tracep->declBit(c+821,"ysyx_22040750 cpu_core_e pc_e I_sys_clk", false,-1);
        tracep->declBit(c+822,"ysyx_22040750 cpu_core_e pc_e I_rst", false,-1);
        tracep->declQuad(c+4,"ysyx_22040750 cpu_core_e pc_e I_dnpc", false,-1, 63,0);
        tracep->declBus(c+3,"ysyx_22040750 cpu_core_e pc_e I_inst", false,-1, 31,0);
        tracep->declBit(c+6,"ysyx_22040750 cpu_core_e pc_e I_inst_valid", false,-1);
        tracep->declBit(c+1029,"ysyx_22040750 cpu_core_e pc_e I_inst_ready", false,-1);
        tracep->declBit(c+73,"ysyx_22040750 cpu_core_e pc_e I_IF_ID_allowin", false,-1);
        tracep->declBit(c+69,"ysyx_22040750 cpu_core_e pc_e O_IF_valid", false,-1);
        tracep->declQuad(c+19,"ysyx_22040750 cpu_core_e pc_e O_pc", false,-1, 63,0);
        tracep->declBus(c+23,"ysyx_22040750 cpu_core_e pc_e O_inst", false,-1, 31,0);
        tracep->declBit(c+7,"ysyx_22040750 cpu_core_e pc_e O_pc_valid", false,-1);
        tracep->declQuad(c+1033,"ysyx_22040750 cpu_core_e pc_e PC_RESET", false,-1, 63,0);
        tracep->declBit(c+196,"ysyx_22040750 cpu_core_e pc_e IF_ready_go", false,-1);
        tracep->declBit(c+197,"ysyx_22040750 cpu_core_e pc_e IF_allow_in", false,-1);
        tracep->declBit(c+7,"ysyx_22040750 cpu_core_e pc_e IF_handshake", false,-1);
        tracep->declBit(c+198,"ysyx_22040750 cpu_core_e pc_e IF_valid", false,-1);
        tracep->declBit(c+199,"ysyx_22040750 cpu_core_e pc_e IF_en", false,-1);
        tracep->declBus(c+200,"ysyx_22040750 cpu_core_e pc_e inst_cache", false,-1, 31,0);
        tracep->declBit(c+201,"ysyx_22040750 cpu_core_e pc_e cache_valid", false,-1);
        tracep->declBit(c+821,"ysyx_22040750 cpu_core_e IF_ID_reg_e I_sys_clk", false,-1);
        tracep->declBit(c+822,"ysyx_22040750 cpu_core_e IF_ID_reg_e I_rst", false,-1);
        tracep->declQuad(c+19,"ysyx_22040750 cpu_core_e IF_ID_reg_e I_pc", false,-1, 63,0);
        tracep->declBus(c+23,"ysyx_22040750 cpu_core_e IF_ID_reg_e I_inst", false,-1, 31,0);
        tracep->declBit(c+69,"ysyx_22040750 cpu_core_e IF_ID_reg_e I_IF_ID_valid", false,-1);
        tracep->declBit(c+100,"ysyx_22040750 cpu_core_e IF_ID_reg_e I_IF_ID_allowout", false,-1);
        tracep->declBit(c+75,"ysyx_22040750 cpu_core_e IF_ID_reg_e I_IF_ID_stall", false,-1);
        tracep->declBit(c+202,"ysyx_22040750 cpu_core_e IF_ID_reg_e I_IF_ID_jmp", false,-1);
        tracep->declBit(c+73,"ysyx_22040750 cpu_core_e IF_ID_reg_e O_IF_ID_allowin", false,-1);
        tracep->declQuad(c+70,"ysyx_22040750 cpu_core_e IF_ID_reg_e O_pc", false,-1, 63,0);
        tracep->declBus(c+72,"ysyx_22040750 cpu_core_e IF_ID_reg_e O_inst", false,-1, 31,0);
        tracep->declBit(c+76,"ysyx_22040750 cpu_core_e IF_ID_reg_e O_bubble_inst_debug", false,-1);
        tracep->declBit(c+77,"ysyx_22040750 cpu_core_e IF_ID_reg_e O_IF_ID_input_valid", false,-1);
        tracep->declBit(c+74,"ysyx_22040750 cpu_core_e IF_ID_reg_e O_IF_ID_valid", false,-1);
        tracep->declBit(c+77,"ysyx_22040750 cpu_core_e IF_ID_reg_e input_valid", false,-1);
        tracep->declBit(c+203,"ysyx_22040750 cpu_core_e IF_ID_reg_e output_valid", false,-1);
        tracep->declBus(c+48,"ysyx_22040750 cpu_core_e stall_unit_e I_rs1_addr", false,-1, 4,0);
        tracep->declBus(c+49,"ysyx_22040750 cpu_core_e stall_unit_e I_rs2_addr", false,-1, 4,0);
        tracep->declBit(c+77,"ysyx_22040750 cpu_core_e stall_unit_e I_ID_valid", false,-1);
        tracep->declBus(c+88,"ysyx_22040750 cpu_core_e stall_unit_e I_EX_rd_addr", false,-1, 4,0);
        tracep->declBit(c+104,"ysyx_22040750 cpu_core_e stall_unit_e I_EX_valid", false,-1);
        tracep->declBit(c+204,"ysyx_22040750 cpu_core_e stall_unit_e I_EX_mem_rd_en", false,-1);
        tracep->declBit(c+205,"ysyx_22040750 cpu_core_e stall_unit_e I_EX_alu_multcycle", false,-1);
        tracep->declBus(c+126,"ysyx_22040750 cpu_core_e stall_unit_e I_MEM_rd_addr", false,-1, 4,0);
        tracep->declBit(c+133,"ysyx_22040750 cpu_core_e stall_unit_e I_MEM_valid", false,-1);
        tracep->declBit(c+206,"ysyx_22040750 cpu_core_e stall_unit_e I_MEM_mem_rd_en", false,-1);
        tracep->declBus(c+151,"ysyx_22040750 cpu_core_e stall_unit_e I_WB_rd_addr", false,-1, 4,0);
        tracep->declBit(c+142,"ysyx_22040750 cpu_core_e stall_unit_e I_WB_valid", false,-1);
        tracep->declBus(c+164,"ysyx_22040750 cpu_core_e stall_unit_e I_stall_en", false,-1, 1,0);
        tracep->declBit(c+75,"ysyx_22040750 cpu_core_e stall_unit_e O_ID_stall", false,-1);
        tracep->declBus(c+101,"ysyx_22040750 cpu_core_e stall_unit_e O_EX_stall", false,-1, 1,0);
        tracep->declBus(c+130,"ysyx_22040750 cpu_core_e stall_unit_e O_MEM_stall", false,-1, 1,0);
        tracep->declBus(c+157,"ysyx_22040750 cpu_core_e stall_unit_e O_WB_stall", false,-1, 1,0);
        tracep->declBus(c+207,"ysyx_22040750 cpu_core_e stall_unit_e EX_stall", false,-1, 1,0);
        tracep->declBus(c+208,"ysyx_22040750 cpu_core_e stall_unit_e MEM_stall", false,-1, 1,0);
        tracep->declBus(c+209,"ysyx_22040750 cpu_core_e stall_unit_e WB_stall", false,-1, 1,0);
        tracep->declBit(c+210,"ysyx_22040750 cpu_core_e stall_unit_e mem_rd", false,-1);
        tracep->declBit(c+211,"ysyx_22040750 cpu_core_e stall_unit_e multicycle_alu_op", false,-1);
        tracep->declQuad(c+28,"ysyx_22040750 cpu_core_e forward_unit_e I_ID_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+30,"ysyx_22040750 cpu_core_e forward_unit_e I_ID_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+36,"ysyx_22040750 cpu_core_e forward_unit_e I_EX_data", false,-1, 63,0);
        tracep->declQuad(c+118,"ysyx_22040750 cpu_core_e forward_unit_e I_MEM_data", false,-1, 63,0);
        tracep->declQuad(c+26,"ysyx_22040750 cpu_core_e forward_unit_e I_WB_data", false,-1, 63,0);
        tracep->declBus(c+164,"ysyx_22040750 cpu_core_e forward_unit_e I_stall_en", false,-1, 1,0);
        tracep->declBus(c+101,"ysyx_22040750 cpu_core_e forward_unit_e I_EX_stall", false,-1, 1,0);
        tracep->declBus(c+130,"ysyx_22040750 cpu_core_e forward_unit_e I_MEM_stall", false,-1, 1,0);
        tracep->declBus(c+157,"ysyx_22040750 cpu_core_e forward_unit_e I_WB_stall", false,-1, 1,0);
        tracep->declBit(c+96,"ysyx_22040750 cpu_core_e forward_unit_e I_EX_reg_wen", false,-1);
        tracep->declBit(c+125,"ysyx_22040750 cpu_core_e forward_unit_e I_MEM_reg_wen", false,-1);
        tracep->declBit(c+212,"ysyx_22040750 cpu_core_e forward_unit_e I_WB_reg_wen", false,-1);
        tracep->declQuad(c+165,"ysyx_22040750 cpu_core_e forward_unit_e O_ID_EX_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+167,"ysyx_22040750 cpu_core_e forward_unit_e O_ID_EX_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+44,"ysyx_22040750 cpu_core_e csr_foward_e I_csr_ID", false,-1, 63,0);
        tracep->declQuad(c+86,"ysyx_22040750 cpu_core_e csr_foward_e I_csr_EX", false,-1, 63,0);
        tracep->declQuad(c+120,"ysyx_22040750 cpu_core_e csr_foward_e I_csr_MEM", false,-1, 63,0);
        tracep->declQuad(c+148,"ysyx_22040750 cpu_core_e csr_foward_e I_csr_WB", false,-1, 63,0);
        tracep->declBus(c+62,"ysyx_22040750 cpu_core_e csr_foward_e I_csr_addr_ID", false,-1, 11,0);
        tracep->declBus(c+107,"ysyx_22040750 cpu_core_e csr_foward_e I_csr_addr_EX", false,-1, 11,0);
        tracep->declBus(c+134,"ysyx_22040750 cpu_core_e csr_foward_e I_csr_addr_MEM", false,-1, 11,0);
        tracep->declBus(c+158,"ysyx_22040750 cpu_core_e csr_foward_e I_csr_addr_WB", false,-1, 11,0);
        tracep->declBit(c+63,"ysyx_22040750 cpu_core_e csr_foward_e I_csr_wen_ID", false,-1);
        tracep->declBit(c+108,"ysyx_22040750 cpu_core_e csr_foward_e I_csr_wen_EX", false,-1);
        tracep->declBit(c+135,"ysyx_22040750 cpu_core_e csr_foward_e I_csr_wen_MEM", false,-1);
        tracep->declBit(c+159,"ysyx_22040750 cpu_core_e csr_foward_e I_csr_wen_WB", false,-1);
        tracep->declQuad(c+169,"ysyx_22040750 cpu_core_e csr_foward_e O_csr_foward_data", false,-1, 63,0);
        tracep->declBit(c+213,"ysyx_22040750 cpu_core_e csr_foward_e EX_foward", false,-1);
        tracep->declBit(c+214,"ysyx_22040750 cpu_core_e csr_foward_e MEM_foward", false,-1);
        tracep->declBit(c+215,"ysyx_22040750 cpu_core_e csr_foward_e WB_foward", false,-1);
        tracep->declBit(c+821,"ysyx_22040750 cpu_core_e decoder_e I_sys_clk", false,-1);
        tracep->declBit(c+822,"ysyx_22040750 cpu_core_e decoder_e I_rst", false,-1);
        tracep->declBus(c+72,"ysyx_22040750 cpu_core_e decoder_e I_inst", false,-1, 31,0);
        tracep->declQuad(c+24,"ysyx_22040750 cpu_core_e decoder_e O_imm", false,-1, 63,0);
        tracep->declQuad(c+165,"ysyx_22040750 cpu_core_e decoder_e I_rs1_data", false,-1, 63,0);
        tracep->declBus(c+48,"ysyx_22040750 cpu_core_e decoder_e O_rs1", false,-1, 4,0);
        tracep->declQuad(c+167,"ysyx_22040750 cpu_core_e decoder_e I_rs2_data", false,-1, 63,0);
        tracep->declBus(c+49,"ysyx_22040750 cpu_core_e decoder_e O_rs2", false,-1, 4,0);
        tracep->declBus(c+50,"ysyx_22040750 cpu_core_e decoder_e O_rd", false,-1, 4,0);
        tracep->declBit(c+58,"ysyx_22040750 cpu_core_e decoder_e O_reg_wen", false,-1);
        tracep->declBit(c+59,"ysyx_22040750 cpu_core_e decoder_e O_mem_wen", false,-1);
        tracep->declBus(c+56,"ysyx_22040750 cpu_core_e decoder_e O_mem_wstrb", false,-1, 7,0);
        tracep->declBus(c+57,"ysyx_22040750 cpu_core_e decoder_e O_mem_rstrb", false,-1, 8,0);
        tracep->declBus(c+51,"ysyx_22040750 cpu_core_e decoder_e O_dnpc_sel", false,-1, 4,0);
        tracep->declBus(c+52,"ysyx_22040750 cpu_core_e decoder_e O_regin_sel", false,-1, 2,0);
        tracep->declBus(c+53,"ysyx_22040750 cpu_core_e decoder_e O_opnum1_sel", false,-1, 2,0);
        tracep->declBus(c+54,"ysyx_22040750 cpu_core_e decoder_e O_opnum2_sel", false,-1, 2,0);
        tracep->declBus(c+55,"ysyx_22040750 cpu_core_e decoder_e O_alu_op_sel", false,-1, 14,0);
        tracep->declBus(c+61,"ysyx_22040750 cpu_core_e decoder_e O_alu_op_sext", false,-1, 1,0);
        tracep->declBit(c+60,"ysyx_22040750 cpu_core_e decoder_e O_word_op_mask", false,-1);
        tracep->declBus(c+66,"ysyx_22040750 cpu_core_e decoder_e O_csr_op_sel", false,-1, 6,0);
        tracep->declBus(c+48,"ysyx_22040750 cpu_core_e decoder_e O_csr_imm", false,-1, 4,0);
        tracep->declBus(c+62,"ysyx_22040750 cpu_core_e decoder_e O_csr_addr", false,-1, 11,0);
        tracep->declBit(c+63,"ysyx_22040750 cpu_core_e decoder_e O_csr_wen", false,-1);
        tracep->declBit(c+64,"ysyx_22040750 cpu_core_e decoder_e O_csr_intr", false,-1);
        tracep->declQuad(c+67,"ysyx_22040750 cpu_core_e decoder_e O_csr_intr_no", false,-1, 63,0);
        tracep->declBit(c+65,"ysyx_22040750 cpu_core_e decoder_e O_csr_mret", false,-1);
        tracep->declBus(c+164,"ysyx_22040750 cpu_core_e decoder_e O_stall_en", false,-1, 1,0);
        tracep->declBus(c+216,"ysyx_22040750 cpu_core_e decoder_e funct7", false,-1, 6,0);
        tracep->declBus(c+217,"ysyx_22040750 cpu_core_e decoder_e opcode", false,-1, 6,0);
        tracep->declBus(c+49,"ysyx_22040750 cpu_core_e decoder_e rs2", false,-1, 4,0);
        tracep->declBus(c+48,"ysyx_22040750 cpu_core_e decoder_e rs1", false,-1, 4,0);
        tracep->declBus(c+50,"ysyx_22040750 cpu_core_e decoder_e rd", false,-1, 4,0);
        tracep->declBus(c+218,"ysyx_22040750 cpu_core_e decoder_e funct3", false,-1, 2,0);
        tracep->declBus(c+62,"ysyx_22040750 cpu_core_e decoder_e immI", false,-1, 11,0);
        tracep->declBus(c+219,"ysyx_22040750 cpu_core_e decoder_e immS", false,-1, 11,0);
        tracep->declBus(c+220,"ysyx_22040750 cpu_core_e decoder_e immB", false,-1, 12,0);
        tracep->declBus(c+221,"ysyx_22040750 cpu_core_e decoder_e immU", false,-1, 31,0);
        tracep->declBus(c+222,"ysyx_22040750 cpu_core_e decoder_e immJ", false,-1, 20,0);
        tracep->declBit(c+223,"ysyx_22040750 cpu_core_e decoder_e typeI", false,-1);
        tracep->declBit(c+59,"ysyx_22040750 cpu_core_e decoder_e typeS", false,-1);
        tracep->declBit(c+224,"ysyx_22040750 cpu_core_e decoder_e typeR", false,-1);
        tracep->declBit(c+225,"ysyx_22040750 cpu_core_e decoder_e typeB", false,-1);
        tracep->declBit(c+226,"ysyx_22040750 cpu_core_e decoder_e typeU", false,-1);
        tracep->declBit(c+227,"ysyx_22040750 cpu_core_e decoder_e typeJ", false,-1);
        tracep->declBit(c+228,"ysyx_22040750 cpu_core_e decoder_e typeC", false,-1);
        tracep->declBit(c+229,"ysyx_22040750 cpu_core_e decoder_e LUI", false,-1);
        tracep->declBit(c+230,"ysyx_22040750 cpu_core_e decoder_e AUIPC", false,-1);
        tracep->declBit(c+227,"ysyx_22040750 cpu_core_e decoder_e JAL", false,-1);
        tracep->declBit(c+231,"ysyx_22040750 cpu_core_e decoder_e JALR", false,-1);
        tracep->declBit(c+232,"ysyx_22040750 cpu_core_e decoder_e LD", false,-1);
        tracep->declBit(c+233,"ysyx_22040750 cpu_core_e decoder_e LW", false,-1);
        tracep->declBit(c+234,"ysyx_22040750 cpu_core_e decoder_e LWU", false,-1);
        tracep->declBit(c+235,"ysyx_22040750 cpu_core_e decoder_e LH", false,-1);
        tracep->declBit(c+236,"ysyx_22040750 cpu_core_e decoder_e LHU", false,-1);
        tracep->declBit(c+237,"ysyx_22040750 cpu_core_e decoder_e LB", false,-1);
        tracep->declBit(c+238,"ysyx_22040750 cpu_core_e decoder_e LBU", false,-1);
        tracep->declBit(c+239,"ysyx_22040750 cpu_core_e decoder_e ADDI", false,-1);
        tracep->declBit(c+240,"ysyx_22040750 cpu_core_e decoder_e SLTI", false,-1);
        tracep->declBit(c+241,"ysyx_22040750 cpu_core_e decoder_e SLTIU", false,-1);
        tracep->declBit(c+242,"ysyx_22040750 cpu_core_e decoder_e XORI", false,-1);
        tracep->declBit(c+243,"ysyx_22040750 cpu_core_e decoder_e ORI", false,-1);
        tracep->declBit(c+244,"ysyx_22040750 cpu_core_e decoder_e ANDI", false,-1);
        tracep->declBit(c+245,"ysyx_22040750 cpu_core_e decoder_e SLLI", false,-1);
        tracep->declBit(c+246,"ysyx_22040750 cpu_core_e decoder_e SRLI", false,-1);
        tracep->declBit(c+247,"ysyx_22040750 cpu_core_e decoder_e SRAI", false,-1);
        tracep->declBit(c+248,"ysyx_22040750 cpu_core_e decoder_e ADDIW", false,-1);
        tracep->declBit(c+249,"ysyx_22040750 cpu_core_e decoder_e SLLIW", false,-1);
        tracep->declBit(c+250,"ysyx_22040750 cpu_core_e decoder_e SRLIW", false,-1);
        tracep->declBit(c+251,"ysyx_22040750 cpu_core_e decoder_e SRAIW", false,-1);
        tracep->declBit(c+252,"ysyx_22040750 cpu_core_e decoder_e ADD", false,-1);
        tracep->declBit(c+253,"ysyx_22040750 cpu_core_e decoder_e SUB", false,-1);
        tracep->declBit(c+254,"ysyx_22040750 cpu_core_e decoder_e SLL", false,-1);
        tracep->declBit(c+255,"ysyx_22040750 cpu_core_e decoder_e SLT", false,-1);
        tracep->declBit(c+256,"ysyx_22040750 cpu_core_e decoder_e SLTU", false,-1);
        tracep->declBit(c+257,"ysyx_22040750 cpu_core_e decoder_e XOR", false,-1);
        tracep->declBit(c+258,"ysyx_22040750 cpu_core_e decoder_e SRL", false,-1);
        tracep->declBit(c+259,"ysyx_22040750 cpu_core_e decoder_e SRA", false,-1);
        tracep->declBit(c+260,"ysyx_22040750 cpu_core_e decoder_e OR", false,-1);
        tracep->declBit(c+261,"ysyx_22040750 cpu_core_e decoder_e AND", false,-1);
        tracep->declBit(c+262,"ysyx_22040750 cpu_core_e decoder_e MUL", false,-1);
        tracep->declBit(c+263,"ysyx_22040750 cpu_core_e decoder_e MULH", false,-1);
        tracep->declBit(c+264,"ysyx_22040750 cpu_core_e decoder_e MULHSU", false,-1);
        tracep->declBit(c+265,"ysyx_22040750 cpu_core_e decoder_e MULHU", false,-1);
        tracep->declBit(c+266,"ysyx_22040750 cpu_core_e decoder_e DIV", false,-1);
        tracep->declBit(c+267,"ysyx_22040750 cpu_core_e decoder_e DIVU", false,-1);
        tracep->declBit(c+268,"ysyx_22040750 cpu_core_e decoder_e REM", false,-1);
        tracep->declBit(c+269,"ysyx_22040750 cpu_core_e decoder_e REMU", false,-1);
        tracep->declBit(c+270,"ysyx_22040750 cpu_core_e decoder_e ADDW", false,-1);
        tracep->declBit(c+271,"ysyx_22040750 cpu_core_e decoder_e SUBW", false,-1);
        tracep->declBit(c+272,"ysyx_22040750 cpu_core_e decoder_e SLLW", false,-1);
        tracep->declBit(c+273,"ysyx_22040750 cpu_core_e decoder_e SRLW", false,-1);
        tracep->declBit(c+274,"ysyx_22040750 cpu_core_e decoder_e SRAW", false,-1);
        tracep->declBit(c+275,"ysyx_22040750 cpu_core_e decoder_e MULW", false,-1);
        tracep->declBit(c+276,"ysyx_22040750 cpu_core_e decoder_e DIVW", false,-1);
        tracep->declBit(c+277,"ysyx_22040750 cpu_core_e decoder_e DIVUW", false,-1);
        tracep->declBit(c+278,"ysyx_22040750 cpu_core_e decoder_e REMW", false,-1);
        tracep->declBit(c+279,"ysyx_22040750 cpu_core_e decoder_e REMUW", false,-1);
        tracep->declBit(c+280,"ysyx_22040750 cpu_core_e decoder_e SD", false,-1);
        tracep->declBit(c+281,"ysyx_22040750 cpu_core_e decoder_e SW", false,-1);
        tracep->declBit(c+282,"ysyx_22040750 cpu_core_e decoder_e SH", false,-1);
        tracep->declBit(c+283,"ysyx_22040750 cpu_core_e decoder_e SB", false,-1);
        tracep->declBit(c+284,"ysyx_22040750 cpu_core_e decoder_e BEQ", false,-1);
        tracep->declBit(c+285,"ysyx_22040750 cpu_core_e decoder_e BNE", false,-1);
        tracep->declBit(c+286,"ysyx_22040750 cpu_core_e decoder_e BLT", false,-1);
        tracep->declBit(c+287,"ysyx_22040750 cpu_core_e decoder_e BGE", false,-1);
        tracep->declBit(c+288,"ysyx_22040750 cpu_core_e decoder_e BLTU", false,-1);
        tracep->declBit(c+289,"ysyx_22040750 cpu_core_e decoder_e BGEU", false,-1);
        tracep->declBit(c+290,"ysyx_22040750 cpu_core_e decoder_e ECALL", false,-1);
        tracep->declBit(c+291,"ysyx_22040750 cpu_core_e decoder_e EBREAK", false,-1);
        tracep->declBit(c+292,"ysyx_22040750 cpu_core_e decoder_e CSRRW", false,-1);
        tracep->declBit(c+293,"ysyx_22040750 cpu_core_e decoder_e CSRRS", false,-1);
        tracep->declBit(c+294,"ysyx_22040750 cpu_core_e decoder_e CSRRC", false,-1);
        tracep->declBit(c+295,"ysyx_22040750 cpu_core_e decoder_e CSRRWI", false,-1);
        tracep->declBit(c+296,"ysyx_22040750 cpu_core_e decoder_e CSRRSI", false,-1);
        tracep->declBit(c+297,"ysyx_22040750 cpu_core_e decoder_e CSRRCI", false,-1);
        tracep->declBit(c+65,"ysyx_22040750 cpu_core_e decoder_e MRET", false,-1);
        tracep->declBit(c+298,"ysyx_22040750 cpu_core_e decoder_e csr_rd_gpr", false,-1);
        tracep->declQuad(c+67,"ysyx_22040750 cpu_core_e decoder_e NO", false,-1, 63,0);
        tracep->declBit(c+299,"ysyx_22040750 cpu_core_e decoder_e regin_from_mem", false,-1);
        tracep->declBit(c+300,"ysyx_22040750 cpu_core_e decoder_e typeB_jr", false,-1);
        tracep->declBit(c+301,"ysyx_22040750 cpu_core_e decoder_e csr_jr", false,-1);
        tracep->declBit(c+302,"ysyx_22040750 cpu_core_e decoder_e eq", false,-1);
        tracep->declBit(c+303,"ysyx_22040750 cpu_core_e decoder_e neq", false,-1);
        tracep->declBit(c+304,"ysyx_22040750 cpu_core_e decoder_e lt", false,-1);
        tracep->declBit(c+305,"ysyx_22040750 cpu_core_e decoder_e ge", false,-1);
        tracep->declBit(c+306,"ysyx_22040750 cpu_core_e decoder_e ltu", false,-1);
        tracep->declBit(c+307,"ysyx_22040750 cpu_core_e decoder_e geu", false,-1);
        tracep->declBus(c+1035,"ysyx_22040750 cpu_core_e decoder_e OP_ADD", false,-1, 14,0);
        tracep->declBus(c+1036,"ysyx_22040750 cpu_core_e decoder_e OP_SUB", false,-1, 14,0);
        tracep->declBus(c+1037,"ysyx_22040750 cpu_core_e decoder_e OP_SLT", false,-1, 14,0);
        tracep->declBus(c+1038,"ysyx_22040750 cpu_core_e decoder_e OP_SLTU", false,-1, 14,0);
        tracep->declBus(c+1039,"ysyx_22040750 cpu_core_e decoder_e OP_XOR", false,-1, 14,0);
        tracep->declBus(c+1040,"ysyx_22040750 cpu_core_e decoder_e OP_OR", false,-1, 14,0);
        tracep->declBus(c+1041,"ysyx_22040750 cpu_core_e decoder_e OP_AND", false,-1, 14,0);
        tracep->declBus(c+1042,"ysyx_22040750 cpu_core_e decoder_e OP_SLL", false,-1, 14,0);
        tracep->declBus(c+1043,"ysyx_22040750 cpu_core_e decoder_e OP_SRL", false,-1, 14,0);
        tracep->declBus(c+1044,"ysyx_22040750 cpu_core_e decoder_e OP_SRA", false,-1, 14,0);
        tracep->declBus(c+1045,"ysyx_22040750 cpu_core_e decoder_e OP_MUL", false,-1, 14,0);
        tracep->declBus(c+1046,"ysyx_22040750 cpu_core_e decoder_e OP_MULH", false,-1, 14,0);
        tracep->declBus(c+1047,"ysyx_22040750 cpu_core_e decoder_e OP_DIV", false,-1, 14,0);
        tracep->declBus(c+1048,"ysyx_22040750 cpu_core_e decoder_e OP_REM", false,-1, 14,0);
        tracep->declBus(c+1049,"ysyx_22040750 cpu_core_e decoder_e OP_CSR", false,-1, 14,0);
        tracep->declBit(c+308,"ysyx_22040750 cpu_core_e decoder_e add_flag", false,-1);
        tracep->declBit(c+299,"ysyx_22040750 cpu_core_e decoder_e ld_flag", false,-1);
        tracep->declBit(c+309,"ysyx_22040750 cpu_core_e decoder_e sub_flag", false,-1);
        tracep->declBit(c+310,"ysyx_22040750 cpu_core_e decoder_e slt_flag", false,-1);
        tracep->declBit(c+311,"ysyx_22040750 cpu_core_e decoder_e sltu_flag", false,-1);
        tracep->declBit(c+312,"ysyx_22040750 cpu_core_e decoder_e xor_flag", false,-1);
        tracep->declBit(c+313,"ysyx_22040750 cpu_core_e decoder_e or_flag", false,-1);
        tracep->declBit(c+314,"ysyx_22040750 cpu_core_e decoder_e and_flag", false,-1);
        tracep->declBit(c+315,"ysyx_22040750 cpu_core_e decoder_e sll_flag", false,-1);
        tracep->declBit(c+316,"ysyx_22040750 cpu_core_e decoder_e srl_flag", false,-1);
        tracep->declBit(c+317,"ysyx_22040750 cpu_core_e decoder_e sra_flag", false,-1);
        tracep->declBit(c+318,"ysyx_22040750 cpu_core_e decoder_e mul_flag", false,-1);
        tracep->declBit(c+319,"ysyx_22040750 cpu_core_e decoder_e mulh_flag", false,-1);
        tracep->declBit(c+320,"ysyx_22040750 cpu_core_e decoder_e div_flag", false,-1);
        tracep->declBit(c+321,"ysyx_22040750 cpu_core_e decoder_e rem_flag", false,-1);
        tracep->declBit(c+228,"ysyx_22040750 cpu_core_e decoder_e csr_flag", false,-1);
        tracep->declBus(c+1050,"ysyx_22040750 cpu_core_e decoder_e OP1_RS1", false,-1, 2,0);
        tracep->declBus(c+1051,"ysyx_22040750 cpu_core_e decoder_e OP1_PC", false,-1, 2,0);
        tracep->declBus(c+1052,"ysyx_22040750 cpu_core_e decoder_e OP1_ZERO", false,-1, 2,0);
        tracep->declBit(c+322,"ysyx_22040750 cpu_core_e decoder_e rs1_flag", false,-1);
        tracep->declBit(c+323,"ysyx_22040750 cpu_core_e decoder_e pc_flag", false,-1);
        tracep->declBit(c+229,"ysyx_22040750 cpu_core_e decoder_e zero_flag", false,-1);
        tracep->declBus(c+1050,"ysyx_22040750 cpu_core_e decoder_e OP2_RS2", false,-1, 2,0);
        tracep->declBus(c+1051,"ysyx_22040750 cpu_core_e decoder_e OP2_IMM", false,-1, 2,0);
        tracep->declBus(c+1052,"ysyx_22040750 cpu_core_e decoder_e OP2_FOUR", false,-1, 2,0);
        tracep->declBit(c+224,"ysyx_22040750 cpu_core_e decoder_e rs2_flag", false,-1);
        tracep->declBit(c+324,"ysyx_22040750 cpu_core_e decoder_e imm_flag", false,-1);
        tracep->declBit(c+325,"ysyx_22040750 cpu_core_e decoder_e four_flag", false,-1);
        tracep->declBit(c+821,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_sys_clk", false,-1);
        tracep->declBit(c+822,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_rst", false,-1);
        tracep->declBit(c+74,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_ID_EX_valid", false,-1);
        tracep->declBit(c+129,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_ID_EX_allowout", false,-1);
        tracep->declBit(c+100,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_ID_EX_allowin", false,-1);
        tracep->declBit(c+99,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_ID_EX_valid", false,-1);
        tracep->declBit(c+106,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_alu_output_valid", false,-1);
        tracep->declQuad(c+24,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_imm", false,-1, 63,0);
        tracep->declQuad(c+165,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_rs1", false,-1, 63,0);
        tracep->declQuad(c+167,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_rs2", false,-1, 63,0);
        tracep->declBus(c+50,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_rd_addr", false,-1, 4,0);
        tracep->declBit(c+58,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_reg_wen", false,-1);
        tracep->declBit(c+59,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_mem_wen", false,-1);
        tracep->declBus(c+56,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_wstrb", false,-1, 7,0);
        tracep->declBus(c+57,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_rstrb", false,-1, 8,0);
        tracep->declBus(c+52,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_regin_sel", false,-1, 2,0);
        tracep->declBus(c+53,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_op1_sel", false,-1, 2,0);
        tracep->declBus(c+54,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_op2_sel", false,-1, 2,0);
        tracep->declBus(c+61,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_alu_sext", false,-1, 1,0);
        tracep->declBus(c+55,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_alu_op_sel", false,-1, 14,0);
        tracep->declBit(c+60,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_word_op_mask", false,-1);
        tracep->declBus(c+66,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_csr_op_sel", false,-1, 6,0);
        tracep->declBus(c+48,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_csr_imm", false,-1, 4,0);
        tracep->declBus(c+62,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_csr_addr", false,-1, 11,0);
        tracep->declBit(c+63,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_csr_wen", false,-1);
        tracep->declBit(c+64,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_csr_intr", false,-1);
        tracep->declQuad(c+67,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_csr_intr_no", false,-1, 63,0);
        tracep->declQuad(c+169,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_csr", false,-1, 63,0);
        tracep->declBit(c+65,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_csr_mret", false,-1);
        tracep->declBus(c+111,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_csr_op_sel", false,-1, 6,0);
        tracep->declBus(c+112,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_csr_imm", false,-1, 4,0);
        tracep->declBus(c+107,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_csr_addr", false,-1, 11,0);
        tracep->declBit(c+108,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_csr_wen", false,-1);
        tracep->declBit(c+109,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_csr_intr", false,-1);
        tracep->declQuad(c+113,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_csr_intr_no", false,-1, 63,0);
        tracep->declQuad(c+86,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_csr", false,-1, 63,0);
        tracep->declBit(c+110,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_csr_mret", false,-1);
        tracep->declQuad(c+78,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_imm", false,-1, 63,0);
        tracep->declQuad(c+82,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_rs1", false,-1, 63,0);
        tracep->declQuad(c+84,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_rs2", false,-1, 63,0);
        tracep->declBus(c+88,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_rd_addr", false,-1, 4,0);
        tracep->declBit(c+96,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_reg_wen", false,-1);
        tracep->declBit(c+97,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_mem_wen", false,-1);
        tracep->declBus(c+89,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_wstrb", false,-1, 7,0);
        tracep->declBus(c+90,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_rstrb", false,-1, 8,0);
        tracep->declBus(c+93,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_regin_sel", false,-1, 2,0);
        tracep->declBus(c+92,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_op1_sel", false,-1, 2,0);
        tracep->declBus(c+91,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_op2_sel", false,-1, 2,0);
        tracep->declBus(c+94,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_alu_sext", false,-1, 1,0);
        tracep->declBus(c+95,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_alu_op_sel", false,-1, 14,0);
        tracep->declBit(c+98,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_word_op_mask", false,-1);
        tracep->declQuad(c+70,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_pc", false,-1, 63,0);
        tracep->declQuad(c+80,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_pc", false,-1, 63,0);
        tracep->declBit(c+104,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_ID_EX_input_valid", false,-1);
        tracep->declBit(c+105,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_alu_multicycle", false,-1);
        tracep->declBus(c+72,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_inst_debug", false,-1, 31,0);
        tracep->declBus(c+102,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_inst_debug", false,-1, 31,0);
        tracep->declBit(c+76,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_bubble_inst_debug", false,-1);
        tracep->declBit(c+103,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_bubble_inst_debug", false,-1);
        tracep->declBit(c+104,"ysyx_22040750 cpu_core_e ID_EX_reg_e input_valid", false,-1);
        tracep->declBit(c+106,"ysyx_22040750 cpu_core_e ID_EX_reg_e output_valid", false,-1);
        tracep->declBus(c+1030,"ysyx_22040750 cpu_core_e alu_op1_64bit_3sel N", false,-1, 31,0);
        tracep->declBus(c+1031,"ysyx_22040750 cpu_core_e alu_op1_64bit_3sel M", false,-1, 31,0);
        tracep->declArray(c+326,"ysyx_22040750 cpu_core_e alu_op1_64bit_3sel I_sel_data", false,-1, 191,0);
        tracep->declBus(c+92,"ysyx_22040750 cpu_core_e alu_op1_64bit_3sel I_sel", false,-1, 2,0);
        tracep->declQuad(c+32,"ysyx_22040750 cpu_core_e alu_op1_64bit_3sel O_sel_data", false,-1, 63,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+332+i*2,"ysyx_22040750 cpu_core_e alu_op1_64bit_3sel sel_data", true,(i+0), 63,0);}}
        tracep->declBus(c+1032,"ysyx_22040750 cpu_core_e alu_op1_64bit_3sel unnamedblk1 i", false,-1, 31,0);
        tracep->declBus(c+1030,"ysyx_22040750 cpu_core_e alu_op2_64bit_3sel N", false,-1, 31,0);
        tracep->declBus(c+1031,"ysyx_22040750 cpu_core_e alu_op2_64bit_3sel M", false,-1, 31,0);
        tracep->declArray(c+338,"ysyx_22040750 cpu_core_e alu_op2_64bit_3sel I_sel_data", false,-1, 191,0);
        tracep->declBus(c+91,"ysyx_22040750 cpu_core_e alu_op2_64bit_3sel I_sel", false,-1, 2,0);
        tracep->declQuad(c+34,"ysyx_22040750 cpu_core_e alu_op2_64bit_3sel O_sel_data", false,-1, 63,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+344+i*2,"ysyx_22040750 cpu_core_e alu_op2_64bit_3sel sel_data", true,(i+0), 63,0);}}
        tracep->declBus(c+1032,"ysyx_22040750 cpu_core_e alu_op2_64bit_3sel unnamedblk1 i", false,-1, 31,0);
        tracep->declBit(c+821,"ysyx_22040750 cpu_core_e alu_e I_sys_clk", false,-1);
        tracep->declBit(c+822,"ysyx_22040750 cpu_core_e alu_e I_rst", false,-1);
        tracep->declQuad(c+32,"ysyx_22040750 cpu_core_e alu_e I_op1", false,-1, 63,0);
        tracep->declQuad(c+34,"ysyx_22040750 cpu_core_e alu_e I_op2", false,-1, 63,0);
        tracep->declBus(c+95,"ysyx_22040750 cpu_core_e alu_e I_alu_op_sel", false,-1, 14,0);
        tracep->declBus(c+94,"ysyx_22040750 cpu_core_e alu_e I_alu_op_sext", false,-1, 1,0);
        tracep->declBit(c+98,"ysyx_22040750 cpu_core_e alu_e I_word_op_mask", false,-1);
        tracep->declBit(c+105,"ysyx_22040750 cpu_core_e alu_e I_multicycle", false,-1);
        tracep->declBit(c+129,"ysyx_22040750 cpu_core_e alu_e I_EX_MEM_ready", false,-1);
        tracep->declQuad(c+86,"ysyx_22040750 cpu_core_e alu_e I_csr_data", false,-1, 63,0);
        tracep->declBus(c+112,"ysyx_22040750 cpu_core_e alu_e I_uimm", false,-1, 4,0);
        tracep->declBus(c+111,"ysyx_22040750 cpu_core_e alu_e I_csr_op_sel", false,-1, 6,0);
        tracep->declQuad(c+36,"ysyx_22040750 cpu_core_e alu_e O_result", false,-1, 63,0);
        tracep->declQuad(c+42,"ysyx_22040750 cpu_core_e alu_e O_mem_addr", false,-1, 63,0);
        tracep->declQuad(c+46,"ysyx_22040750 cpu_core_e alu_e O_csr_data", false,-1, 63,0);
        tracep->declBit(c+106,"ysyx_22040750 cpu_core_e alu_e O_result_valid", false,-1);
        tracep->declBit(c+821,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e I_sys_clk", false,-1);
        tracep->declBit(c+822,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e I_rst", false,-1);
        tracep->declQuad(c+86,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e I_csr_data", false,-1, 63,0);
        tracep->declQuad(c+32,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e I_op1", false,-1, 63,0);
        tracep->declQuad(c+34,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e I_op2", false,-1, 63,0);
        tracep->declBus(c+95,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e I_alu_op_sel", false,-1, 14,0);
        tracep->declBus(c+94,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e I_alu_op_sext", false,-1, 1,0);
        tracep->declBit(c+98,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e I_word_op_mask", false,-1);
        tracep->declBit(c+105,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e I_multicycle", false,-1);
        tracep->declBit(c+129,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e I_EX_MEM_ready", false,-1);
        tracep->declQuad(c+42,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e O_mem_addr", false,-1, 63,0);
        tracep->declQuad(c+36,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e O_result", false,-1, 63,0);
        tracep->declBit(c+106,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e O_result_valid", false,-1);
        tracep->declBit(c+350,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e op_add", false,-1);
        tracep->declBit(c+351,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e op_sub", false,-1);
        tracep->declBit(c+352,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e op_slt", false,-1);
        tracep->declBit(c+353,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e op_sltu", false,-1);
        tracep->declBit(c+354,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e op_xor", false,-1);
        tracep->declBit(c+355,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e op_or", false,-1);
        tracep->declBit(c+356,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e op_and", false,-1);
        tracep->declBit(c+357,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e op_sll", false,-1);
        tracep->declBit(c+358,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e op_srl", false,-1);
        tracep->declBit(c+359,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e op_sra", false,-1);
        tracep->declBit(c+360,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e op_mul", false,-1);
        tracep->declBit(c+361,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e op_mulh", false,-1);
        tracep->declBit(c+362,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e op_div", false,-1);
        tracep->declBit(c+363,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e op_rem", false,-1);
        tracep->declBit(c+364,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e op_csr", false,-1);
        tracep->declQuad(c+42,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e add_sub_result", false,-1, 63,0);
        tracep->declQuad(c+365,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e slt_result", false,-1, 63,0);
        tracep->declQuad(c+367,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e sltu_result", false,-1, 63,0);
        tracep->declQuad(c+369,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e xor_result", false,-1, 63,0);
        tracep->declQuad(c+371,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e or_result", false,-1, 63,0);
        tracep->declQuad(c+373,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e and_result", false,-1, 63,0);
        tracep->declQuad(c+375,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e sll_result", false,-1, 63,0);
        tracep->declQuad(c+377,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e srl_result", false,-1, 63,0);
        tracep->declQuad(c+379,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e sra_result", false,-1, 63,0);
        tracep->declQuad(c+381,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e mul_result", false,-1, 63,0);
        tracep->declQuad(c+383,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e mulh_result", false,-1, 63,0);
        tracep->declQuad(c+385,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e div_result", false,-1, 63,0);
        tracep->declQuad(c+387,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e rem_result", false,-1, 63,0);
        tracep->declQuad(c+86,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e csr_result", false,-1, 63,0);
        tracep->declArray(c+389,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e op1_sext", false,-1, 64,0);
        tracep->declArray(c+392,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e op2_sext", false,-1, 64,0);
        tracep->declBit(c+395,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e sign_bit1", false,-1);
        tracep->declBit(c+396,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e sign_bit2", false,-1);
        tracep->declBit(c+397,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e sext1", false,-1);
        tracep->declBit(c+398,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e sext2", false,-1);
        tracep->declBit(c+1053,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e mul_valid_d", false,-1);
        tracep->declBit(c+1054,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e div_valid_d", false,-1);
        tracep->declBit(c+399,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e mul_flag", false,-1);
        tracep->declBit(c+400,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e div_flag", false,-1);
        tracep->declBit(c+401,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e mul_valid", false,-1);
        tracep->declBit(c+402,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e div_valid", false,-1);
        tracep->declBit(c+403,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e mul_out_valid", false,-1);
        tracep->declBit(c+404,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e div_out_valid", false,-1);
        tracep->declQuad(c+405,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e mulh_reg", false,-1, 63,0);
        tracep->declQuad(c+407,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e mul_reg", false,-1, 63,0);
        tracep->declQuad(c+409,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e div_reg", false,-1, 63,0);
        tracep->declQuad(c+411,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e rem_reg", false,-1, 63,0);
        tracep->declBit(c+413,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e mul_reg_valid", false,-1);
        tracep->declBit(c+414,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e div_reg_valid", false,-1);
        tracep->declQuad(c+415,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e mulh_final", false,-1, 63,0);
        tracep->declQuad(c+417,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e mul_final", false,-1, 63,0);
        tracep->declQuad(c+419,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e div_final", false,-1, 63,0);
        tracep->declQuad(c+421,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e rem_final", false,-1, 63,0);
        tracep->declQuad(c+32,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e adder1", false,-1, 63,0);
        tracep->declQuad(c+423,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e adder2", false,-1, 63,0);
        tracep->declQuad(c+42,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e result", false,-1, 63,0);
        tracep->declQuad(c+425,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e cin", false,-1, 63,0);
        tracep->declBit(c+427,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e cout", false,-1);
        tracep->declQuad(c+428,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e reverse_op1", false,-1, 63,0);
        tracep->declBit(c+395,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e shift_sign", false,-1);
        tracep->declQuad(c+430,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e shift_op", false,-1, 63,0);
        tracep->declBus(c+432,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e shamt", false,-1, 5,0);
        tracep->declQuad(c+433,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e sra_mask", false,-1, 63,0);
        tracep->declQuad(c+377,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e shift_result", false,-1, 63,0);
        tracep->declBus(c+435,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e shift_opW", false,-1, 31,0);
        tracep->declQuad(c+436,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e srl_op", false,-1, 63,0);
        tracep->declQuad(c+438,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e sllw_result", false,-1, 63,0);
        tracep->declQuad(c+440,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e slldw_result", false,-1, 63,0);
        tracep->declQuad(c+442,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e dword_result", false,-1, 63,0);
        tracep->declQuad(c+444,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e word_sext_result", false,-1, 63,0);
        tracep->declBit(c+446,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e word_sext", false,-1);
        tracep->declBit(c+821,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e clk", false,-1);
        tracep->declBit(c+822,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e rst", false,-1);
        tracep->declQuad(c+447,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e mul1", false,-1, 63,0);
        tracep->declQuad(c+449,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e mul2", false,-1, 63,0);
        tracep->declBit(c+397,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e is_signed", false,-1);
        tracep->declBit(c+401,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e mul_valid", false,-1);
        tracep->declBit(c+403,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e P_valid", false,-1);
        tracep->declArray(c+451,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e P", false,-1, 127,0);
        tracep->declBit(c+455,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e sgn_ext1", false,-1);
        tracep->declBit(c+456,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e sgn_ext2", false,-1);
        tracep->declArray(c+457,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e booth_mul1", false,-1, 66,0);
        tracep->declArray(c+460,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e booth_mul2", false,-1, 131,0);
        tracep->declArray(c+465,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e partial_sum", false,-1, 131,0);
        tracep->declBit(c+470,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e partial_c", false,-1);
        tracep->declArray(c+471,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e mid_result", false,-1, 131,0);
        tracep->declBus(c+476,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e booth", false,-1, 2,0);
        tracep->declArray(c+477,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e S", false,-1, 131,0);
        tracep->declBit(c+470,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e Ci", false,-1);
        tracep->declBit(c+1055,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e end_flag", false,-1);
        tracep->declBit(c+482,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e mul_process", false,-1);
        tracep->declBus(c+483,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e iter_cnt", false,-1, 5,0);
        tracep->declBus(c+476,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e radix4_unit_e booth", false,-1, 2,0);
        tracep->declArray(c+460,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e radix4_unit_e X", false,-1, 131,0);
        tracep->declArray(c+465,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e radix4_unit_e P", false,-1, 131,0);
        tracep->declBit(c+470,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e radix4_unit_e c", false,-1);
        tracep->declBit(c+484,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e radix4_unit_e y_add", false,-1);
        tracep->declBit(c+485,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e radix4_unit_e y", false,-1);
        tracep->declBit(c+486,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e radix4_unit_e y_sub", false,-1);
        tracep->declBit(c+487,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e radix4_unit_e sel_negative", false,-1);
        tracep->declBit(c+488,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e radix4_unit_e sel_double_negative", false,-1);
        tracep->declBit(c+489,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e radix4_unit_e sel_positive", false,-1);
        tracep->declBit(c+490,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e radix4_unit_e sel_double_positive", false,-1);
        tracep->declBit(c+821,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e radix2_div_e clk", false,-1);
        tracep->declBit(c+822,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e radix2_div_e rst", false,-1);
        tracep->declQuad(c+447,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e radix2_div_e dividend", false,-1, 63,0);
        tracep->declQuad(c+449,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e radix2_div_e divisor", false,-1, 63,0);
        tracep->declBit(c+397,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e radix2_div_e is_signed", false,-1);
        tracep->declBit(c+402,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e radix2_div_e div_valid", false,-1);
        tracep->declQuad(c+385,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e radix2_div_e quotient", false,-1, 63,0);
        tracep->declQuad(c+387,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e radix2_div_e remainder", false,-1, 63,0);
        tracep->declBit(c+404,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e radix2_div_e Q_valid", false,-1);
        tracep->declArray(c+491,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e radix2_div_e abs_dividend", false,-1, 127,0);
        tracep->declArray(c+495,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e radix2_div_e abs_divisor", false,-1, 127,0);
        tracep->declArray(c+499,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e radix2_div_e current_sub_result", false,-1, 127,0);
        tracep->declBit(c+503,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e radix2_div_e current_q", false,-1);
        tracep->declBit(c+504,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e radix2_div_e dividend_flag", false,-1);
        tracep->declBit(c+505,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e radix2_div_e divisor_flag", false,-1);
        tracep->declBit(c+506,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e radix2_div_e q_flag", false,-1);
        tracep->declBit(c+504,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e radix2_div_e rem_flag", false,-1);
        tracep->declQuad(c+507,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e radix2_div_e abs_quotient", false,-1, 63,0);
        tracep->declBit(c+509,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e radix2_div_e div_process", false,-1);
        tracep->declBus(c+510,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e radix2_div_e iter_cnt", false,-1, 5,0);
        tracep->declQuad(c+86,"ysyx_22040750 cpu_core_e alu_e csr_alu_e I_csr_data", false,-1, 63,0);
        tracep->declQuad(c+32,"ysyx_22040750 cpu_core_e alu_e csr_alu_e I_rs_data", false,-1, 63,0);
        tracep->declBus(c+112,"ysyx_22040750 cpu_core_e alu_e csr_alu_e I_uimm", false,-1, 4,0);
        tracep->declBus(c+111,"ysyx_22040750 cpu_core_e alu_e csr_alu_e I_csr_op_sel", false,-1, 6,0);
        tracep->declQuad(c+46,"ysyx_22040750 cpu_core_e alu_e csr_alu_e O_csr_data", false,-1, 63,0);
        tracep->declBit(c+511,"ysyx_22040750 cpu_core_e alu_e csr_alu_e direct_rs", false,-1);
        tracep->declBit(c+512,"ysyx_22040750 cpu_core_e alu_e csr_alu_e direct_uimm", false,-1);
        tracep->declBit(c+513,"ysyx_22040750 cpu_core_e alu_e csr_alu_e set_rs", false,-1);
        tracep->declBit(c+514,"ysyx_22040750 cpu_core_e alu_e csr_alu_e set_uimm", false,-1);
        tracep->declBit(c+515,"ysyx_22040750 cpu_core_e alu_e csr_alu_e clr_rs", false,-1);
        tracep->declBit(c+516,"ysyx_22040750 cpu_core_e alu_e csr_alu_e clr_uimm", false,-1);
        tracep->declBit(c+517,"ysyx_22040750 cpu_core_e alu_e csr_alu_e direct", false,-1);
        tracep->declBit(c+518,"ysyx_22040750 cpu_core_e alu_e csr_alu_e set", false,-1);
        tracep->declBit(c+519,"ysyx_22040750 cpu_core_e alu_e csr_alu_e clr", false,-1);
        tracep->declBit(c+520,"ysyx_22040750 cpu_core_e alu_e csr_alu_e from_rs", false,-1);
        tracep->declBit(c+521,"ysyx_22040750 cpu_core_e alu_e csr_alu_e from_uimm", false,-1);
        tracep->declQuad(c+522,"ysyx_22040750 cpu_core_e alu_e csr_alu_e op", false,-1, 63,0);
        tracep->declQuad(c+522,"ysyx_22040750 cpu_core_e alu_e csr_alu_e direct_result", false,-1, 63,0);
        tracep->declQuad(c+524,"ysyx_22040750 cpu_core_e alu_e csr_alu_e set_result", false,-1, 63,0);
        tracep->declQuad(c+526,"ysyx_22040750 cpu_core_e alu_e csr_alu_e clr_result", false,-1, 63,0);
        tracep->declBit(c+821,"ysyx_22040750 cpu_core_e EX_MEM_reg_e I_sys_clk", false,-1);
        tracep->declBit(c+822,"ysyx_22040750 cpu_core_e EX_MEM_reg_e I_rst", false,-1);
        tracep->declBit(c+99,"ysyx_22040750 cpu_core_e EX_MEM_reg_e I_EX_MEM_valid", false,-1);
        tracep->declBit(c+154,"ysyx_22040750 cpu_core_e EX_MEM_reg_e I_EX_MEM_allowout", false,-1);
        tracep->declBit(c+129,"ysyx_22040750 cpu_core_e EX_MEM_reg_e O_EX_MEM_allowin", false,-1);
        tracep->declBit(c+115,"ysyx_22040750 cpu_core_e EX_MEM_reg_e O_EX_MEM_valid", false,-1);
        tracep->declBus(c+90,"ysyx_22040750 cpu_core_e EX_MEM_reg_e I_rstrb", false,-1, 8,0);
        tracep->declBus(c+89,"ysyx_22040750 cpu_core_e EX_MEM_reg_e I_wstrb", false,-1, 7,0);
        tracep->declQuad(c+36,"ysyx_22040750 cpu_core_e EX_MEM_reg_e I_alu_out", false,-1, 63,0);
        tracep->declQuad(c+42,"ysyx_22040750 cpu_core_e EX_MEM_reg_e I_mem_addr", false,-1, 63,0);
        tracep->declQuad(c+84,"ysyx_22040750 cpu_core_e EX_MEM_reg_e I_rs2_data", false,-1, 63,0);
        tracep->declBit(c+97,"ysyx_22040750 cpu_core_e EX_MEM_reg_e I_mem_wen", false,-1);
        tracep->declQuad(c+80,"ysyx_22040750 cpu_core_e EX_MEM_reg_e I_pc", false,-1, 63,0);
        tracep->declBit(c+96,"ysyx_22040750 cpu_core_e EX_MEM_reg_e I_reg_wen", false,-1);
        tracep->declBus(c+88,"ysyx_22040750 cpu_core_e EX_MEM_reg_e I_rd_addr", false,-1, 4,0);
        tracep->declBus(c+93,"ysyx_22040750 cpu_core_e EX_MEM_reg_e I_regin_sel", false,-1, 2,0);
        tracep->declBit(c+16,"ysyx_22040750 cpu_core_e EX_MEM_reg_e I_mem_data_rvalid", false,-1);
        tracep->declBit(c+17,"ysyx_22040750 cpu_core_e EX_MEM_reg_e I_mem_data_bvalid", false,-1);
        tracep->declBus(c+107,"ysyx_22040750 cpu_core_e EX_MEM_reg_e I_csr_addr", false,-1, 11,0);
        tracep->declBit(c+108,"ysyx_22040750 cpu_core_e EX_MEM_reg_e I_csr_wen", false,-1);
        tracep->declBit(c+109,"ysyx_22040750 cpu_core_e EX_MEM_reg_e I_csr_intr", false,-1);
        tracep->declQuad(c+113,"ysyx_22040750 cpu_core_e EX_MEM_reg_e I_csr_intr_no", false,-1, 63,0);
        tracep->declBit(c+110,"ysyx_22040750 cpu_core_e EX_MEM_reg_e I_csr_mret", false,-1);
        tracep->declQuad(c+46,"ysyx_22040750 cpu_core_e EX_MEM_reg_e I_csr", false,-1, 63,0);
        tracep->declBus(c+134,"ysyx_22040750 cpu_core_e EX_MEM_reg_e O_csr_addr", false,-1, 11,0);
        tracep->declBit(c+135,"ysyx_22040750 cpu_core_e EX_MEM_reg_e O_csr_wen", false,-1);
        tracep->declBit(c+136,"ysyx_22040750 cpu_core_e EX_MEM_reg_e O_csr_intr", false,-1);
        tracep->declQuad(c+138,"ysyx_22040750 cpu_core_e EX_MEM_reg_e O_csr_intr_no", false,-1, 63,0);
        tracep->declBit(c+137,"ysyx_22040750 cpu_core_e EX_MEM_reg_e O_csr_mret", false,-1);
        tracep->declQuad(c+120,"ysyx_22040750 cpu_core_e EX_MEM_reg_e O_csr", false,-1, 63,0);
        tracep->declBus(c+116,"ysyx_22040750 cpu_core_e EX_MEM_reg_e O_rstrb", false,-1, 8,0);
        tracep->declBus(c+117,"ysyx_22040750 cpu_core_e EX_MEM_reg_e O_wstrb", false,-1, 7,0);
        tracep->declQuad(c+118,"ysyx_22040750 cpu_core_e EX_MEM_reg_e O_alu_out", false,-1, 63,0);
        tracep->declQuad(c+8,"ysyx_22040750 cpu_core_e EX_MEM_reg_e O_mem_addr", false,-1, 63,0);
        tracep->declQuad(c+40,"ysyx_22040750 cpu_core_e EX_MEM_reg_e O_rs2_data", false,-1, 63,0);
        tracep->declBit(c+10,"ysyx_22040750 cpu_core_e EX_MEM_reg_e O_mem_rd_en", false,-1);
        tracep->declBit(c+11,"ysyx_22040750 cpu_core_e EX_MEM_reg_e O_mem_wr_en", false,-1);
        tracep->declBit(c+122,"ysyx_22040750 cpu_core_e EX_MEM_reg_e O_mem_wen", false,-1);
        tracep->declQuad(c+123,"ysyx_22040750 cpu_core_e EX_MEM_reg_e O_pc", false,-1, 63,0);
        tracep->declBit(c+125,"ysyx_22040750 cpu_core_e EX_MEM_reg_e O_reg_wen", false,-1);
        tracep->declBus(c+126,"ysyx_22040750 cpu_core_e EX_MEM_reg_e O_rd_addr", false,-1, 4,0);
        tracep->declBus(c+127,"ysyx_22040750 cpu_core_e EX_MEM_reg_e O_regin_sel", false,-1, 2,0);
        tracep->declBit(c+133,"ysyx_22040750 cpu_core_e EX_MEM_reg_e O_EX_MEM_input_valid", false,-1);
        tracep->declBus(c+102,"ysyx_22040750 cpu_core_e EX_MEM_reg_e I_inst_debug", false,-1, 31,0);
        tracep->declBus(c+131,"ysyx_22040750 cpu_core_e EX_MEM_reg_e O_inst_debug", false,-1, 31,0);
        tracep->declBit(c+103,"ysyx_22040750 cpu_core_e EX_MEM_reg_e I_bubble_inst_debug", false,-1);
        tracep->declBit(c+132,"ysyx_22040750 cpu_core_e EX_MEM_reg_e O_bubble_inst_debug", false,-1);
        tracep->declBit(c+10,"ysyx_22040750 cpu_core_e EX_MEM_reg_e mem_rd_en", false,-1);
        tracep->declBit(c+11,"ysyx_22040750 cpu_core_e EX_MEM_reg_e mem_wr_en", false,-1);
        tracep->declBit(c+133,"ysyx_22040750 cpu_core_e EX_MEM_reg_e input_valid", false,-1);
        tracep->declBit(c+528,"ysyx_22040750 cpu_core_e EX_MEM_reg_e output_valid", false,-1);
        tracep->declQuad(c+40,"ysyx_22040750 cpu_core_e mem_sd_e I_data_in", false,-1, 63,0);
        tracep->declBus(c+117,"ysyx_22040750 cpu_core_e mem_sd_e I_wr_strb", false,-1, 7,0);
        tracep->declQuad(c+14,"ysyx_22040750 cpu_core_e mem_sd_e O_sd_data", false,-1, 63,0);
        tracep->declBit(c+821,"ysyx_22040750 cpu_core_e MEM_WB_reg_e I_sys_clk", false,-1);
        tracep->declBit(c+822,"ysyx_22040750 cpu_core_e MEM_WB_reg_e I_rst", false,-1);
        tracep->declBit(c+115,"ysyx_22040750 cpu_core_e MEM_WB_reg_e I_MEM_WB_valid", false,-1);
        tracep->declBit(c+154,"ysyx_22040750 cpu_core_e MEM_WB_reg_e O_MEM_WB_allowin", false,-1);
        tracep->declBit(c+142,"ysyx_22040750 cpu_core_e MEM_WB_reg_e O_MEM_WB_valid", false,-1);
        tracep->declQuad(c+123,"ysyx_22040750 cpu_core_e MEM_WB_reg_e I_pc", false,-1, 63,0);
        tracep->declQuad(c+12,"ysyx_22040750 cpu_core_e MEM_WB_reg_e I_mem_data", false,-1, 63,0);
        tracep->declBus(c+116,"ysyx_22040750 cpu_core_e MEM_WB_reg_e I_mem_rstrb", false,-1, 8,0);
        tracep->declBus(c+128,"ysyx_22040750 cpu_core_e MEM_WB_reg_e I_mem_shamt", false,-1, 2,0);
        tracep->declQuad(c+118,"ysyx_22040750 cpu_core_e MEM_WB_reg_e I_alu_out", false,-1, 63,0);
        tracep->declBit(c+125,"ysyx_22040750 cpu_core_e MEM_WB_reg_e I_reg_wen", false,-1);
        tracep->declBus(c+126,"ysyx_22040750 cpu_core_e MEM_WB_reg_e I_rd_addr", false,-1, 4,0);
        tracep->declBus(c+127,"ysyx_22040750 cpu_core_e MEM_WB_reg_e I_regin_sel", false,-1, 2,0);
        tracep->declBus(c+134,"ysyx_22040750 cpu_core_e MEM_WB_reg_e I_csr_addr", false,-1, 11,0);
        tracep->declBit(c+135,"ysyx_22040750 cpu_core_e MEM_WB_reg_e I_csr_wen", false,-1);
        tracep->declBit(c+136,"ysyx_22040750 cpu_core_e MEM_WB_reg_e I_csr_intr", false,-1);
        tracep->declQuad(c+138,"ysyx_22040750 cpu_core_e MEM_WB_reg_e I_csr_intr_no", false,-1, 63,0);
        tracep->declBit(c+137,"ysyx_22040750 cpu_core_e MEM_WB_reg_e I_csr_mret", false,-1);
        tracep->declQuad(c+120,"ysyx_22040750 cpu_core_e MEM_WB_reg_e I_csr", false,-1, 63,0);
        tracep->declBus(c+158,"ysyx_22040750 cpu_core_e MEM_WB_reg_e O_csr_addr", false,-1, 11,0);
        tracep->declBit(c+159,"ysyx_22040750 cpu_core_e MEM_WB_reg_e O_csr_wen", false,-1);
        tracep->declBit(c+160,"ysyx_22040750 cpu_core_e MEM_WB_reg_e O_csr_intr", false,-1);
        tracep->declQuad(c+162,"ysyx_22040750 cpu_core_e MEM_WB_reg_e O_csr_intr_no", false,-1, 63,0);
        tracep->declBit(c+161,"ysyx_22040750 cpu_core_e MEM_WB_reg_e O_csr_mret", false,-1);
        tracep->declQuad(c+148,"ysyx_22040750 cpu_core_e MEM_WB_reg_e O_csr", false,-1, 63,0);
        tracep->declQuad(c+140,"ysyx_22040750 cpu_core_e MEM_WB_reg_e O_pc", false,-1, 63,0);
        tracep->declQuad(c+143,"ysyx_22040750 cpu_core_e MEM_WB_reg_e O_mem_data", false,-1, 63,0);
        tracep->declBus(c+145,"ysyx_22040750 cpu_core_e MEM_WB_reg_e O_mem_rstrb", false,-1, 8,0);
        tracep->declBus(c+153,"ysyx_22040750 cpu_core_e MEM_WB_reg_e O_mem_shamt", false,-1, 2,0);
        tracep->declQuad(c+146,"ysyx_22040750 cpu_core_e MEM_WB_reg_e O_alu_out", false,-1, 63,0);
        tracep->declBit(c+150,"ysyx_22040750 cpu_core_e MEM_WB_reg_e O_reg_wen", false,-1);
        tracep->declBus(c+151,"ysyx_22040750 cpu_core_e MEM_WB_reg_e O_rd_addr", false,-1, 4,0);
        tracep->declBus(c+152,"ysyx_22040750 cpu_core_e MEM_WB_reg_e O_regin_sel", false,-1, 2,0);
        tracep->declBit(c+142,"ysyx_22040750 cpu_core_e MEM_WB_reg_e O_MEM_WB_input_valid", false,-1);
        tracep->declBus(c+131,"ysyx_22040750 cpu_core_e MEM_WB_reg_e I_inst_debug", false,-1, 31,0);
        tracep->declBus(c+155,"ysyx_22040750 cpu_core_e MEM_WB_reg_e O_inst_debug", false,-1, 31,0);
        tracep->declBit(c+132,"ysyx_22040750 cpu_core_e MEM_WB_reg_e I_bubble_inst_debug", false,-1);
        tracep->declBit(c+156,"ysyx_22040750 cpu_core_e MEM_WB_reg_e O_bubble_inst_debug", false,-1);
        tracep->declBit(c+171,"ysyx_22040750 cpu_core_e MEM_WB_reg_e I_mem_op_debug", false,-1);
        tracep->declBit(c+172,"ysyx_22040750 cpu_core_e MEM_WB_reg_e O_mem_op_debug", false,-1);
        tracep->declQuad(c+8,"ysyx_22040750 cpu_core_e MEM_WB_reg_e I_mem_addr_debug", false,-1, 63,0);
        tracep->declQuad(c+173,"ysyx_22040750 cpu_core_e MEM_WB_reg_e O_mem_addr_debug", false,-1, 63,0);
        tracep->declBit(c+142,"ysyx_22040750 cpu_core_e MEM_WB_reg_e input_valid", false,-1);
        tracep->declBit(c+142,"ysyx_22040750 cpu_core_e MEM_WB_reg_e output_valid", false,-1);
        tracep->declQuad(c+143,"ysyx_22040750 cpu_core_e mem_ld_e I_data_in", false,-1, 63,0);
        tracep->declBus(c+145,"ysyx_22040750 cpu_core_e mem_ld_e I_rd_strb", false,-1, 8,0);
        tracep->declBus(c+153,"ysyx_22040750 cpu_core_e mem_ld_e I_rd_shamt", false,-1, 2,0);
        tracep->declQuad(c+38,"ysyx_22040750 cpu_core_e mem_ld_e O_load_data", false,-1, 63,0);
        tracep->declBit(c+529,"ysyx_22040750 cpu_core_e mem_ld_e sext_flag", false,-1);
        tracep->declBit(c+530,"ysyx_22040750 cpu_core_e mem_ld_e sext_bit", false,-1);
        tracep->declBus(c+531,"ysyx_22040750 cpu_core_e mem_ld_e sext_mask", false,-1, 7,0);
        tracep->declQuad(c+532,"ysyx_22040750 cpu_core_e mem_ld_e ld_data", false,-1, 63,0);
        tracep->declBus(c+1030,"ysyx_22040750 cpu_core_e regin_64bit_2sel N", false,-1, 31,0);
        tracep->declBus(c+1056,"ysyx_22040750 cpu_core_e regin_64bit_2sel M", false,-1, 31,0);
        tracep->declArray(c+534,"ysyx_22040750 cpu_core_e regin_64bit_2sel I_sel_data", false,-1, 127,0);
        tracep->declBus(c+538,"ysyx_22040750 cpu_core_e regin_64bit_2sel I_sel", false,-1, 1,0);
        tracep->declQuad(c+26,"ysyx_22040750 cpu_core_e regin_64bit_2sel O_sel_data", false,-1, 63,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+539+i*2,"ysyx_22040750 cpu_core_e regin_64bit_2sel sel_data", true,(i+0), 63,0);}}
        tracep->declBus(c+1057,"ysyx_22040750 cpu_core_e regin_64bit_2sel unnamedblk1 i", false,-1, 31,0);
        tracep->declBit(c+821,"ysyx_22040750 cpu_core_e gpr_e I_sys_clk", false,-1);
        tracep->declBit(c+822,"ysyx_22040750 cpu_core_e gpr_e I_rst", false,-1);
        tracep->declQuad(c+26,"ysyx_22040750 cpu_core_e gpr_e I_wr_data", false,-1, 63,0);
        tracep->declBit(c+543,"ysyx_22040750 cpu_core_e gpr_e I_wen", false,-1);
        tracep->declBus(c+151,"ysyx_22040750 cpu_core_e gpr_e I_rd_addr", false,-1, 4,0);
        tracep->declBus(c+48,"ysyx_22040750 cpu_core_e gpr_e I_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+28,"ysyx_22040750 cpu_core_e gpr_e O_rs1_data", false,-1, 63,0);
        tracep->declBus(c+49,"ysyx_22040750 cpu_core_e gpr_e I_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+30,"ysyx_22040750 cpu_core_e gpr_e O_rs2_data", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+544+i*2,"ysyx_22040750 cpu_core_e gpr_e gpr", true,(i+0), 63,0);}}
        {int i; for (i=0; i<32; i++) {
                tracep->declBit(c+608+i*1,"ysyx_22040750 cpu_core_e gpr_e wen", true,(i+0));}}
        tracep->declBit(c+821,"ysyx_22040750 cpu_core_e csr_e I_sys_clk", false,-1);
        tracep->declBit(c+822,"ysyx_22040750 cpu_core_e csr_e I_rst", false,-1);
        tracep->declBit(c+159,"ysyx_22040750 cpu_core_e csr_e I_csr_wen", false,-1);
        tracep->declBit(c+160,"ysyx_22040750 cpu_core_e csr_e I_csr_intr_wr", false,-1);
        tracep->declBit(c+64,"ysyx_22040750 cpu_core_e csr_e I_csr_intr_rd", false,-1);
        tracep->declQuad(c+140,"ysyx_22040750 cpu_core_e csr_e I_intr_pc", false,-1, 63,0);
        tracep->declQuad(c+162,"ysyx_22040750 cpu_core_e csr_e I_csr_intr_no", false,-1, 63,0);
        tracep->declBit(c+161,"ysyx_22040750 cpu_core_e csr_e I_csr_mret_wr", false,-1);
        tracep->declBit(c+65,"ysyx_22040750 cpu_core_e csr_e I_csr_mret_rd", false,-1);
        tracep->declBus(c+158,"ysyx_22040750 cpu_core_e csr_e I_wr_addr", false,-1, 11,0);
        tracep->declBus(c+62,"ysyx_22040750 cpu_core_e csr_e I_rd_addr", false,-1, 11,0);
        tracep->declQuad(c+148,"ysyx_22040750 cpu_core_e csr_e I_wr_data", false,-1, 63,0);
        tracep->declQuad(c+44,"ysyx_22040750 cpu_core_e csr_e O_rd_data", false,-1, 63,0);
        tracep->declBus(c+1058,"ysyx_22040750 cpu_core_e csr_e CSR_NUM", false,-1, 31,0);
        tracep->declBus(c+1059,"ysyx_22040750 cpu_core_e csr_e MEPC", false,-1, 11,0);
        tracep->declBus(c+1060,"ysyx_22040750 cpu_core_e csr_e MSTATUS", false,-1, 11,0);
        tracep->declBus(c+1061,"ysyx_22040750 cpu_core_e csr_e MTVEC", false,-1, 11,0);
        tracep->declBus(c+1062,"ysyx_22040750 cpu_core_e csr_e MCAUSE", false,-1, 11,0);
        tracep->declBus(c+1063,"ysyx_22040750 cpu_core_e csr_e MSCRATCH", false,-1, 11,0);
        tracep->declQuad(c+640,"ysyx_22040750 cpu_core_e csr_e mepc", false,-1, 63,0);
        tracep->declQuad(c+642,"ysyx_22040750 cpu_core_e csr_e mstatus", false,-1, 63,0);
        tracep->declQuad(c+644,"ysyx_22040750 cpu_core_e csr_e mtvec", false,-1, 63,0);
        tracep->declQuad(c+646,"ysyx_22040750 cpu_core_e csr_e mcause", false,-1, 63,0);
        tracep->declQuad(c+648,"ysyx_22040750 cpu_core_e csr_e mscratch", false,-1, 63,0);
        tracep->declQuad(c+44,"ysyx_22040750 cpu_core_e csr_e rd_data", false,-1, 63,0);
        tracep->declBit(c+650,"ysyx_22040750 cpu_core_e csr_e mie", false,-1);
        tracep->declBit(c+651,"ysyx_22040750 cpu_core_e csr_e mpie", false,-1);
        tracep->declBit(c+821,"ysyx_22040750 cache_e I_clk", false,-1);
        tracep->declBit(c+822,"ysyx_22040750 cache_e I_rst", false,-1);
        tracep->declBus(c+652,"ysyx_22040750 cache_e I_cpu_pc", false,-1, 31,0);
        tracep->declBit(c+7,"ysyx_22040750 cache_e I_cpu_pc_valid", false,-1);
        tracep->declBus(c+653,"ysyx_22040750 cache_e I_cpu_addr", false,-1, 31,0);
        tracep->declBus(c+18,"ysyx_22040750 cache_e I_cpu_wmask", false,-1, 7,0);
        tracep->declBit(c+10,"ysyx_22040750 cache_e I_cpu_rd_req", false,-1);
        tracep->declBit(c+11,"ysyx_22040750 cache_e I_cpu_wr_req", false,-1);
        tracep->declQuad(c+14,"ysyx_22040750 cache_e I_cpu_wdata", false,-1, 63,0);
        tracep->declArray(c+897,"ysyx_22040750 cache_e I_sram0_rdata", false,-1, 127,0);
        tracep->declArray(c+912,"ysyx_22040750 cache_e I_sram1_rdata", false,-1, 127,0);
        tracep->declArray(c+927,"ysyx_22040750 cache_e I_sram2_rdata", false,-1, 127,0);
        tracep->declArray(c+942,"ysyx_22040750 cache_e I_sram3_rdata", false,-1, 127,0);
        tracep->declArray(c+957,"ysyx_22040750 cache_e I_sram4_rdata", false,-1, 127,0);
        tracep->declArray(c+972,"ysyx_22040750 cache_e I_sram5_rdata", false,-1, 127,0);
        tracep->declArray(c+987,"ysyx_22040750 cache_e I_sram6_rdata", false,-1, 127,0);
        tracep->declArray(c+1002,"ysyx_22040750 cache_e I_sram7_rdata", false,-1, 127,0);
        tracep->declBus(c+1,"ysyx_22040750 cache_e O_sram_iaddr", false,-1, 5,0);
        tracep->declBus(c+2,"ysyx_22040750 cache_e O_sram_daddr", false,-1, 5,0);
        tracep->declBus(c+791,"ysyx_22040750 cache_e O_sram_cen", false,-1, 7,0);
        tracep->declBus(c+654,"ysyx_22040750 cache_e O_sram_wen", false,-1, 7,0);
        tracep->declArray(c+893,"ysyx_22040750 cache_e O_sram0_wdata", false,-1, 127,0);
        tracep->declArray(c+908,"ysyx_22040750 cache_e O_sram1_wdata", false,-1, 127,0);
        tracep->declArray(c+923,"ysyx_22040750 cache_e O_sram2_wdata", false,-1, 127,0);
        tracep->declArray(c+938,"ysyx_22040750 cache_e O_sram3_wdata", false,-1, 127,0);
        tracep->declArray(c+953,"ysyx_22040750 cache_e O_sram4_wdata", false,-1, 127,0);
        tracep->declArray(c+968,"ysyx_22040750 cache_e O_sram5_wdata", false,-1, 127,0);
        tracep->declArray(c+983,"ysyx_22040750 cache_e O_sram6_wdata", false,-1, 127,0);
        tracep->declArray(c+998,"ysyx_22040750 cache_e O_sram7_wdata", false,-1, 127,0);
        tracep->declArray(c+889,"ysyx_22040750 cache_e O_sram0_wmask", false,-1, 127,0);
        tracep->declArray(c+904,"ysyx_22040750 cache_e O_sram1_wmask", false,-1, 127,0);
        tracep->declArray(c+919,"ysyx_22040750 cache_e O_sram2_wmask", false,-1, 127,0);
        tracep->declArray(c+934,"ysyx_22040750 cache_e O_sram3_wmask", false,-1, 127,0);
        tracep->declArray(c+949,"ysyx_22040750 cache_e O_sram4_wmask", false,-1, 127,0);
        tracep->declArray(c+964,"ysyx_22040750 cache_e O_sram5_wmask", false,-1, 127,0);
        tracep->declArray(c+979,"ysyx_22040750 cache_e O_sram6_wmask", false,-1, 127,0);
        tracep->declArray(c+994,"ysyx_22040750 cache_e O_sram7_wmask", false,-1, 127,0);
        tracep->declQuad(c+852,"ysyx_22040750 cache_e I_mem_rdata", false,-1, 63,0);
        tracep->declBit(c+849,"ysyx_22040750 cache_e I_mem_rvalid", false,-1);
        tracep->declBit(c+848,"ysyx_22040750 cache_e O_mem_rready", false,-1);
        tracep->declBit(c+854,"ysyx_22040750 cache_e I_mem_rlast", false,-1);
        tracep->declBus(c+844,"ysyx_22040750 cache_e O_mem_araddr", false,-1, 31,0);
        tracep->declBit(c+841,"ysyx_22040750 cache_e I_mem_arready", false,-1);
        tracep->declBit(c+842,"ysyx_22040750 cache_e O_mem_arvalid", false,-1);
        tracep->declBus(c+845,"ysyx_22040750 cache_e O_mem_arlen", false,-1, 7,0);
        tracep->declBus(c+846,"ysyx_22040750 cache_e O_mem_arsize", false,-1, 2,0);
        tracep->declQuad(c+833,"ysyx_22040750 cache_e O_mem_wdata", false,-1, 63,0);
        tracep->declBit(c+832,"ysyx_22040750 cache_e O_mem_wvalid", false,-1);
        tracep->declBit(c+831,"ysyx_22040750 cache_e I_mem_wready", false,-1);
        tracep->declBit(c+836,"ysyx_22040750 cache_e O_mem_wlast", false,-1);
        tracep->declBus(c+835,"ysyx_22040750 cache_e O_mem_wstrb", false,-1, 7,0);
        tracep->declBus(c+827,"ysyx_22040750 cache_e O_mem_awaddr", false,-1, 31,0);
        tracep->declBit(c+825,"ysyx_22040750 cache_e O_mem_awvalid", false,-1);
        tracep->declBit(c+824,"ysyx_22040750 cache_e I_mem_awready", false,-1);
        tracep->declBus(c+828,"ysyx_22040750 cache_e O_mem_awlen", false,-1, 7,0);
        tracep->declBus(c+829,"ysyx_22040750 cache_e O_mem_awsize", false,-1, 2,0);
        tracep->declBit(c+838,"ysyx_22040750 cache_e I_mem_bvalid", false,-1);
        tracep->declBit(c+837,"ysyx_22040750 cache_e O_mem_bready", false,-1);
        tracep->declQuad(c+12,"ysyx_22040750 cache_e O_cpu_rdata", false,-1, 63,0);
        tracep->declBus(c+3,"ysyx_22040750 cache_e O_cpu_inst", false,-1, 31,0);
        tracep->declBit(c+6,"ysyx_22040750 cache_e O_cpu_inst_valid", false,-1);
        tracep->declBit(c+16,"ysyx_22040750 cache_e O_cpu_rvalid", false,-1);
        tracep->declBit(c+17,"ysyx_22040750 cache_e O_cpu_bvalid", false,-1);
        tracep->declBus(c+655,"ysyx_22040750 cache_e icache_cen", false,-1, 3,0);
        tracep->declBus(c+656,"ysyx_22040750 cache_e icache_wen", false,-1, 3,0);
        tracep->declArray(c+1006,"ysyx_22040750 cache_e icache_way0_rdata", false,-1, 255,0);
        tracep->declArray(c+1014,"ysyx_22040750 cache_e icache_way1_rdata", false,-1, 255,0);
        tracep->declArray(c+657,"ysyx_22040750 cache_e icache_wdata", false,-1, 255,0);
        tracep->declArray(c+665,"ysyx_22040750 cache_e icache_wmask", false,-1, 255,0);
        tracep->declBus(c+777,"ysyx_22040750 cache_e dcache_cen", false,-1, 3,0);
        tracep->declBus(c+673,"ysyx_22040750 cache_e dcache_wen", false,-1, 3,0);
        tracep->declArray(c+792,"ysyx_22040750 cache_e dcache_way0_rdata", false,-1, 255,0);
        tracep->declArray(c+800,"ysyx_22040750 cache_e dcache_way1_rdata", false,-1, 255,0);
        tracep->declArray(c+674,"ysyx_22040750 cache_e dcache_wdata", false,-1, 255,0);
        tracep->declArray(c+682,"ysyx_22040750 cache_e dcache_wmask", false,-1, 255,0);
        tracep->declQuad(c+1022,"ysyx_22040750 cache_e axi_icache_rdata", false,-1, 63,0);
        tracep->declQuad(c+1024,"ysyx_22040750 cache_e axi_dcache_rdata", false,-1, 63,0);
        tracep->declBit(c+1029,"ysyx_22040750 cache_e axi_icache_rready", false,-1);
        tracep->declBit(c+1029,"ysyx_22040750 cache_e axi_dcache_rready", false,-1);
        tracep->declBit(c+808,"ysyx_22040750 cache_e axi_icache_rvalid", false,-1);
        tracep->declBit(c+809,"ysyx_22040750 cache_e axi_dcache_rvalid", false,-1);
        tracep->declBit(c+810,"ysyx_22040750 cache_e axi_icache_rlast", false,-1);
        tracep->declBit(c+811,"ysyx_22040750 cache_e axi_dcache_rlast", false,-1);
        tracep->declBus(c+690,"ysyx_22040750 cache_e axi_icache_araddr", false,-1, 31,0);
        tracep->declBus(c+691,"ysyx_22040750 cache_e axi_dcache_araddr", false,-1, 31,0);
        tracep->declBit(c+812,"ysyx_22040750 cache_e axi_icache_arready", false,-1);
        tracep->declBit(c+813,"ysyx_22040750 cache_e axi_dcache_arready", false,-1);
        tracep->declBit(c+692,"ysyx_22040750 cache_e axi_icache_arvalid", false,-1);
        tracep->declBit(c+693,"ysyx_22040750 cache_e axi_dcache_arvalid", false,-1);
        tracep->declBus(c+1064,"ysyx_22040750 cache_e axi_icache_arlen", false,-1, 7,0);
        tracep->declBus(c+1064,"ysyx_22040750 cache_e axi_dcache_arlen", false,-1, 7,0);
        tracep->declBus(c+1065,"ysyx_22040750 cache_e axi_icache_arsize", false,-1, 2,0);
        tracep->declBus(c+1065,"ysyx_22040750 cache_e axi_dcache_arsize", false,-1, 2,0);
        tracep->declQuad(c+778,"ysyx_22040750 cache_e axi_dcache_wdata", false,-1, 63,0);
        tracep->declBit(c+694,"ysyx_22040750 cache_e axi_dcache_wvalid", false,-1);
        tracep->declBit(c+831,"ysyx_22040750 cache_e axi_dcache_wready", false,-1);
        tracep->declBit(c+695,"ysyx_22040750 cache_e axi_dcache_wlast", false,-1);
        tracep->declBus(c+1066,"ysyx_22040750 cache_e axi_dcache_wstrb", false,-1, 7,0);
        tracep->declBus(c+696,"ysyx_22040750 cache_e axi_dcache_awaddr", false,-1, 31,0);
        tracep->declBit(c+697,"ysyx_22040750 cache_e axi_dcache_awvalid", false,-1);
        tracep->declBit(c+824,"ysyx_22040750 cache_e axi_dcache_awready", false,-1);
        tracep->declBus(c+1064,"ysyx_22040750 cache_e axi_dcache_awlen", false,-1, 7,0);
        tracep->declBus(c+1065,"ysyx_22040750 cache_e axi_dcache_awsize", false,-1, 2,0);
        tracep->declBit(c+838,"ysyx_22040750 cache_e axi_dcache_bvalid", false,-1);
        tracep->declBit(c+1029,"ysyx_22040750 cache_e axi_dcache_bready", false,-1);
        tracep->declBit(c+821,"ysyx_22040750 cache_e crossbar_e I_clk", false,-1);
        tracep->declBit(c+822,"ysyx_22040750 cache_e crossbar_e I_rst", false,-1);
        tracep->declQuad(c+852,"ysyx_22040750 cache_e crossbar_e I_axi_rdata", false,-1, 63,0);
        tracep->declBit(c+849,"ysyx_22040750 cache_e crossbar_e I_axi_rvalid", false,-1);
        tracep->declBit(c+854,"ysyx_22040750 cache_e crossbar_e I_axi_rlast", false,-1);
        tracep->declBit(c+848,"ysyx_22040750 cache_e crossbar_e O_axi_rready", false,-1);
        tracep->declBus(c+844,"ysyx_22040750 cache_e crossbar_e O_axi_araddr", false,-1, 31,0);
        tracep->declBit(c+841,"ysyx_22040750 cache_e crossbar_e I_axi_arready", false,-1);
        tracep->declBit(c+842,"ysyx_22040750 cache_e crossbar_e O_axi_arvalid", false,-1);
        tracep->declBus(c+845,"ysyx_22040750 cache_e crossbar_e O_axi_arlen", false,-1, 7,0);
        tracep->declBus(c+846,"ysyx_22040750 cache_e crossbar_e O_axi_arsize", false,-1, 2,0);
        tracep->declQuad(c+1022,"ysyx_22040750 cache_e crossbar_e O_ch0_rdata", false,-1, 63,0);
        tracep->declBit(c+808,"ysyx_22040750 cache_e crossbar_e O_ch0_rvalid", false,-1);
        tracep->declBit(c+810,"ysyx_22040750 cache_e crossbar_e O_ch0_rlast", false,-1);
        tracep->declBit(c+1029,"ysyx_22040750 cache_e crossbar_e I_ch0_rready", false,-1);
        tracep->declBus(c+690,"ysyx_22040750 cache_e crossbar_e I_ch0_araddr", false,-1, 31,0);
        tracep->declBit(c+812,"ysyx_22040750 cache_e crossbar_e O_ch0_arready", false,-1);
        tracep->declBit(c+692,"ysyx_22040750 cache_e crossbar_e I_ch0_arvalid", false,-1);
        tracep->declBus(c+1064,"ysyx_22040750 cache_e crossbar_e I_ch0_arlen", false,-1, 7,0);
        tracep->declBus(c+1065,"ysyx_22040750 cache_e crossbar_e I_ch0_arsize", false,-1, 2,0);
        tracep->declQuad(c+1024,"ysyx_22040750 cache_e crossbar_e O_ch1_rdata", false,-1, 63,0);
        tracep->declBit(c+809,"ysyx_22040750 cache_e crossbar_e O_ch1_rvalid", false,-1);
        tracep->declBit(c+811,"ysyx_22040750 cache_e crossbar_e O_ch1_rlast", false,-1);
        tracep->declBit(c+1029,"ysyx_22040750 cache_e crossbar_e I_ch1_rready", false,-1);
        tracep->declBus(c+691,"ysyx_22040750 cache_e crossbar_e I_ch1_araddr", false,-1, 31,0);
        tracep->declBit(c+813,"ysyx_22040750 cache_e crossbar_e O_ch1_arready", false,-1);
        tracep->declBit(c+693,"ysyx_22040750 cache_e crossbar_e I_ch1_arvalid", false,-1);
        tracep->declBus(c+1064,"ysyx_22040750 cache_e crossbar_e I_ch1_arlen", false,-1, 7,0);
        tracep->declBus(c+1065,"ysyx_22040750 cache_e crossbar_e I_ch1_arsize", false,-1, 2,0);
        tracep->declBus(c+1067,"ysyx_22040750 cache_e crossbar_e CH0", false,-1, 0,0);
        tracep->declBus(c+1068,"ysyx_22040750 cache_e crossbar_e CH1", false,-1, 0,0);
        tracep->declBus(c+1069,"ysyx_22040750 cache_e crossbar_e IDLE", false,-1, 1,0);
        tracep->declBus(c+1070,"ysyx_22040750 cache_e crossbar_e RESP0", false,-1, 1,0);
        tracep->declBus(c+1071,"ysyx_22040750 cache_e crossbar_e RESP1", false,-1, 1,0);
        tracep->declBus(c+1072,"ysyx_22040750 cache_e crossbar_e current_state", false,-1, 1,0);
        tracep->declBus(c+1073,"ysyx_22040750 cache_e crossbar_e next_state", false,-1, 1,0);
        tracep->declBit(c+698,"ysyx_22040750 cache_e crossbar_e req0_only", false,-1);
        tracep->declBit(c+699,"ysyx_22040750 cache_e crossbar_e req1_only", false,-1);
        tracep->declBit(c+700,"ysyx_22040750 cache_e crossbar_e req_both", false,-1);
        tracep->declBit(c+701,"ysyx_22040750 cache_e crossbar_e resp0", false,-1);
        tracep->declBit(c+702,"ysyx_22040750 cache_e crossbar_e resp1", false,-1);
        tracep->declBit(c+780,"ysyx_22040750 cache_e crossbar_e ch0_arhandshake", false,-1);
        tracep->declBit(c+781,"ysyx_22040750 cache_e crossbar_e ch1_arhandshake", false,-1);
        tracep->declBit(c+814,"ysyx_22040750 cache_e crossbar_e ch0_last_handshake", false,-1);
        tracep->declBit(c+815,"ysyx_22040750 cache_e crossbar_e ch1_last_handshake", false,-1);
        tracep->declBit(c+703,"ysyx_22040750 cache_e crossbar_e ch0_process", false,-1);
        tracep->declBit(c+704,"ysyx_22040750 cache_e crossbar_e ch1_process", false,-1);
        tracep->declBit(c+705,"ysyx_22040750 cache_e crossbar_e priority_flag", false,-1);
        tracep->declBus(c+1074,"ysyx_22040750 cache_e icache_e BLOCK_SIZE", false,-1, 31,0);
        tracep->declBus(c+1058,"ysyx_22040750 cache_e icache_e CACHE_SIZE", false,-1, 31,0);
        tracep->declBus(c+1056,"ysyx_22040750 cache_e icache_e GROUP_NUM", false,-1, 31,0);
        tracep->declBus(c+1075,"ysyx_22040750 cache_e icache_e BLOCK_NUM", false,-1, 31,0);
        tracep->declBus(c+1076,"ysyx_22040750 cache_e icache_e OFFT_LEN", false,-1, 31,0);
        tracep->declBus(c+1077,"ysyx_22040750 cache_e icache_e INDEX_LEN", false,-1, 31,0);
        tracep->declBus(c+1078,"ysyx_22040750 cache_e icache_e TAG_LEN", false,-1, 31,0);
        tracep->declBit(c+821,"ysyx_22040750 cache_e icache_e I_clk", false,-1);
        tracep->declBit(c+822,"ysyx_22040750 cache_e icache_e I_rst", false,-1);
        tracep->declBus(c+652,"ysyx_22040750 cache_e icache_e I_cpu_addr", false,-1, 31,0);
        tracep->declBit(c+7,"ysyx_22040750 cache_e icache_e I_cpu_rd_req", false,-1);
        tracep->declArray(c+1006,"ysyx_22040750 cache_e icache_e I_way0_rdata", false,-1, 255,0);
        tracep->declArray(c+1014,"ysyx_22040750 cache_e icache_e I_way1_rdata", false,-1, 255,0);
        tracep->declBus(c+1,"ysyx_22040750 cache_e icache_e O_sram_addr", false,-1, 5,0);
        tracep->declBus(c+655,"ysyx_22040750 cache_e icache_e O_sram_cen", false,-1, 3,0);
        tracep->declBus(c+656,"ysyx_22040750 cache_e icache_e O_sram_wen", false,-1, 3,0);
        tracep->declArray(c+657,"ysyx_22040750 cache_e icache_e O_sram_wdata", false,-1, 255,0);
        tracep->declArray(c+665,"ysyx_22040750 cache_e icache_e O_sram_wmask", false,-1, 255,0);
        tracep->declQuad(c+1022,"ysyx_22040750 cache_e icache_e I_mem_rdata", false,-1, 63,0);
        tracep->declBit(c+812,"ysyx_22040750 cache_e icache_e I_mem_arready", false,-1);
        tracep->declBit(c+808,"ysyx_22040750 cache_e icache_e I_mem_rvalid", false,-1);
        tracep->declBit(c+810,"ysyx_22040750 cache_e icache_e I_mem_rlast", false,-1);
        tracep->declBus(c+690,"ysyx_22040750 cache_e icache_e O_mem_araddr", false,-1, 31,0);
        tracep->declBit(c+692,"ysyx_22040750 cache_e icache_e O_mem_arvalid", false,-1);
        tracep->declBit(c+1029,"ysyx_22040750 cache_e icache_e O_mem_rready", false,-1);
        tracep->declBus(c+1064,"ysyx_22040750 cache_e icache_e O_mem_arlen", false,-1, 7,0);
        tracep->declBus(c+1065,"ysyx_22040750 cache_e icache_e O_mem_arsize", false,-1, 2,0);
        tracep->declBus(c+3,"ysyx_22040750 cache_e icache_e O_cpu_inst", false,-1, 31,0);
        tracep->declBit(c+6,"ysyx_22040750 cache_e icache_e O_cpu_rvalid", false,-1);
        tracep->declBus(c+706,"ysyx_22040750 cache_e icache_e offset", false,-1, 4,0);
        tracep->declBus(c+707,"ysyx_22040750 cache_e icache_e index", false,-1, 5,0);
        tracep->declBus(c+708,"ysyx_22040750 cache_e icache_e tag", false,-1, 20,0);
        tracep->declBus(c+709,"ysyx_22040750 cache_e icache_e mem_offset", false,-1, 4,0);
        tracep->declBus(c+710,"ysyx_22040750 cache_e icache_e mem_index", false,-1, 5,0);
        tracep->declBus(c+711,"ysyx_22040750 cache_e icache_e mem_tag", false,-1, 20,0);
        tracep->declBus(c+712,"ysyx_22040750 cache_e icache_e mem_addr", false,-1, 31,0);
        tracep->declArray(c+713,"ysyx_22040750 cache_e icache_e valid_table", false,-1, 127,0);
        tracep->declBus(c+717,"ysyx_22040750 cache_e icache_e way0_tag", false,-1, 20,0);
        tracep->declBus(c+718,"ysyx_22040750 cache_e icache_e way1_tag", false,-1, 20,0);
        tracep->declBit(c+719,"ysyx_22040750 cache_e icache_e way0_valid", false,-1);
        tracep->declBit(c+720,"ysyx_22040750 cache_e icache_e way1_valid", false,-1);
        tracep->declBit(c+721,"ysyx_22040750 cache_e icache_e way0_hit", false,-1);
        tracep->declBit(c+722,"ysyx_22040750 cache_e icache_e way1_hit", false,-1);
        tracep->declBit(c+723,"ysyx_22040750 cache_e icache_e way0_replace", false,-1);
        tracep->declBit(c+724,"ysyx_22040750 cache_e icache_e way1_replace", false,-1);
        tracep->declArray(c+657,"ysyx_22040750 cache_e icache_e cacheline_reg", false,-1, 255,0);
        tracep->declBit(c+725,"ysyx_22040750 cache_e icache_e rd_hit", false,-1);
        tracep->declBit(c+726,"ysyx_22040750 cache_e icache_e rd_miss", false,-1);
        tracep->declBit(c+780,"ysyx_22040750 cache_e icache_e rd_handshake", false,-1);
        tracep->declBit(c+727,"ysyx_22040750 cache_e icache_e rd_reload", false,-1);
        tracep->declBit(c+728,"ysyx_22040750 cache_e icache_e rd_allocate", false,-1);
        tracep->declBus(c+1079,"ysyx_22040750 cache_e icache_e IDLE", false,-1, 3,0);
        tracep->declBus(c+1080,"ysyx_22040750 cache_e icache_e RD_HIT", false,-1, 3,0);
        tracep->declBus(c+1081,"ysyx_22040750 cache_e icache_e RD_MISS", false,-1, 3,0);
        tracep->declBus(c+1082,"ysyx_22040750 cache_e icache_e RD_RELOAD", false,-1, 3,0);
        tracep->declBus(c+1083,"ysyx_22040750 cache_e icache_e RD_ALLOCATE", false,-1, 3,0);
        tracep->declBus(c+729,"ysyx_22040750 cache_e icache_e current_state", false,-1, 3,0);
        tracep->declBus(c+816,"ysyx_22040750 cache_e icache_e next_state", false,-1, 3,0);
        tracep->declBus(c+655,"ysyx_22040750 cache_e icache_e cen_icache", false,-1, 3,0);
        tracep->declBus(c+1074,"ysyx_22040750 cache_e dcache_e BLOCK_SIZE", false,-1, 31,0);
        tracep->declBus(c+1058,"ysyx_22040750 cache_e dcache_e CACHE_SIZE", false,-1, 31,0);
        tracep->declBus(c+1056,"ysyx_22040750 cache_e dcache_e GROUP_NUM", false,-1, 31,0);
        tracep->declBus(c+1075,"ysyx_22040750 cache_e dcache_e BLOCK_NUM", false,-1, 31,0);
        tracep->declBus(c+1076,"ysyx_22040750 cache_e dcache_e OFFT_LEN", false,-1, 31,0);
        tracep->declBus(c+1077,"ysyx_22040750 cache_e dcache_e INDEX_LEN", false,-1, 31,0);
        tracep->declBus(c+1078,"ysyx_22040750 cache_e dcache_e TAG_LEN", false,-1, 31,0);
        tracep->declBit(c+821,"ysyx_22040750 cache_e dcache_e I_clk", false,-1);
        tracep->declBit(c+822,"ysyx_22040750 cache_e dcache_e I_rst", false,-1);
        tracep->declBus(c+653,"ysyx_22040750 cache_e dcache_e I_cpu_addr", false,-1, 31,0);
        tracep->declQuad(c+14,"ysyx_22040750 cache_e dcache_e I_cpu_data", false,-1, 63,0);
        tracep->declBus(c+18,"ysyx_22040750 cache_e dcache_e I_cpu_wmask", false,-1, 7,0);
        tracep->declBit(c+10,"ysyx_22040750 cache_e dcache_e I_cpu_rd_req", false,-1);
        tracep->declBit(c+11,"ysyx_22040750 cache_e dcache_e I_cpu_wr_req", false,-1);
        tracep->declArray(c+792,"ysyx_22040750 cache_e dcache_e I_way0_rdata", false,-1, 255,0);
        tracep->declArray(c+800,"ysyx_22040750 cache_e dcache_e I_way1_rdata", false,-1, 255,0);
        tracep->declBus(c+2,"ysyx_22040750 cache_e dcache_e O_sram_addr", false,-1, 5,0);
        tracep->declBus(c+777,"ysyx_22040750 cache_e dcache_e O_sram_cen", false,-1, 3,0);
        tracep->declBus(c+673,"ysyx_22040750 cache_e dcache_e O_sram_wen", false,-1, 3,0);
        tracep->declArray(c+674,"ysyx_22040750 cache_e dcache_e O_sram_wdata", false,-1, 255,0);
        tracep->declArray(c+682,"ysyx_22040750 cache_e dcache_e O_sram_wmask", false,-1, 255,0);
        tracep->declQuad(c+1024,"ysyx_22040750 cache_e dcache_e I_mem_rdata", false,-1, 63,0);
        tracep->declBit(c+813,"ysyx_22040750 cache_e dcache_e I_mem_arready", false,-1);
        tracep->declBit(c+809,"ysyx_22040750 cache_e dcache_e I_mem_rvalid", false,-1);
        tracep->declBit(c+811,"ysyx_22040750 cache_e dcache_e I_mem_rlast", false,-1);
        tracep->declBus(c+691,"ysyx_22040750 cache_e dcache_e O_mem_araddr", false,-1, 31,0);
        tracep->declBit(c+693,"ysyx_22040750 cache_e dcache_e O_mem_arvalid", false,-1);
        tracep->declBit(c+1029,"ysyx_22040750 cache_e dcache_e O_mem_rready", false,-1);
        tracep->declBus(c+1064,"ysyx_22040750 cache_e dcache_e O_mem_arlen", false,-1, 7,0);
        tracep->declBus(c+1065,"ysyx_22040750 cache_e dcache_e O_mem_arsize", false,-1, 2,0);
        tracep->declBit(c+824,"ysyx_22040750 cache_e dcache_e I_mem_awready", false,-1);
        tracep->declBit(c+831,"ysyx_22040750 cache_e dcache_e I_mem_wready", false,-1);
        tracep->declBit(c+838,"ysyx_22040750 cache_e dcache_e I_mem_bvalid", false,-1);
        tracep->declQuad(c+778,"ysyx_22040750 cache_e dcache_e O_mem_wdata", false,-1, 63,0);
        tracep->declBus(c+696,"ysyx_22040750 cache_e dcache_e O_mem_awaddr", false,-1, 31,0);
        tracep->declBit(c+697,"ysyx_22040750 cache_e dcache_e O_mem_awvalid", false,-1);
        tracep->declBit(c+694,"ysyx_22040750 cache_e dcache_e O_mem_wvalid", false,-1);
        tracep->declBit(c+1029,"ysyx_22040750 cache_e dcache_e O_mem_bready", false,-1);
        tracep->declBit(c+695,"ysyx_22040750 cache_e dcache_e O_mem_wlast", false,-1);
        tracep->declBus(c+1064,"ysyx_22040750 cache_e dcache_e O_mem_awlen", false,-1, 7,0);
        tracep->declBus(c+1065,"ysyx_22040750 cache_e dcache_e O_mem_awsize", false,-1, 2,0);
        tracep->declBus(c+1066,"ysyx_22040750 cache_e dcache_e O_mem_wstrb", false,-1, 7,0);
        tracep->declQuad(c+12,"ysyx_22040750 cache_e dcache_e O_cpu_data", false,-1, 63,0);
        tracep->declBit(c+16,"ysyx_22040750 cache_e dcache_e O_cpu_rvalid", false,-1);
        tracep->declBit(c+17,"ysyx_22040750 cache_e dcache_e O_cpu_bvalid", false,-1);
        tracep->declBus(c+1084,"ysyx_22040750 cache_e dcache_e IDLE", false,-1, 12,0);
        tracep->declBus(c+1085,"ysyx_22040750 cache_e dcache_e RD_HIT", false,-1, 12,0);
        tracep->declBus(c+1086,"ysyx_22040750 cache_e dcache_e RD_MISS", false,-1, 12,0);
        tracep->declBus(c+1087,"ysyx_22040750 cache_e dcache_e RD_RELOAD", false,-1, 12,0);
        tracep->declBus(c+1088,"ysyx_22040750 cache_e dcache_e RD_WB", false,-1, 12,0);
        tracep->declBus(c+1089,"ysyx_22040750 cache_e dcache_e RD_ALLOCATE", false,-1, 12,0);
        tracep->declBus(c+1090,"ysyx_22040750 cache_e dcache_e WR_HIT", false,-1, 12,0);
        tracep->declBus(c+1091,"ysyx_22040750 cache_e dcache_e WR_MISS", false,-1, 12,0);
        tracep->declBus(c+1092,"ysyx_22040750 cache_e dcache_e WR_RELOAD", false,-1, 12,0);
        tracep->declBus(c+1093,"ysyx_22040750 cache_e dcache_e WR_WB", false,-1, 12,0);
        tracep->declBus(c+1094,"ysyx_22040750 cache_e dcache_e WR_ALLOCATE", false,-1, 12,0);
        tracep->declBus(c+1095,"ysyx_22040750 cache_e dcache_e MMIO_RD", false,-1, 12,0);
        tracep->declBus(c+1096,"ysyx_22040750 cache_e dcache_e MMIO_WR", false,-1, 12,0);
        tracep->declBit(c+730,"ysyx_22040750 cache_e dcache_e mmio_flag", false,-1);
        tracep->declBus(c+731,"ysyx_22040750 cache_e dcache_e current_state", false,-1, 12,0);
        tracep->declBus(c+817,"ysyx_22040750 cache_e dcache_e next_state", false,-1, 12,0);
        tracep->declBit(c+732,"ysyx_22040750 cache_e dcache_e replace_dirty", false,-1);
        tracep->declBit(c+733,"ysyx_22040750 cache_e dcache_e rd_hit", false,-1);
        tracep->declBit(c+734,"ysyx_22040750 cache_e dcache_e rd_miss", false,-1);
        tracep->declBit(c+818,"ysyx_22040750 cache_e dcache_e rd_handshake", false,-1);
        tracep->declBit(c+735,"ysyx_22040750 cache_e dcache_e rd_reload", false,-1);
        tracep->declBit(c+736,"ysyx_22040750 cache_e dcache_e rd_wb", false,-1);
        tracep->declBit(c+737,"ysyx_22040750 cache_e dcache_e rd_allocate", false,-1);
        tracep->declBit(c+738,"ysyx_22040750 cache_e dcache_e wr_hit", false,-1);
        tracep->declBit(c+739,"ysyx_22040750 cache_e dcache_e wr_miss", false,-1);
        tracep->declBit(c+740,"ysyx_22040750 cache_e dcache_e wr_reload", false,-1);
        tracep->declBit(c+741,"ysyx_22040750 cache_e dcache_e wr_wb", false,-1);
        tracep->declBit(c+742,"ysyx_22040750 cache_e dcache_e wr_allocate", false,-1);
        tracep->declBus(c+743,"ysyx_22040750 cache_e dcache_e offset", false,-1, 4,0);
        tracep->declBus(c+744,"ysyx_22040750 cache_e dcache_e mem_offset", false,-1, 4,0);
        tracep->declBus(c+745,"ysyx_22040750 cache_e dcache_e index", false,-1, 5,0);
        tracep->declBus(c+746,"ysyx_22040750 cache_e dcache_e mem_index", false,-1, 5,0);
        tracep->declBus(c+747,"ysyx_22040750 cache_e dcache_e tag", false,-1, 20,0);
        tracep->declBus(c+748,"ysyx_22040750 cache_e dcache_e mem_tag", false,-1, 20,0);
        tracep->declBus(c+749,"ysyx_22040750 cache_e dcache_e mem_addr", false,-1, 31,0);
        tracep->declBus(c+750,"ysyx_22040750 cache_e dcache_e sram_wmask", false,-1, 7,0);
        tracep->declBus(c+751,"ysyx_22040750 cache_e dcache_e sram_wmaskB", false,-1, 31,0);
        tracep->declArray(c+674,"ysyx_22040750 cache_e dcache_e cacheline_reg", false,-1, 255,0);
        tracep->declQuad(c+752,"ysyx_22040750 cache_e dcache_e cpu_reg", false,-1, 63,0);
        tracep->declBus(c+754,"ysyx_22040750 cache_e dcache_e cpu_mask_reg", false,-1, 7,0);
        tracep->declBus(c+777,"ysyx_22040750 cache_e dcache_e cen_dcache", false,-1, 3,0);
        tracep->declBus(c+673,"ysyx_22040750 cache_e dcache_e wen_dcache", false,-1, 3,0);
        tracep->declBit(c+755,"ysyx_22040750 cache_e dcache_e sram_wflag", false,-1);
        tracep->declBit(c+782,"ysyx_22040750 cache_e dcache_e sram_rflag", false,-1);
        tracep->declArray(c+756,"ysyx_22040750 cache_e dcache_e valid_table", false,-1, 127,0);
        tracep->declArray(c+760,"ysyx_22040750 cache_e dcache_e dirty_table", false,-1, 127,0);
        tracep->declBus(c+764,"ysyx_22040750 cache_e dcache_e way0_tag", false,-1, 20,0);
        tracep->declBus(c+765,"ysyx_22040750 cache_e dcache_e way1_tag", false,-1, 20,0);
        tracep->declBit(c+766,"ysyx_22040750 cache_e dcache_e way0_valid", false,-1);
        tracep->declBit(c+767,"ysyx_22040750 cache_e dcache_e way1_valid", false,-1);
        tracep->declBit(c+768,"ysyx_22040750 cache_e dcache_e way0_hit", false,-1);
        tracep->declBit(c+769,"ysyx_22040750 cache_e dcache_e way1_hit", false,-1);
        tracep->declBit(c+770,"ysyx_22040750 cache_e dcache_e hit", false,-1);
        tracep->declBit(c+771,"ysyx_22040750 cache_e dcache_e way0_dirty", false,-1);
        tracep->declBit(c+772,"ysyx_22040750 cache_e dcache_e way1_dirty", false,-1);
        tracep->declBit(c+773,"ysyx_22040750 cache_e dcache_e way1_op", false,-1);
        tracep->declBit(c+774,"ysyx_22040750 cache_e dcache_e isway0_op", false,-1);
        tracep->declBus(c+1050,"ysyx_22040750 cache_e dcache_e WB_IDLE", false,-1, 2,0);
        tracep->declBus(c+1051,"ysyx_22040750 cache_e dcache_e WB_HANDSHAKE", false,-1, 2,0);
        tracep->declBus(c+1052,"ysyx_22040750 cache_e dcache_e WB_DATA", false,-1, 2,0);
        tracep->declBus(c+775,"ysyx_22040750 cache_e dcache_e wb_state", false,-1, 2,0);
        tracep->declBus(c+819,"ysyx_22040750 cache_e dcache_e wb_next_state", false,-1, 2,0);
        tracep->declBit(c+1026,"ysyx_22040750 cache_e dcache_e aw_handshake", false,-1);
        tracep->declBit(c+820,"ysyx_22040750 cache_e dcache_e wr_handshake", false,-1);
        tracep->declBus(c+776,"ysyx_22040750 cache_e dcache_e wdata_cnt", false,-1, 1,0);
        tracep->declArray(c+783,"ysyx_22040750 cache_e dcache_e wdata", false,-1, 255,0);
    }
}

void Vysyx_22040750___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vysyx_22040750___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vysyx_22040750___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vysyx_22040750___024root__traceRegister(Vysyx_22040750___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040750__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vysyx_22040750___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vysyx_22040750___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vysyx_22040750___024root__traceCleanup, vlSelf);
    }
}

void Vysyx_22040750___024root__traceFullSub0(Vysyx_22040750___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vysyx_22040750___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vysyx_22040750___024root* const __restrict vlSelf = static_cast<Vysyx_22040750___024root*>(voidSelf);
    Vysyx_22040750__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vysyx_22040750___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

extern const VlWide<8>/*255:0*/ Vysyx_22040750__ConstPool__CONST_9e67c271_0;
extern const VlWide<8>/*255:0*/ Vysyx_22040750__ConstPool__CONST_5b979007_0;

void Vysyx_22040750___024root__traceFullSub0(Vysyx_22040750___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040750__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<3>/*95:0*/ __Vtemp312;
    VlWide<3>/*95:0*/ __Vtemp313;
    VlWide<3>/*95:0*/ __Vtemp314;
    VlWide<3>/*95:0*/ __Vtemp315;
    VlWide<3>/*95:0*/ __Vtemp316;
    VlWide<3>/*95:0*/ __Vtemp331;
    VlWide<3>/*95:0*/ __Vtemp332;
    VlWide<3>/*95:0*/ __Vtemp333;
    VlWide<3>/*95:0*/ __Vtemp334;
    VlWide<3>/*95:0*/ __Vtemp335;
    VlWide<4>/*127:0*/ __Vtemp337;
    VlWide<5>/*159:0*/ __Vtemp363;
    VlWide<5>/*159:0*/ __Vtemp365;
    VlWide<8>/*255:0*/ __Vtemp367;
    VlWide<8>/*255:0*/ __Vtemp368;
    VlWide<8>/*255:0*/ __Vtemp369;
    VlWide<8>/*255:0*/ __Vtemp370;
    VlWide<8>/*255:0*/ __Vtemp371;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlSelf->ysyx_22040750__DOT__iaddr),6);
        tracep->fullCData(oldp+2,(vlSelf->ysyx_22040750__DOT__daddr),6);
        tracep->fullIData(oldp+3,(vlSelf->ysyx_22040750__DOT__cpu_inst),32);
        tracep->fullQData(oldp+4,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc),64);
        tracep->fullBit(oldp+6,((1U & ((1U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state)) 
                                       | ((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                                           ? 1U : 0U)))));
        tracep->fullBit(oldp+7,(vlSelf->ysyx_22040750__DOT__cpu_pc_valid));
        tracep->fullQData(oldp+8,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_mem_addr),64);
        tracep->fullBit(oldp+10,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_reg_e__DOT__mem_rd_en));
        tracep->fullBit(oldp+11,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_reg_e__DOT__mem_wr_en));
        tracep->fullQData(oldp+12,((((QData)((IData)(
                                                     vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[
                                                     (((IData)(0x3fU) 
                                                       + 
                                                       (0xc0U 
                                                        & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                           >> 2U))) 
                                                      >> 5U)])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[
                                                                 (6U 
                                                                  & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                     >> 7U))])))),64);
        tracep->fullQData(oldp+14,(vlSelf->ysyx_22040750__DOT__mem_wdata),64);
        tracep->fullBit(oldp+16,((1U & ((2U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state)) 
                                        | ((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                            ? 1U : 0U)))));
        tracep->fullBit(oldp+17,((0x40U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))));
        tracep->fullCData(oldp+18,((0xffU & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_wstrb) 
                                             << (7U 
                                                 & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_mem_addr))))),8);
        tracep->fullQData(oldp+19,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__current_pc),64);
        tracep->fullQData(oldp+21,((4ULL + vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__current_pc)),64);
        tracep->fullIData(oldp+23,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__current_inst),32);
        tracep->fullQData(oldp+24,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__imm),64);
        tracep->fullQData(oldp+26,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__wr_data),64);
        tracep->fullQData(oldp+28,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr
                                   [(0x1fU & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                              >> 0xfU))]),64);
        tracep->fullQData(oldp+30,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr
                                   [(0x1fU & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                              >> 0x14U))]),64);
        tracep->fullQData(oldp+32,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op1),64);
        tracep->fullQData(oldp+34,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op2),64);
        tracep->fullQData(oldp+36,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_out),64);
        tracep->fullQData(oldp+38,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__mem_in),64);
        tracep->fullQData(oldp+40,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_rs2),64);
        tracep->fullQData(oldp+42,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__result),64);
        tracep->fullQData(oldp+44,(((2U == (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_intr) 
                                             << 1U) 
                                            | (0x30200073U 
                                               == vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))
                                     ? vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mtvec
                                     : ((1U == (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_intr) 
                                                 << 1U) 
                                                | (0x30200073U 
                                                   == vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))
                                         ? vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mepc
                                         : ((0U == 
                                             (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_intr) 
                                               << 1U) 
                                              | (0x30200073U 
                                                 == vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))
                                             ? ((0x341U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x14U))
                                                 ? vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mepc
                                                 : 
                                                ((0x300U 
                                                  == 
                                                  (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                   >> 0x14U))
                                                  ? vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mstatus
                                                  : 
                                                 ((0x305U 
                                                   == 
                                                   (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                    >> 0x14U))
                                                   ? vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mtvec
                                                   : 
                                                  ((0x342U 
                                                    == 
                                                    (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                     >> 0x14U))
                                                    ? vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mcause
                                                    : 
                                                   ((0x340U 
                                                     == 
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                      >> 0x14U))
                                                     ? vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mscratch
                                                     : 0ULL)))))
                                             : 0ULL)))),64);
        tracep->fullQData(oldp+46,((((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__csr_alu_e__DOT__op 
                                      & (- (QData)((IData)(
                                                           (0U 
                                                            != 
                                                            (0x24U 
                                                             & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel))))))) 
                                     | ((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr 
                                         | vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__csr_alu_e__DOT__op) 
                                        & (- (QData)((IData)(
                                                             (0U 
                                                              != 
                                                              (0x12U 
                                                               & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel)))))))) 
                                    | ((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr 
                                        & (~ vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__csr_alu_e__DOT__op)) 
                                       & (- (QData)((IData)(
                                                            (0U 
                                                             != 
                                                             (9U 
                                                              & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel))))))))),64);
        tracep->fullCData(oldp+48,((0x1fU & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                             >> 0xfU))),5);
        tracep->fullCData(oldp+49,((0x1fU & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                             >> 0x14U))),5);
        tracep->fullCData(oldp+50,((0x1fU & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                             >> 7U))),5);
        tracep->fullCData(oldp+51,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc_sel),5);
        tracep->fullCData(oldp+52,(((((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__reg_wen) 
                                      & (3U == (0x7fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))) 
                                     << 1U) | ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__reg_wen) 
                                               & (3U 
                                                  != 
                                                  (0x7fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))))),3);
        tracep->fullCData(oldp+53,((((1U & (- (IData)(
                                                      ((((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__typeR) 
                                                         | ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__typeI) 
                                                            & (~ (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__JALR)))) 
                                                        | (0x23U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))) 
                                                       | (0x73U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))))) 
                                     | (2U & (- (IData)(
                                                        ((((0x63U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                                           | (0x6fU 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))) 
                                                          | (0x17U 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))) 
                                                         | (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__JALR)))))) 
                                    | (4U & (- (IData)(
                                                       (0x37U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))))))),3);
        tracep->fullCData(oldp+54,((((1U & (- (IData)((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__typeR)))) 
                                     | (2U & (- (IData)(
                                                        (((((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__typeI) 
                                                            & (~ (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__JALR))) 
                                                           | (0x23U 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))) 
                                                          | (0x63U 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))) 
                                                         | (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__typeU)))))) 
                                    | (4U & (- (IData)(
                                                       ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__JALR) 
                                                        | (0x6fU 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))))))),3);
        tracep->fullSData(oldp+55,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op_sel),15);
        tracep->fullCData(oldp+56,((0xffU & ((((- (IData)((IData)(
                                                                  (0x3023U 
                                                                   == 
                                                                   (0x707fU 
                                                                    & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))))) 
                                               | (0xfU 
                                                  & (- (IData)((IData)(
                                                                       (0x2023U 
                                                                        == 
                                                                        (0x707fU 
                                                                         & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))))))) 
                                              | (3U 
                                                 & (- (IData)((IData)(
                                                                      (0x1023U 
                                                                       == 
                                                                       (0x707fU 
                                                                        & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))))))) 
                                             | (1U 
                                                & (- (IData)((IData)(
                                                                     (0x23U 
                                                                      == 
                                                                      (0x707fU 
                                                                       & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))))))))),8);
        tracep->fullSData(oldp+57,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__mem_rstrb),9);
        tracep->fullBit(oldp+58,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__reg_wen));
        tracep->fullBit(oldp+59,((0x23U == (0x7fU & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))));
        tracep->fullBit(oldp+60,(((0x1bU == (0x7fU 
                                             & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                  | (0x3bU == (0x7fU 
                                               & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
        tracep->fullCData(oldp+61,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op_sext),2);
        tracep->fullSData(oldp+62,((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                    >> 0x14U)),12);
        tracep->fullBit(oldp+63,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_wen));
        tracep->fullBit(oldp+64,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_intr));
        tracep->fullBit(oldp+65,((0x30200073U == vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)));
        tracep->fullCData(oldp+66,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_op_sel),7);
        tracep->fullQData(oldp+67,(((0x73U == vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)
                                     ? 0xbULL : ((0x100073U 
                                                  == vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)
                                                  ? 4ULL
                                                  : 0ULL))),64);
        tracep->fullBit(oldp+69,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_valid));
        tracep->fullQData(oldp+70,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_pc),64);
        tracep->fullIData(oldp+72,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst),32);
        tracep->fullBit(oldp+73,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_allowin));
        tracep->fullBit(oldp+74,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_valid));
        tracep->fullBit(oldp+75,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_stall));
        tracep->fullBit(oldp+76,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_bubble));
        tracep->fullBit(oldp+77,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_reg_e__DOT__input_valid));
        tracep->fullQData(oldp+78,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_imm),64);
        tracep->fullQData(oldp+80,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_pc),64);
        tracep->fullQData(oldp+82,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_rs1),64);
        tracep->fullQData(oldp+84,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_rs2),64);
        tracep->fullQData(oldp+86,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr),64);
        tracep->fullCData(oldp+88,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_rd_addr),5);
        tracep->fullCData(oldp+89,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_wstrb),8);
        tracep->fullSData(oldp+90,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_rstrb),9);
        tracep->fullCData(oldp+91,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_op2_sel),3);
        tracep->fullCData(oldp+92,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_op1_sel),3);
        tracep->fullCData(oldp+93,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_regin_sel),3);
        tracep->fullCData(oldp+94,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_sext),2);
        tracep->fullSData(oldp+95,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel),15);
        tracep->fullBit(oldp+96,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_reg_wen));
        tracep->fullBit(oldp+97,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_mem_wen));
        tracep->fullBit(oldp+98,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_word_op_mask));
        tracep->fullBit(oldp+99,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_valid));
        tracep->fullBit(oldp+100,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_allowin));
        tracep->fullCData(oldp+101,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_stall),2);
        tracep->fullIData(oldp+102,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_inst),32);
        tracep->fullBit(oldp+103,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_bubble));
        tracep->fullBit(oldp+104,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_reg_e__DOT__input_valid));
        tracep->fullBit(oldp+105,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_multicycle));
        tracep->fullBit(oldp+106,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_out_valid));
        tracep->fullSData(oldp+107,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_addr),12);
        tracep->fullBit(oldp+108,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_wen));
        tracep->fullBit(oldp+109,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_intr));
        tracep->fullBit(oldp+110,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_mret));
        tracep->fullCData(oldp+111,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel),7);
        tracep->fullCData(oldp+112,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_uimm),5);
        tracep->fullQData(oldp+113,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_intr_no),64);
        tracep->fullBit(oldp+115,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_valid));
        tracep->fullSData(oldp+116,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_rstrb),9);
        tracep->fullCData(oldp+117,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_wstrb),8);
        tracep->fullQData(oldp+118,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out),64);
        tracep->fullQData(oldp+120,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr),64);
        tracep->fullBit(oldp+122,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_mem_wen));
        tracep->fullQData(oldp+123,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_pc),64);
        tracep->fullBit(oldp+125,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_reg_wen));
        tracep->fullCData(oldp+126,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_rd_addr),5);
        tracep->fullCData(oldp+127,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_regin_sel),3);
        tracep->fullCData(oldp+128,((7U & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_mem_addr))),3);
        tracep->fullBit(oldp+129,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_allowin));
        tracep->fullCData(oldp+130,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_stall),2);
        tracep->fullIData(oldp+131,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_inst),32);
        tracep->fullBit(oldp+132,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_bubble));
        tracep->fullBit(oldp+133,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_reg_e__DOT__input_valid));
        tracep->fullSData(oldp+134,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr_addr),12);
        tracep->fullBit(oldp+135,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr_wen));
        tracep->fullBit(oldp+136,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr_intr));
        tracep->fullBit(oldp+137,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr_mret));
        tracep->fullQData(oldp+138,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr_intr_no),64);
        tracep->fullQData(oldp+140,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_pc),64);
        tracep->fullBit(oldp+142,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_reg_e__DOT__input_valid));
        tracep->fullQData(oldp+143,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_mem_data),64);
        tracep->fullSData(oldp+145,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_mem_rstrb),9);
        tracep->fullQData(oldp+146,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_alu_out),64);
        tracep->fullQData(oldp+148,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr),64);
        tracep->fullBit(oldp+150,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_reg_wen));
        tracep->fullCData(oldp+151,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_rd_addr),5);
        tracep->fullCData(oldp+152,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_regin_sel),3);
        tracep->fullCData(oldp+153,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_shamt),3);
        tracep->fullBit(oldp+154,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_allowin));
        tracep->fullIData(oldp+155,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_inst),32);
        tracep->fullBit(oldp+156,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_bubble));
        tracep->fullCData(oldp+157,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_stall),2);
        tracep->fullSData(oldp+158,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr_addr),12);
        tracep->fullBit(oldp+159,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr_wen));
        tracep->fullBit(oldp+160,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr_intr));
        tracep->fullBit(oldp+161,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr_mret));
        tracep->fullQData(oldp+162,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr_intr_no),64);
        tracep->fullCData(oldp+164,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__stall_en),2);
        tracep->fullQData(oldp+165,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__rs1_forward_data),64);
        tracep->fullQData(oldp+167,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__rs2_forward_data),64);
        tracep->fullQData(oldp+169,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_forward_data),64);
        tracep->fullBit(oldp+171,((1U & (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_regin_sel) 
                                          >> 1U) | (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_mem_wen)))));
        tracep->fullBit(oldp+172,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_mem_op));
        tracep->fullQData(oldp+173,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_mem_addr),64);
        tracep->fullQData(oldp+175,(((8U & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc_sel))
                                      ? vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__rs1_forward_data
                                      : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_pc)),64);
        tracep->fullQData(oldp+177,((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__imm 
                                     + ((8U & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc_sel))
                                         ? vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__rs1_forward_data
                                         : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_pc))),64);
        tracep->fullQData(oldp+179,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__npc_e__DOT__dnpc),64);
        tracep->fullBit(oldp+181,((1U & (~ ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc_sel) 
                                            | ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc_sel) 
                                               >> 4U))))));
        tracep->fullBit(oldp+182,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc_sel) 
                                         >> 4U))));
        tracep->fullWData(oldp+183,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__npc_e__DOT____Vcellinp__nextpc_64bit_3sel__I_sel_data),192);
        tracep->fullCData(oldp+189,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__npc_e__DOT____Vcellinp__nextpc_64bit_3sel__I_sel),3);
        tracep->fullQData(oldp+190,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__npc_e__DOT__nextpc_64bit_3sel__DOT__sel_data[0]),64);
        tracep->fullQData(oldp+192,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__npc_e__DOT__nextpc_64bit_3sel__DOT__sel_data[1]),64);
        tracep->fullQData(oldp+194,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__npc_e__DOT__nextpc_64bit_3sel__DOT__sel_data[2]),64);
        tracep->fullBit(oldp+196,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__pc_e__DOT__IF_ready_go));
        tracep->fullBit(oldp+197,((1U & ((~ (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__pc_e__DOT__IF_valid)) 
                                         | ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__pc_e__DOT__IF_ready_go) 
                                            & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_allowin))))));
        tracep->fullBit(oldp+198,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__pc_e__DOT__IF_valid));
        tracep->fullBit(oldp+199,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__pc_e__DOT__IF_en));
        tracep->fullIData(oldp+200,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__pc_e__DOT__inst_cache),32);
        tracep->fullBit(oldp+201,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__pc_e__DOT__cache_valid));
        tracep->fullBit(oldp+202,((1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc_sel)))));
        tracep->fullBit(oldp+203,((1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_stall)))));
        tracep->fullBit(oldp+204,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_regin_sel) 
                                         >> 1U))));
        tracep->fullBit(oldp+205,((0U != (0xfU & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                                  >> 0xaU)))));
        tracep->fullBit(oldp+206,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_regin_sel) 
                                         >> 1U))));
        tracep->fullCData(oldp+207,(((0xfffffffeU & 
                                      ((((0x1fU & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                   >> 0xfU)) 
                                         == (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_rd_addr)) 
                                        << 1U) & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__stall_en))) 
                                     | (((0x1fU & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                   >> 0x14U)) 
                                         == (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_rd_addr)) 
                                        & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__stall_en)))),2);
        tracep->fullCData(oldp+208,(((0xfffffffeU & 
                                      ((((0x1fU & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                   >> 0xfU)) 
                                         == (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_rd_addr)) 
                                        << 1U) & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__stall_en))) 
                                     | (((0x1fU & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                   >> 0x14U)) 
                                         == (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_rd_addr)) 
                                        & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__stall_en)))),2);
        tracep->fullCData(oldp+209,(((0xfffffffeU & 
                                      ((((0x1fU & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                   >> 0xfU)) 
                                         == (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_rd_addr)) 
                                        << 1U) & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__stall_en))) 
                                     | (((0x1fU & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                   >> 0x14U)) 
                                         == (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_rd_addr)) 
                                        & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__stall_en)))),2);
        tracep->fullBit(oldp+210,((((0U != (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_stall)) 
                                    & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_regin_sel) 
                                       >> 1U)) | ((0U 
                                                   != (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_stall)) 
                                                  & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_regin_sel) 
                                                     >> 1U)))));
        tracep->fullBit(oldp+211,(((0U != (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_stall)) 
                                   & (0U != (0xfU & 
                                             ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                              >> 0xaU))))));
        tracep->fullBit(oldp+212,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT____Vcellinp__forward_unit_e__I_WB_reg_wen));
        tracep->fullBit(oldp+213,((((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_wen) 
                                    & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_wen)) 
                                   & ((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                       >> 0x14U) == (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_addr)))));
        tracep->fullBit(oldp+214,((((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_wen) 
                                    & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr_wen)) 
                                   & ((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                       >> 0x14U) == (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr_addr)))));
        tracep->fullBit(oldp+215,((((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_wen) 
                                    & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr_wen)) 
                                   & ((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                       >> 0x14U) == (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr_addr)))));
        tracep->fullCData(oldp+216,((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                     >> 0x19U)),7);
        tracep->fullCData(oldp+217,((0x7fU & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)),7);
        tracep->fullCData(oldp+218,((7U & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                           >> 0xcU))),3);
        tracep->fullSData(oldp+219,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__immS),12);
        tracep->fullSData(oldp+220,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__immB),13);
        tracep->fullIData(oldp+221,((0xfffff000U & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)),32);
        tracep->fullIData(oldp+222,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__immJ),21);
        tracep->fullBit(oldp+223,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__typeI));
        tracep->fullBit(oldp+224,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__typeR));
        tracep->fullBit(oldp+225,((0x63U == (0x7fU 
                                             & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))));
        tracep->fullBit(oldp+226,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__typeU));
        tracep->fullBit(oldp+227,((0x6fU == (0x7fU 
                                             & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))));
        tracep->fullBit(oldp+228,((0x73U == (0x7fU 
                                             & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))));
        tracep->fullBit(oldp+229,((0x37U == (0x7fU 
                                             & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))));
        tracep->fullBit(oldp+230,((0x17U == (0x7fU 
                                             & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))));
        tracep->fullBit(oldp+231,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__JALR));
        tracep->fullBit(oldp+232,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__LD));
        tracep->fullBit(oldp+233,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__LW));
        tracep->fullBit(oldp+234,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__LWU));
        tracep->fullBit(oldp+235,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__LH));
        tracep->fullBit(oldp+236,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__LHU));
        tracep->fullBit(oldp+237,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__LB));
        tracep->fullBit(oldp+238,((IData)((0x4003U 
                                           == (0x707fU 
                                               & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+239,((IData)((0x13U == 
                                           (0x707fU 
                                            & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+240,((IData)((0x2013U 
                                           == (0x707fU 
                                               & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+241,((IData)((0x3013U 
                                           == (0x707fU 
                                               & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+242,((IData)((0x4013U 
                                           == (0x707fU 
                                               & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+243,((IData)((0x6013U 
                                           == (0x707fU 
                                               & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+244,((IData)((0x7013U 
                                           == (0x707fU 
                                               & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+245,((IData)(((0x1013U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                               >> 0x1aU))))));
        tracep->fullBit(oldp+246,((IData)(((0x5013U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                               >> 0x1aU))))));
        tracep->fullBit(oldp+247,((IData)(((0x5013U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                           & (0x10U 
                                              == (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x1aU))))));
        tracep->fullBit(oldp+248,((IData)((0x1bU == 
                                           (0x707fU 
                                            & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+249,((IData)(((0x101bU 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+250,((IData)(((0x501bU 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+251,((IData)(((0x501bU 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                           & (0x20U 
                                              == (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
        tracep->fullBit(oldp+252,((IData)(((0x33U == 
                                            (0x707fU 
                                             & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+253,((IData)(((0x33U == 
                                            (0x707fU 
                                             & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                           & (0x20U 
                                              == (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
        tracep->fullBit(oldp+254,((IData)(((0x1033U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+255,((IData)(((0x2033U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+256,((IData)(((0x3033U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+257,((IData)(((0x4033U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+258,((IData)(((0x5033U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+259,((IData)(((0x5033U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                           & (0x20U 
                                              == (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
        tracep->fullBit(oldp+260,((IData)(((0x6033U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+261,((IData)(((0x7033U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+262,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__MUL));
        tracep->fullBit(oldp+263,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__MULH));
        tracep->fullBit(oldp+264,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__MULHSU));
        tracep->fullBit(oldp+265,((IData)(((0x3033U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                           & (1U == 
                                              (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+266,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__DIV));
        tracep->fullBit(oldp+267,((IData)(((0x5033U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                           & (1U == 
                                              (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+268,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__REM));
        tracep->fullBit(oldp+269,((IData)(((0x7033U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                           & (1U == 
                                              (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+270,((IData)(((0x3bU == 
                                            (0x707fU 
                                             & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+271,((IData)(((0x3bU == 
                                            (0x707fU 
                                             & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                           & (0x20U 
                                              == (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
        tracep->fullBit(oldp+272,((IData)(((0x103bU 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+273,((IData)(((0x503bU 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+274,((IData)(((0x503bU 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                           & (0x20U 
                                              == (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
        tracep->fullBit(oldp+275,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__MULW));
        tracep->fullBit(oldp+276,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__DIVW));
        tracep->fullBit(oldp+277,((IData)(((0x503bU 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                           & (1U == 
                                              (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+278,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__REMW));
        tracep->fullBit(oldp+279,((IData)(((0x703bU 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                           & (1U == 
                                              (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+280,((IData)((0x3023U 
                                           == (0x707fU 
                                               & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+281,((IData)((0x2023U 
                                           == (0x707fU 
                                               & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+282,((IData)((0x1023U 
                                           == (0x707fU 
                                               & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+283,((IData)((0x23U == 
                                           (0x707fU 
                                            & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+284,((IData)((0x63U == 
                                           (0x707fU 
                                            & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+285,((IData)((0x1063U 
                                           == (0x707fU 
                                               & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+286,((IData)((0x4063U 
                                           == (0x707fU 
                                               & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+287,((IData)((0x5063U 
                                           == (0x707fU 
                                               & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+288,((IData)((0x6063U 
                                           == (0x707fU 
                                               & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+289,((IData)((0x7063U 
                                           == (0x707fU 
                                               & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+290,((0x73U == vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)));
        tracep->fullBit(oldp+291,((0x100073U == vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)));
        tracep->fullBit(oldp+292,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__CSRRW));
        tracep->fullBit(oldp+293,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__CSRRS));
        tracep->fullBit(oldp+294,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__CSRRC));
        tracep->fullBit(oldp+295,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__CSRRWI));
        tracep->fullBit(oldp+296,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__CSRRSI));
        tracep->fullBit(oldp+297,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__CSRRCI));
        tracep->fullBit(oldp+298,((((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__CSRRW) 
                                    | (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__CSRRS)) 
                                   | (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__CSRRC))));
        tracep->fullBit(oldp+299,((3U == (0x7fU & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))));
        tracep->fullBit(oldp+300,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__typeB_jr));
        tracep->fullBit(oldp+301,((((0x73U == vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst) 
                                    | (0x100073U == vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                   | (0x30200073U == vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))));
        tracep->fullBit(oldp+302,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__eq));
        tracep->fullBit(oldp+303,((1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__eq)))));
        tracep->fullBit(oldp+304,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__lt));
        tracep->fullBit(oldp+305,((1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__lt)))));
        tracep->fullBit(oldp+306,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__ltu));
        tracep->fullBit(oldp+307,((1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__ltu)))));
        tracep->fullBit(oldp+308,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__add_flag));
        tracep->fullBit(oldp+309,(((IData)(((0x33U 
                                             == (0x707fU 
                                                 & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                            & (0x20U 
                                               == (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                   >> 0x19U)))) 
                                   | (IData)(((0x3bU 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0x20U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U)))))));
        tracep->fullBit(oldp+310,(((IData)((0x2013U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))) 
                                   | (IData)(((0x2033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U)))))));
        tracep->fullBit(oldp+311,(((IData)((0x3013U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))) 
                                   | (IData)(((0x3033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U)))))));
        tracep->fullBit(oldp+312,(((IData)((0x4013U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))) 
                                   | (IData)(((0x4033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U)))))));
        tracep->fullBit(oldp+313,(((IData)((0x6013U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))) 
                                   | (IData)(((0x6033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U)))))));
        tracep->fullBit(oldp+314,(((IData)((0x7013U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))) 
                                   | (IData)(((0x7033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U)))))));
        tracep->fullBit(oldp+315,(((((IData)(((0x1013U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x1aU)))) 
                                     | (IData)(((0x1033U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                                & (0U 
                                                   == 
                                                   (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                    >> 0x19U))))) 
                                    | (IData)(((0x101bU 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                               & (0U 
                                                  == 
                                                  (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                   >> 0x19U))))) 
                                   | (IData)(((0x103bU 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U)))))));
        tracep->fullBit(oldp+316,(((((IData)(((0x5013U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x1aU)))) 
                                     | (IData)(((0x5033U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                                & (0U 
                                                   == 
                                                   (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                    >> 0x19U))))) 
                                    | (IData)(((0x501bU 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                               & (0U 
                                                  == 
                                                  (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                   >> 0x19U))))) 
                                   | (IData)(((0x503bU 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U)))))));
        tracep->fullBit(oldp+317,(((((IData)(((0x5013U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0x10U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x1aU)))) 
                                     | (IData)(((0x5033U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                                & (0x20U 
                                                   == 
                                                   (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                    >> 0x19U))))) 
                                    | (IData)(((0x501bU 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                               & (0x20U 
                                                  == 
                                                  (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                   >> 0x19U))))) 
                                   | (IData)(((0x503bU 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0x20U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U)))))));
        tracep->fullBit(oldp+318,(((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__MUL) 
                                   | (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__MULW))));
        tracep->fullBit(oldp+319,((((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__MULH) 
                                    | (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__MULHSU)) 
                                   | (IData)(((0x3033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (1U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U)))))));
        tracep->fullBit(oldp+320,(((((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__DIV) 
                                     | (IData)(((0x5033U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                                & (1U 
                                                   == 
                                                   (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                    >> 0x19U))))) 
                                    | (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__DIVW)) 
                                   | (IData)(((0x503bU 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (1U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U)))))));
        tracep->fullBit(oldp+321,(((((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__REM) 
                                     | (IData)(((0x7033U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                                & (1U 
                                                   == 
                                                   (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                    >> 0x19U))))) 
                                    | (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__REMW)) 
                                   | (IData)(((0x703bU 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (1U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U)))))));
        tracep->fullBit(oldp+322,(((((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__typeR) 
                                     | ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__typeI) 
                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__JALR)))) 
                                    | (0x23U == (0x7fU 
                                                 & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))) 
                                   | (0x73U == (0x7fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+323,(((((0x63U == (0x7fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                     | (0x6fU == (0x7fU 
                                                  & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))) 
                                    | (0x17U == (0x7fU 
                                                 & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))) 
                                   | (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__JALR))));
        tracep->fullBit(oldp+324,((((((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__typeI) 
                                      & (~ (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__JALR))) 
                                     | (0x23U == (0x7fU 
                                                  & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))) 
                                    | (0x63U == (0x7fU 
                                                 & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))) 
                                   | (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__typeU))));
        tracep->fullBit(oldp+325,(((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__JALR) 
                                   | (0x6fU == (0x7fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
        tracep->fullWData(oldp+326,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT____Vcellinp__alu_op1_64bit_3sel__I_sel_data),192);
        tracep->fullQData(oldp+332,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op1_64bit_3sel__DOT__sel_data[0]),64);
        tracep->fullQData(oldp+334,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op1_64bit_3sel__DOT__sel_data[1]),64);
        tracep->fullQData(oldp+336,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op1_64bit_3sel__DOT__sel_data[2]),64);
        tracep->fullWData(oldp+338,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT____Vcellinp__alu_op2_64bit_3sel__I_sel_data),192);
        tracep->fullQData(oldp+344,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op2_64bit_3sel__DOT__sel_data[0]),64);
        tracep->fullQData(oldp+346,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op2_64bit_3sel__DOT__sel_data[1]),64);
        tracep->fullQData(oldp+348,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op2_64bit_3sel__DOT__sel_data[2]),64);
        tracep->fullBit(oldp+350,((1U & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel))));
        tracep->fullBit(oldp+351,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                         >> 1U))));
        tracep->fullBit(oldp+352,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                         >> 2U))));
        tracep->fullBit(oldp+353,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                         >> 3U))));
        tracep->fullBit(oldp+354,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                         >> 4U))));
        tracep->fullBit(oldp+355,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                         >> 5U))));
        tracep->fullBit(oldp+356,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                         >> 6U))));
        tracep->fullBit(oldp+357,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                         >> 7U))));
        tracep->fullBit(oldp+358,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                         >> 8U))));
        tracep->fullBit(oldp+359,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                         >> 9U))));
        tracep->fullBit(oldp+360,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                         >> 0xaU))));
        tracep->fullBit(oldp+361,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                         >> 0xbU))));
        tracep->fullBit(oldp+362,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                         >> 0xcU))));
        tracep->fullBit(oldp+363,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                         >> 0xdU))));
        tracep->fullBit(oldp+364,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                         >> 0xeU))));
        tracep->fullQData(oldp+365,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__slt_result),64);
        VL_EXTEND_WQ(65,64, __Vtemp312, vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op1);
        VL_EXTEND_WQ(65,64, __Vtemp313, vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__adder2);
        VL_ADD_W(3, __Vtemp314, __Vtemp312, __Vtemp313);
        VL_EXTEND_WQ(65,64, __Vtemp315, vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__cin);
        VL_ADD_W(3, __Vtemp316, __Vtemp314, __Vtemp315);
        tracep->fullQData(oldp+367,((QData)((IData)(
                                                    (1U 
                                                     & (~ 
                                                        (1U 
                                                         & __Vtemp316[2U])))))),64);
        tracep->fullQData(oldp+369,((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op1 
                                     ^ vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op2)),64);
        tracep->fullQData(oldp+371,((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op1 
                                     | vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op2)),64);
        tracep->fullQData(oldp+373,((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op1 
                                     & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op2)),64);
        tracep->fullQData(oldp+375,(((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_word_op_mask)
                                      ? (((QData)((IData)(
                                                          (- (IData)(
                                                                     (1U 
                                                                      & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result)))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__slldw_result 
                                                            >> 0x20U))))
                                      : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__slldw_result)),64);
        tracep->fullQData(oldp+377,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result),64);
        tracep->fullQData(oldp+379,((((- (QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_word_op_mask)
                                                              ? (IData)(
                                                                        (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op1 
                                                                         >> 0x1fU))
                                                              : (IData)(
                                                                        (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op1 
                                                                         >> 0x3fU))))))) 
                                      & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_word_op_mask)
                                          ? (~ (0xffffffffULL 
                                                >> (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__shamt)))
                                          : (~ (0xffffffffffffffffULL 
                                                >> (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__shamt))))) 
                                     | vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result)),64);
        tracep->fullQData(oldp+381,((((QData)((IData)(
                                                      vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[0U])))),64);
        tracep->fullQData(oldp+383,((((QData)((IData)(
                                                      vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[2U])))),64);
        tracep->fullQData(oldp+385,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__div_result),64);
        tracep->fullQData(oldp+387,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__rem_result),64);
        tracep->fullWData(oldp+389,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__op1_sext),65);
        tracep->fullWData(oldp+392,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__op2_sext),65);
        tracep->fullBit(oldp+395,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_word_op_mask)
                                          ? (IData)(
                                                    (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op1 
                                                     >> 0x1fU))
                                          : (IData)(
                                                    (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op1 
                                                     >> 0x3fU))))));
        tracep->fullBit(oldp+396,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_word_op_mask)
                                          ? (IData)(
                                                    (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op2 
                                                     >> 0x1fU))
                                          : (IData)(
                                                    (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op2 
                                                     >> 0x3fU))))));
        tracep->fullBit(oldp+397,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__sext1));
        tracep->fullBit(oldp+398,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__sext2));
        tracep->fullBit(oldp+399,((IData)((0U != (0xc00U 
                                                  & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel))))));
        tracep->fullBit(oldp+400,((IData)((0U != (0x3000U 
                                                  & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel))))));
        tracep->fullBit(oldp+401,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_valid));
        tracep->fullBit(oldp+402,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__div_valid));
        tracep->fullBit(oldp+403,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_out_valid));
        tracep->fullBit(oldp+404,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__div_out_valid));
        tracep->fullQData(oldp+405,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mulh_reg),64);
        tracep->fullQData(oldp+407,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_reg),64);
        tracep->fullQData(oldp+409,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__div_reg),64);
        tracep->fullQData(oldp+411,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__rem_reg),64);
        tracep->fullBit(oldp+413,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_reg_valid));
        tracep->fullBit(oldp+414,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__div_reg_valid));
        tracep->fullQData(oldp+415,((((QData)((IData)(
                                                      ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_reg_valid)
                                                        ? (IData)(
                                                                  (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mulh_reg 
                                                                   >> 0x20U))
                                                        : 
                                                       vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[3U]))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_reg_valid)
                                                                    ? (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mulh_reg)
                                                                    : 
                                                                   vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[2U]))))),64);
        tracep->fullQData(oldp+417,((((QData)((IData)(
                                                      ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_reg_valid)
                                                        ? (IData)(
                                                                  (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_reg 
                                                                   >> 0x20U))
                                                        : 
                                                       vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[1U]))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_reg_valid)
                                                                    ? (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_reg)
                                                                    : 
                                                                   vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[0U]))))),64);
        tracep->fullQData(oldp+419,((((QData)((IData)(
                                                      ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__div_reg_valid)
                                                        ? (IData)(
                                                                  (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__div_reg 
                                                                   >> 0x20U))
                                                        : (IData)(
                                                                  (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__div_result 
                                                                   >> 0x20U))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__div_reg_valid)
                                                                    ? (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__div_reg)
                                                                    : (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__div_result)))))),64);
        tracep->fullQData(oldp+421,((((QData)((IData)(
                                                      ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__div_reg_valid)
                                                        ? (IData)(
                                                                  (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__rem_reg 
                                                                   >> 0x20U))
                                                        : (IData)(
                                                                  (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__rem_result 
                                                                   >> 0x20U))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__div_reg_valid)
                                                                    ? (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__rem_reg)
                                                                    : (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__rem_result)))))),64);
        tracep->fullQData(oldp+423,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__adder2),64);
        tracep->fullQData(oldp+425,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__cin),64);
        VL_EXTEND_WQ(65,64, __Vtemp331, vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op1);
        VL_EXTEND_WQ(65,64, __Vtemp332, vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__adder2);
        VL_ADD_W(3, __Vtemp333, __Vtemp331, __Vtemp332);
        VL_EXTEND_WQ(65,64, __Vtemp334, vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__cin);
        VL_ADD_W(3, __Vtemp335, __Vtemp333, __Vtemp334);
        tracep->fullBit(oldp+427,((1U & __Vtemp335[2U])));
        tracep->fullQData(oldp+428,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__reverse_op1),64);
        tracep->fullQData(oldp+430,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_op),64);
        tracep->fullCData(oldp+432,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__shamt),6);
        tracep->fullQData(oldp+433,(((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_word_op_mask)
                                      ? (~ (0xffffffffULL 
                                            >> (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__shamt)))
                                      : (~ (0xffffffffffffffffULL 
                                            >> (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__shamt))))),64);
        tracep->fullIData(oldp+435,(((0x80U & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel))
                                      ? (IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_op 
                                                 >> 0x20U))
                                      : (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_op))),32);
        tracep->fullQData(oldp+436,(((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_word_op_mask)
                                      ? (QData)((IData)(
                                                        ((0x80U 
                                                          & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel))
                                                          ? (IData)(
                                                                    (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_op 
                                                                     >> 0x20U))
                                                          : (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_op))))
                                      : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_op)),64);
        tracep->fullQData(oldp+438,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result)))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__slldw_result 
                                                                   >> 0x20U))))),64);
        tracep->fullQData(oldp+440,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__slldw_result),64);
        tracep->fullQData(oldp+442,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__dword_result),64);
        tracep->fullQData(oldp+444,((((QData)((IData)(
                                                      (- (IData)(
                                                                 ((1U 
                                                                   & ((IData)(
                                                                              (0U 
                                                                               != 
                                                                               (0x3000U 
                                                                                & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel)))) 
                                                                      & (~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_sext))))))
                                                                   ? 0U
                                                                   : 
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__dword_result 
                                                                              >> 0x1fU)))))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__dword_result)))),64);
        tracep->fullBit(oldp+446,(((1U & ((IData)((0U 
                                                   != 
                                                   (0x3000U 
                                                    & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel)))) 
                                          & (~ (IData)(
                                                       (0U 
                                                        != (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_sext))))))
                                    ? 0U : (1U & (IData)(
                                                         (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__dword_result 
                                                          >> 0x1fU))))));
        tracep->fullQData(oldp+447,((((QData)((IData)(
                                                      vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__op1_sext[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__op1_sext[0U])))),64);
        tracep->fullQData(oldp+449,((((QData)((IData)(
                                                      vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__op2_sext[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__op2_sext[0U])))),64);
        __Vtemp337[0U] = vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[0U];
        __Vtemp337[1U] = vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[1U];
        __Vtemp337[2U] = vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[2U];
        __Vtemp337[3U] = vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[3U];
        tracep->fullWData(oldp+451,(__Vtemp337),128);
        tracep->fullBit(oldp+455,(((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__op1_sext[1U] 
                                    >> 0x1fU) & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__sext1))));
        tracep->fullBit(oldp+456,(((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__op2_sext[1U] 
                                    >> 0x1fU) & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__sext1))));
        tracep->fullWData(oldp+457,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1),67);
        tracep->fullWData(oldp+460,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2),132);
        __Vtemp363[0U] = ((((~ ((- (IData)((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_negative))) 
                                & (~ vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[0U]))) 
                            & (~ ((- (IData)((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_double_negative))) 
                                  & (1U | ((~ vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[0U]) 
                                           << 1U))))) 
                           & (~ ((- (IData)((1U & (
                                                   (~ 
                                                    (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                     >> 2U)) 
                                                   & (((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                        >> 1U) 
                                                       & (~ 
                                                          vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])) 
                                                      | ((~ 
                                                          (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                           >> 1U)) 
                                                         & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])))))) 
                                 & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[0U]))) 
                          & (~ ((- (IData)((1U & ((
                                                   (~ 
                                                    (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                     >> 2U)) 
                                                   & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                      >> 1U)) 
                                                  & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])))) 
                                & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[0U] 
                                   << 1U))));
        __Vtemp363[1U] = ((((~ ((- (IData)((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_negative))) 
                                & (~ vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[1U]))) 
                            & (~ ((- (IData)((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_double_negative))) 
                                  & (((~ vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[0U]) 
                                      >> 0x1fU) | (
                                                   (~ 
                                                    vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[1U]) 
                                                   << 1U))))) 
                           & (~ ((- (IData)((1U & (
                                                   (~ 
                                                    (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                     >> 2U)) 
                                                   & (((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                        >> 1U) 
                                                       & (~ 
                                                          vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])) 
                                                      | ((~ 
                                                          (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                           >> 1U)) 
                                                         & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])))))) 
                                 & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[1U]))) 
                          & (~ ((- (IData)((1U & ((
                                                   (~ 
                                                    (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                     >> 2U)) 
                                                   & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                      >> 1U)) 
                                                  & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])))) 
                                & ((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[0U] 
                                    >> 0x1fU) | (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[1U] 
                                                 << 1U)))));
        __Vtemp363[2U] = ((((~ ((- (IData)((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_negative))) 
                                & (~ vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[2U]))) 
                            & (~ ((- (IData)((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_double_negative))) 
                                  & (((~ vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[1U]) 
                                      >> 0x1fU) | (
                                                   (~ 
                                                    vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[2U]) 
                                                   << 1U))))) 
                           & (~ ((- (IData)((1U & (
                                                   (~ 
                                                    (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                     >> 2U)) 
                                                   & (((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                        >> 1U) 
                                                       & (~ 
                                                          vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])) 
                                                      | ((~ 
                                                          (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                           >> 1U)) 
                                                         & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])))))) 
                                 & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[2U]))) 
                          & (~ ((- (IData)((1U & ((
                                                   (~ 
                                                    (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                     >> 2U)) 
                                                   & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                      >> 1U)) 
                                                  & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])))) 
                                & ((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[1U] 
                                    >> 0x1fU) | (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[2U] 
                                                 << 1U)))));
        __Vtemp363[3U] = ((((~ ((- (IData)((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_negative))) 
                                & (~ vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[3U]))) 
                            & (~ ((- (IData)((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_double_negative))) 
                                  & (((~ vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[2U]) 
                                      >> 0x1fU) | (
                                                   (~ 
                                                    vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[3U]) 
                                                   << 1U))))) 
                           & (~ ((- (IData)((1U & (
                                                   (~ 
                                                    (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                     >> 2U)) 
                                                   & (((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                        >> 1U) 
                                                       & (~ 
                                                          vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])) 
                                                      | ((~ 
                                                          (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                           >> 1U)) 
                                                         & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])))))) 
                                 & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[3U]))) 
                          & (~ ((- (IData)((1U & ((
                                                   (~ 
                                                    (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                     >> 2U)) 
                                                   & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                      >> 1U)) 
                                                  & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])))) 
                                & ((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[2U] 
                                    >> 0x1fU) | (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[3U] 
                                                 << 1U)))));
        __Vtemp363[4U] = ((((~ ((- (IData)((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_negative))) 
                                & (~ vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[4U]))) 
                            & (~ ((- (IData)((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_double_negative))) 
                                  & (((~ vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[3U]) 
                                      >> 0x1fU) | (0xeU 
                                                   & ((~ 
                                                       vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[4U]) 
                                                      << 1U)))))) 
                           & (~ ((- (IData)((1U & (
                                                   (~ 
                                                    (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                     >> 2U)) 
                                                   & (((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                        >> 1U) 
                                                       & (~ 
                                                          vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])) 
                                                      | ((~ 
                                                          (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                           >> 1U)) 
                                                         & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])))))) 
                                 & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[4U]))) 
                          & (~ ((- (IData)((1U & ((
                                                   (~ 
                                                    (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                     >> 2U)) 
                                                   & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                      >> 1U)) 
                                                  & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])))) 
                                & ((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[3U] 
                                    >> 0x1fU) | (0xeU 
                                                 & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[4U] 
                                                    << 1U))))));
        __Vtemp365[0U] = (~ __Vtemp363[0U]);
        __Vtemp365[1U] = (~ __Vtemp363[1U]);
        __Vtemp365[2U] = (~ __Vtemp363[2U]);
        __Vtemp365[3U] = (~ __Vtemp363[3U]);
        __Vtemp365[4U] = (0xfU & (~ __Vtemp363[4U]));
        tracep->fullWData(oldp+465,(__Vtemp365),132);
        tracep->fullBit(oldp+470,(((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_double_negative) 
                                   | (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_negative))));
        tracep->fullWData(oldp+471,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__mid_result),132);
        tracep->fullCData(oldp+476,((7U & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])),3);
        tracep->fullWData(oldp+477,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S),132);
        tracep->fullBit(oldp+482,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__mul_process));
        tracep->fullCData(oldp+483,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__iter_cnt),6);
        tracep->fullBit(oldp+484,((1U & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                         >> 2U))));
        tracep->fullBit(oldp+485,((1U & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                         >> 1U))));
        tracep->fullBit(oldp+486,((1U & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])));
        tracep->fullBit(oldp+487,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_negative));
        tracep->fullBit(oldp+488,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_double_negative));
        tracep->fullBit(oldp+489,((1U & ((~ (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                             >> 2U)) 
                                         & (((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                              >> 1U) 
                                             & (~ vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])) 
                                            | ((~ (
                                                   vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                   >> 1U)) 
                                               & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U]))))));
        tracep->fullBit(oldp+490,((1U & (((~ (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                              >> 2U)) 
                                          & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                             >> 1U)) 
                                         & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U]))));
        tracep->fullWData(oldp+491,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__abs_dividend),128);
        tracep->fullWData(oldp+495,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__abs_divisor),128);
        tracep->fullWData(oldp+499,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__current_sub_result),128);
        tracep->fullBit(oldp+503,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__current_q));
        tracep->fullBit(oldp+504,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__dividend_flag));
        tracep->fullBit(oldp+505,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__divisor_flag));
        tracep->fullBit(oldp+506,(((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__dividend_flag) 
                                   ^ (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__divisor_flag))));
        tracep->fullQData(oldp+507,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__abs_quotient),64);
        tracep->fullBit(oldp+509,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__div_process));
        tracep->fullCData(oldp+510,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__iter_cnt),6);
        tracep->fullBit(oldp+511,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel) 
                                         >> 5U))));
        tracep->fullBit(oldp+512,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel) 
                                         >> 2U))));
        tracep->fullBit(oldp+513,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel) 
                                         >> 4U))));
        tracep->fullBit(oldp+514,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel) 
                                         >> 1U))));
        tracep->fullBit(oldp+515,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel) 
                                         >> 3U))));
        tracep->fullBit(oldp+516,((1U & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel))));
        tracep->fullBit(oldp+517,((IData)((0U != (0x24U 
                                                  & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel))))));
        tracep->fullBit(oldp+518,((IData)((0U != (0x12U 
                                                  & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel))))));
        tracep->fullBit(oldp+519,((IData)((0U != (9U 
                                                  & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel))))));
        tracep->fullBit(oldp+520,((0U != (7U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel) 
                                                >> 3U)))));
        tracep->fullBit(oldp+521,((0U != (7U & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel)))));
        tracep->fullQData(oldp+522,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__csr_alu_e__DOT__op),64);
        tracep->fullQData(oldp+524,((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr 
                                     | vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__csr_alu_e__DOT__op)),64);
        tracep->fullQData(oldp+526,((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr 
                                     & (~ vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__csr_alu_e__DOT__op))),64);
        tracep->fullBit(oldp+528,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_reg_e__DOT__output_valid));
        tracep->fullBit(oldp+529,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_mem_rstrb) 
                                         >> 8U))));
        tracep->fullBit(oldp+530,((1U & (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_mem_rstrb) 
                                          >> 8U) & 
                                         ((0xfU == 
                                           (0xffU & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_mem_rstrb)))
                                           ? (IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__mem_ld_e__DOT__ld_data 
                                                      >> 0x1fU))
                                           : ((3U == 
                                               (0xffU 
                                                & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_mem_rstrb)))
                                               ? (IData)(
                                                         (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__mem_ld_e__DOT__ld_data 
                                                          >> 0xfU))
                                               : ((1U 
                                                   == 
                                                   (0xffU 
                                                    & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_mem_rstrb))) 
                                                  & (IData)(
                                                            (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__mem_ld_e__DOT__ld_data 
                                                             >> 7U)))))))));
        tracep->fullCData(oldp+531,((0xffU & (~ (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_mem_rstrb)))),8);
        tracep->fullQData(oldp+532,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__mem_ld_e__DOT__ld_data),64);
        tracep->fullWData(oldp+534,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT____Vcellinp__regin_64bit_2sel__I_sel_data),128);
        tracep->fullCData(oldp+538,((3U & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_regin_sel))),2);
        tracep->fullQData(oldp+539,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__regin_64bit_2sel__DOT__sel_data[0]),64);
        tracep->fullQData(oldp+541,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__regin_64bit_2sel__DOT__sel_data[1]),64);
        tracep->fullBit(oldp+543,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT____Vcellinp__gpr_e__I_wen));
        tracep->fullQData(oldp+544,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[0]),64);
        tracep->fullQData(oldp+546,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[1]),64);
        tracep->fullQData(oldp+548,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[2]),64);
        tracep->fullQData(oldp+550,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[3]),64);
        tracep->fullQData(oldp+552,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[4]),64);
        tracep->fullQData(oldp+554,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[5]),64);
        tracep->fullQData(oldp+556,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[6]),64);
        tracep->fullQData(oldp+558,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[7]),64);
        tracep->fullQData(oldp+560,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[8]),64);
        tracep->fullQData(oldp+562,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[9]),64);
        tracep->fullQData(oldp+564,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[10]),64);
        tracep->fullQData(oldp+566,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[11]),64);
        tracep->fullQData(oldp+568,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[12]),64);
        tracep->fullQData(oldp+570,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[13]),64);
        tracep->fullQData(oldp+572,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[14]),64);
        tracep->fullQData(oldp+574,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[15]),64);
        tracep->fullQData(oldp+576,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[16]),64);
        tracep->fullQData(oldp+578,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[17]),64);
        tracep->fullQData(oldp+580,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[18]),64);
        tracep->fullQData(oldp+582,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[19]),64);
        tracep->fullQData(oldp+584,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[20]),64);
        tracep->fullQData(oldp+586,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[21]),64);
        tracep->fullQData(oldp+588,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[22]),64);
        tracep->fullQData(oldp+590,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[23]),64);
        tracep->fullQData(oldp+592,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[24]),64);
        tracep->fullQData(oldp+594,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[25]),64);
        tracep->fullQData(oldp+596,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[26]),64);
        tracep->fullQData(oldp+598,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[27]),64);
        tracep->fullQData(oldp+600,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[28]),64);
        tracep->fullQData(oldp+602,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[29]),64);
        tracep->fullQData(oldp+604,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[30]),64);
        tracep->fullQData(oldp+606,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[31]),64);
        tracep->fullBit(oldp+608,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[0]));
        tracep->fullBit(oldp+609,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[1]));
        tracep->fullBit(oldp+610,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[2]));
        tracep->fullBit(oldp+611,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[3]));
        tracep->fullBit(oldp+612,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[4]));
        tracep->fullBit(oldp+613,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[5]));
        tracep->fullBit(oldp+614,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[6]));
        tracep->fullBit(oldp+615,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[7]));
        tracep->fullBit(oldp+616,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[8]));
        tracep->fullBit(oldp+617,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[9]));
        tracep->fullBit(oldp+618,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[10]));
        tracep->fullBit(oldp+619,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[11]));
        tracep->fullBit(oldp+620,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[12]));
        tracep->fullBit(oldp+621,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[13]));
        tracep->fullBit(oldp+622,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[14]));
        tracep->fullBit(oldp+623,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[15]));
        tracep->fullBit(oldp+624,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[16]));
        tracep->fullBit(oldp+625,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[17]));
        tracep->fullBit(oldp+626,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[18]));
        tracep->fullBit(oldp+627,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[19]));
        tracep->fullBit(oldp+628,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[20]));
        tracep->fullBit(oldp+629,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[21]));
        tracep->fullBit(oldp+630,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[22]));
        tracep->fullBit(oldp+631,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[23]));
        tracep->fullBit(oldp+632,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[24]));
        tracep->fullBit(oldp+633,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[25]));
        tracep->fullBit(oldp+634,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[26]));
        tracep->fullBit(oldp+635,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[27]));
        tracep->fullBit(oldp+636,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[28]));
        tracep->fullBit(oldp+637,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[29]));
        tracep->fullBit(oldp+638,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[30]));
        tracep->fullBit(oldp+639,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[31]));
        tracep->fullQData(oldp+640,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mepc),64);
        tracep->fullQData(oldp+642,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mstatus),64);
        tracep->fullQData(oldp+644,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mtvec),64);
        tracep->fullQData(oldp+646,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mcause),64);
        tracep->fullQData(oldp+648,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mscratch),64);
        tracep->fullBit(oldp+650,((1U & (IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mstatus 
                                                 >> 3U)))));
        tracep->fullBit(oldp+651,((1U & (IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mstatus 
                                                 >> 7U)))));
        tracep->fullIData(oldp+652,((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc)),32);
        tracep->fullIData(oldp+653,((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_mem_addr)),32);
        tracep->fullCData(oldp+654,(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen),8);
        tracep->fullCData(oldp+655,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cen_icache),4);
        tracep->fullCData(oldp+656,((((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                                       ? 1U : 0U) ? 0U
                                      : 0xfU)),4);
        tracep->fullWData(oldp+657,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg),256);
        if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
              ? 1U : 0U)) {
            __Vtemp367[0U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[0U];
            __Vtemp367[1U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[1U];
            __Vtemp367[2U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[2U];
            __Vtemp367[3U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[3U];
            __Vtemp367[4U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[4U];
            __Vtemp367[5U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[5U];
            __Vtemp367[6U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[6U];
            __Vtemp367[7U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[7U];
        } else {
            __Vtemp367[0U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[0U];
            __Vtemp367[1U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[1U];
            __Vtemp367[2U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[2U];
            __Vtemp367[3U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[3U];
            __Vtemp367[4U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[4U];
            __Vtemp367[5U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[5U];
            __Vtemp367[6U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[6U];
            __Vtemp367[7U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[7U];
        }
        tracep->fullWData(oldp+665,(__Vtemp367),256);
        tracep->fullCData(oldp+673,(((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__sram_wflag)
                                      ? ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)
                                          ? 0xcU : 3U)
                                      : 0xfU)),4);
        tracep->fullWData(oldp+674,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg),256);
        tracep->fullWData(oldp+682,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask),256);
        tracep->fullIData(oldp+690,((0xffffffe0U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr)),32);
        tracep->fullIData(oldp+691,((0xffffffe0U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr)),32);
        tracep->fullBit(oldp+692,(((2U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                                    ? 1U : 0U)));
        tracep->fullBit(oldp+693,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_arvalid));
        tracep->fullBit(oldp+694,(((4U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wb_state))
                                    ? 1U : 0U)));
        tracep->fullBit(oldp+695,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_wlast));
        tracep->fullIData(oldp+696,(((2U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wb_state))
                                      ? (0xffffffe0U 
                                         & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr)
                                      : 0U)),32);
        tracep->fullBit(oldp+697,(((2U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wb_state))
                                    ? 1U : 0U)));
        tracep->fullBit(oldp+698,((1U & (((2U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                                           ? 1U : 0U) 
                                         & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_arvalid))))));
        tracep->fullBit(oldp+699,(((~ ((2U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                                        ? 1U : 0U)) 
                                   & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_arvalid))));
        tracep->fullBit(oldp+700,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__crossbar_e__DOT__req_both));
        tracep->fullBit(oldp+701,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__crossbar_e__DOT__resp0));
        tracep->fullBit(oldp+702,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__crossbar_e__DOT__resp1));
        tracep->fullBit(oldp+703,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__crossbar_e__DOT__ch0_process));
        tracep->fullBit(oldp+704,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__crossbar_e__DOT__ch1_process));
        tracep->fullBit(oldp+705,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__crossbar_e__DOT__priority_flag));
        tracep->fullCData(oldp+706,((0x1fU & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc))),5);
        tracep->fullCData(oldp+707,((0x3fU & (IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc 
                                                      >> 5U)))),6);
        tracep->fullIData(oldp+708,((0x1fffffU & (IData)(
                                                         (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc 
                                                          >> 0xbU)))),21);
        tracep->fullCData(oldp+709,((0x1fU & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr)),5);
        tracep->fullCData(oldp+710,((0x3fU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                              >> 5U))),6);
        tracep->fullIData(oldp+711,((vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                     >> 0xbU)),21);
        tracep->fullIData(oldp+712,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr),32);
        tracep->fullWData(oldp+713,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table),128);
        tracep->fullIData(oldp+717,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
                                    [(0x7eU & ((IData)(
                                                       (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc 
                                                        >> 5U)) 
                                               << 1U))]),21);
        tracep->fullIData(oldp+718,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
                                    [(1U | (0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc 
                                                      >> 5U)) 
                                             << 1U)))]),21);
        tracep->fullBit(oldp+719,((1U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
                                         (3U & ((IData)(
                                                        (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc 
                                                         >> 5U)) 
                                                >> 4U))] 
                                         >> (0x1eU 
                                             & ((IData)(
                                                        (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc 
                                                         >> 5U)) 
                                                << 1U))))));
        tracep->fullBit(oldp+720,((1U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
                                         (3U & ((IData)(
                                                        (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc 
                                                         >> 5U)) 
                                                >> 4U))] 
                                         >> (0x1fU 
                                             & (1U 
                                                | (0x7eU 
                                                   & ((IData)(
                                                              (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc 
                                                               >> 5U)) 
                                                      << 1U))))))));
        tracep->fullBit(oldp+721,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way0_hit));
        tracep->fullBit(oldp+722,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_hit));
        tracep->fullBit(oldp+723,((1U & (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                                           ? 1U : 0U) 
                                         & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace))))));
        tracep->fullBit(oldp+724,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
        tracep->fullBit(oldp+725,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__rd_hit));
        tracep->fullBit(oldp+726,(((IData)(vlSelf->ysyx_22040750__DOT__cpu_pc_valid) 
                                   & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__rd_hit)))));
        tracep->fullBit(oldp+727,((4U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))));
        tracep->fullBit(oldp+728,(((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                                    ? 1U : 0U)));
        tracep->fullCData(oldp+729,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state),4);
        tracep->fullBit(oldp+730,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mmio_flag));
        tracep->fullSData(oldp+731,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state),13);
        tracep->fullBit(oldp+732,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__replace_dirty));
        tracep->fullBit(oldp+733,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__rd_hit));
        tracep->fullBit(oldp+734,((((~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit)) 
                                    & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_reg_e__DOT__mem_rd_en)) 
                                   & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mmio_flag)))));
        tracep->fullBit(oldp+735,(((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                    ? 1U : 0U)));
        tracep->fullBit(oldp+736,(((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                    ? 1U : 0U)));
        tracep->fullBit(oldp+737,(((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                    ? 1U : 0U)));
        tracep->fullBit(oldp+738,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit));
        tracep->fullBit(oldp+739,((((~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit)) 
                                    & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_reg_e__DOT__mem_wr_en)) 
                                   & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mmio_flag)))));
        tracep->fullBit(oldp+740,(((0x100U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                    ? 1U : 0U)));
        tracep->fullBit(oldp+741,(((0x200U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                    ? 1U : 0U)));
        tracep->fullBit(oldp+742,(((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                    ? 1U : 0U)));
        tracep->fullCData(oldp+743,((0x1fU & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_mem_addr))),5);
        tracep->fullCData(oldp+744,((0x1fU & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr)),5);
        tracep->fullCData(oldp+745,((0x3fU & (IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_mem_addr 
                                                      >> 5U)))),6);
        tracep->fullCData(oldp+746,((0x3fU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                              >> 5U))),6);
        tracep->fullIData(oldp+747,((0x1fffffU & (IData)(
                                                         (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_mem_addr 
                                                          >> 0xbU)))),21);
        tracep->fullIData(oldp+748,((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                     >> 0xbU)),21);
        tracep->fullIData(oldp+749,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr),32);
        tracep->fullCData(oldp+750,((0xffU & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cpu_mask_reg)))),8);
        tracep->fullIData(oldp+751,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__sram_wmaskB),32);
        tracep->fullQData(oldp+752,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cpu_reg),64);
        tracep->fullCData(oldp+754,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cpu_mask_reg),8);
        tracep->fullBit(oldp+755,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__sram_wflag));
        tracep->fullWData(oldp+756,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table),128);
        tracep->fullWData(oldp+760,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table),128);
        tracep->fullIData(oldp+764,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
                                    [(0x7eU & ((IData)(
                                                       (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_mem_addr 
                                                        >> 5U)) 
                                               << 1U))]),21);
        tracep->fullIData(oldp+765,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
                                    [(1U | (0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_mem_addr 
                                                      >> 5U)) 
                                             << 1U)))]),21);
        tracep->fullBit(oldp+766,((1U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
                                         (3U & ((IData)(
                                                        (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_mem_addr 
                                                         >> 5U)) 
                                                >> 4U))] 
                                         >> (0x1eU 
                                             & ((IData)(
                                                        (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_mem_addr 
                                                         >> 5U)) 
                                                << 1U))))));
        tracep->fullBit(oldp+767,((1U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
                                         (3U & ((IData)(
                                                        (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_mem_addr 
                                                         >> 5U)) 
                                                >> 4U))] 
                                         >> (0x1fU 
                                             & (1U 
                                                | (0x7eU 
                                                   & ((IData)(
                                                              (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_mem_addr 
                                                               >> 5U)) 
                                                      << 1U))))))));
        tracep->fullBit(oldp+768,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way0_hit));
        tracep->fullBit(oldp+769,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit));
        tracep->fullBit(oldp+770,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit));
        tracep->fullBit(oldp+771,((1U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
                                         (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 9U))] 
                                         >> (0x1eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U))))));
        tracep->fullBit(oldp+772,((1U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
                                         (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 9U))] 
                                         >> (0x1fU 
                                             & (1U 
                                                | (0x7eU 
                                                   & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                      >> 4U))))))));
        tracep->fullBit(oldp+773,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                         | (((~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit)) 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
                                                (3U 
                                                 & ((IData)(
                                                            (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_mem_addr 
                                                             >> 5U)) 
                                                    >> 4U))] 
                                                >> 
                                                (0x1eU 
                                                 & ((IData)(
                                                            (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_mem_addr 
                                                             >> 5U)) 
                                                    << 1U)))) 
                                            & (~ (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
                                                  (3U 
                                                   & ((IData)(
                                                              (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_mem_addr 
                                                               >> 5U)) 
                                                      >> 4U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & (1U 
                                                      | (0x7eU 
                                                         & ((IData)(
                                                                    (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_mem_addr 
                                                                     >> 5U)) 
                                                            << 1U)))))))))));
        tracep->fullBit(oldp+774,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op));
        tracep->fullCData(oldp+775,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wb_state),3);
        tracep->fullCData(oldp+776,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wdata_cnt),2);
        tracep->fullCData(oldp+777,(((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__rd_hit)
                                      ? ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way0_hit)
                                          ? 0xcU : 3U)
                                      : ((1U & ((((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_rlast) 
                                                  | ((0x10U 
                                                      == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                                      ? 1U
                                                      : 0U)) 
                                                 | ((0x200U 
                                                     == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                                     ? 1U
                                                     : 0U)) 
                                                | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__sram_wflag)))
                                          ? ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)
                                              ? 0xcU
                                              : 3U)
                                          : 0xfU))),4);
        if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op) {
            __Vtemp368[0U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[0U];
            __Vtemp368[1U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[1U];
            __Vtemp368[2U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[2U];
            __Vtemp368[3U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[3U];
            __Vtemp368[4U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[4U];
            __Vtemp368[5U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[5U];
            __Vtemp368[6U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[6U];
            __Vtemp368[7U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[7U];
        } else {
            __Vtemp368[0U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[0U];
            __Vtemp368[1U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[1U];
            __Vtemp368[2U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[2U];
            __Vtemp368[3U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[3U];
            __Vtemp368[4U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[4U];
            __Vtemp368[5U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[5U];
            __Vtemp368[6U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[6U];
            __Vtemp368[7U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[7U];
        }
        tracep->fullQData(oldp+778,((((QData)((IData)(
                                                      __Vtemp368[
                                                      (((IData)(0x3fU) 
                                                        + 
                                                        ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wdata_cnt) 
                                                         << 6U)) 
                                                       >> 5U)])) 
                                      << ((0U == (0x1fU 
                                                  & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wdata_cnt) 
                                                     << 6U)))
                                           ? 0x20U : 
                                          ((IData)(0x40U) 
                                           - (0x1fU 
                                              & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wdata_cnt) 
                                                 << 6U))))) 
                                     | (((0U == (0x1fU 
                                                 & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wdata_cnt) 
                                                    << 6U)))
                                          ? 0ULL : 
                                         ((QData)((IData)(
                                                          __Vtemp368[
                                                          (((IData)(0x1fU) 
                                                            + 
                                                            ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wdata_cnt) 
                                                             << 6U)) 
                                                           >> 5U)])) 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wdata_cnt) 
                                                    << 6U))))) 
                                        | ((QData)((IData)(
                                                           __Vtemp368[
                                                           (0x7fffffeU 
                                                            & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wdata_cnt) 
                                                               << 1U))])) 
                                           >> (0x1fU 
                                               & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wdata_cnt) 
                                                  << 6U)))))),64);
        tracep->fullBit(oldp+780,(((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_icache_arready) 
                                   & ((2U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                                       ? 1U : 0U))));
        tracep->fullBit(oldp+781,(((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_arready) 
                                   & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_arvalid))));
        tracep->fullBit(oldp+782,((1U & (((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_rlast) 
                                          | ((0x10U 
                                              == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                              ? 1U : 0U)) 
                                         | ((0x200U 
                                             == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                             ? 1U : 0U)))));
        if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op) {
            __Vtemp369[0U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[0U];
            __Vtemp369[1U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[1U];
            __Vtemp369[2U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[2U];
            __Vtemp369[3U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[3U];
            __Vtemp369[4U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[4U];
            __Vtemp369[5U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[5U];
            __Vtemp369[6U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[6U];
            __Vtemp369[7U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[7U];
        } else {
            __Vtemp369[0U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[0U];
            __Vtemp369[1U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[1U];
            __Vtemp369[2U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[2U];
            __Vtemp369[3U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[3U];
            __Vtemp369[4U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[4U];
            __Vtemp369[5U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[5U];
            __Vtemp369[6U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[6U];
            __Vtemp369[7U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[7U];
        }
        tracep->fullWData(oldp+783,(__Vtemp369),256);
        tracep->fullCData(oldp+791,(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen),8);
        tracep->fullWData(oldp+792,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata),256);
        tracep->fullWData(oldp+800,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata),256);
        tracep->fullBit(oldp+808,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_icache_rvalid));
        tracep->fullBit(oldp+809,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_rvalid));
        tracep->fullBit(oldp+810,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_icache_rlast));
        tracep->fullBit(oldp+811,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_rlast));
        tracep->fullBit(oldp+812,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_icache_arready));
        tracep->fullBit(oldp+813,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_arready));
        tracep->fullBit(oldp+814,(((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_icache_rvalid) 
                                   & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_icache_rlast))));
        tracep->fullBit(oldp+815,(((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_rvalid) 
                                   & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_rlast))));
        tracep->fullCData(oldp+816,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__next_state),4);
        tracep->fullSData(oldp+817,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__next_state),13);
        tracep->fullBit(oldp+818,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__rd_handshake));
        tracep->fullCData(oldp+819,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wb_next_state),3);
        tracep->fullBit(oldp+820,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_handshake));
        tracep->fullBit(oldp+821,(vlSelf->clock));
        tracep->fullBit(oldp+822,(vlSelf->reset));
        tracep->fullBit(oldp+823,(vlSelf->io_interrupt));
        tracep->fullBit(oldp+824,(vlSelf->io_master_awready));
        tracep->fullBit(oldp+825,(vlSelf->io_master_awvalid));
        tracep->fullCData(oldp+826,(vlSelf->io_master_awid),4);
        tracep->fullIData(oldp+827,(vlSelf->io_master_awaddr),32);
        tracep->fullCData(oldp+828,(vlSelf->io_master_awlen),8);
        tracep->fullCData(oldp+829,(vlSelf->io_master_awsize),3);
        tracep->fullCData(oldp+830,(vlSelf->io_master_awburst),2);
        tracep->fullBit(oldp+831,(vlSelf->io_master_wready));
        tracep->fullBit(oldp+832,(vlSelf->io_master_wvalid));
        tracep->fullQData(oldp+833,(vlSelf->io_master_wdata),64);
        tracep->fullCData(oldp+835,(vlSelf->io_master_wstrb),8);
        tracep->fullBit(oldp+836,(vlSelf->io_master_wlast));
        tracep->fullBit(oldp+837,(vlSelf->io_master_bready));
        tracep->fullBit(oldp+838,(vlSelf->io_master_bvalid));
        tracep->fullCData(oldp+839,(vlSelf->io_master_bid),4);
        tracep->fullCData(oldp+840,(vlSelf->io_master_bresp),2);
        tracep->fullBit(oldp+841,(vlSelf->io_master_arready));
        tracep->fullBit(oldp+842,(vlSelf->io_master_arvalid));
        tracep->fullCData(oldp+843,(vlSelf->io_master_arid),4);
        tracep->fullIData(oldp+844,(vlSelf->io_master_araddr),32);
        tracep->fullCData(oldp+845,(vlSelf->io_master_arlen),8);
        tracep->fullCData(oldp+846,(vlSelf->io_master_arsize),3);
        tracep->fullCData(oldp+847,(vlSelf->io_master_arburst),2);
        tracep->fullBit(oldp+848,(vlSelf->io_master_rready));
        tracep->fullBit(oldp+849,(vlSelf->io_master_rvalid));
        tracep->fullCData(oldp+850,(vlSelf->io_master_rid),4);
        tracep->fullCData(oldp+851,(vlSelf->io_master_rresp),2);
        tracep->fullQData(oldp+852,(vlSelf->io_master_rdata),64);
        tracep->fullBit(oldp+854,(vlSelf->io_master_rlast));
        tracep->fullBit(oldp+855,(vlSelf->io_slave_awready));
        tracep->fullBit(oldp+856,(vlSelf->io_slave_awvalid));
        tracep->fullCData(oldp+857,(vlSelf->io_slave_awid),4);
        tracep->fullIData(oldp+858,(vlSelf->io_slave_awaddr),32);
        tracep->fullCData(oldp+859,(vlSelf->io_slave_awlen),8);
        tracep->fullCData(oldp+860,(vlSelf->io_slave_awsize),3);
        tracep->fullCData(oldp+861,(vlSelf->io_slave_awburst),2);
        tracep->fullBit(oldp+862,(vlSelf->io_slave_wready));
        tracep->fullBit(oldp+863,(vlSelf->io_slave_wvalid));
        tracep->fullQData(oldp+864,(vlSelf->io_slave_wdata),64);
        tracep->fullCData(oldp+866,(vlSelf->io_slave_wstrb),8);
        tracep->fullBit(oldp+867,(vlSelf->io_slave_wlast));
        tracep->fullBit(oldp+868,(vlSelf->io_slave_bready));
        tracep->fullBit(oldp+869,(vlSelf->io_slave_bvalid));
        tracep->fullCData(oldp+870,(vlSelf->io_slave_bid),4);
        tracep->fullCData(oldp+871,(vlSelf->io_slave_bresp),2);
        tracep->fullBit(oldp+872,(vlSelf->io_slave_arready));
        tracep->fullBit(oldp+873,(vlSelf->io_slave_arvalid));
        tracep->fullCData(oldp+874,(vlSelf->io_slave_arid),4);
        tracep->fullIData(oldp+875,(vlSelf->io_slave_araddr),32);
        tracep->fullCData(oldp+876,(vlSelf->io_slave_arlen),8);
        tracep->fullCData(oldp+877,(vlSelf->io_slave_arsize),3);
        tracep->fullCData(oldp+878,(vlSelf->io_slave_arburst),2);
        tracep->fullBit(oldp+879,(vlSelf->io_slave_rready));
        tracep->fullBit(oldp+880,(vlSelf->io_slave_rvalid));
        tracep->fullCData(oldp+881,(vlSelf->io_slave_rid),4);
        tracep->fullCData(oldp+882,(vlSelf->io_slave_rresp),2);
        tracep->fullQData(oldp+883,(vlSelf->io_slave_rdata),64);
        tracep->fullBit(oldp+885,(vlSelf->io_slave_rlast));
        tracep->fullCData(oldp+886,(vlSelf->io_sram0_addr),6);
        tracep->fullBit(oldp+887,(vlSelf->io_sram0_cen));
        tracep->fullBit(oldp+888,(vlSelf->io_sram0_wen));
        tracep->fullWData(oldp+889,(vlSelf->io_sram0_wmask),128);
        tracep->fullWData(oldp+893,(vlSelf->io_sram0_wdata),128);
        tracep->fullWData(oldp+897,(vlSelf->io_sram0_rdata),128);
        tracep->fullCData(oldp+901,(vlSelf->io_sram1_addr),6);
        tracep->fullBit(oldp+902,(vlSelf->io_sram1_cen));
        tracep->fullBit(oldp+903,(vlSelf->io_sram1_wen));
        tracep->fullWData(oldp+904,(vlSelf->io_sram1_wmask),128);
        tracep->fullWData(oldp+908,(vlSelf->io_sram1_wdata),128);
        tracep->fullWData(oldp+912,(vlSelf->io_sram1_rdata),128);
        tracep->fullCData(oldp+916,(vlSelf->io_sram2_addr),6);
        tracep->fullBit(oldp+917,(vlSelf->io_sram2_cen));
        tracep->fullBit(oldp+918,(vlSelf->io_sram2_wen));
        tracep->fullWData(oldp+919,(vlSelf->io_sram2_wmask),128);
        tracep->fullWData(oldp+923,(vlSelf->io_sram2_wdata),128);
        tracep->fullWData(oldp+927,(vlSelf->io_sram2_rdata),128);
        tracep->fullCData(oldp+931,(vlSelf->io_sram3_addr),6);
        tracep->fullBit(oldp+932,(vlSelf->io_sram3_cen));
        tracep->fullBit(oldp+933,(vlSelf->io_sram3_wen));
        tracep->fullWData(oldp+934,(vlSelf->io_sram3_wmask),128);
        tracep->fullWData(oldp+938,(vlSelf->io_sram3_wdata),128);
        tracep->fullWData(oldp+942,(vlSelf->io_sram3_rdata),128);
        tracep->fullCData(oldp+946,(vlSelf->io_sram4_addr),6);
        tracep->fullBit(oldp+947,(vlSelf->io_sram4_cen));
        tracep->fullBit(oldp+948,(vlSelf->io_sram4_wen));
        tracep->fullWData(oldp+949,(vlSelf->io_sram4_wmask),128);
        tracep->fullWData(oldp+953,(vlSelf->io_sram4_wdata),128);
        tracep->fullWData(oldp+957,(vlSelf->io_sram4_rdata),128);
        tracep->fullCData(oldp+961,(vlSelf->io_sram5_addr),6);
        tracep->fullBit(oldp+962,(vlSelf->io_sram5_cen));
        tracep->fullBit(oldp+963,(vlSelf->io_sram5_wen));
        tracep->fullWData(oldp+964,(vlSelf->io_sram5_wmask),128);
        tracep->fullWData(oldp+968,(vlSelf->io_sram5_wdata),128);
        tracep->fullWData(oldp+972,(vlSelf->io_sram5_rdata),128);
        tracep->fullCData(oldp+976,(vlSelf->io_sram6_addr),6);
        tracep->fullBit(oldp+977,(vlSelf->io_sram6_cen));
        tracep->fullBit(oldp+978,(vlSelf->io_sram6_wen));
        tracep->fullWData(oldp+979,(vlSelf->io_sram6_wmask),128);
        tracep->fullWData(oldp+983,(vlSelf->io_sram6_wdata),128);
        tracep->fullWData(oldp+987,(vlSelf->io_sram6_rdata),128);
        tracep->fullCData(oldp+991,(vlSelf->io_sram7_addr),6);
        tracep->fullBit(oldp+992,(vlSelf->io_sram7_cen));
        tracep->fullBit(oldp+993,(vlSelf->io_sram7_wen));
        tracep->fullWData(oldp+994,(vlSelf->io_sram7_wmask),128);
        tracep->fullWData(oldp+998,(vlSelf->io_sram7_wdata),128);
        tracep->fullWData(oldp+1002,(vlSelf->io_sram7_rdata),128);
        __Vtemp370[0U] = vlSelf->io_sram0_rdata[0U];
        __Vtemp370[1U] = vlSelf->io_sram0_rdata[1U];
        __Vtemp370[2U] = vlSelf->io_sram0_rdata[2U];
        __Vtemp370[3U] = vlSelf->io_sram0_rdata[3U];
        __Vtemp370[4U] = vlSelf->io_sram1_rdata[0U];
        __Vtemp370[5U] = vlSelf->io_sram1_rdata[1U];
        __Vtemp370[6U] = vlSelf->io_sram1_rdata[2U];
        __Vtemp370[7U] = vlSelf->io_sram1_rdata[3U];
        tracep->fullWData(oldp+1006,(__Vtemp370),256);
        __Vtemp371[0U] = vlSelf->io_sram2_rdata[0U];
        __Vtemp371[1U] = vlSelf->io_sram2_rdata[1U];
        __Vtemp371[2U] = vlSelf->io_sram2_rdata[2U];
        __Vtemp371[3U] = vlSelf->io_sram2_rdata[3U];
        __Vtemp371[4U] = vlSelf->io_sram3_rdata[0U];
        __Vtemp371[5U] = vlSelf->io_sram3_rdata[1U];
        __Vtemp371[6U] = vlSelf->io_sram3_rdata[2U];
        __Vtemp371[7U] = vlSelf->io_sram3_rdata[3U];
        tracep->fullWData(oldp+1014,(__Vtemp371),256);
        tracep->fullQData(oldp+1022,(((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__crossbar_e__DOT__ch0_process)
                                       ? vlSelf->io_master_rdata
                                       : 0ULL)),64);
        tracep->fullQData(oldp+1024,(((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__crossbar_e__DOT__ch1_process)
                                       ? vlSelf->io_master_rdata
                                       : 0ULL)),64);
        tracep->fullBit(oldp+1026,(((IData)(vlSelf->io_master_awready) 
                                    & ((2U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wb_state))
                                        ? 1U : 0U))));
        tracep->fullQData(oldp+1027,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_mem_data),64);
        tracep->fullBit(oldp+1029,(1U));
        tracep->fullIData(oldp+1030,(0x40U),32);
        tracep->fullIData(oldp+1031,(3U),32);
        tracep->fullIData(oldp+1032,(3U),32);
        tracep->fullQData(oldp+1033,(0x7ffffffcULL),64);
        tracep->fullSData(oldp+1035,(1U),15);
        tracep->fullSData(oldp+1036,(2U),15);
        tracep->fullSData(oldp+1037,(4U),15);
        tracep->fullSData(oldp+1038,(8U),15);
        tracep->fullSData(oldp+1039,(0x10U),15);
        tracep->fullSData(oldp+1040,(0x20U),15);
        tracep->fullSData(oldp+1041,(0x40U),15);
        tracep->fullSData(oldp+1042,(0x80U),15);
        tracep->fullSData(oldp+1043,(0x100U),15);
        tracep->fullSData(oldp+1044,(0x200U),15);
        tracep->fullSData(oldp+1045,(0x400U),15);
        tracep->fullSData(oldp+1046,(0x800U),15);
        tracep->fullSData(oldp+1047,(0x1000U),15);
        tracep->fullSData(oldp+1048,(0x2000U),15);
        tracep->fullSData(oldp+1049,(0x4000U),15);
        tracep->fullCData(oldp+1050,(1U),3);
        tracep->fullCData(oldp+1051,(2U),3);
        tracep->fullCData(oldp+1052,(4U),3);
        tracep->fullBit(oldp+1053,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_valid_d));
        tracep->fullBit(oldp+1054,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__div_valid_d));
        tracep->fullBit(oldp+1055,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__end_flag));
        tracep->fullIData(oldp+1056,(2U),32);
        tracep->fullIData(oldp+1057,(2U),32);
        tracep->fullIData(oldp+1058,(0x1000U),32);
        tracep->fullSData(oldp+1059,(0x341U),12);
        tracep->fullSData(oldp+1060,(0x300U),12);
        tracep->fullSData(oldp+1061,(0x305U),12);
        tracep->fullSData(oldp+1062,(0x342U),12);
        tracep->fullSData(oldp+1063,(0x340U),12);
        tracep->fullCData(oldp+1064,(3U),8);
        tracep->fullCData(oldp+1065,(3U),3);
        tracep->fullCData(oldp+1066,(0xffU),8);
        tracep->fullBit(oldp+1067,(0U));
        tracep->fullBit(oldp+1068,(1U));
        tracep->fullCData(oldp+1069,(0U),2);
        tracep->fullCData(oldp+1070,(1U),2);
        tracep->fullCData(oldp+1071,(2U),2);
        tracep->fullCData(oldp+1072,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__crossbar_e__DOT__current_state),2);
        tracep->fullCData(oldp+1073,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__crossbar_e__DOT__next_state),2);
        tracep->fullIData(oldp+1074,(0x20U),32);
        tracep->fullIData(oldp+1075,(0x80U),32);
        tracep->fullIData(oldp+1076,(5U),32);
        tracep->fullIData(oldp+1077,(6U),32);
        tracep->fullIData(oldp+1078,(0x15U),32);
        tracep->fullCData(oldp+1079,(0U),4);
        tracep->fullCData(oldp+1080,(1U),4);
        tracep->fullCData(oldp+1081,(2U),4);
        tracep->fullCData(oldp+1082,(4U),4);
        tracep->fullCData(oldp+1083,(8U),4);
        tracep->fullSData(oldp+1084,(1U),13);
        tracep->fullSData(oldp+1085,(2U),13);
        tracep->fullSData(oldp+1086,(4U),13);
        tracep->fullSData(oldp+1087,(8U),13);
        tracep->fullSData(oldp+1088,(0x10U),13);
        tracep->fullSData(oldp+1089,(0x20U),13);
        tracep->fullSData(oldp+1090,(0x40U),13);
        tracep->fullSData(oldp+1091,(0x80U),13);
        tracep->fullSData(oldp+1092,(0x100U),13);
        tracep->fullSData(oldp+1093,(0x200U),13);
        tracep->fullSData(oldp+1094,(0x400U),13);
        tracep->fullSData(oldp+1095,(0x800U),13);
        tracep->fullSData(oldp+1096,(0x1000U),13);
    }
}

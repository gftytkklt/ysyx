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
        tracep->declBit(c+963,"clock", false,-1);
        tracep->declBit(c+964,"reset", false,-1);
        tracep->declBit(c+965,"io_interrupt", false,-1);
        tracep->declBit(c+966,"io_master_awready", false,-1);
        tracep->declBit(c+967,"io_master_awvalid", false,-1);
        tracep->declBus(c+968,"io_master_awid", false,-1, 3,0);
        tracep->declBus(c+969,"io_master_awaddr", false,-1, 31,0);
        tracep->declBus(c+970,"io_master_awlen", false,-1, 7,0);
        tracep->declBus(c+971,"io_master_awsize", false,-1, 2,0);
        tracep->declBus(c+972,"io_master_awburst", false,-1, 1,0);
        tracep->declBit(c+973,"io_master_wready", false,-1);
        tracep->declBit(c+974,"io_master_wvalid", false,-1);
        tracep->declQuad(c+975,"io_master_wdata", false,-1, 63,0);
        tracep->declBus(c+977,"io_master_wstrb", false,-1, 7,0);
        tracep->declBit(c+978,"io_master_wlast", false,-1);
        tracep->declBit(c+979,"io_master_bready", false,-1);
        tracep->declBit(c+980,"io_master_bvalid", false,-1);
        tracep->declBus(c+981,"io_master_bid", false,-1, 3,0);
        tracep->declBus(c+982,"io_master_bresp", false,-1, 1,0);
        tracep->declBit(c+983,"io_master_arready", false,-1);
        tracep->declBit(c+984,"io_master_arvalid", false,-1);
        tracep->declBus(c+985,"io_master_arid", false,-1, 3,0);
        tracep->declBus(c+986,"io_master_araddr", false,-1, 31,0);
        tracep->declBus(c+987,"io_master_arlen", false,-1, 7,0);
        tracep->declBus(c+988,"io_master_arsize", false,-1, 2,0);
        tracep->declBus(c+989,"io_master_arburst", false,-1, 1,0);
        tracep->declBit(c+990,"io_master_rready", false,-1);
        tracep->declBit(c+991,"io_master_rvalid", false,-1);
        tracep->declBus(c+992,"io_master_rid", false,-1, 3,0);
        tracep->declBus(c+993,"io_master_rresp", false,-1, 1,0);
        tracep->declQuad(c+994,"io_master_rdata", false,-1, 63,0);
        tracep->declBit(c+996,"io_master_rlast", false,-1);
        tracep->declBit(c+997,"io_slave_awready", false,-1);
        tracep->declBit(c+998,"io_slave_awvalid", false,-1);
        tracep->declBus(c+999,"io_slave_awid", false,-1, 3,0);
        tracep->declBus(c+1000,"io_slave_awaddr", false,-1, 31,0);
        tracep->declBus(c+1001,"io_slave_awlen", false,-1, 7,0);
        tracep->declBus(c+1002,"io_slave_awsize", false,-1, 2,0);
        tracep->declBus(c+1003,"io_slave_awburst", false,-1, 1,0);
        tracep->declBit(c+1004,"io_slave_wready", false,-1);
        tracep->declBit(c+1005,"io_slave_wvalid", false,-1);
        tracep->declQuad(c+1006,"io_slave_wdata", false,-1, 63,0);
        tracep->declBus(c+1008,"io_slave_wstrb", false,-1, 7,0);
        tracep->declBit(c+1009,"io_slave_wlast", false,-1);
        tracep->declBit(c+1010,"io_slave_bready", false,-1);
        tracep->declBit(c+1011,"io_slave_bvalid", false,-1);
        tracep->declBus(c+1012,"io_slave_bid", false,-1, 3,0);
        tracep->declBus(c+1013,"io_slave_bresp", false,-1, 1,0);
        tracep->declBit(c+1014,"io_slave_arready", false,-1);
        tracep->declBit(c+1015,"io_slave_arvalid", false,-1);
        tracep->declBus(c+1016,"io_slave_arid", false,-1, 3,0);
        tracep->declBus(c+1017,"io_slave_araddr", false,-1, 31,0);
        tracep->declBus(c+1018,"io_slave_arlen", false,-1, 7,0);
        tracep->declBus(c+1019,"io_slave_arsize", false,-1, 2,0);
        tracep->declBus(c+1020,"io_slave_arburst", false,-1, 1,0);
        tracep->declBit(c+1021,"io_slave_rready", false,-1);
        tracep->declBit(c+1022,"io_slave_rvalid", false,-1);
        tracep->declBus(c+1023,"io_slave_rid", false,-1, 3,0);
        tracep->declBus(c+1024,"io_slave_rresp", false,-1, 1,0);
        tracep->declQuad(c+1025,"io_slave_rdata", false,-1, 63,0);
        tracep->declBit(c+1027,"io_slave_rlast", false,-1);
        tracep->declBit(c+963,"ysyx_22040750 clock", false,-1);
        tracep->declBit(c+964,"ysyx_22040750 reset", false,-1);
        tracep->declBit(c+965,"ysyx_22040750 io_interrupt", false,-1);
        tracep->declBit(c+966,"ysyx_22040750 io_master_awready", false,-1);
        tracep->declBit(c+967,"ysyx_22040750 io_master_awvalid", false,-1);
        tracep->declBus(c+968,"ysyx_22040750 io_master_awid", false,-1, 3,0);
        tracep->declBus(c+969,"ysyx_22040750 io_master_awaddr", false,-1, 31,0);
        tracep->declBus(c+970,"ysyx_22040750 io_master_awlen", false,-1, 7,0);
        tracep->declBus(c+971,"ysyx_22040750 io_master_awsize", false,-1, 2,0);
        tracep->declBus(c+972,"ysyx_22040750 io_master_awburst", false,-1, 1,0);
        tracep->declBit(c+973,"ysyx_22040750 io_master_wready", false,-1);
        tracep->declBit(c+974,"ysyx_22040750 io_master_wvalid", false,-1);
        tracep->declQuad(c+975,"ysyx_22040750 io_master_wdata", false,-1, 63,0);
        tracep->declBus(c+977,"ysyx_22040750 io_master_wstrb", false,-1, 7,0);
        tracep->declBit(c+978,"ysyx_22040750 io_master_wlast", false,-1);
        tracep->declBit(c+979,"ysyx_22040750 io_master_bready", false,-1);
        tracep->declBit(c+980,"ysyx_22040750 io_master_bvalid", false,-1);
        tracep->declBus(c+981,"ysyx_22040750 io_master_bid", false,-1, 3,0);
        tracep->declBus(c+982,"ysyx_22040750 io_master_bresp", false,-1, 1,0);
        tracep->declBit(c+983,"ysyx_22040750 io_master_arready", false,-1);
        tracep->declBit(c+984,"ysyx_22040750 io_master_arvalid", false,-1);
        tracep->declBus(c+985,"ysyx_22040750 io_master_arid", false,-1, 3,0);
        tracep->declBus(c+986,"ysyx_22040750 io_master_araddr", false,-1, 31,0);
        tracep->declBus(c+987,"ysyx_22040750 io_master_arlen", false,-1, 7,0);
        tracep->declBus(c+988,"ysyx_22040750 io_master_arsize", false,-1, 2,0);
        tracep->declBus(c+989,"ysyx_22040750 io_master_arburst", false,-1, 1,0);
        tracep->declBit(c+990,"ysyx_22040750 io_master_rready", false,-1);
        tracep->declBit(c+991,"ysyx_22040750 io_master_rvalid", false,-1);
        tracep->declBus(c+992,"ysyx_22040750 io_master_rid", false,-1, 3,0);
        tracep->declBus(c+993,"ysyx_22040750 io_master_rresp", false,-1, 1,0);
        tracep->declQuad(c+994,"ysyx_22040750 io_master_rdata", false,-1, 63,0);
        tracep->declBit(c+996,"ysyx_22040750 io_master_rlast", false,-1);
        tracep->declBit(c+997,"ysyx_22040750 io_slave_awready", false,-1);
        tracep->declBit(c+998,"ysyx_22040750 io_slave_awvalid", false,-1);
        tracep->declBus(c+999,"ysyx_22040750 io_slave_awid", false,-1, 3,0);
        tracep->declBus(c+1000,"ysyx_22040750 io_slave_awaddr", false,-1, 31,0);
        tracep->declBus(c+1001,"ysyx_22040750 io_slave_awlen", false,-1, 7,0);
        tracep->declBus(c+1002,"ysyx_22040750 io_slave_awsize", false,-1, 2,0);
        tracep->declBus(c+1003,"ysyx_22040750 io_slave_awburst", false,-1, 1,0);
        tracep->declBit(c+1004,"ysyx_22040750 io_slave_wready", false,-1);
        tracep->declBit(c+1005,"ysyx_22040750 io_slave_wvalid", false,-1);
        tracep->declQuad(c+1006,"ysyx_22040750 io_slave_wdata", false,-1, 63,0);
        tracep->declBus(c+1008,"ysyx_22040750 io_slave_wstrb", false,-1, 7,0);
        tracep->declBit(c+1009,"ysyx_22040750 io_slave_wlast", false,-1);
        tracep->declBit(c+1010,"ysyx_22040750 io_slave_bready", false,-1);
        tracep->declBit(c+1011,"ysyx_22040750 io_slave_bvalid", false,-1);
        tracep->declBus(c+1012,"ysyx_22040750 io_slave_bid", false,-1, 3,0);
        tracep->declBus(c+1013,"ysyx_22040750 io_slave_bresp", false,-1, 1,0);
        tracep->declBit(c+1014,"ysyx_22040750 io_slave_arready", false,-1);
        tracep->declBit(c+1015,"ysyx_22040750 io_slave_arvalid", false,-1);
        tracep->declBus(c+1016,"ysyx_22040750 io_slave_arid", false,-1, 3,0);
        tracep->declBus(c+1017,"ysyx_22040750 io_slave_araddr", false,-1, 31,0);
        tracep->declBus(c+1018,"ysyx_22040750 io_slave_arlen", false,-1, 7,0);
        tracep->declBus(c+1019,"ysyx_22040750 io_slave_arsize", false,-1, 2,0);
        tracep->declBus(c+1020,"ysyx_22040750 io_slave_arburst", false,-1, 1,0);
        tracep->declBit(c+1021,"ysyx_22040750 io_slave_rready", false,-1);
        tracep->declBit(c+1022,"ysyx_22040750 io_slave_rvalid", false,-1);
        tracep->declBus(c+1023,"ysyx_22040750 io_slave_rid", false,-1, 3,0);
        tracep->declBus(c+1024,"ysyx_22040750 io_slave_rresp", false,-1, 1,0);
        tracep->declQuad(c+1025,"ysyx_22040750 io_slave_rdata", false,-1, 63,0);
        tracep->declBit(c+1027,"ysyx_22040750 io_slave_rlast", false,-1);
        tracep->declBus(c+1,"ysyx_22040750 io_sram0_addr", false,-1, 5,0);
        tracep->declBit(c+933,"ysyx_22040750 io_sram0_cen", false,-1);
        tracep->declBit(c+2,"ysyx_22040750 io_sram0_wen", false,-1);
        tracep->declArray(c+3,"ysyx_22040750 io_sram0_wmask", false,-1, 127,0);
        tracep->declArray(c+7,"ysyx_22040750 io_sram0_wdata", false,-1, 127,0);
        tracep->declArray(c+11,"ysyx_22040750 io_sram0_rdata", false,-1, 127,0);
        tracep->declBus(c+1,"ysyx_22040750 io_sram1_addr", false,-1, 5,0);
        tracep->declBit(c+934,"ysyx_22040750 io_sram1_cen", false,-1);
        tracep->declBit(c+15,"ysyx_22040750 io_sram1_wen", false,-1);
        tracep->declArray(c+16,"ysyx_22040750 io_sram1_wmask", false,-1, 127,0);
        tracep->declArray(c+20,"ysyx_22040750 io_sram1_wdata", false,-1, 127,0);
        tracep->declArray(c+24,"ysyx_22040750 io_sram1_rdata", false,-1, 127,0);
        tracep->declBus(c+1,"ysyx_22040750 io_sram2_addr", false,-1, 5,0);
        tracep->declBit(c+935,"ysyx_22040750 io_sram2_cen", false,-1);
        tracep->declBit(c+28,"ysyx_22040750 io_sram2_wen", false,-1);
        tracep->declArray(c+3,"ysyx_22040750 io_sram2_wmask", false,-1, 127,0);
        tracep->declArray(c+7,"ysyx_22040750 io_sram2_wdata", false,-1, 127,0);
        tracep->declArray(c+29,"ysyx_22040750 io_sram2_rdata", false,-1, 127,0);
        tracep->declBus(c+1,"ysyx_22040750 io_sram3_addr", false,-1, 5,0);
        tracep->declBit(c+936,"ysyx_22040750 io_sram3_cen", false,-1);
        tracep->declBit(c+33,"ysyx_22040750 io_sram3_wen", false,-1);
        tracep->declArray(c+16,"ysyx_22040750 io_sram3_wmask", false,-1, 127,0);
        tracep->declArray(c+20,"ysyx_22040750 io_sram3_wdata", false,-1, 127,0);
        tracep->declArray(c+34,"ysyx_22040750 io_sram3_rdata", false,-1, 127,0);
        tracep->declBus(c+38,"ysyx_22040750 io_sram4_addr", false,-1, 5,0);
        tracep->declBit(c+937,"ysyx_22040750 io_sram4_cen", false,-1);
        tracep->declBit(c+39,"ysyx_22040750 io_sram4_wen", false,-1);
        tracep->declArray(c+40,"ysyx_22040750 io_sram4_wmask", false,-1, 127,0);
        tracep->declArray(c+44,"ysyx_22040750 io_sram4_wdata", false,-1, 127,0);
        tracep->declArray(c+48,"ysyx_22040750 io_sram4_rdata", false,-1, 127,0);
        tracep->declBus(c+38,"ysyx_22040750 io_sram5_addr", false,-1, 5,0);
        tracep->declBit(c+938,"ysyx_22040750 io_sram5_cen", false,-1);
        tracep->declBit(c+52,"ysyx_22040750 io_sram5_wen", false,-1);
        tracep->declArray(c+53,"ysyx_22040750 io_sram5_wmask", false,-1, 127,0);
        tracep->declArray(c+57,"ysyx_22040750 io_sram5_wdata", false,-1, 127,0);
        tracep->declArray(c+61,"ysyx_22040750 io_sram5_rdata", false,-1, 127,0);
        tracep->declBus(c+38,"ysyx_22040750 io_sram6_addr", false,-1, 5,0);
        tracep->declBit(c+939,"ysyx_22040750 io_sram6_cen", false,-1);
        tracep->declBit(c+65,"ysyx_22040750 io_sram6_wen", false,-1);
        tracep->declArray(c+40,"ysyx_22040750 io_sram6_wmask", false,-1, 127,0);
        tracep->declArray(c+44,"ysyx_22040750 io_sram6_wdata", false,-1, 127,0);
        tracep->declArray(c+66,"ysyx_22040750 io_sram6_rdata", false,-1, 127,0);
        tracep->declBus(c+38,"ysyx_22040750 io_sram7_addr", false,-1, 5,0);
        tracep->declBit(c+940,"ysyx_22040750 io_sram7_cen", false,-1);
        tracep->declBit(c+70,"ysyx_22040750 io_sram7_wen", false,-1);
        tracep->declArray(c+53,"ysyx_22040750 io_sram7_wmask", false,-1, 127,0);
        tracep->declArray(c+57,"ysyx_22040750 io_sram7_wdata", false,-1, 127,0);
        tracep->declArray(c+71,"ysyx_22040750 io_sram7_rdata", false,-1, 127,0);
        tracep->declBus(c+1,"ysyx_22040750 iaddr", false,-1, 5,0);
        tracep->declBus(c+38,"ysyx_22040750 daddr", false,-1, 5,0);
        tracep->declBus(c+75,"ysyx_22040750 cpu_inst", false,-1, 31,0);
        tracep->declQuad(c+76,"ysyx_22040750 cpu_pc", false,-1, 63,0);
        tracep->declBit(c+78,"ysyx_22040750 cpu_inst_valid", false,-1);
        tracep->declBit(c+79,"ysyx_22040750 cpu_pc_valid", false,-1);
        tracep->declBit(c+80,"ysyx_22040750 cpu_pc_ready", false,-1);
        tracep->declQuad(c+81,"ysyx_22040750 mem_addr", false,-1, 63,0);
        tracep->declBit(c+83,"ysyx_22040750 cpu_rreq", false,-1);
        tracep->declBit(c+84,"ysyx_22040750 cpu_wreq", false,-1);
        tracep->declQuad(c+85,"ysyx_22040750 mem_rdata", false,-1, 63,0);
        tracep->declQuad(c+87,"ysyx_22040750 mem_wdata", false,-1, 63,0);
        tracep->declBit(c+89,"ysyx_22040750 mem_rvalid", false,-1);
        tracep->declBit(c+90,"ysyx_22040750 mem_bvalid", false,-1);
        tracep->declBus(c+91,"ysyx_22040750 cpu_wmask", false,-1, 7,0);
        tracep->declBit(c+963,"ysyx_22040750 cpu_core_e I_sys_clk", false,-1);
        tracep->declBit(c+964,"ysyx_22040750 cpu_core_e I_rst", false,-1);
        tracep->declBus(c+75,"ysyx_22040750 cpu_core_e I_inst", false,-1, 31,0);
        tracep->declBit(c+78,"ysyx_22040750 cpu_core_e I_inst_valid", false,-1);
        tracep->declBit(c+80,"ysyx_22040750 cpu_core_e I_pc_ready", false,-1);
        tracep->declQuad(c+76,"ysyx_22040750 cpu_core_e O_pc", false,-1, 63,0);
        tracep->declBit(c+79,"ysyx_22040750 cpu_core_e O_pc_valid", false,-1);
        tracep->declQuad(c+81,"ysyx_22040750 cpu_core_e O_mem_addr", false,-1, 63,0);
        tracep->declBit(c+83,"ysyx_22040750 cpu_core_e O_mem_rd_en", false,-1);
        tracep->declBit(c+84,"ysyx_22040750 cpu_core_e O_mem_wen", false,-1);
        tracep->declQuad(c+85,"ysyx_22040750 cpu_core_e I_mem_rd_data", false,-1, 63,0);
        tracep->declBit(c+89,"ysyx_22040750 cpu_core_e I_mem_rd_data_valid", false,-1);
        tracep->declBit(c+90,"ysyx_22040750 cpu_core_e I_mem_wr_data_valid", false,-1);
        tracep->declQuad(c+87,"ysyx_22040750 cpu_core_e O_mem_wr_data", false,-1, 63,0);
        tracep->declBus(c+91,"ysyx_22040750 cpu_core_e O_mem_wr_strb", false,-1, 7,0);
        tracep->declQuad(c+92,"ysyx_22040750 cpu_core_e current_pc", false,-1, 63,0);
        tracep->declQuad(c+76,"ysyx_22040750 cpu_core_e dnpc", false,-1, 63,0);
        tracep->declQuad(c+94,"ysyx_22040750 cpu_core_e snpc", false,-1, 63,0);
        tracep->declBus(c+96,"ysyx_22040750 cpu_core_e current_inst", false,-1, 31,0);
        tracep->declQuad(c+97,"ysyx_22040750 cpu_core_e imm", false,-1, 63,0);
        tracep->declQuad(c+99,"ysyx_22040750 cpu_core_e wr_data", false,-1, 63,0);
        tracep->declQuad(c+101,"ysyx_22040750 cpu_core_e rs1_data", false,-1, 63,0);
        tracep->declQuad(c+103,"ysyx_22040750 cpu_core_e rs2_data", false,-1, 63,0);
        tracep->declQuad(c+105,"ysyx_22040750 cpu_core_e alu_op1", false,-1, 63,0);
        tracep->declQuad(c+107,"ysyx_22040750 cpu_core_e alu_op2", false,-1, 63,0);
        tracep->declQuad(c+109,"ysyx_22040750 cpu_core_e alu_out", false,-1, 63,0);
        tracep->declQuad(c+111,"ysyx_22040750 cpu_core_e mem_in", false,-1, 63,0);
        tracep->declQuad(c+113,"ysyx_22040750 cpu_core_e mem_out", false,-1, 63,0);
        tracep->declQuad(c+115,"ysyx_22040750 cpu_core_e mem_addr", false,-1, 63,0);
        tracep->declQuad(c+117,"ysyx_22040750 cpu_core_e csr_rd_data", false,-1, 63,0);
        tracep->declQuad(c+119,"ysyx_22040750 cpu_core_e alu_csr_data", false,-1, 63,0);
        tracep->declBus(c+121,"ysyx_22040750 cpu_core_e rs1_addr", false,-1, 4,0);
        tracep->declBus(c+122,"ysyx_22040750 cpu_core_e rs2_addr", false,-1, 4,0);
        tracep->declBus(c+123,"ysyx_22040750 cpu_core_e rd_addr", false,-1, 4,0);
        tracep->declBus(c+124,"ysyx_22040750 cpu_core_e dnpc_sel", false,-1, 4,0);
        tracep->declBus(c+125,"ysyx_22040750 cpu_core_e regin_sel", false,-1, 2,0);
        tracep->declBus(c+126,"ysyx_22040750 cpu_core_e opnum1_sel", false,-1, 2,0);
        tracep->declBus(c+127,"ysyx_22040750 cpu_core_e opnum2_sel", false,-1, 2,0);
        tracep->declBus(c+128,"ysyx_22040750 cpu_core_e alu_op_sel", false,-1, 14,0);
        tracep->declBus(c+129,"ysyx_22040750 cpu_core_e mem_wstrb", false,-1, 7,0);
        tracep->declBus(c+130,"ysyx_22040750 cpu_core_e mem_rstrb", false,-1, 8,0);
        tracep->declBit(c+131,"ysyx_22040750 cpu_core_e reg_wen", false,-1);
        tracep->declBit(c+132,"ysyx_22040750 cpu_core_e mem_wen", false,-1);
        tracep->declBit(c+133,"ysyx_22040750 cpu_core_e word_op_mask", false,-1);
        tracep->declBus(c+134,"ysyx_22040750 cpu_core_e alu_op_sext", false,-1, 1,0);
        tracep->declBus(c+135,"ysyx_22040750 cpu_core_e csr_addr", false,-1, 11,0);
        tracep->declBit(c+136,"ysyx_22040750 cpu_core_e csr_wen", false,-1);
        tracep->declBit(c+137,"ysyx_22040750 cpu_core_e csr_intr", false,-1);
        tracep->declBit(c+138,"ysyx_22040750 cpu_core_e csr_mret", false,-1);
        tracep->declBus(c+139,"ysyx_22040750 cpu_core_e csr_op_sel", false,-1, 6,0);
        tracep->declBus(c+121,"ysyx_22040750 cpu_core_e csr_uimm", false,-1, 4,0);
        tracep->declQuad(c+140,"ysyx_22040750 cpu_core_e csr_intr_no", false,-1, 63,0);
        tracep->declBit(c+142,"ysyx_22040750 cpu_core_e IF_valid", false,-1);
        tracep->declQuad(c+143,"ysyx_22040750 cpu_core_e IF_ID_pc", false,-1, 63,0);
        tracep->declBus(c+145,"ysyx_22040750 cpu_core_e IF_ID_inst", false,-1, 31,0);
        tracep->declBit(c+146,"ysyx_22040750 cpu_core_e IF_ID_allowin", false,-1);
        tracep->declBit(c+147,"ysyx_22040750 cpu_core_e IF_ID_valid", false,-1);
        tracep->declBit(c+148,"ysyx_22040750 cpu_core_e IF_ID_stall", false,-1);
        tracep->declBit(c+149,"ysyx_22040750 cpu_core_e IF_ID_bubble", false,-1);
        tracep->declBit(c+150,"ysyx_22040750 cpu_core_e IF_ID_input_valid", false,-1);
        tracep->declQuad(c+151,"ysyx_22040750 cpu_core_e ID_EX_imm", false,-1, 63,0);
        tracep->declQuad(c+153,"ysyx_22040750 cpu_core_e ID_EX_pc", false,-1, 63,0);
        tracep->declQuad(c+155,"ysyx_22040750 cpu_core_e ID_EX_rs1", false,-1, 63,0);
        tracep->declQuad(c+157,"ysyx_22040750 cpu_core_e ID_EX_rs2", false,-1, 63,0);
        tracep->declQuad(c+159,"ysyx_22040750 cpu_core_e ID_EX_csr", false,-1, 63,0);
        tracep->declBus(c+161,"ysyx_22040750 cpu_core_e ID_EX_rd_addr", false,-1, 4,0);
        tracep->declBus(c+162,"ysyx_22040750 cpu_core_e ID_EX_wstrb", false,-1, 7,0);
        tracep->declBus(c+163,"ysyx_22040750 cpu_core_e ID_EX_rstrb", false,-1, 8,0);
        tracep->declBus(c+164,"ysyx_22040750 cpu_core_e ID_EX_op2_sel", false,-1, 2,0);
        tracep->declBus(c+165,"ysyx_22040750 cpu_core_e ID_EX_op1_sel", false,-1, 2,0);
        tracep->declBus(c+166,"ysyx_22040750 cpu_core_e ID_EX_regin_sel", false,-1, 2,0);
        tracep->declBus(c+167,"ysyx_22040750 cpu_core_e ID_EX_alu_sext", false,-1, 1,0);
        tracep->declBus(c+168,"ysyx_22040750 cpu_core_e ID_EX_alu_op_sel", false,-1, 14,0);
        tracep->declBit(c+169,"ysyx_22040750 cpu_core_e ID_EX_reg_wen", false,-1);
        tracep->declBit(c+170,"ysyx_22040750 cpu_core_e ID_EX_mem_wen", false,-1);
        tracep->declBit(c+171,"ysyx_22040750 cpu_core_e ID_EX_word_op_mask", false,-1);
        tracep->declBit(c+172,"ysyx_22040750 cpu_core_e ID_EX_valid", false,-1);
        tracep->declBit(c+173,"ysyx_22040750 cpu_core_e ID_EX_allowin", false,-1);
        tracep->declBus(c+174,"ysyx_22040750 cpu_core_e ID_EX_stall", false,-1, 1,0);
        tracep->declBus(c+175,"ysyx_22040750 cpu_core_e ID_EX_inst", false,-1, 31,0);
        tracep->declBit(c+176,"ysyx_22040750 cpu_core_e ID_EX_bubble", false,-1);
        tracep->declBit(c+177,"ysyx_22040750 cpu_core_e ID_EX_input_valid", false,-1);
        tracep->declBit(c+178,"ysyx_22040750 cpu_core_e ID_EX_alu_multicycle", false,-1);
        tracep->declBit(c+179,"ysyx_22040750 cpu_core_e alu_out_valid", false,-1);
        tracep->declBus(c+180,"ysyx_22040750 cpu_core_e ID_EX_csr_addr", false,-1, 11,0);
        tracep->declBit(c+181,"ysyx_22040750 cpu_core_e ID_EX_csr_wen", false,-1);
        tracep->declBit(c+182,"ysyx_22040750 cpu_core_e ID_EX_csr_intr", false,-1);
        tracep->declBit(c+183,"ysyx_22040750 cpu_core_e ID_EX_csr_mret", false,-1);
        tracep->declBus(c+184,"ysyx_22040750 cpu_core_e ID_EX_csr_op_sel", false,-1, 6,0);
        tracep->declBus(c+185,"ysyx_22040750 cpu_core_e ID_EX_csr_uimm", false,-1, 4,0);
        tracep->declQuad(c+186,"ysyx_22040750 cpu_core_e ID_EX_csr_intr_no", false,-1, 63,0);
        tracep->declBit(c+188,"ysyx_22040750 cpu_core_e EX_MEM_valid", false,-1);
        tracep->declBus(c+189,"ysyx_22040750 cpu_core_e EX_MEM_rstrb", false,-1, 8,0);
        tracep->declBus(c+190,"ysyx_22040750 cpu_core_e EX_MEM_wstrb", false,-1, 7,0);
        tracep->declQuad(c+191,"ysyx_22040750 cpu_core_e EX_MEM_alu_out", false,-1, 63,0);
        tracep->declQuad(c+81,"ysyx_22040750 cpu_core_e EX_MEM_mem_addr", false,-1, 63,0);
        tracep->declQuad(c+113,"ysyx_22040750 cpu_core_e EX_MEM_rs2", false,-1, 63,0);
        tracep->declQuad(c+193,"ysyx_22040750 cpu_core_e EX_MEM_csr", false,-1, 63,0);
        tracep->declBit(c+195,"ysyx_22040750 cpu_core_e EX_MEM_mem_wen", false,-1);
        tracep->declBit(c+83,"ysyx_22040750 cpu_core_e EX_MEM_mem_rd_en", false,-1);
        tracep->declBit(c+84,"ysyx_22040750 cpu_core_e EX_MEM_mem_wr_en", false,-1);
        tracep->declQuad(c+196,"ysyx_22040750 cpu_core_e EX_MEM_pc", false,-1, 63,0);
        tracep->declQuad(c+1037,"ysyx_22040750 cpu_core_e EX_MEM_mem_data", false,-1, 63,0);
        tracep->declBit(c+198,"ysyx_22040750 cpu_core_e EX_MEM_reg_wen", false,-1);
        tracep->declBus(c+199,"ysyx_22040750 cpu_core_e EX_MEM_rd_addr", false,-1, 4,0);
        tracep->declBus(c+200,"ysyx_22040750 cpu_core_e EX_MEM_regin_sel", false,-1, 2,0);
        tracep->declBus(c+201,"ysyx_22040750 cpu_core_e EX_MEM_shamt", false,-1, 2,0);
        tracep->declBit(c+202,"ysyx_22040750 cpu_core_e EX_MEM_allowin", false,-1);
        tracep->declBus(c+203,"ysyx_22040750 cpu_core_e EX_MEM_stall", false,-1, 1,0);
        tracep->declBus(c+204,"ysyx_22040750 cpu_core_e EX_MEM_inst", false,-1, 31,0);
        tracep->declBit(c+205,"ysyx_22040750 cpu_core_e EX_MEM_bubble", false,-1);
        tracep->declBit(c+206,"ysyx_22040750 cpu_core_e EX_MEM_input_valid", false,-1);
        tracep->declBus(c+207,"ysyx_22040750 cpu_core_e EX_MEM_csr_addr", false,-1, 11,0);
        tracep->declBit(c+208,"ysyx_22040750 cpu_core_e EX_MEM_csr_wen", false,-1);
        tracep->declBit(c+209,"ysyx_22040750 cpu_core_e EX_MEM_csr_intr", false,-1);
        tracep->declBit(c+210,"ysyx_22040750 cpu_core_e EX_MEM_csr_mret", false,-1);
        tracep->declQuad(c+211,"ysyx_22040750 cpu_core_e EX_MEM_csr_intr_no", false,-1, 63,0);
        tracep->declQuad(c+213,"ysyx_22040750 cpu_core_e MEM_WB_pc", false,-1, 63,0);
        tracep->declBit(c+215,"ysyx_22040750 cpu_core_e MEM_WB_valid", false,-1);
        tracep->declQuad(c+216,"ysyx_22040750 cpu_core_e MEM_WB_mem_data", false,-1, 63,0);
        tracep->declBus(c+218,"ysyx_22040750 cpu_core_e MEM_WB_mem_rstrb", false,-1, 8,0);
        tracep->declQuad(c+219,"ysyx_22040750 cpu_core_e MEM_WB_alu_out", false,-1, 63,0);
        tracep->declQuad(c+221,"ysyx_22040750 cpu_core_e MEM_WB_csr", false,-1, 63,0);
        tracep->declBit(c+223,"ysyx_22040750 cpu_core_e MEM_WB_reg_wen", false,-1);
        tracep->declBus(c+224,"ysyx_22040750 cpu_core_e MEM_WB_rd_addr", false,-1, 4,0);
        tracep->declBus(c+225,"ysyx_22040750 cpu_core_e MEM_WB_regin_sel", false,-1, 2,0);
        tracep->declBus(c+226,"ysyx_22040750 cpu_core_e MEM_WB_shamt", false,-1, 2,0);
        tracep->declBit(c+227,"ysyx_22040750 cpu_core_e MEM_WB_allowin", false,-1);
        tracep->declBus(c+228,"ysyx_22040750 cpu_core_e MEM_WB_inst", false,-1, 31,0);
        tracep->declBit(c+229,"ysyx_22040750 cpu_core_e MEM_WB_bubble", false,-1);
        tracep->declBit(c+215,"ysyx_22040750 cpu_core_e MEM_WB_input_valid", false,-1);
        tracep->declBus(c+230,"ysyx_22040750 cpu_core_e MEM_WB_stall", false,-1, 1,0);
        tracep->declBus(c+231,"ysyx_22040750 cpu_core_e MEM_WB_csr_addr", false,-1, 11,0);
        tracep->declBit(c+232,"ysyx_22040750 cpu_core_e MEM_WB_csr_wen", false,-1);
        tracep->declBit(c+233,"ysyx_22040750 cpu_core_e MEM_WB_csr_intr", false,-1);
        tracep->declBit(c+234,"ysyx_22040750 cpu_core_e MEM_WB_csr_mret", false,-1);
        tracep->declQuad(c+235,"ysyx_22040750 cpu_core_e MEM_WB_csr_intr_no", false,-1, 63,0);
        tracep->declBus(c+237,"ysyx_22040750 cpu_core_e stall_en", false,-1, 1,0);
        tracep->declQuad(c+238,"ysyx_22040750 cpu_core_e rs1_forward_data", false,-1, 63,0);
        tracep->declQuad(c+240,"ysyx_22040750 cpu_core_e rs2_forward_data", false,-1, 63,0);
        tracep->declQuad(c+242,"ysyx_22040750 cpu_core_e csr_forward_data", false,-1, 63,0);
        tracep->declBit(c+244,"ysyx_22040750 cpu_core_e EX_MEM_mem_op", false,-1);
        tracep->declBit(c+245,"ysyx_22040750 cpu_core_e MEM_WB_mem_op", false,-1);
        tracep->declQuad(c+246,"ysyx_22040750 cpu_core_e MEM_WB_mem_addr", false,-1, 63,0);
        tracep->declQuad(c+238,"ysyx_22040750 cpu_core_e npc_e I_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+240,"ysyx_22040750 cpu_core_e npc_e I_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+97,"ysyx_22040750 cpu_core_e npc_e I_imm", false,-1, 63,0);
        tracep->declQuad(c+242,"ysyx_22040750 cpu_core_e npc_e I_intr_pc", false,-1, 63,0);
        tracep->declQuad(c+143,"ysyx_22040750 cpu_core_e npc_e I_pc", false,-1, 63,0);
        tracep->declQuad(c+94,"ysyx_22040750 cpu_core_e npc_e I_snpc", false,-1, 63,0);
        tracep->declBus(c+124,"ysyx_22040750 cpu_core_e npc_e I_dnpc_sel", false,-1, 4,0);
        tracep->declQuad(c+76,"ysyx_22040750 cpu_core_e npc_e O_dnpc", false,-1, 63,0);
        tracep->declQuad(c+97,"ysyx_22040750 cpu_core_e npc_e dnpc_src1", false,-1, 63,0);
        tracep->declQuad(c+248,"ysyx_22040750 cpu_core_e npc_e dnpc_src2", false,-1, 63,0);
        tracep->declQuad(c+250,"ysyx_22040750 cpu_core_e npc_e dnpc_sum", false,-1, 63,0);
        tracep->declQuad(c+252,"ysyx_22040750 cpu_core_e npc_e dnpc", false,-1, 63,0);
        tracep->declBit(c+254,"ysyx_22040750 cpu_core_e npc_e dnpc_sel", false,-1);
        tracep->declBit(c+255,"ysyx_22040750 cpu_core_e npc_e intr_sel", false,-1);
        tracep->declBus(c+1039,"ysyx_22040750 cpu_core_e npc_e nextpc_64bit_3sel N", false,-1, 31,0);
        tracep->declBus(c+1040,"ysyx_22040750 cpu_core_e npc_e nextpc_64bit_3sel M", false,-1, 31,0);
        tracep->declArray(c+256,"ysyx_22040750 cpu_core_e npc_e nextpc_64bit_3sel I_sel_data", false,-1, 191,0);
        tracep->declBus(c+262,"ysyx_22040750 cpu_core_e npc_e nextpc_64bit_3sel I_sel", false,-1, 2,0);
        tracep->declQuad(c+252,"ysyx_22040750 cpu_core_e npc_e nextpc_64bit_3sel O_sel_data", false,-1, 63,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+263+i*2,"ysyx_22040750 cpu_core_e npc_e nextpc_64bit_3sel sel_data", true,(i+0), 63,0);}}
        tracep->declBus(c+1041,"ysyx_22040750 cpu_core_e npc_e nextpc_64bit_3sel unnamedblk1 i", false,-1, 31,0);
        tracep->declBit(c+963,"ysyx_22040750 cpu_core_e pc_e I_sys_clk", false,-1);
        tracep->declBit(c+964,"ysyx_22040750 cpu_core_e pc_e I_rst", false,-1);
        tracep->declQuad(c+76,"ysyx_22040750 cpu_core_e pc_e I_dnpc", false,-1, 63,0);
        tracep->declBus(c+75,"ysyx_22040750 cpu_core_e pc_e I_inst", false,-1, 31,0);
        tracep->declBit(c+78,"ysyx_22040750 cpu_core_e pc_e I_inst_valid", false,-1);
        tracep->declBit(c+80,"ysyx_22040750 cpu_core_e pc_e I_inst_ready", false,-1);
        tracep->declBit(c+146,"ysyx_22040750 cpu_core_e pc_e I_IF_ID_allowin", false,-1);
        tracep->declBit(c+142,"ysyx_22040750 cpu_core_e pc_e O_IF_valid", false,-1);
        tracep->declQuad(c+92,"ysyx_22040750 cpu_core_e pc_e O_pc", false,-1, 63,0);
        tracep->declBus(c+96,"ysyx_22040750 cpu_core_e pc_e O_inst", false,-1, 31,0);
        tracep->declBit(c+79,"ysyx_22040750 cpu_core_e pc_e O_pc_valid", false,-1);
        tracep->declQuad(c+1042,"ysyx_22040750 cpu_core_e pc_e PC_RESET", false,-1, 63,0);
        tracep->declBit(c+269,"ysyx_22040750 cpu_core_e pc_e IF_ready_go", false,-1);
        tracep->declBit(c+270,"ysyx_22040750 cpu_core_e pc_e IF_allow_in", false,-1);
        tracep->declBit(c+271,"ysyx_22040750 cpu_core_e pc_e IF_handshake", false,-1);
        tracep->declBit(c+272,"ysyx_22040750 cpu_core_e pc_e IF_valid", false,-1);
        tracep->declBit(c+273,"ysyx_22040750 cpu_core_e pc_e IF_en", false,-1);
        tracep->declBus(c+274,"ysyx_22040750 cpu_core_e pc_e inst_cache", false,-1, 31,0);
        tracep->declBit(c+275,"ysyx_22040750 cpu_core_e pc_e cache_valid", false,-1);
        tracep->declBit(c+963,"ysyx_22040750 cpu_core_e IF_ID_reg_e I_sys_clk", false,-1);
        tracep->declBit(c+964,"ysyx_22040750 cpu_core_e IF_ID_reg_e I_rst", false,-1);
        tracep->declQuad(c+92,"ysyx_22040750 cpu_core_e IF_ID_reg_e I_pc", false,-1, 63,0);
        tracep->declBus(c+96,"ysyx_22040750 cpu_core_e IF_ID_reg_e I_inst", false,-1, 31,0);
        tracep->declBit(c+142,"ysyx_22040750 cpu_core_e IF_ID_reg_e I_IF_ID_valid", false,-1);
        tracep->declBit(c+173,"ysyx_22040750 cpu_core_e IF_ID_reg_e I_IF_ID_allowout", false,-1);
        tracep->declBit(c+148,"ysyx_22040750 cpu_core_e IF_ID_reg_e I_IF_ID_stall", false,-1);
        tracep->declBit(c+276,"ysyx_22040750 cpu_core_e IF_ID_reg_e I_IF_ID_jmp", false,-1);
        tracep->declBit(c+146,"ysyx_22040750 cpu_core_e IF_ID_reg_e O_IF_ID_allowin", false,-1);
        tracep->declQuad(c+143,"ysyx_22040750 cpu_core_e IF_ID_reg_e O_pc", false,-1, 63,0);
        tracep->declBus(c+145,"ysyx_22040750 cpu_core_e IF_ID_reg_e O_inst", false,-1, 31,0);
        tracep->declBit(c+149,"ysyx_22040750 cpu_core_e IF_ID_reg_e O_bubble_inst_debug", false,-1);
        tracep->declBit(c+150,"ysyx_22040750 cpu_core_e IF_ID_reg_e O_IF_ID_input_valid", false,-1);
        tracep->declBit(c+147,"ysyx_22040750 cpu_core_e IF_ID_reg_e O_IF_ID_valid", false,-1);
        tracep->declBit(c+150,"ysyx_22040750 cpu_core_e IF_ID_reg_e input_valid", false,-1);
        tracep->declBit(c+277,"ysyx_22040750 cpu_core_e IF_ID_reg_e output_valid", false,-1);
        tracep->declBus(c+121,"ysyx_22040750 cpu_core_e stall_unit_e I_rs1_addr", false,-1, 4,0);
        tracep->declBus(c+122,"ysyx_22040750 cpu_core_e stall_unit_e I_rs2_addr", false,-1, 4,0);
        tracep->declBit(c+150,"ysyx_22040750 cpu_core_e stall_unit_e I_ID_valid", false,-1);
        tracep->declBus(c+161,"ysyx_22040750 cpu_core_e stall_unit_e I_EX_rd_addr", false,-1, 4,0);
        tracep->declBit(c+177,"ysyx_22040750 cpu_core_e stall_unit_e I_EX_valid", false,-1);
        tracep->declBit(c+278,"ysyx_22040750 cpu_core_e stall_unit_e I_EX_mem_rd_en", false,-1);
        tracep->declBit(c+279,"ysyx_22040750 cpu_core_e stall_unit_e I_EX_alu_multcycle", false,-1);
        tracep->declBus(c+199,"ysyx_22040750 cpu_core_e stall_unit_e I_MEM_rd_addr", false,-1, 4,0);
        tracep->declBit(c+206,"ysyx_22040750 cpu_core_e stall_unit_e I_MEM_valid", false,-1);
        tracep->declBit(c+280,"ysyx_22040750 cpu_core_e stall_unit_e I_MEM_mem_rd_en", false,-1);
        tracep->declBus(c+224,"ysyx_22040750 cpu_core_e stall_unit_e I_WB_rd_addr", false,-1, 4,0);
        tracep->declBit(c+215,"ysyx_22040750 cpu_core_e stall_unit_e I_WB_valid", false,-1);
        tracep->declBus(c+237,"ysyx_22040750 cpu_core_e stall_unit_e I_stall_en", false,-1, 1,0);
        tracep->declBit(c+148,"ysyx_22040750 cpu_core_e stall_unit_e O_ID_stall", false,-1);
        tracep->declBus(c+174,"ysyx_22040750 cpu_core_e stall_unit_e O_EX_stall", false,-1, 1,0);
        tracep->declBus(c+203,"ysyx_22040750 cpu_core_e stall_unit_e O_MEM_stall", false,-1, 1,0);
        tracep->declBus(c+230,"ysyx_22040750 cpu_core_e stall_unit_e O_WB_stall", false,-1, 1,0);
        tracep->declBus(c+281,"ysyx_22040750 cpu_core_e stall_unit_e EX_stall", false,-1, 1,0);
        tracep->declBus(c+282,"ysyx_22040750 cpu_core_e stall_unit_e MEM_stall", false,-1, 1,0);
        tracep->declBus(c+283,"ysyx_22040750 cpu_core_e stall_unit_e WB_stall", false,-1, 1,0);
        tracep->declBit(c+284,"ysyx_22040750 cpu_core_e stall_unit_e mem_rd", false,-1);
        tracep->declBit(c+285,"ysyx_22040750 cpu_core_e stall_unit_e multicycle_alu_op", false,-1);
        tracep->declQuad(c+101,"ysyx_22040750 cpu_core_e forward_unit_e I_ID_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+103,"ysyx_22040750 cpu_core_e forward_unit_e I_ID_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+109,"ysyx_22040750 cpu_core_e forward_unit_e I_EX_data", false,-1, 63,0);
        tracep->declQuad(c+191,"ysyx_22040750 cpu_core_e forward_unit_e I_MEM_data", false,-1, 63,0);
        tracep->declQuad(c+99,"ysyx_22040750 cpu_core_e forward_unit_e I_WB_data", false,-1, 63,0);
        tracep->declBus(c+237,"ysyx_22040750 cpu_core_e forward_unit_e I_stall_en", false,-1, 1,0);
        tracep->declBus(c+174,"ysyx_22040750 cpu_core_e forward_unit_e I_EX_stall", false,-1, 1,0);
        tracep->declBus(c+203,"ysyx_22040750 cpu_core_e forward_unit_e I_MEM_stall", false,-1, 1,0);
        tracep->declBus(c+230,"ysyx_22040750 cpu_core_e forward_unit_e I_WB_stall", false,-1, 1,0);
        tracep->declBit(c+169,"ysyx_22040750 cpu_core_e forward_unit_e I_EX_reg_wen", false,-1);
        tracep->declBit(c+198,"ysyx_22040750 cpu_core_e forward_unit_e I_MEM_reg_wen", false,-1);
        tracep->declBit(c+286,"ysyx_22040750 cpu_core_e forward_unit_e I_WB_reg_wen", false,-1);
        tracep->declQuad(c+238,"ysyx_22040750 cpu_core_e forward_unit_e O_ID_EX_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+240,"ysyx_22040750 cpu_core_e forward_unit_e O_ID_EX_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+117,"ysyx_22040750 cpu_core_e csr_foward_e I_csr_ID", false,-1, 63,0);
        tracep->declQuad(c+159,"ysyx_22040750 cpu_core_e csr_foward_e I_csr_EX", false,-1, 63,0);
        tracep->declQuad(c+193,"ysyx_22040750 cpu_core_e csr_foward_e I_csr_MEM", false,-1, 63,0);
        tracep->declQuad(c+221,"ysyx_22040750 cpu_core_e csr_foward_e I_csr_WB", false,-1, 63,0);
        tracep->declBus(c+135,"ysyx_22040750 cpu_core_e csr_foward_e I_csr_addr_ID", false,-1, 11,0);
        tracep->declBus(c+180,"ysyx_22040750 cpu_core_e csr_foward_e I_csr_addr_EX", false,-1, 11,0);
        tracep->declBus(c+207,"ysyx_22040750 cpu_core_e csr_foward_e I_csr_addr_MEM", false,-1, 11,0);
        tracep->declBus(c+231,"ysyx_22040750 cpu_core_e csr_foward_e I_csr_addr_WB", false,-1, 11,0);
        tracep->declBit(c+136,"ysyx_22040750 cpu_core_e csr_foward_e I_csr_wen_ID", false,-1);
        tracep->declBit(c+181,"ysyx_22040750 cpu_core_e csr_foward_e I_csr_wen_EX", false,-1);
        tracep->declBit(c+208,"ysyx_22040750 cpu_core_e csr_foward_e I_csr_wen_MEM", false,-1);
        tracep->declBit(c+232,"ysyx_22040750 cpu_core_e csr_foward_e I_csr_wen_WB", false,-1);
        tracep->declQuad(c+242,"ysyx_22040750 cpu_core_e csr_foward_e O_csr_foward_data", false,-1, 63,0);
        tracep->declBit(c+287,"ysyx_22040750 cpu_core_e csr_foward_e EX_foward", false,-1);
        tracep->declBit(c+288,"ysyx_22040750 cpu_core_e csr_foward_e MEM_foward", false,-1);
        tracep->declBit(c+289,"ysyx_22040750 cpu_core_e csr_foward_e WB_foward", false,-1);
        tracep->declBit(c+963,"ysyx_22040750 cpu_core_e decoder_e I_sys_clk", false,-1);
        tracep->declBit(c+964,"ysyx_22040750 cpu_core_e decoder_e I_rst", false,-1);
        tracep->declBus(c+145,"ysyx_22040750 cpu_core_e decoder_e I_inst", false,-1, 31,0);
        tracep->declQuad(c+97,"ysyx_22040750 cpu_core_e decoder_e O_imm", false,-1, 63,0);
        tracep->declQuad(c+238,"ysyx_22040750 cpu_core_e decoder_e I_rs1_data", false,-1, 63,0);
        tracep->declBus(c+121,"ysyx_22040750 cpu_core_e decoder_e O_rs1", false,-1, 4,0);
        tracep->declQuad(c+240,"ysyx_22040750 cpu_core_e decoder_e I_rs2_data", false,-1, 63,0);
        tracep->declBus(c+122,"ysyx_22040750 cpu_core_e decoder_e O_rs2", false,-1, 4,0);
        tracep->declBus(c+123,"ysyx_22040750 cpu_core_e decoder_e O_rd", false,-1, 4,0);
        tracep->declBit(c+131,"ysyx_22040750 cpu_core_e decoder_e O_reg_wen", false,-1);
        tracep->declBit(c+132,"ysyx_22040750 cpu_core_e decoder_e O_mem_wen", false,-1);
        tracep->declBus(c+129,"ysyx_22040750 cpu_core_e decoder_e O_mem_wstrb", false,-1, 7,0);
        tracep->declBus(c+130,"ysyx_22040750 cpu_core_e decoder_e O_mem_rstrb", false,-1, 8,0);
        tracep->declBus(c+124,"ysyx_22040750 cpu_core_e decoder_e O_dnpc_sel", false,-1, 4,0);
        tracep->declBus(c+125,"ysyx_22040750 cpu_core_e decoder_e O_regin_sel", false,-1, 2,0);
        tracep->declBus(c+126,"ysyx_22040750 cpu_core_e decoder_e O_opnum1_sel", false,-1, 2,0);
        tracep->declBus(c+127,"ysyx_22040750 cpu_core_e decoder_e O_opnum2_sel", false,-1, 2,0);
        tracep->declBus(c+128,"ysyx_22040750 cpu_core_e decoder_e O_alu_op_sel", false,-1, 14,0);
        tracep->declBus(c+134,"ysyx_22040750 cpu_core_e decoder_e O_alu_op_sext", false,-1, 1,0);
        tracep->declBit(c+133,"ysyx_22040750 cpu_core_e decoder_e O_word_op_mask", false,-1);
        tracep->declBus(c+139,"ysyx_22040750 cpu_core_e decoder_e O_csr_op_sel", false,-1, 6,0);
        tracep->declBus(c+121,"ysyx_22040750 cpu_core_e decoder_e O_csr_imm", false,-1, 4,0);
        tracep->declBus(c+135,"ysyx_22040750 cpu_core_e decoder_e O_csr_addr", false,-1, 11,0);
        tracep->declBit(c+136,"ysyx_22040750 cpu_core_e decoder_e O_csr_wen", false,-1);
        tracep->declBit(c+137,"ysyx_22040750 cpu_core_e decoder_e O_csr_intr", false,-1);
        tracep->declQuad(c+140,"ysyx_22040750 cpu_core_e decoder_e O_csr_intr_no", false,-1, 63,0);
        tracep->declBit(c+138,"ysyx_22040750 cpu_core_e decoder_e O_csr_mret", false,-1);
        tracep->declBus(c+237,"ysyx_22040750 cpu_core_e decoder_e O_stall_en", false,-1, 1,0);
        tracep->declBus(c+290,"ysyx_22040750 cpu_core_e decoder_e funct7", false,-1, 6,0);
        tracep->declBus(c+291,"ysyx_22040750 cpu_core_e decoder_e opcode", false,-1, 6,0);
        tracep->declBus(c+122,"ysyx_22040750 cpu_core_e decoder_e rs2", false,-1, 4,0);
        tracep->declBus(c+121,"ysyx_22040750 cpu_core_e decoder_e rs1", false,-1, 4,0);
        tracep->declBus(c+123,"ysyx_22040750 cpu_core_e decoder_e rd", false,-1, 4,0);
        tracep->declBus(c+292,"ysyx_22040750 cpu_core_e decoder_e funct3", false,-1, 2,0);
        tracep->declBus(c+135,"ysyx_22040750 cpu_core_e decoder_e immI", false,-1, 11,0);
        tracep->declBus(c+293,"ysyx_22040750 cpu_core_e decoder_e immS", false,-1, 11,0);
        tracep->declBus(c+294,"ysyx_22040750 cpu_core_e decoder_e immB", false,-1, 12,0);
        tracep->declBus(c+295,"ysyx_22040750 cpu_core_e decoder_e immU", false,-1, 31,0);
        tracep->declBus(c+296,"ysyx_22040750 cpu_core_e decoder_e immJ", false,-1, 20,0);
        tracep->declBit(c+297,"ysyx_22040750 cpu_core_e decoder_e typeI", false,-1);
        tracep->declBit(c+132,"ysyx_22040750 cpu_core_e decoder_e typeS", false,-1);
        tracep->declBit(c+298,"ysyx_22040750 cpu_core_e decoder_e typeR", false,-1);
        tracep->declBit(c+299,"ysyx_22040750 cpu_core_e decoder_e typeB", false,-1);
        tracep->declBit(c+300,"ysyx_22040750 cpu_core_e decoder_e typeU", false,-1);
        tracep->declBit(c+301,"ysyx_22040750 cpu_core_e decoder_e typeJ", false,-1);
        tracep->declBit(c+302,"ysyx_22040750 cpu_core_e decoder_e typeC", false,-1);
        tracep->declBit(c+303,"ysyx_22040750 cpu_core_e decoder_e LUI", false,-1);
        tracep->declBit(c+304,"ysyx_22040750 cpu_core_e decoder_e AUIPC", false,-1);
        tracep->declBit(c+301,"ysyx_22040750 cpu_core_e decoder_e JAL", false,-1);
        tracep->declBit(c+305,"ysyx_22040750 cpu_core_e decoder_e JALR", false,-1);
        tracep->declBit(c+306,"ysyx_22040750 cpu_core_e decoder_e LD", false,-1);
        tracep->declBit(c+307,"ysyx_22040750 cpu_core_e decoder_e LW", false,-1);
        tracep->declBit(c+308,"ysyx_22040750 cpu_core_e decoder_e LWU", false,-1);
        tracep->declBit(c+309,"ysyx_22040750 cpu_core_e decoder_e LH", false,-1);
        tracep->declBit(c+310,"ysyx_22040750 cpu_core_e decoder_e LHU", false,-1);
        tracep->declBit(c+311,"ysyx_22040750 cpu_core_e decoder_e LB", false,-1);
        tracep->declBit(c+312,"ysyx_22040750 cpu_core_e decoder_e LBU", false,-1);
        tracep->declBit(c+313,"ysyx_22040750 cpu_core_e decoder_e ADDI", false,-1);
        tracep->declBit(c+314,"ysyx_22040750 cpu_core_e decoder_e SLTI", false,-1);
        tracep->declBit(c+315,"ysyx_22040750 cpu_core_e decoder_e SLTIU", false,-1);
        tracep->declBit(c+316,"ysyx_22040750 cpu_core_e decoder_e XORI", false,-1);
        tracep->declBit(c+317,"ysyx_22040750 cpu_core_e decoder_e ORI", false,-1);
        tracep->declBit(c+318,"ysyx_22040750 cpu_core_e decoder_e ANDI", false,-1);
        tracep->declBit(c+319,"ysyx_22040750 cpu_core_e decoder_e SLLI", false,-1);
        tracep->declBit(c+320,"ysyx_22040750 cpu_core_e decoder_e SRLI", false,-1);
        tracep->declBit(c+321,"ysyx_22040750 cpu_core_e decoder_e SRAI", false,-1);
        tracep->declBit(c+322,"ysyx_22040750 cpu_core_e decoder_e ADDIW", false,-1);
        tracep->declBit(c+323,"ysyx_22040750 cpu_core_e decoder_e SLLIW", false,-1);
        tracep->declBit(c+324,"ysyx_22040750 cpu_core_e decoder_e SRLIW", false,-1);
        tracep->declBit(c+325,"ysyx_22040750 cpu_core_e decoder_e SRAIW", false,-1);
        tracep->declBit(c+326,"ysyx_22040750 cpu_core_e decoder_e ADD", false,-1);
        tracep->declBit(c+327,"ysyx_22040750 cpu_core_e decoder_e SUB", false,-1);
        tracep->declBit(c+328,"ysyx_22040750 cpu_core_e decoder_e SLL", false,-1);
        tracep->declBit(c+329,"ysyx_22040750 cpu_core_e decoder_e SLT", false,-1);
        tracep->declBit(c+330,"ysyx_22040750 cpu_core_e decoder_e SLTU", false,-1);
        tracep->declBit(c+331,"ysyx_22040750 cpu_core_e decoder_e XOR", false,-1);
        tracep->declBit(c+332,"ysyx_22040750 cpu_core_e decoder_e SRL", false,-1);
        tracep->declBit(c+333,"ysyx_22040750 cpu_core_e decoder_e SRA", false,-1);
        tracep->declBit(c+334,"ysyx_22040750 cpu_core_e decoder_e OR", false,-1);
        tracep->declBit(c+335,"ysyx_22040750 cpu_core_e decoder_e AND", false,-1);
        tracep->declBit(c+336,"ysyx_22040750 cpu_core_e decoder_e MUL", false,-1);
        tracep->declBit(c+337,"ysyx_22040750 cpu_core_e decoder_e MULH", false,-1);
        tracep->declBit(c+338,"ysyx_22040750 cpu_core_e decoder_e MULHSU", false,-1);
        tracep->declBit(c+339,"ysyx_22040750 cpu_core_e decoder_e MULHU", false,-1);
        tracep->declBit(c+340,"ysyx_22040750 cpu_core_e decoder_e DIV", false,-1);
        tracep->declBit(c+341,"ysyx_22040750 cpu_core_e decoder_e DIVU", false,-1);
        tracep->declBit(c+342,"ysyx_22040750 cpu_core_e decoder_e REM", false,-1);
        tracep->declBit(c+343,"ysyx_22040750 cpu_core_e decoder_e REMU", false,-1);
        tracep->declBit(c+344,"ysyx_22040750 cpu_core_e decoder_e ADDW", false,-1);
        tracep->declBit(c+345,"ysyx_22040750 cpu_core_e decoder_e SUBW", false,-1);
        tracep->declBit(c+346,"ysyx_22040750 cpu_core_e decoder_e SLLW", false,-1);
        tracep->declBit(c+347,"ysyx_22040750 cpu_core_e decoder_e SRLW", false,-1);
        tracep->declBit(c+348,"ysyx_22040750 cpu_core_e decoder_e SRAW", false,-1);
        tracep->declBit(c+349,"ysyx_22040750 cpu_core_e decoder_e MULW", false,-1);
        tracep->declBit(c+350,"ysyx_22040750 cpu_core_e decoder_e DIVW", false,-1);
        tracep->declBit(c+351,"ysyx_22040750 cpu_core_e decoder_e DIVUW", false,-1);
        tracep->declBit(c+352,"ysyx_22040750 cpu_core_e decoder_e REMW", false,-1);
        tracep->declBit(c+353,"ysyx_22040750 cpu_core_e decoder_e REMUW", false,-1);
        tracep->declBit(c+354,"ysyx_22040750 cpu_core_e decoder_e SD", false,-1);
        tracep->declBit(c+355,"ysyx_22040750 cpu_core_e decoder_e SW", false,-1);
        tracep->declBit(c+356,"ysyx_22040750 cpu_core_e decoder_e SH", false,-1);
        tracep->declBit(c+357,"ysyx_22040750 cpu_core_e decoder_e SB", false,-1);
        tracep->declBit(c+358,"ysyx_22040750 cpu_core_e decoder_e BEQ", false,-1);
        tracep->declBit(c+359,"ysyx_22040750 cpu_core_e decoder_e BNE", false,-1);
        tracep->declBit(c+360,"ysyx_22040750 cpu_core_e decoder_e BLT", false,-1);
        tracep->declBit(c+361,"ysyx_22040750 cpu_core_e decoder_e BGE", false,-1);
        tracep->declBit(c+362,"ysyx_22040750 cpu_core_e decoder_e BLTU", false,-1);
        tracep->declBit(c+363,"ysyx_22040750 cpu_core_e decoder_e BGEU", false,-1);
        tracep->declBit(c+364,"ysyx_22040750 cpu_core_e decoder_e ECALL", false,-1);
        tracep->declBit(c+365,"ysyx_22040750 cpu_core_e decoder_e EBREAK", false,-1);
        tracep->declBit(c+366,"ysyx_22040750 cpu_core_e decoder_e CSRRW", false,-1);
        tracep->declBit(c+367,"ysyx_22040750 cpu_core_e decoder_e CSRRS", false,-1);
        tracep->declBit(c+368,"ysyx_22040750 cpu_core_e decoder_e CSRRC", false,-1);
        tracep->declBit(c+369,"ysyx_22040750 cpu_core_e decoder_e CSRRWI", false,-1);
        tracep->declBit(c+370,"ysyx_22040750 cpu_core_e decoder_e CSRRSI", false,-1);
        tracep->declBit(c+371,"ysyx_22040750 cpu_core_e decoder_e CSRRCI", false,-1);
        tracep->declBit(c+138,"ysyx_22040750 cpu_core_e decoder_e MRET", false,-1);
        tracep->declBit(c+372,"ysyx_22040750 cpu_core_e decoder_e csr_rd_gpr", false,-1);
        tracep->declQuad(c+140,"ysyx_22040750 cpu_core_e decoder_e NO", false,-1, 63,0);
        tracep->declBit(c+373,"ysyx_22040750 cpu_core_e decoder_e regin_from_mem", false,-1);
        tracep->declBit(c+374,"ysyx_22040750 cpu_core_e decoder_e typeB_jr", false,-1);
        tracep->declBit(c+375,"ysyx_22040750 cpu_core_e decoder_e csr_jr", false,-1);
        tracep->declBit(c+376,"ysyx_22040750 cpu_core_e decoder_e eq", false,-1);
        tracep->declBit(c+377,"ysyx_22040750 cpu_core_e decoder_e neq", false,-1);
        tracep->declBit(c+378,"ysyx_22040750 cpu_core_e decoder_e lt", false,-1);
        tracep->declBit(c+379,"ysyx_22040750 cpu_core_e decoder_e ge", false,-1);
        tracep->declBit(c+380,"ysyx_22040750 cpu_core_e decoder_e ltu", false,-1);
        tracep->declBit(c+381,"ysyx_22040750 cpu_core_e decoder_e geu", false,-1);
        tracep->declBus(c+1044,"ysyx_22040750 cpu_core_e decoder_e OP_ADD", false,-1, 14,0);
        tracep->declBus(c+1045,"ysyx_22040750 cpu_core_e decoder_e OP_SUB", false,-1, 14,0);
        tracep->declBus(c+1046,"ysyx_22040750 cpu_core_e decoder_e OP_SLT", false,-1, 14,0);
        tracep->declBus(c+1047,"ysyx_22040750 cpu_core_e decoder_e OP_SLTU", false,-1, 14,0);
        tracep->declBus(c+1048,"ysyx_22040750 cpu_core_e decoder_e OP_XOR", false,-1, 14,0);
        tracep->declBus(c+1049,"ysyx_22040750 cpu_core_e decoder_e OP_OR", false,-1, 14,0);
        tracep->declBus(c+1050,"ysyx_22040750 cpu_core_e decoder_e OP_AND", false,-1, 14,0);
        tracep->declBus(c+1051,"ysyx_22040750 cpu_core_e decoder_e OP_SLL", false,-1, 14,0);
        tracep->declBus(c+1052,"ysyx_22040750 cpu_core_e decoder_e OP_SRL", false,-1, 14,0);
        tracep->declBus(c+1053,"ysyx_22040750 cpu_core_e decoder_e OP_SRA", false,-1, 14,0);
        tracep->declBus(c+1054,"ysyx_22040750 cpu_core_e decoder_e OP_MUL", false,-1, 14,0);
        tracep->declBus(c+1055,"ysyx_22040750 cpu_core_e decoder_e OP_MULH", false,-1, 14,0);
        tracep->declBus(c+1056,"ysyx_22040750 cpu_core_e decoder_e OP_DIV", false,-1, 14,0);
        tracep->declBus(c+1057,"ysyx_22040750 cpu_core_e decoder_e OP_REM", false,-1, 14,0);
        tracep->declBus(c+1058,"ysyx_22040750 cpu_core_e decoder_e OP_CSR", false,-1, 14,0);
        tracep->declBit(c+382,"ysyx_22040750 cpu_core_e decoder_e add_flag", false,-1);
        tracep->declBit(c+373,"ysyx_22040750 cpu_core_e decoder_e ld_flag", false,-1);
        tracep->declBit(c+383,"ysyx_22040750 cpu_core_e decoder_e sub_flag", false,-1);
        tracep->declBit(c+384,"ysyx_22040750 cpu_core_e decoder_e slt_flag", false,-1);
        tracep->declBit(c+385,"ysyx_22040750 cpu_core_e decoder_e sltu_flag", false,-1);
        tracep->declBit(c+386,"ysyx_22040750 cpu_core_e decoder_e xor_flag", false,-1);
        tracep->declBit(c+387,"ysyx_22040750 cpu_core_e decoder_e or_flag", false,-1);
        tracep->declBit(c+388,"ysyx_22040750 cpu_core_e decoder_e and_flag", false,-1);
        tracep->declBit(c+389,"ysyx_22040750 cpu_core_e decoder_e sll_flag", false,-1);
        tracep->declBit(c+390,"ysyx_22040750 cpu_core_e decoder_e srl_flag", false,-1);
        tracep->declBit(c+391,"ysyx_22040750 cpu_core_e decoder_e sra_flag", false,-1);
        tracep->declBit(c+392,"ysyx_22040750 cpu_core_e decoder_e mul_flag", false,-1);
        tracep->declBit(c+393,"ysyx_22040750 cpu_core_e decoder_e mulh_flag", false,-1);
        tracep->declBit(c+394,"ysyx_22040750 cpu_core_e decoder_e div_flag", false,-1);
        tracep->declBit(c+395,"ysyx_22040750 cpu_core_e decoder_e rem_flag", false,-1);
        tracep->declBit(c+302,"ysyx_22040750 cpu_core_e decoder_e csr_flag", false,-1);
        tracep->declBus(c+1059,"ysyx_22040750 cpu_core_e decoder_e OP1_RS1", false,-1, 2,0);
        tracep->declBus(c+1060,"ysyx_22040750 cpu_core_e decoder_e OP1_PC", false,-1, 2,0);
        tracep->declBus(c+1061,"ysyx_22040750 cpu_core_e decoder_e OP1_ZERO", false,-1, 2,0);
        tracep->declBit(c+396,"ysyx_22040750 cpu_core_e decoder_e rs1_flag", false,-1);
        tracep->declBit(c+397,"ysyx_22040750 cpu_core_e decoder_e pc_flag", false,-1);
        tracep->declBit(c+303,"ysyx_22040750 cpu_core_e decoder_e zero_flag", false,-1);
        tracep->declBus(c+1059,"ysyx_22040750 cpu_core_e decoder_e OP2_RS2", false,-1, 2,0);
        tracep->declBus(c+1060,"ysyx_22040750 cpu_core_e decoder_e OP2_IMM", false,-1, 2,0);
        tracep->declBus(c+1061,"ysyx_22040750 cpu_core_e decoder_e OP2_FOUR", false,-1, 2,0);
        tracep->declBit(c+298,"ysyx_22040750 cpu_core_e decoder_e rs2_flag", false,-1);
        tracep->declBit(c+398,"ysyx_22040750 cpu_core_e decoder_e imm_flag", false,-1);
        tracep->declBit(c+399,"ysyx_22040750 cpu_core_e decoder_e four_flag", false,-1);
        tracep->declBit(c+963,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_sys_clk", false,-1);
        tracep->declBit(c+964,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_rst", false,-1);
        tracep->declBit(c+147,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_ID_EX_valid", false,-1);
        tracep->declBit(c+202,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_ID_EX_allowout", false,-1);
        tracep->declBit(c+173,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_ID_EX_allowin", false,-1);
        tracep->declBit(c+172,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_ID_EX_valid", false,-1);
        tracep->declBit(c+179,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_alu_output_valid", false,-1);
        tracep->declQuad(c+97,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_imm", false,-1, 63,0);
        tracep->declQuad(c+238,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_rs1", false,-1, 63,0);
        tracep->declQuad(c+240,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_rs2", false,-1, 63,0);
        tracep->declBus(c+123,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_rd_addr", false,-1, 4,0);
        tracep->declBit(c+131,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_reg_wen", false,-1);
        tracep->declBit(c+132,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_mem_wen", false,-1);
        tracep->declBus(c+129,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_wstrb", false,-1, 7,0);
        tracep->declBus(c+130,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_rstrb", false,-1, 8,0);
        tracep->declBus(c+125,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_regin_sel", false,-1, 2,0);
        tracep->declBus(c+126,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_op1_sel", false,-1, 2,0);
        tracep->declBus(c+127,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_op2_sel", false,-1, 2,0);
        tracep->declBus(c+134,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_alu_sext", false,-1, 1,0);
        tracep->declBus(c+128,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_alu_op_sel", false,-1, 14,0);
        tracep->declBit(c+133,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_word_op_mask", false,-1);
        tracep->declBus(c+139,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_csr_op_sel", false,-1, 6,0);
        tracep->declBus(c+121,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_csr_imm", false,-1, 4,0);
        tracep->declBus(c+135,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_csr_addr", false,-1, 11,0);
        tracep->declBit(c+136,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_csr_wen", false,-1);
        tracep->declBit(c+137,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_csr_intr", false,-1);
        tracep->declQuad(c+140,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_csr_intr_no", false,-1, 63,0);
        tracep->declQuad(c+242,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_csr", false,-1, 63,0);
        tracep->declBit(c+138,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_csr_mret", false,-1);
        tracep->declBus(c+184,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_csr_op_sel", false,-1, 6,0);
        tracep->declBus(c+185,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_csr_imm", false,-1, 4,0);
        tracep->declBus(c+180,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_csr_addr", false,-1, 11,0);
        tracep->declBit(c+181,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_csr_wen", false,-1);
        tracep->declBit(c+182,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_csr_intr", false,-1);
        tracep->declQuad(c+186,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_csr_intr_no", false,-1, 63,0);
        tracep->declQuad(c+159,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_csr", false,-1, 63,0);
        tracep->declBit(c+183,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_csr_mret", false,-1);
        tracep->declQuad(c+151,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_imm", false,-1, 63,0);
        tracep->declQuad(c+155,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_rs1", false,-1, 63,0);
        tracep->declQuad(c+157,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_rs2", false,-1, 63,0);
        tracep->declBus(c+161,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_rd_addr", false,-1, 4,0);
        tracep->declBit(c+169,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_reg_wen", false,-1);
        tracep->declBit(c+170,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_mem_wen", false,-1);
        tracep->declBus(c+162,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_wstrb", false,-1, 7,0);
        tracep->declBus(c+163,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_rstrb", false,-1, 8,0);
        tracep->declBus(c+166,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_regin_sel", false,-1, 2,0);
        tracep->declBus(c+165,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_op1_sel", false,-1, 2,0);
        tracep->declBus(c+164,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_op2_sel", false,-1, 2,0);
        tracep->declBus(c+167,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_alu_sext", false,-1, 1,0);
        tracep->declBus(c+168,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_alu_op_sel", false,-1, 14,0);
        tracep->declBit(c+171,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_word_op_mask", false,-1);
        tracep->declQuad(c+143,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_pc", false,-1, 63,0);
        tracep->declQuad(c+153,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_pc", false,-1, 63,0);
        tracep->declBit(c+177,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_ID_EX_input_valid", false,-1);
        tracep->declBit(c+178,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_alu_multicycle", false,-1);
        tracep->declBus(c+145,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_inst_debug", false,-1, 31,0);
        tracep->declBus(c+175,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_inst_debug", false,-1, 31,0);
        tracep->declBit(c+149,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_bubble_inst_debug", false,-1);
        tracep->declBit(c+176,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_bubble_inst_debug", false,-1);
        tracep->declBit(c+177,"ysyx_22040750 cpu_core_e ID_EX_reg_e input_valid", false,-1);
        tracep->declBit(c+179,"ysyx_22040750 cpu_core_e ID_EX_reg_e output_valid", false,-1);
        tracep->declBus(c+1039,"ysyx_22040750 cpu_core_e alu_op1_64bit_3sel N", false,-1, 31,0);
        tracep->declBus(c+1040,"ysyx_22040750 cpu_core_e alu_op1_64bit_3sel M", false,-1, 31,0);
        tracep->declArray(c+400,"ysyx_22040750 cpu_core_e alu_op1_64bit_3sel I_sel_data", false,-1, 191,0);
        tracep->declBus(c+165,"ysyx_22040750 cpu_core_e alu_op1_64bit_3sel I_sel", false,-1, 2,0);
        tracep->declQuad(c+105,"ysyx_22040750 cpu_core_e alu_op1_64bit_3sel O_sel_data", false,-1, 63,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+406+i*2,"ysyx_22040750 cpu_core_e alu_op1_64bit_3sel sel_data", true,(i+0), 63,0);}}
        tracep->declBus(c+1041,"ysyx_22040750 cpu_core_e alu_op1_64bit_3sel unnamedblk1 i", false,-1, 31,0);
        tracep->declBus(c+1039,"ysyx_22040750 cpu_core_e alu_op2_64bit_3sel N", false,-1, 31,0);
        tracep->declBus(c+1040,"ysyx_22040750 cpu_core_e alu_op2_64bit_3sel M", false,-1, 31,0);
        tracep->declArray(c+412,"ysyx_22040750 cpu_core_e alu_op2_64bit_3sel I_sel_data", false,-1, 191,0);
        tracep->declBus(c+164,"ysyx_22040750 cpu_core_e alu_op2_64bit_3sel I_sel", false,-1, 2,0);
        tracep->declQuad(c+107,"ysyx_22040750 cpu_core_e alu_op2_64bit_3sel O_sel_data", false,-1, 63,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+418+i*2,"ysyx_22040750 cpu_core_e alu_op2_64bit_3sel sel_data", true,(i+0), 63,0);}}
        tracep->declBus(c+1041,"ysyx_22040750 cpu_core_e alu_op2_64bit_3sel unnamedblk1 i", false,-1, 31,0);
        tracep->declBit(c+963,"ysyx_22040750 cpu_core_e alu_e I_sys_clk", false,-1);
        tracep->declBit(c+964,"ysyx_22040750 cpu_core_e alu_e I_rst", false,-1);
        tracep->declQuad(c+105,"ysyx_22040750 cpu_core_e alu_e I_op1", false,-1, 63,0);
        tracep->declQuad(c+107,"ysyx_22040750 cpu_core_e alu_e I_op2", false,-1, 63,0);
        tracep->declBus(c+168,"ysyx_22040750 cpu_core_e alu_e I_alu_op_sel", false,-1, 14,0);
        tracep->declBus(c+167,"ysyx_22040750 cpu_core_e alu_e I_alu_op_sext", false,-1, 1,0);
        tracep->declBit(c+171,"ysyx_22040750 cpu_core_e alu_e I_word_op_mask", false,-1);
        tracep->declBit(c+178,"ysyx_22040750 cpu_core_e alu_e I_multicycle", false,-1);
        tracep->declBit(c+202,"ysyx_22040750 cpu_core_e alu_e I_EX_MEM_ready", false,-1);
        tracep->declQuad(c+159,"ysyx_22040750 cpu_core_e alu_e I_csr_data", false,-1, 63,0);
        tracep->declBus(c+185,"ysyx_22040750 cpu_core_e alu_e I_uimm", false,-1, 4,0);
        tracep->declBus(c+184,"ysyx_22040750 cpu_core_e alu_e I_csr_op_sel", false,-1, 6,0);
        tracep->declQuad(c+109,"ysyx_22040750 cpu_core_e alu_e O_result", false,-1, 63,0);
        tracep->declQuad(c+115,"ysyx_22040750 cpu_core_e alu_e O_mem_addr", false,-1, 63,0);
        tracep->declQuad(c+119,"ysyx_22040750 cpu_core_e alu_e O_csr_data", false,-1, 63,0);
        tracep->declBit(c+179,"ysyx_22040750 cpu_core_e alu_e O_result_valid", false,-1);
        tracep->declBit(c+963,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e I_sys_clk", false,-1);
        tracep->declBit(c+964,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e I_rst", false,-1);
        tracep->declQuad(c+159,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e I_csr_data", false,-1, 63,0);
        tracep->declQuad(c+105,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e I_op1", false,-1, 63,0);
        tracep->declQuad(c+107,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e I_op2", false,-1, 63,0);
        tracep->declBus(c+168,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e I_alu_op_sel", false,-1, 14,0);
        tracep->declBus(c+167,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e I_alu_op_sext", false,-1, 1,0);
        tracep->declBit(c+171,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e I_word_op_mask", false,-1);
        tracep->declBit(c+178,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e I_multicycle", false,-1);
        tracep->declBit(c+202,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e I_EX_MEM_ready", false,-1);
        tracep->declQuad(c+115,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e O_mem_addr", false,-1, 63,0);
        tracep->declQuad(c+109,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e O_result", false,-1, 63,0);
        tracep->declBit(c+179,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e O_result_valid", false,-1);
        tracep->declBit(c+424,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e op_add", false,-1);
        tracep->declBit(c+425,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e op_sub", false,-1);
        tracep->declBit(c+426,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e op_slt", false,-1);
        tracep->declBit(c+427,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e op_sltu", false,-1);
        tracep->declBit(c+428,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e op_xor", false,-1);
        tracep->declBit(c+429,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e op_or", false,-1);
        tracep->declBit(c+430,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e op_and", false,-1);
        tracep->declBit(c+431,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e op_sll", false,-1);
        tracep->declBit(c+432,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e op_srl", false,-1);
        tracep->declBit(c+433,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e op_sra", false,-1);
        tracep->declBit(c+434,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e op_mul", false,-1);
        tracep->declBit(c+435,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e op_mulh", false,-1);
        tracep->declBit(c+436,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e op_div", false,-1);
        tracep->declBit(c+437,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e op_rem", false,-1);
        tracep->declBit(c+438,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e op_csr", false,-1);
        tracep->declQuad(c+115,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e add_sub_result", false,-1, 63,0);
        tracep->declQuad(c+439,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e slt_result", false,-1, 63,0);
        tracep->declQuad(c+441,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e sltu_result", false,-1, 63,0);
        tracep->declQuad(c+443,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e xor_result", false,-1, 63,0);
        tracep->declQuad(c+445,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e or_result", false,-1, 63,0);
        tracep->declQuad(c+447,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e and_result", false,-1, 63,0);
        tracep->declQuad(c+449,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e sll_result", false,-1, 63,0);
        tracep->declQuad(c+451,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e srl_result", false,-1, 63,0);
        tracep->declQuad(c+453,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e sra_result", false,-1, 63,0);
        tracep->declQuad(c+455,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e mul_result", false,-1, 63,0);
        tracep->declQuad(c+457,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e mulh_result", false,-1, 63,0);
        tracep->declQuad(c+459,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e div_result", false,-1, 63,0);
        tracep->declQuad(c+461,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e rem_result", false,-1, 63,0);
        tracep->declQuad(c+159,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e csr_result", false,-1, 63,0);
        tracep->declArray(c+463,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e op1_sext", false,-1, 64,0);
        tracep->declArray(c+466,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e op2_sext", false,-1, 64,0);
        tracep->declBit(c+469,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e sign_bit1", false,-1);
        tracep->declBit(c+470,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e sign_bit2", false,-1);
        tracep->declBit(c+471,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e sext1", false,-1);
        tracep->declBit(c+472,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e sext2", false,-1);
        tracep->declBit(c+1062,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e mul_valid_d", false,-1);
        tracep->declBit(c+1063,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e div_valid_d", false,-1);
        tracep->declBit(c+473,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e mul_flag", false,-1);
        tracep->declBit(c+474,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e div_flag", false,-1);
        tracep->declBit(c+475,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e mul_valid", false,-1);
        tracep->declBit(c+476,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e div_valid", false,-1);
        tracep->declBit(c+477,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e mul_out_valid", false,-1);
        tracep->declBit(c+478,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e div_out_valid", false,-1);
        tracep->declQuad(c+479,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e mulh_reg", false,-1, 63,0);
        tracep->declQuad(c+481,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e mul_reg", false,-1, 63,0);
        tracep->declQuad(c+483,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e div_reg", false,-1, 63,0);
        tracep->declQuad(c+485,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e rem_reg", false,-1, 63,0);
        tracep->declBit(c+487,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e mul_reg_valid", false,-1);
        tracep->declBit(c+488,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e div_reg_valid", false,-1);
        tracep->declQuad(c+489,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e mulh_final", false,-1, 63,0);
        tracep->declQuad(c+491,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e mul_final", false,-1, 63,0);
        tracep->declQuad(c+493,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e div_final", false,-1, 63,0);
        tracep->declQuad(c+495,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e rem_final", false,-1, 63,0);
        tracep->declQuad(c+105,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e adder1", false,-1, 63,0);
        tracep->declQuad(c+497,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e adder2", false,-1, 63,0);
        tracep->declQuad(c+115,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e result", false,-1, 63,0);
        tracep->declQuad(c+499,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e cin", false,-1, 63,0);
        tracep->declBit(c+501,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e cout", false,-1);
        tracep->declQuad(c+502,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e reverse_op1", false,-1, 63,0);
        tracep->declBit(c+469,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e shift_sign", false,-1);
        tracep->declQuad(c+504,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e shift_op", false,-1, 63,0);
        tracep->declBus(c+506,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e shamt", false,-1, 5,0);
        tracep->declQuad(c+507,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e sra_mask", false,-1, 63,0);
        tracep->declQuad(c+451,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e shift_result", false,-1, 63,0);
        tracep->declBus(c+509,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e shift_opW", false,-1, 31,0);
        tracep->declQuad(c+510,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e srl_op", false,-1, 63,0);
        tracep->declQuad(c+512,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e sllw_result", false,-1, 63,0);
        tracep->declQuad(c+514,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e slldw_result", false,-1, 63,0);
        tracep->declQuad(c+516,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e dword_result", false,-1, 63,0);
        tracep->declQuad(c+518,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e word_sext_result", false,-1, 63,0);
        tracep->declBit(c+520,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e word_sext", false,-1);
        tracep->declBit(c+963,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e clk", false,-1);
        tracep->declBit(c+964,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e rst", false,-1);
        tracep->declQuad(c+521,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e mul1", false,-1, 63,0);
        tracep->declQuad(c+523,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e mul2", false,-1, 63,0);
        tracep->declBit(c+471,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e is_signed", false,-1);
        tracep->declBit(c+475,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e mul_valid", false,-1);
        tracep->declBit(c+477,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e P_valid", false,-1);
        tracep->declArray(c+525,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e P", false,-1, 127,0);
        tracep->declBit(c+529,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e sgn_ext1", false,-1);
        tracep->declBit(c+530,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e sgn_ext2", false,-1);
        tracep->declArray(c+531,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e booth_mul1", false,-1, 66,0);
        tracep->declArray(c+534,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e booth_mul2", false,-1, 131,0);
        tracep->declArray(c+539,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e partial_sum", false,-1, 131,0);
        tracep->declBit(c+544,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e partial_c", false,-1);
        tracep->declArray(c+545,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e mid_result", false,-1, 131,0);
        tracep->declBus(c+550,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e booth", false,-1, 2,0);
        tracep->declArray(c+551,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e S", false,-1, 131,0);
        tracep->declBit(c+544,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e Ci", false,-1);
        tracep->declBit(c+1064,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e end_flag", false,-1);
        tracep->declBit(c+556,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e mul_process", false,-1);
        tracep->declBus(c+557,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e iter_cnt", false,-1, 5,0);
        tracep->declBus(c+550,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e radix4_unit_e booth", false,-1, 2,0);
        tracep->declArray(c+534,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e radix4_unit_e X", false,-1, 131,0);
        tracep->declArray(c+539,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e radix4_unit_e P", false,-1, 131,0);
        tracep->declBit(c+544,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e radix4_unit_e c", false,-1);
        tracep->declBit(c+558,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e radix4_unit_e y_add", false,-1);
        tracep->declBit(c+559,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e radix4_unit_e y", false,-1);
        tracep->declBit(c+560,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e radix4_unit_e y_sub", false,-1);
        tracep->declBit(c+561,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e radix4_unit_e sel_negative", false,-1);
        tracep->declBit(c+562,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e radix4_unit_e sel_double_negative", false,-1);
        tracep->declBit(c+563,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e radix4_unit_e sel_positive", false,-1);
        tracep->declBit(c+564,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e radix4_unit_e sel_double_positive", false,-1);
        tracep->declBit(c+963,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e radix2_div_e clk", false,-1);
        tracep->declBit(c+964,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e radix2_div_e rst", false,-1);
        tracep->declQuad(c+521,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e radix2_div_e dividend", false,-1, 63,0);
        tracep->declQuad(c+523,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e radix2_div_e divisor", false,-1, 63,0);
        tracep->declBit(c+471,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e radix2_div_e is_signed", false,-1);
        tracep->declBit(c+476,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e radix2_div_e div_valid", false,-1);
        tracep->declQuad(c+459,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e radix2_div_e quotient", false,-1, 63,0);
        tracep->declQuad(c+461,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e radix2_div_e remainder", false,-1, 63,0);
        tracep->declBit(c+478,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e radix2_div_e Q_valid", false,-1);
        tracep->declArray(c+565,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e radix2_div_e abs_dividend", false,-1, 127,0);
        tracep->declArray(c+569,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e radix2_div_e abs_divisor", false,-1, 127,0);
        tracep->declArray(c+573,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e radix2_div_e current_sub_result", false,-1, 127,0);
        tracep->declBit(c+577,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e radix2_div_e current_q", false,-1);
        tracep->declBit(c+578,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e radix2_div_e dividend_flag", false,-1);
        tracep->declBit(c+579,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e radix2_div_e divisor_flag", false,-1);
        tracep->declBit(c+580,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e radix2_div_e q_flag", false,-1);
        tracep->declBit(c+578,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e radix2_div_e rem_flag", false,-1);
        tracep->declQuad(c+581,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e radix2_div_e abs_quotient", false,-1, 63,0);
        tracep->declBit(c+583,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e radix2_div_e div_process", false,-1);
        tracep->declBus(c+584,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e radix2_div_e iter_cnt", false,-1, 5,0);
        tracep->declQuad(c+159,"ysyx_22040750 cpu_core_e alu_e csr_alu_e I_csr_data", false,-1, 63,0);
        tracep->declQuad(c+105,"ysyx_22040750 cpu_core_e alu_e csr_alu_e I_rs_data", false,-1, 63,0);
        tracep->declBus(c+185,"ysyx_22040750 cpu_core_e alu_e csr_alu_e I_uimm", false,-1, 4,0);
        tracep->declBus(c+184,"ysyx_22040750 cpu_core_e alu_e csr_alu_e I_csr_op_sel", false,-1, 6,0);
        tracep->declQuad(c+119,"ysyx_22040750 cpu_core_e alu_e csr_alu_e O_csr_data", false,-1, 63,0);
        tracep->declBit(c+585,"ysyx_22040750 cpu_core_e alu_e csr_alu_e direct_rs", false,-1);
        tracep->declBit(c+586,"ysyx_22040750 cpu_core_e alu_e csr_alu_e direct_uimm", false,-1);
        tracep->declBit(c+587,"ysyx_22040750 cpu_core_e alu_e csr_alu_e set_rs", false,-1);
        tracep->declBit(c+588,"ysyx_22040750 cpu_core_e alu_e csr_alu_e set_uimm", false,-1);
        tracep->declBit(c+589,"ysyx_22040750 cpu_core_e alu_e csr_alu_e clr_rs", false,-1);
        tracep->declBit(c+590,"ysyx_22040750 cpu_core_e alu_e csr_alu_e clr_uimm", false,-1);
        tracep->declBit(c+591,"ysyx_22040750 cpu_core_e alu_e csr_alu_e direct", false,-1);
        tracep->declBit(c+592,"ysyx_22040750 cpu_core_e alu_e csr_alu_e set", false,-1);
        tracep->declBit(c+593,"ysyx_22040750 cpu_core_e alu_e csr_alu_e clr", false,-1);
        tracep->declBit(c+594,"ysyx_22040750 cpu_core_e alu_e csr_alu_e from_rs", false,-1);
        tracep->declBit(c+595,"ysyx_22040750 cpu_core_e alu_e csr_alu_e from_uimm", false,-1);
        tracep->declQuad(c+596,"ysyx_22040750 cpu_core_e alu_e csr_alu_e op", false,-1, 63,0);
        tracep->declQuad(c+596,"ysyx_22040750 cpu_core_e alu_e csr_alu_e direct_result", false,-1, 63,0);
        tracep->declQuad(c+598,"ysyx_22040750 cpu_core_e alu_e csr_alu_e set_result", false,-1, 63,0);
        tracep->declQuad(c+600,"ysyx_22040750 cpu_core_e alu_e csr_alu_e clr_result", false,-1, 63,0);
        tracep->declBit(c+963,"ysyx_22040750 cpu_core_e EX_MEM_reg_e I_sys_clk", false,-1);
        tracep->declBit(c+964,"ysyx_22040750 cpu_core_e EX_MEM_reg_e I_rst", false,-1);
        tracep->declBit(c+172,"ysyx_22040750 cpu_core_e EX_MEM_reg_e I_EX_MEM_valid", false,-1);
        tracep->declBit(c+227,"ysyx_22040750 cpu_core_e EX_MEM_reg_e I_EX_MEM_allowout", false,-1);
        tracep->declBit(c+202,"ysyx_22040750 cpu_core_e EX_MEM_reg_e O_EX_MEM_allowin", false,-1);
        tracep->declBit(c+188,"ysyx_22040750 cpu_core_e EX_MEM_reg_e O_EX_MEM_valid", false,-1);
        tracep->declBus(c+163,"ysyx_22040750 cpu_core_e EX_MEM_reg_e I_rstrb", false,-1, 8,0);
        tracep->declBus(c+162,"ysyx_22040750 cpu_core_e EX_MEM_reg_e I_wstrb", false,-1, 7,0);
        tracep->declQuad(c+109,"ysyx_22040750 cpu_core_e EX_MEM_reg_e I_alu_out", false,-1, 63,0);
        tracep->declQuad(c+115,"ysyx_22040750 cpu_core_e EX_MEM_reg_e I_mem_addr", false,-1, 63,0);
        tracep->declQuad(c+157,"ysyx_22040750 cpu_core_e EX_MEM_reg_e I_rs2_data", false,-1, 63,0);
        tracep->declBit(c+170,"ysyx_22040750 cpu_core_e EX_MEM_reg_e I_mem_wen", false,-1);
        tracep->declQuad(c+153,"ysyx_22040750 cpu_core_e EX_MEM_reg_e I_pc", false,-1, 63,0);
        tracep->declBit(c+169,"ysyx_22040750 cpu_core_e EX_MEM_reg_e I_reg_wen", false,-1);
        tracep->declBus(c+161,"ysyx_22040750 cpu_core_e EX_MEM_reg_e I_rd_addr", false,-1, 4,0);
        tracep->declBus(c+166,"ysyx_22040750 cpu_core_e EX_MEM_reg_e I_regin_sel", false,-1, 2,0);
        tracep->declBit(c+89,"ysyx_22040750 cpu_core_e EX_MEM_reg_e I_mem_data_rvalid", false,-1);
        tracep->declBit(c+90,"ysyx_22040750 cpu_core_e EX_MEM_reg_e I_mem_data_bvalid", false,-1);
        tracep->declBus(c+180,"ysyx_22040750 cpu_core_e EX_MEM_reg_e I_csr_addr", false,-1, 11,0);
        tracep->declBit(c+181,"ysyx_22040750 cpu_core_e EX_MEM_reg_e I_csr_wen", false,-1);
        tracep->declBit(c+182,"ysyx_22040750 cpu_core_e EX_MEM_reg_e I_csr_intr", false,-1);
        tracep->declQuad(c+186,"ysyx_22040750 cpu_core_e EX_MEM_reg_e I_csr_intr_no", false,-1, 63,0);
        tracep->declBit(c+183,"ysyx_22040750 cpu_core_e EX_MEM_reg_e I_csr_mret", false,-1);
        tracep->declQuad(c+119,"ysyx_22040750 cpu_core_e EX_MEM_reg_e I_csr", false,-1, 63,0);
        tracep->declBus(c+207,"ysyx_22040750 cpu_core_e EX_MEM_reg_e O_csr_addr", false,-1, 11,0);
        tracep->declBit(c+208,"ysyx_22040750 cpu_core_e EX_MEM_reg_e O_csr_wen", false,-1);
        tracep->declBit(c+209,"ysyx_22040750 cpu_core_e EX_MEM_reg_e O_csr_intr", false,-1);
        tracep->declQuad(c+211,"ysyx_22040750 cpu_core_e EX_MEM_reg_e O_csr_intr_no", false,-1, 63,0);
        tracep->declBit(c+210,"ysyx_22040750 cpu_core_e EX_MEM_reg_e O_csr_mret", false,-1);
        tracep->declQuad(c+193,"ysyx_22040750 cpu_core_e EX_MEM_reg_e O_csr", false,-1, 63,0);
        tracep->declBus(c+189,"ysyx_22040750 cpu_core_e EX_MEM_reg_e O_rstrb", false,-1, 8,0);
        tracep->declBus(c+190,"ysyx_22040750 cpu_core_e EX_MEM_reg_e O_wstrb", false,-1, 7,0);
        tracep->declQuad(c+191,"ysyx_22040750 cpu_core_e EX_MEM_reg_e O_alu_out", false,-1, 63,0);
        tracep->declQuad(c+81,"ysyx_22040750 cpu_core_e EX_MEM_reg_e O_mem_addr", false,-1, 63,0);
        tracep->declQuad(c+113,"ysyx_22040750 cpu_core_e EX_MEM_reg_e O_rs2_data", false,-1, 63,0);
        tracep->declBit(c+83,"ysyx_22040750 cpu_core_e EX_MEM_reg_e O_mem_rd_en", false,-1);
        tracep->declBit(c+84,"ysyx_22040750 cpu_core_e EX_MEM_reg_e O_mem_wr_en", false,-1);
        tracep->declBit(c+195,"ysyx_22040750 cpu_core_e EX_MEM_reg_e O_mem_wen", false,-1);
        tracep->declQuad(c+196,"ysyx_22040750 cpu_core_e EX_MEM_reg_e O_pc", false,-1, 63,0);
        tracep->declBit(c+198,"ysyx_22040750 cpu_core_e EX_MEM_reg_e O_reg_wen", false,-1);
        tracep->declBus(c+199,"ysyx_22040750 cpu_core_e EX_MEM_reg_e O_rd_addr", false,-1, 4,0);
        tracep->declBus(c+200,"ysyx_22040750 cpu_core_e EX_MEM_reg_e O_regin_sel", false,-1, 2,0);
        tracep->declBit(c+206,"ysyx_22040750 cpu_core_e EX_MEM_reg_e O_EX_MEM_input_valid", false,-1);
        tracep->declBus(c+175,"ysyx_22040750 cpu_core_e EX_MEM_reg_e I_inst_debug", false,-1, 31,0);
        tracep->declBus(c+204,"ysyx_22040750 cpu_core_e EX_MEM_reg_e O_inst_debug", false,-1, 31,0);
        tracep->declBit(c+176,"ysyx_22040750 cpu_core_e EX_MEM_reg_e I_bubble_inst_debug", false,-1);
        tracep->declBit(c+205,"ysyx_22040750 cpu_core_e EX_MEM_reg_e O_bubble_inst_debug", false,-1);
        tracep->declBit(c+83,"ysyx_22040750 cpu_core_e EX_MEM_reg_e mem_rd_en", false,-1);
        tracep->declBit(c+84,"ysyx_22040750 cpu_core_e EX_MEM_reg_e mem_wr_en", false,-1);
        tracep->declBit(c+206,"ysyx_22040750 cpu_core_e EX_MEM_reg_e input_valid", false,-1);
        tracep->declBit(c+602,"ysyx_22040750 cpu_core_e EX_MEM_reg_e output_valid", false,-1);
        tracep->declQuad(c+113,"ysyx_22040750 cpu_core_e mem_sd_e I_data_in", false,-1, 63,0);
        tracep->declBus(c+190,"ysyx_22040750 cpu_core_e mem_sd_e I_wr_strb", false,-1, 7,0);
        tracep->declQuad(c+87,"ysyx_22040750 cpu_core_e mem_sd_e O_sd_data", false,-1, 63,0);
        tracep->declBit(c+963,"ysyx_22040750 cpu_core_e MEM_WB_reg_e I_sys_clk", false,-1);
        tracep->declBit(c+964,"ysyx_22040750 cpu_core_e MEM_WB_reg_e I_rst", false,-1);
        tracep->declBit(c+188,"ysyx_22040750 cpu_core_e MEM_WB_reg_e I_MEM_WB_valid", false,-1);
        tracep->declBit(c+227,"ysyx_22040750 cpu_core_e MEM_WB_reg_e O_MEM_WB_allowin", false,-1);
        tracep->declBit(c+215,"ysyx_22040750 cpu_core_e MEM_WB_reg_e O_MEM_WB_valid", false,-1);
        tracep->declQuad(c+196,"ysyx_22040750 cpu_core_e MEM_WB_reg_e I_pc", false,-1, 63,0);
        tracep->declQuad(c+85,"ysyx_22040750 cpu_core_e MEM_WB_reg_e I_mem_data", false,-1, 63,0);
        tracep->declBus(c+189,"ysyx_22040750 cpu_core_e MEM_WB_reg_e I_mem_rstrb", false,-1, 8,0);
        tracep->declBus(c+201,"ysyx_22040750 cpu_core_e MEM_WB_reg_e I_mem_shamt", false,-1, 2,0);
        tracep->declQuad(c+191,"ysyx_22040750 cpu_core_e MEM_WB_reg_e I_alu_out", false,-1, 63,0);
        tracep->declBit(c+198,"ysyx_22040750 cpu_core_e MEM_WB_reg_e I_reg_wen", false,-1);
        tracep->declBus(c+199,"ysyx_22040750 cpu_core_e MEM_WB_reg_e I_rd_addr", false,-1, 4,0);
        tracep->declBus(c+200,"ysyx_22040750 cpu_core_e MEM_WB_reg_e I_regin_sel", false,-1, 2,0);
        tracep->declBus(c+207,"ysyx_22040750 cpu_core_e MEM_WB_reg_e I_csr_addr", false,-1, 11,0);
        tracep->declBit(c+208,"ysyx_22040750 cpu_core_e MEM_WB_reg_e I_csr_wen", false,-1);
        tracep->declBit(c+209,"ysyx_22040750 cpu_core_e MEM_WB_reg_e I_csr_intr", false,-1);
        tracep->declQuad(c+211,"ysyx_22040750 cpu_core_e MEM_WB_reg_e I_csr_intr_no", false,-1, 63,0);
        tracep->declBit(c+210,"ysyx_22040750 cpu_core_e MEM_WB_reg_e I_csr_mret", false,-1);
        tracep->declQuad(c+193,"ysyx_22040750 cpu_core_e MEM_WB_reg_e I_csr", false,-1, 63,0);
        tracep->declBus(c+231,"ysyx_22040750 cpu_core_e MEM_WB_reg_e O_csr_addr", false,-1, 11,0);
        tracep->declBit(c+232,"ysyx_22040750 cpu_core_e MEM_WB_reg_e O_csr_wen", false,-1);
        tracep->declBit(c+233,"ysyx_22040750 cpu_core_e MEM_WB_reg_e O_csr_intr", false,-1);
        tracep->declQuad(c+235,"ysyx_22040750 cpu_core_e MEM_WB_reg_e O_csr_intr_no", false,-1, 63,0);
        tracep->declBit(c+234,"ysyx_22040750 cpu_core_e MEM_WB_reg_e O_csr_mret", false,-1);
        tracep->declQuad(c+221,"ysyx_22040750 cpu_core_e MEM_WB_reg_e O_csr", false,-1, 63,0);
        tracep->declQuad(c+213,"ysyx_22040750 cpu_core_e MEM_WB_reg_e O_pc", false,-1, 63,0);
        tracep->declQuad(c+216,"ysyx_22040750 cpu_core_e MEM_WB_reg_e O_mem_data", false,-1, 63,0);
        tracep->declBus(c+218,"ysyx_22040750 cpu_core_e MEM_WB_reg_e O_mem_rstrb", false,-1, 8,0);
        tracep->declBus(c+226,"ysyx_22040750 cpu_core_e MEM_WB_reg_e O_mem_shamt", false,-1, 2,0);
        tracep->declQuad(c+219,"ysyx_22040750 cpu_core_e MEM_WB_reg_e O_alu_out", false,-1, 63,0);
        tracep->declBit(c+223,"ysyx_22040750 cpu_core_e MEM_WB_reg_e O_reg_wen", false,-1);
        tracep->declBus(c+224,"ysyx_22040750 cpu_core_e MEM_WB_reg_e O_rd_addr", false,-1, 4,0);
        tracep->declBus(c+225,"ysyx_22040750 cpu_core_e MEM_WB_reg_e O_regin_sel", false,-1, 2,0);
        tracep->declBit(c+215,"ysyx_22040750 cpu_core_e MEM_WB_reg_e O_MEM_WB_input_valid", false,-1);
        tracep->declBus(c+204,"ysyx_22040750 cpu_core_e MEM_WB_reg_e I_inst_debug", false,-1, 31,0);
        tracep->declBus(c+228,"ysyx_22040750 cpu_core_e MEM_WB_reg_e O_inst_debug", false,-1, 31,0);
        tracep->declBit(c+205,"ysyx_22040750 cpu_core_e MEM_WB_reg_e I_bubble_inst_debug", false,-1);
        tracep->declBit(c+229,"ysyx_22040750 cpu_core_e MEM_WB_reg_e O_bubble_inst_debug", false,-1);
        tracep->declBit(c+244,"ysyx_22040750 cpu_core_e MEM_WB_reg_e I_mem_op_debug", false,-1);
        tracep->declBit(c+245,"ysyx_22040750 cpu_core_e MEM_WB_reg_e O_mem_op_debug", false,-1);
        tracep->declQuad(c+81,"ysyx_22040750 cpu_core_e MEM_WB_reg_e I_mem_addr_debug", false,-1, 63,0);
        tracep->declQuad(c+246,"ysyx_22040750 cpu_core_e MEM_WB_reg_e O_mem_addr_debug", false,-1, 63,0);
        tracep->declBit(c+215,"ysyx_22040750 cpu_core_e MEM_WB_reg_e input_valid", false,-1);
        tracep->declBit(c+215,"ysyx_22040750 cpu_core_e MEM_WB_reg_e output_valid", false,-1);
        tracep->declQuad(c+216,"ysyx_22040750 cpu_core_e mem_ld_e I_data_in", false,-1, 63,0);
        tracep->declBus(c+218,"ysyx_22040750 cpu_core_e mem_ld_e I_rd_strb", false,-1, 8,0);
        tracep->declBus(c+226,"ysyx_22040750 cpu_core_e mem_ld_e I_rd_shamt", false,-1, 2,0);
        tracep->declQuad(c+111,"ysyx_22040750 cpu_core_e mem_ld_e O_load_data", false,-1, 63,0);
        tracep->declBit(c+603,"ysyx_22040750 cpu_core_e mem_ld_e sext_flag", false,-1);
        tracep->declBit(c+604,"ysyx_22040750 cpu_core_e mem_ld_e sext_bit", false,-1);
        tracep->declBus(c+605,"ysyx_22040750 cpu_core_e mem_ld_e sext_mask", false,-1, 7,0);
        tracep->declQuad(c+606,"ysyx_22040750 cpu_core_e mem_ld_e ld_data", false,-1, 63,0);
        tracep->declBus(c+1039,"ysyx_22040750 cpu_core_e regin_64bit_2sel N", false,-1, 31,0);
        tracep->declBus(c+1065,"ysyx_22040750 cpu_core_e regin_64bit_2sel M", false,-1, 31,0);
        tracep->declArray(c+608,"ysyx_22040750 cpu_core_e regin_64bit_2sel I_sel_data", false,-1, 127,0);
        tracep->declBus(c+612,"ysyx_22040750 cpu_core_e regin_64bit_2sel I_sel", false,-1, 1,0);
        tracep->declQuad(c+99,"ysyx_22040750 cpu_core_e regin_64bit_2sel O_sel_data", false,-1, 63,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+613+i*2,"ysyx_22040750 cpu_core_e regin_64bit_2sel sel_data", true,(i+0), 63,0);}}
        tracep->declBus(c+1066,"ysyx_22040750 cpu_core_e regin_64bit_2sel unnamedblk1 i", false,-1, 31,0);
        tracep->declBit(c+963,"ysyx_22040750 cpu_core_e gpr_e I_sys_clk", false,-1);
        tracep->declBit(c+964,"ysyx_22040750 cpu_core_e gpr_e I_rst", false,-1);
        tracep->declQuad(c+99,"ysyx_22040750 cpu_core_e gpr_e I_wr_data", false,-1, 63,0);
        tracep->declBit(c+617,"ysyx_22040750 cpu_core_e gpr_e I_wen", false,-1);
        tracep->declBus(c+224,"ysyx_22040750 cpu_core_e gpr_e I_rd_addr", false,-1, 4,0);
        tracep->declBus(c+121,"ysyx_22040750 cpu_core_e gpr_e I_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+101,"ysyx_22040750 cpu_core_e gpr_e O_rs1_data", false,-1, 63,0);
        tracep->declBus(c+122,"ysyx_22040750 cpu_core_e gpr_e I_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+103,"ysyx_22040750 cpu_core_e gpr_e O_rs2_data", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+618+i*2,"ysyx_22040750 cpu_core_e gpr_e gpr", true,(i+0), 63,0);}}
        {int i; for (i=0; i<32; i++) {
                tracep->declBit(c+682+i*1,"ysyx_22040750 cpu_core_e gpr_e wen", true,(i+0));}}
        tracep->declBit(c+963,"ysyx_22040750 cpu_core_e csr_e I_sys_clk", false,-1);
        tracep->declBit(c+964,"ysyx_22040750 cpu_core_e csr_e I_rst", false,-1);
        tracep->declBit(c+232,"ysyx_22040750 cpu_core_e csr_e I_csr_wen", false,-1);
        tracep->declBit(c+233,"ysyx_22040750 cpu_core_e csr_e I_csr_intr_wr", false,-1);
        tracep->declBit(c+137,"ysyx_22040750 cpu_core_e csr_e I_csr_intr_rd", false,-1);
        tracep->declQuad(c+213,"ysyx_22040750 cpu_core_e csr_e I_intr_pc", false,-1, 63,0);
        tracep->declQuad(c+235,"ysyx_22040750 cpu_core_e csr_e I_csr_intr_no", false,-1, 63,0);
        tracep->declBit(c+234,"ysyx_22040750 cpu_core_e csr_e I_csr_mret_wr", false,-1);
        tracep->declBit(c+138,"ysyx_22040750 cpu_core_e csr_e I_csr_mret_rd", false,-1);
        tracep->declBus(c+231,"ysyx_22040750 cpu_core_e csr_e I_wr_addr", false,-1, 11,0);
        tracep->declBus(c+135,"ysyx_22040750 cpu_core_e csr_e I_rd_addr", false,-1, 11,0);
        tracep->declQuad(c+221,"ysyx_22040750 cpu_core_e csr_e I_wr_data", false,-1, 63,0);
        tracep->declQuad(c+117,"ysyx_22040750 cpu_core_e csr_e O_rd_data", false,-1, 63,0);
        tracep->declBus(c+1067,"ysyx_22040750 cpu_core_e csr_e CSR_NUM", false,-1, 31,0);
        tracep->declBus(c+1068,"ysyx_22040750 cpu_core_e csr_e MEPC", false,-1, 11,0);
        tracep->declBus(c+1069,"ysyx_22040750 cpu_core_e csr_e MSTATUS", false,-1, 11,0);
        tracep->declBus(c+1070,"ysyx_22040750 cpu_core_e csr_e MTVEC", false,-1, 11,0);
        tracep->declBus(c+1071,"ysyx_22040750 cpu_core_e csr_e MCAUSE", false,-1, 11,0);
        tracep->declBus(c+1072,"ysyx_22040750 cpu_core_e csr_e MSCRATCH", false,-1, 11,0);
        tracep->declQuad(c+714,"ysyx_22040750 cpu_core_e csr_e mepc", false,-1, 63,0);
        tracep->declQuad(c+716,"ysyx_22040750 cpu_core_e csr_e mstatus", false,-1, 63,0);
        tracep->declQuad(c+718,"ysyx_22040750 cpu_core_e csr_e mtvec", false,-1, 63,0);
        tracep->declQuad(c+720,"ysyx_22040750 cpu_core_e csr_e mcause", false,-1, 63,0);
        tracep->declQuad(c+722,"ysyx_22040750 cpu_core_e csr_e mscratch", false,-1, 63,0);
        tracep->declQuad(c+117,"ysyx_22040750 cpu_core_e csr_e rd_data", false,-1, 63,0);
        tracep->declBit(c+724,"ysyx_22040750 cpu_core_e csr_e mie", false,-1);
        tracep->declBit(c+725,"ysyx_22040750 cpu_core_e csr_e mpie", false,-1);
        tracep->declBit(c+963,"ysyx_22040750 cache_e I_clk", false,-1);
        tracep->declBit(c+964,"ysyx_22040750 cache_e I_rst", false,-1);
        tracep->declBus(c+726,"ysyx_22040750 cache_e I_cpu_pc", false,-1, 31,0);
        tracep->declBit(c+79,"ysyx_22040750 cache_e I_cpu_pc_valid", false,-1);
        tracep->declBit(c+80,"ysyx_22040750 cache_e O_cpu_pc_ready", false,-1);
        tracep->declBus(c+727,"ysyx_22040750 cache_e I_cpu_addr", false,-1, 31,0);
        tracep->declBus(c+91,"ysyx_22040750 cache_e I_cpu_wmask", false,-1, 7,0);
        tracep->declBit(c+83,"ysyx_22040750 cache_e I_cpu_rd_req", false,-1);
        tracep->declBit(c+84,"ysyx_22040750 cache_e I_cpu_wr_req", false,-1);
        tracep->declQuad(c+87,"ysyx_22040750 cache_e I_cpu_wdata", false,-1, 63,0);
        tracep->declArray(c+11,"ysyx_22040750 cache_e I_sram0_rdata", false,-1, 127,0);
        tracep->declArray(c+24,"ysyx_22040750 cache_e I_sram1_rdata", false,-1, 127,0);
        tracep->declArray(c+29,"ysyx_22040750 cache_e I_sram2_rdata", false,-1, 127,0);
        tracep->declArray(c+34,"ysyx_22040750 cache_e I_sram3_rdata", false,-1, 127,0);
        tracep->declArray(c+48,"ysyx_22040750 cache_e I_sram4_rdata", false,-1, 127,0);
        tracep->declArray(c+61,"ysyx_22040750 cache_e I_sram5_rdata", false,-1, 127,0);
        tracep->declArray(c+66,"ysyx_22040750 cache_e I_sram6_rdata", false,-1, 127,0);
        tracep->declArray(c+71,"ysyx_22040750 cache_e I_sram7_rdata", false,-1, 127,0);
        tracep->declBus(c+1,"ysyx_22040750 cache_e O_sram_iaddr", false,-1, 5,0);
        tracep->declBus(c+38,"ysyx_22040750 cache_e O_sram_daddr", false,-1, 5,0);
        tracep->declBus(c+941,"ysyx_22040750 cache_e O_sram_cen", false,-1, 7,0);
        tracep->declBus(c+728,"ysyx_22040750 cache_e O_sram_wen", false,-1, 7,0);
        tracep->declArray(c+7,"ysyx_22040750 cache_e O_sram0_wdata", false,-1, 127,0);
        tracep->declArray(c+20,"ysyx_22040750 cache_e O_sram1_wdata", false,-1, 127,0);
        tracep->declArray(c+7,"ysyx_22040750 cache_e O_sram2_wdata", false,-1, 127,0);
        tracep->declArray(c+20,"ysyx_22040750 cache_e O_sram3_wdata", false,-1, 127,0);
        tracep->declArray(c+44,"ysyx_22040750 cache_e O_sram4_wdata", false,-1, 127,0);
        tracep->declArray(c+57,"ysyx_22040750 cache_e O_sram5_wdata", false,-1, 127,0);
        tracep->declArray(c+44,"ysyx_22040750 cache_e O_sram6_wdata", false,-1, 127,0);
        tracep->declArray(c+57,"ysyx_22040750 cache_e O_sram7_wdata", false,-1, 127,0);
        tracep->declArray(c+3,"ysyx_22040750 cache_e O_sram0_wmask", false,-1, 127,0);
        tracep->declArray(c+16,"ysyx_22040750 cache_e O_sram1_wmask", false,-1, 127,0);
        tracep->declArray(c+3,"ysyx_22040750 cache_e O_sram2_wmask", false,-1, 127,0);
        tracep->declArray(c+16,"ysyx_22040750 cache_e O_sram3_wmask", false,-1, 127,0);
        tracep->declArray(c+40,"ysyx_22040750 cache_e O_sram4_wmask", false,-1, 127,0);
        tracep->declArray(c+53,"ysyx_22040750 cache_e O_sram5_wmask", false,-1, 127,0);
        tracep->declArray(c+40,"ysyx_22040750 cache_e O_sram6_wmask", false,-1, 127,0);
        tracep->declArray(c+53,"ysyx_22040750 cache_e O_sram7_wmask", false,-1, 127,0);
        tracep->declQuad(c+994,"ysyx_22040750 cache_e I_mem_rdata", false,-1, 63,0);
        tracep->declBit(c+991,"ysyx_22040750 cache_e I_mem_rvalid", false,-1);
        tracep->declBit(c+990,"ysyx_22040750 cache_e O_mem_rready", false,-1);
        tracep->declBit(c+996,"ysyx_22040750 cache_e I_mem_rlast", false,-1);
        tracep->declBus(c+986,"ysyx_22040750 cache_e O_mem_araddr", false,-1, 31,0);
        tracep->declBit(c+983,"ysyx_22040750 cache_e I_mem_arready", false,-1);
        tracep->declBit(c+984,"ysyx_22040750 cache_e O_mem_arvalid", false,-1);
        tracep->declBus(c+987,"ysyx_22040750 cache_e O_mem_arlen", false,-1, 7,0);
        tracep->declBus(c+988,"ysyx_22040750 cache_e O_mem_arsize", false,-1, 2,0);
        tracep->declQuad(c+975,"ysyx_22040750 cache_e O_mem_wdata", false,-1, 63,0);
        tracep->declBit(c+974,"ysyx_22040750 cache_e O_mem_wvalid", false,-1);
        tracep->declBit(c+973,"ysyx_22040750 cache_e I_mem_wready", false,-1);
        tracep->declBit(c+978,"ysyx_22040750 cache_e O_mem_wlast", false,-1);
        tracep->declBus(c+977,"ysyx_22040750 cache_e O_mem_wstrb", false,-1, 7,0);
        tracep->declBus(c+969,"ysyx_22040750 cache_e O_mem_awaddr", false,-1, 31,0);
        tracep->declBit(c+967,"ysyx_22040750 cache_e O_mem_awvalid", false,-1);
        tracep->declBit(c+966,"ysyx_22040750 cache_e I_mem_awready", false,-1);
        tracep->declBus(c+970,"ysyx_22040750 cache_e O_mem_awlen", false,-1, 7,0);
        tracep->declBus(c+971,"ysyx_22040750 cache_e O_mem_awsize", false,-1, 2,0);
        tracep->declBit(c+980,"ysyx_22040750 cache_e I_mem_bvalid", false,-1);
        tracep->declBit(c+979,"ysyx_22040750 cache_e O_mem_bready", false,-1);
        tracep->declQuad(c+85,"ysyx_22040750 cache_e O_cpu_rdata", false,-1, 63,0);
        tracep->declBus(c+75,"ysyx_22040750 cache_e O_cpu_inst", false,-1, 31,0);
        tracep->declBit(c+78,"ysyx_22040750 cache_e O_cpu_inst_valid", false,-1);
        tracep->declBit(c+89,"ysyx_22040750 cache_e O_cpu_rvalid", false,-1);
        tracep->declBit(c+90,"ysyx_22040750 cache_e O_cpu_bvalid", false,-1);
        tracep->declBus(c+729,"ysyx_22040750 cache_e icache_cen", false,-1, 3,0);
        tracep->declBus(c+730,"ysyx_22040750 cache_e icache_wen", false,-1, 3,0);
        tracep->declArray(c+731,"ysyx_22040750 cache_e icache_way0_rdata", false,-1, 255,0);
        tracep->declArray(c+739,"ysyx_22040750 cache_e icache_way1_rdata", false,-1, 255,0);
        tracep->declArray(c+747,"ysyx_22040750 cache_e icache_wdata", false,-1, 255,0);
        tracep->declArray(c+755,"ysyx_22040750 cache_e icache_wmask", false,-1, 255,0);
        tracep->declBus(c+1028,"ysyx_22040750 cache_e dcache_cen", false,-1, 3,0);
        tracep->declBus(c+763,"ysyx_22040750 cache_e dcache_wen", false,-1, 3,0);
        tracep->declArray(c+764,"ysyx_22040750 cache_e dcache_way0_rdata", false,-1, 255,0);
        tracep->declArray(c+772,"ysyx_22040750 cache_e dcache_way1_rdata", false,-1, 255,0);
        tracep->declArray(c+780,"ysyx_22040750 cache_e dcache_wdata", false,-1, 255,0);
        tracep->declArray(c+788,"ysyx_22040750 cache_e dcache_wmask", false,-1, 255,0);
        tracep->declQuad(c+1029,"ysyx_22040750 cache_e axi_icache_rdata", false,-1, 63,0);
        tracep->declQuad(c+1031,"ysyx_22040750 cache_e axi_dcache_rdata", false,-1, 63,0);
        tracep->declBit(c+1073,"ysyx_22040750 cache_e axi_icache_rready", false,-1);
        tracep->declBit(c+1073,"ysyx_22040750 cache_e axi_dcache_rready", false,-1);
        tracep->declBit(c+942,"ysyx_22040750 cache_e axi_icache_rvalid", false,-1);
        tracep->declBit(c+943,"ysyx_22040750 cache_e axi_dcache_rvalid", false,-1);
        tracep->declBit(c+944,"ysyx_22040750 cache_e axi_icache_rlast", false,-1);
        tracep->declBit(c+945,"ysyx_22040750 cache_e axi_dcache_rlast", false,-1);
        tracep->declBus(c+796,"ysyx_22040750 cache_e axi_icache_araddr", false,-1, 31,0);
        tracep->declBus(c+797,"ysyx_22040750 cache_e axi_dcache_araddr", false,-1, 31,0);
        tracep->declBit(c+946,"ysyx_22040750 cache_e axi_icache_arready", false,-1);
        tracep->declBit(c+947,"ysyx_22040750 cache_e axi_dcache_arready", false,-1);
        tracep->declBit(c+798,"ysyx_22040750 cache_e axi_icache_arvalid", false,-1);
        tracep->declBit(c+799,"ysyx_22040750 cache_e axi_dcache_arvalid", false,-1);
        tracep->declBus(c+1074,"ysyx_22040750 cache_e axi_icache_arlen", false,-1, 7,0);
        tracep->declBus(c+1074,"ysyx_22040750 cache_e axi_dcache_arlen", false,-1, 7,0);
        tracep->declBus(c+1075,"ysyx_22040750 cache_e axi_icache_arsize", false,-1, 2,0);
        tracep->declBus(c+1075,"ysyx_22040750 cache_e axi_dcache_arsize", false,-1, 2,0);
        tracep->declQuad(c+800,"ysyx_22040750 cache_e axi_dcache_wdata", false,-1, 63,0);
        tracep->declBit(c+802,"ysyx_22040750 cache_e axi_dcache_wvalid", false,-1);
        tracep->declBit(c+973,"ysyx_22040750 cache_e axi_dcache_wready", false,-1);
        tracep->declBit(c+803,"ysyx_22040750 cache_e axi_dcache_wlast", false,-1);
        tracep->declBus(c+1076,"ysyx_22040750 cache_e axi_dcache_wstrb", false,-1, 7,0);
        tracep->declBus(c+804,"ysyx_22040750 cache_e axi_dcache_awaddr", false,-1, 31,0);
        tracep->declBit(c+805,"ysyx_22040750 cache_e axi_dcache_awvalid", false,-1);
        tracep->declBit(c+966,"ysyx_22040750 cache_e axi_dcache_awready", false,-1);
        tracep->declBus(c+1074,"ysyx_22040750 cache_e axi_dcache_awlen", false,-1, 7,0);
        tracep->declBus(c+1075,"ysyx_22040750 cache_e axi_dcache_awsize", false,-1, 2,0);
        tracep->declBit(c+980,"ysyx_22040750 cache_e axi_dcache_bvalid", false,-1);
        tracep->declBit(c+1073,"ysyx_22040750 cache_e axi_dcache_bready", false,-1);
        tracep->declBit(c+963,"ysyx_22040750 cache_e crossbar_e I_clk", false,-1);
        tracep->declBit(c+964,"ysyx_22040750 cache_e crossbar_e I_rst", false,-1);
        tracep->declQuad(c+994,"ysyx_22040750 cache_e crossbar_e I_axi_rdata", false,-1, 63,0);
        tracep->declBit(c+991,"ysyx_22040750 cache_e crossbar_e I_axi_rvalid", false,-1);
        tracep->declBit(c+996,"ysyx_22040750 cache_e crossbar_e I_axi_rlast", false,-1);
        tracep->declBit(c+990,"ysyx_22040750 cache_e crossbar_e O_axi_rready", false,-1);
        tracep->declBus(c+986,"ysyx_22040750 cache_e crossbar_e O_axi_araddr", false,-1, 31,0);
        tracep->declBit(c+983,"ysyx_22040750 cache_e crossbar_e I_axi_arready", false,-1);
        tracep->declBit(c+984,"ysyx_22040750 cache_e crossbar_e O_axi_arvalid", false,-1);
        tracep->declBus(c+987,"ysyx_22040750 cache_e crossbar_e O_axi_arlen", false,-1, 7,0);
        tracep->declBus(c+988,"ysyx_22040750 cache_e crossbar_e O_axi_arsize", false,-1, 2,0);
        tracep->declQuad(c+1029,"ysyx_22040750 cache_e crossbar_e O_ch0_rdata", false,-1, 63,0);
        tracep->declBit(c+942,"ysyx_22040750 cache_e crossbar_e O_ch0_rvalid", false,-1);
        tracep->declBit(c+944,"ysyx_22040750 cache_e crossbar_e O_ch0_rlast", false,-1);
        tracep->declBit(c+1073,"ysyx_22040750 cache_e crossbar_e I_ch0_rready", false,-1);
        tracep->declBus(c+796,"ysyx_22040750 cache_e crossbar_e I_ch0_araddr", false,-1, 31,0);
        tracep->declBit(c+946,"ysyx_22040750 cache_e crossbar_e O_ch0_arready", false,-1);
        tracep->declBit(c+798,"ysyx_22040750 cache_e crossbar_e I_ch0_arvalid", false,-1);
        tracep->declBus(c+1074,"ysyx_22040750 cache_e crossbar_e I_ch0_arlen", false,-1, 7,0);
        tracep->declBus(c+1075,"ysyx_22040750 cache_e crossbar_e I_ch0_arsize", false,-1, 2,0);
        tracep->declQuad(c+1031,"ysyx_22040750 cache_e crossbar_e O_ch1_rdata", false,-1, 63,0);
        tracep->declBit(c+943,"ysyx_22040750 cache_e crossbar_e O_ch1_rvalid", false,-1);
        tracep->declBit(c+945,"ysyx_22040750 cache_e crossbar_e O_ch1_rlast", false,-1);
        tracep->declBit(c+1073,"ysyx_22040750 cache_e crossbar_e I_ch1_rready", false,-1);
        tracep->declBus(c+797,"ysyx_22040750 cache_e crossbar_e I_ch1_araddr", false,-1, 31,0);
        tracep->declBit(c+947,"ysyx_22040750 cache_e crossbar_e O_ch1_arready", false,-1);
        tracep->declBit(c+799,"ysyx_22040750 cache_e crossbar_e I_ch1_arvalid", false,-1);
        tracep->declBus(c+1074,"ysyx_22040750 cache_e crossbar_e I_ch1_arlen", false,-1, 7,0);
        tracep->declBus(c+1075,"ysyx_22040750 cache_e crossbar_e I_ch1_arsize", false,-1, 2,0);
        tracep->declBus(c+1077,"ysyx_22040750 cache_e crossbar_e CH0", false,-1, 0,0);
        tracep->declBus(c+1078,"ysyx_22040750 cache_e crossbar_e CH1", false,-1, 0,0);
        tracep->declBus(c+1079,"ysyx_22040750 cache_e crossbar_e IDLE", false,-1, 1,0);
        tracep->declBus(c+1080,"ysyx_22040750 cache_e crossbar_e RESP0", false,-1, 1,0);
        tracep->declBus(c+1081,"ysyx_22040750 cache_e crossbar_e RESP1", false,-1, 1,0);
        tracep->declBus(c+1082,"ysyx_22040750 cache_e crossbar_e current_state", false,-1, 1,0);
        tracep->declBus(c+1083,"ysyx_22040750 cache_e crossbar_e next_state", false,-1, 1,0);
        tracep->declBit(c+806,"ysyx_22040750 cache_e crossbar_e req0_only", false,-1);
        tracep->declBit(c+807,"ysyx_22040750 cache_e crossbar_e req1_only", false,-1);
        tracep->declBit(c+808,"ysyx_22040750 cache_e crossbar_e req_both", false,-1);
        tracep->declBit(c+809,"ysyx_22040750 cache_e crossbar_e resp0", false,-1);
        tracep->declBit(c+810,"ysyx_22040750 cache_e crossbar_e resp1", false,-1);
        tracep->declBit(c+1033,"ysyx_22040750 cache_e crossbar_e ch0_arhandshake", false,-1);
        tracep->declBit(c+1034,"ysyx_22040750 cache_e crossbar_e ch1_arhandshake", false,-1);
        tracep->declBit(c+948,"ysyx_22040750 cache_e crossbar_e ch0_last_handshake", false,-1);
        tracep->declBit(c+949,"ysyx_22040750 cache_e crossbar_e ch1_last_handshake", false,-1);
        tracep->declBit(c+811,"ysyx_22040750 cache_e crossbar_e ch0_process", false,-1);
        tracep->declBit(c+812,"ysyx_22040750 cache_e crossbar_e ch1_process", false,-1);
        tracep->declBit(c+813,"ysyx_22040750 cache_e crossbar_e priority_flag", false,-1);
        tracep->declBus(c+1084,"ysyx_22040750 cache_e icache_e BLOCK_SIZE", false,-1, 31,0);
        tracep->declBus(c+1067,"ysyx_22040750 cache_e icache_e CACHE_SIZE", false,-1, 31,0);
        tracep->declBus(c+1065,"ysyx_22040750 cache_e icache_e GROUP_NUM", false,-1, 31,0);
        tracep->declBus(c+1085,"ysyx_22040750 cache_e icache_e BLOCK_NUM", false,-1, 31,0);
        tracep->declBus(c+1086,"ysyx_22040750 cache_e icache_e OFFT_LEN", false,-1, 31,0);
        tracep->declBus(c+1087,"ysyx_22040750 cache_e icache_e INDEX_LEN", false,-1, 31,0);
        tracep->declBus(c+1088,"ysyx_22040750 cache_e icache_e TAG_LEN", false,-1, 31,0);
        tracep->declBit(c+963,"ysyx_22040750 cache_e icache_e I_clk", false,-1);
        tracep->declBit(c+964,"ysyx_22040750 cache_e icache_e I_rst", false,-1);
        tracep->declBus(c+726,"ysyx_22040750 cache_e icache_e I_cpu_addr", false,-1, 31,0);
        tracep->declBit(c+79,"ysyx_22040750 cache_e icache_e I_cpu_rd_req", false,-1);
        tracep->declBit(c+80,"ysyx_22040750 cache_e icache_e O_cpu_rd_ready", false,-1);
        tracep->declArray(c+731,"ysyx_22040750 cache_e icache_e I_way0_rdata", false,-1, 255,0);
        tracep->declArray(c+739,"ysyx_22040750 cache_e icache_e I_way1_rdata", false,-1, 255,0);
        tracep->declBus(c+1,"ysyx_22040750 cache_e icache_e O_sram_addr", false,-1, 5,0);
        tracep->declBus(c+729,"ysyx_22040750 cache_e icache_e O_sram_cen", false,-1, 3,0);
        tracep->declBus(c+730,"ysyx_22040750 cache_e icache_e O_sram_wen", false,-1, 3,0);
        tracep->declArray(c+747,"ysyx_22040750 cache_e icache_e O_sram_wdata", false,-1, 255,0);
        tracep->declArray(c+755,"ysyx_22040750 cache_e icache_e O_sram_wmask", false,-1, 255,0);
        tracep->declQuad(c+1029,"ysyx_22040750 cache_e icache_e I_mem_rdata", false,-1, 63,0);
        tracep->declBit(c+946,"ysyx_22040750 cache_e icache_e I_mem_arready", false,-1);
        tracep->declBit(c+942,"ysyx_22040750 cache_e icache_e I_mem_rvalid", false,-1);
        tracep->declBit(c+944,"ysyx_22040750 cache_e icache_e I_mem_rlast", false,-1);
        tracep->declBus(c+796,"ysyx_22040750 cache_e icache_e O_mem_araddr", false,-1, 31,0);
        tracep->declBit(c+798,"ysyx_22040750 cache_e icache_e O_mem_arvalid", false,-1);
        tracep->declBit(c+1073,"ysyx_22040750 cache_e icache_e O_mem_rready", false,-1);
        tracep->declBus(c+1074,"ysyx_22040750 cache_e icache_e O_mem_arlen", false,-1, 7,0);
        tracep->declBus(c+1075,"ysyx_22040750 cache_e icache_e O_mem_arsize", false,-1, 2,0);
        tracep->declBus(c+75,"ysyx_22040750 cache_e icache_e O_cpu_inst", false,-1, 31,0);
        tracep->declBit(c+78,"ysyx_22040750 cache_e icache_e O_cpu_rvalid", false,-1);
        tracep->declBus(c+814,"ysyx_22040750 cache_e icache_e offset", false,-1, 4,0);
        tracep->declBus(c+815,"ysyx_22040750 cache_e icache_e index", false,-1, 5,0);
        tracep->declBus(c+816,"ysyx_22040750 cache_e icache_e tag", false,-1, 20,0);
        tracep->declBus(c+817,"ysyx_22040750 cache_e icache_e mem_offset", false,-1, 4,0);
        tracep->declBus(c+818,"ysyx_22040750 cache_e icache_e mem_index", false,-1, 5,0);
        tracep->declBus(c+819,"ysyx_22040750 cache_e icache_e mem_tag", false,-1, 20,0);
        tracep->declBus(c+820,"ysyx_22040750 cache_e icache_e mem_addr", false,-1, 31,0);
        tracep->declArray(c+821,"ysyx_22040750 cache_e icache_e valid_table", false,-1, 127,0);
        tracep->declBus(c+825,"ysyx_22040750 cache_e icache_e way0_tag", false,-1, 20,0);
        tracep->declBus(c+826,"ysyx_22040750 cache_e icache_e way1_tag", false,-1, 20,0);
        tracep->declBit(c+827,"ysyx_22040750 cache_e icache_e way0_valid", false,-1);
        tracep->declBit(c+828,"ysyx_22040750 cache_e icache_e way1_valid", false,-1);
        tracep->declBit(c+829,"ysyx_22040750 cache_e icache_e way0_hit", false,-1);
        tracep->declBit(c+830,"ysyx_22040750 cache_e icache_e way1_hit", false,-1);
        tracep->declBit(c+831,"ysyx_22040750 cache_e icache_e way0_replace", false,-1);
        tracep->declBit(c+832,"ysyx_22040750 cache_e icache_e way1_replace", false,-1);
        tracep->declArray(c+833,"ysyx_22040750 cache_e icache_e mem_rdata", false,-1, 255,0);
        tracep->declArray(c+841,"ysyx_22040750 cache_e icache_e hit_rdata", false,-1, 255,0);
        tracep->declArray(c+747,"ysyx_22040750 cache_e icache_e cacheline_reg", false,-1, 255,0);
        tracep->declBit(c+849,"ysyx_22040750 cache_e icache_e rd_hit", false,-1);
        tracep->declBit(c+850,"ysyx_22040750 cache_e icache_e rd_miss", false,-1);
        tracep->declBit(c+1033,"ysyx_22040750 cache_e icache_e rd_handshake", false,-1);
        tracep->declBit(c+851,"ysyx_22040750 cache_e icache_e rd_reload", false,-1);
        tracep->declBit(c+852,"ysyx_22040750 cache_e icache_e rd_allocate", false,-1);
        tracep->declBus(c+1089,"ysyx_22040750 cache_e icache_e IDLE", false,-1, 3,0);
        tracep->declBus(c+1090,"ysyx_22040750 cache_e icache_e RD_HIT", false,-1, 3,0);
        tracep->declBus(c+1091,"ysyx_22040750 cache_e icache_e RD_MISS", false,-1, 3,0);
        tracep->declBus(c+1092,"ysyx_22040750 cache_e icache_e RD_RELOAD", false,-1, 3,0);
        tracep->declBus(c+1093,"ysyx_22040750 cache_e icache_e RD_ALLOCATE", false,-1, 3,0);
        tracep->declBus(c+853,"ysyx_22040750 cache_e icache_e current_state", false,-1, 3,0);
        tracep->declBus(c+950,"ysyx_22040750 cache_e icache_e next_state", false,-1, 3,0);
        tracep->declBus(c+729,"ysyx_22040750 cache_e icache_e cen_icache", false,-1, 3,0);
        tracep->declBus(c+1084,"ysyx_22040750 cache_e dcache_e BLOCK_SIZE", false,-1, 31,0);
        tracep->declBus(c+1067,"ysyx_22040750 cache_e dcache_e CACHE_SIZE", false,-1, 31,0);
        tracep->declBus(c+1065,"ysyx_22040750 cache_e dcache_e GROUP_NUM", false,-1, 31,0);
        tracep->declBus(c+1085,"ysyx_22040750 cache_e dcache_e BLOCK_NUM", false,-1, 31,0);
        tracep->declBus(c+1086,"ysyx_22040750 cache_e dcache_e OFFT_LEN", false,-1, 31,0);
        tracep->declBus(c+1087,"ysyx_22040750 cache_e dcache_e INDEX_LEN", false,-1, 31,0);
        tracep->declBus(c+1088,"ysyx_22040750 cache_e dcache_e TAG_LEN", false,-1, 31,0);
        tracep->declBit(c+963,"ysyx_22040750 cache_e dcache_e I_clk", false,-1);
        tracep->declBit(c+964,"ysyx_22040750 cache_e dcache_e I_rst", false,-1);
        tracep->declBus(c+727,"ysyx_22040750 cache_e dcache_e I_cpu_addr", false,-1, 31,0);
        tracep->declQuad(c+87,"ysyx_22040750 cache_e dcache_e I_cpu_data", false,-1, 63,0);
        tracep->declBus(c+91,"ysyx_22040750 cache_e dcache_e I_cpu_wmask", false,-1, 7,0);
        tracep->declBit(c+83,"ysyx_22040750 cache_e dcache_e I_cpu_rd_req", false,-1);
        tracep->declBit(c+84,"ysyx_22040750 cache_e dcache_e I_cpu_wr_req", false,-1);
        tracep->declArray(c+764,"ysyx_22040750 cache_e dcache_e I_way0_rdata", false,-1, 255,0);
        tracep->declArray(c+772,"ysyx_22040750 cache_e dcache_e I_way1_rdata", false,-1, 255,0);
        tracep->declBus(c+38,"ysyx_22040750 cache_e dcache_e O_sram_addr", false,-1, 5,0);
        tracep->declBus(c+1028,"ysyx_22040750 cache_e dcache_e O_sram_cen", false,-1, 3,0);
        tracep->declBus(c+763,"ysyx_22040750 cache_e dcache_e O_sram_wen", false,-1, 3,0);
        tracep->declArray(c+780,"ysyx_22040750 cache_e dcache_e O_sram_wdata", false,-1, 255,0);
        tracep->declArray(c+788,"ysyx_22040750 cache_e dcache_e O_sram_wmask", false,-1, 255,0);
        tracep->declQuad(c+1031,"ysyx_22040750 cache_e dcache_e I_mem_rdata", false,-1, 63,0);
        tracep->declBit(c+947,"ysyx_22040750 cache_e dcache_e I_mem_arready", false,-1);
        tracep->declBit(c+943,"ysyx_22040750 cache_e dcache_e I_mem_rvalid", false,-1);
        tracep->declBit(c+945,"ysyx_22040750 cache_e dcache_e I_mem_rlast", false,-1);
        tracep->declBus(c+797,"ysyx_22040750 cache_e dcache_e O_mem_araddr", false,-1, 31,0);
        tracep->declBit(c+799,"ysyx_22040750 cache_e dcache_e O_mem_arvalid", false,-1);
        tracep->declBit(c+1073,"ysyx_22040750 cache_e dcache_e O_mem_rready", false,-1);
        tracep->declBus(c+1074,"ysyx_22040750 cache_e dcache_e O_mem_arlen", false,-1, 7,0);
        tracep->declBus(c+1075,"ysyx_22040750 cache_e dcache_e O_mem_arsize", false,-1, 2,0);
        tracep->declBit(c+966,"ysyx_22040750 cache_e dcache_e I_mem_awready", false,-1);
        tracep->declBit(c+973,"ysyx_22040750 cache_e dcache_e I_mem_wready", false,-1);
        tracep->declBit(c+980,"ysyx_22040750 cache_e dcache_e I_mem_bvalid", false,-1);
        tracep->declQuad(c+800,"ysyx_22040750 cache_e dcache_e O_mem_wdata", false,-1, 63,0);
        tracep->declBus(c+804,"ysyx_22040750 cache_e dcache_e O_mem_awaddr", false,-1, 31,0);
        tracep->declBit(c+805,"ysyx_22040750 cache_e dcache_e O_mem_awvalid", false,-1);
        tracep->declBit(c+802,"ysyx_22040750 cache_e dcache_e O_mem_wvalid", false,-1);
        tracep->declBit(c+1073,"ysyx_22040750 cache_e dcache_e O_mem_bready", false,-1);
        tracep->declBit(c+803,"ysyx_22040750 cache_e dcache_e O_mem_wlast", false,-1);
        tracep->declBus(c+1074,"ysyx_22040750 cache_e dcache_e O_mem_awlen", false,-1, 7,0);
        tracep->declBus(c+1075,"ysyx_22040750 cache_e dcache_e O_mem_awsize", false,-1, 2,0);
        tracep->declBus(c+1076,"ysyx_22040750 cache_e dcache_e O_mem_wstrb", false,-1, 7,0);
        tracep->declQuad(c+85,"ysyx_22040750 cache_e dcache_e O_cpu_data", false,-1, 63,0);
        tracep->declBit(c+89,"ysyx_22040750 cache_e dcache_e O_cpu_rvalid", false,-1);
        tracep->declBit(c+90,"ysyx_22040750 cache_e dcache_e O_cpu_bvalid", false,-1);
        tracep->declBus(c+1094,"ysyx_22040750 cache_e dcache_e IDLE", false,-1, 12,0);
        tracep->declBus(c+1095,"ysyx_22040750 cache_e dcache_e RD_HIT", false,-1, 12,0);
        tracep->declBus(c+1096,"ysyx_22040750 cache_e dcache_e RD_MISS", false,-1, 12,0);
        tracep->declBus(c+1097,"ysyx_22040750 cache_e dcache_e RD_RELOAD", false,-1, 12,0);
        tracep->declBus(c+1098,"ysyx_22040750 cache_e dcache_e RD_WB", false,-1, 12,0);
        tracep->declBus(c+1099,"ysyx_22040750 cache_e dcache_e RD_ALLOCATE", false,-1, 12,0);
        tracep->declBus(c+1100,"ysyx_22040750 cache_e dcache_e WR_HIT", false,-1, 12,0);
        tracep->declBus(c+1101,"ysyx_22040750 cache_e dcache_e WR_MISS", false,-1, 12,0);
        tracep->declBus(c+1102,"ysyx_22040750 cache_e dcache_e WR_RELOAD", false,-1, 12,0);
        tracep->declBus(c+1103,"ysyx_22040750 cache_e dcache_e WR_WB", false,-1, 12,0);
        tracep->declBus(c+1104,"ysyx_22040750 cache_e dcache_e WR_ALLOCATE", false,-1, 12,0);
        tracep->declBus(c+1105,"ysyx_22040750 cache_e dcache_e MMIO_RD", false,-1, 12,0);
        tracep->declBus(c+1106,"ysyx_22040750 cache_e dcache_e MMIO_WR", false,-1, 12,0);
        tracep->declBit(c+854,"ysyx_22040750 cache_e dcache_e mmio_flag", false,-1);
        tracep->declBus(c+855,"ysyx_22040750 cache_e dcache_e current_state", false,-1, 12,0);
        tracep->declBus(c+951,"ysyx_22040750 cache_e dcache_e next_state", false,-1, 12,0);
        tracep->declBit(c+856,"ysyx_22040750 cache_e dcache_e replace_dirty", false,-1);
        tracep->declBit(c+857,"ysyx_22040750 cache_e dcache_e rd_hit", false,-1);
        tracep->declBit(c+858,"ysyx_22040750 cache_e dcache_e rd_miss", false,-1);
        tracep->declBit(c+952,"ysyx_22040750 cache_e dcache_e rd_handshake", false,-1);
        tracep->declBit(c+859,"ysyx_22040750 cache_e dcache_e rd_reload", false,-1);
        tracep->declBit(c+860,"ysyx_22040750 cache_e dcache_e rd_wb", false,-1);
        tracep->declBit(c+861,"ysyx_22040750 cache_e dcache_e rd_allocate", false,-1);
        tracep->declBit(c+862,"ysyx_22040750 cache_e dcache_e wr_hit", false,-1);
        tracep->declBit(c+863,"ysyx_22040750 cache_e dcache_e wr_miss", false,-1);
        tracep->declBit(c+864,"ysyx_22040750 cache_e dcache_e wr_reload", false,-1);
        tracep->declBit(c+865,"ysyx_22040750 cache_e dcache_e wr_wb", false,-1);
        tracep->declBit(c+866,"ysyx_22040750 cache_e dcache_e wr_allocate", false,-1);
        tracep->declBus(c+867,"ysyx_22040750 cache_e dcache_e offset", false,-1, 4,0);
        tracep->declBus(c+868,"ysyx_22040750 cache_e dcache_e mem_offset", false,-1, 4,0);
        tracep->declBus(c+869,"ysyx_22040750 cache_e dcache_e index", false,-1, 5,0);
        tracep->declBus(c+870,"ysyx_22040750 cache_e dcache_e mem_index", false,-1, 5,0);
        tracep->declBus(c+871,"ysyx_22040750 cache_e dcache_e tag", false,-1, 20,0);
        tracep->declBus(c+872,"ysyx_22040750 cache_e dcache_e mem_tag", false,-1, 20,0);
        tracep->declBus(c+873,"ysyx_22040750 cache_e dcache_e mem_addr", false,-1, 31,0);
        tracep->declBus(c+874,"ysyx_22040750 cache_e dcache_e sram_wmask", false,-1, 7,0);
        tracep->declBus(c+875,"ysyx_22040750 cache_e dcache_e sram_wmaskB", false,-1, 31,0);
        tracep->declArray(c+780,"ysyx_22040750 cache_e dcache_e cacheline_reg", false,-1, 255,0);
        tracep->declQuad(c+876,"ysyx_22040750 cache_e dcache_e cpu_reg", false,-1, 63,0);
        tracep->declBus(c+878,"ysyx_22040750 cache_e dcache_e cpu_mask_reg", false,-1, 7,0);
        tracep->declBus(c+1028,"ysyx_22040750 cache_e dcache_e cen_dcache", false,-1, 3,0);
        tracep->declBus(c+763,"ysyx_22040750 cache_e dcache_e wen_dcache", false,-1, 3,0);
        tracep->declBit(c+879,"ysyx_22040750 cache_e dcache_e sram_wflag", false,-1);
        tracep->declBit(c+1035,"ysyx_22040750 cache_e dcache_e sram_rflag", false,-1);
        tracep->declArray(c+880,"ysyx_22040750 cache_e dcache_e valid_table", false,-1, 127,0);
        tracep->declArray(c+884,"ysyx_22040750 cache_e dcache_e dirty_table", false,-1, 127,0);
        tracep->declBus(c+888,"ysyx_22040750 cache_e dcache_e way0_tag", false,-1, 20,0);
        tracep->declBus(c+889,"ysyx_22040750 cache_e dcache_e way1_tag", false,-1, 20,0);
        tracep->declBit(c+890,"ysyx_22040750 cache_e dcache_e way0_valid", false,-1);
        tracep->declBit(c+891,"ysyx_22040750 cache_e dcache_e way1_valid", false,-1);
        tracep->declBit(c+892,"ysyx_22040750 cache_e dcache_e way0_hit", false,-1);
        tracep->declBit(c+893,"ysyx_22040750 cache_e dcache_e way1_hit", false,-1);
        tracep->declBit(c+894,"ysyx_22040750 cache_e dcache_e hit", false,-1);
        tracep->declBit(c+895,"ysyx_22040750 cache_e dcache_e way0_dirty", false,-1);
        tracep->declBit(c+896,"ysyx_22040750 cache_e dcache_e way1_dirty", false,-1);
        tracep->declBit(c+897,"ysyx_22040750 cache_e dcache_e way1_op", false,-1);
        tracep->declBit(c+898,"ysyx_22040750 cache_e dcache_e isway0_op", false,-1);
        tracep->declBus(c+1059,"ysyx_22040750 cache_e dcache_e WB_IDLE", false,-1, 2,0);
        tracep->declBus(c+1060,"ysyx_22040750 cache_e dcache_e WB_HANDSHAKE", false,-1, 2,0);
        tracep->declBus(c+1061,"ysyx_22040750 cache_e dcache_e WB_DATA", false,-1, 2,0);
        tracep->declBus(c+899,"ysyx_22040750 cache_e dcache_e wb_state", false,-1, 2,0);
        tracep->declBus(c+953,"ysyx_22040750 cache_e dcache_e wb_next_state", false,-1, 2,0);
        tracep->declBit(c+1036,"ysyx_22040750 cache_e dcache_e aw_handshake", false,-1);
        tracep->declBit(c+954,"ysyx_22040750 cache_e dcache_e wr_handshake", false,-1);
        tracep->declBus(c+900,"ysyx_22040750 cache_e dcache_e wdata_cnt", false,-1, 1,0);
        tracep->declArray(c+901,"ysyx_22040750 cache_e dcache_e wdata", false,-1, 255,0);
        tracep->declBus(c+1085,"ysyx_22040750 sram0 Bits", false,-1, 31,0);
        tracep->declBus(c+1039,"ysyx_22040750 sram0 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1087,"ysyx_22040750 sram0 Add_Width", false,-1, 31,0);
        tracep->declBus(c+1085,"ysyx_22040750 sram0 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+11,"ysyx_22040750 sram0 Q", false,-1, 127,0);
        tracep->declBit(c+963,"ysyx_22040750 sram0 CLK", false,-1);
        tracep->declBit(c+933,"ysyx_22040750 sram0 CEN", false,-1);
        tracep->declBit(c+2,"ysyx_22040750 sram0 WEN", false,-1);
        tracep->declArray(c+3,"ysyx_22040750 sram0 BWEN", false,-1, 127,0);
        tracep->declBus(c+1,"ysyx_22040750 sram0 A", false,-1, 5,0);
        tracep->declArray(c+7,"ysyx_22040750 sram0 D", false,-1, 127,0);
        tracep->declBit(c+955,"ysyx_22040750 sram0 cen", false,-1);
        tracep->declBit(c+909,"ysyx_22040750 sram0 wen", false,-1);
        tracep->declArray(c+910,"ysyx_22040750 sram0 bwen", false,-1, 127,0);
        tracep->declBus(c+1085,"ysyx_22040750 sram1 Bits", false,-1, 31,0);
        tracep->declBus(c+1039,"ysyx_22040750 sram1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1087,"ysyx_22040750 sram1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+1085,"ysyx_22040750 sram1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+24,"ysyx_22040750 sram1 Q", false,-1, 127,0);
        tracep->declBit(c+963,"ysyx_22040750 sram1 CLK", false,-1);
        tracep->declBit(c+934,"ysyx_22040750 sram1 CEN", false,-1);
        tracep->declBit(c+15,"ysyx_22040750 sram1 WEN", false,-1);
        tracep->declArray(c+16,"ysyx_22040750 sram1 BWEN", false,-1, 127,0);
        tracep->declBus(c+1,"ysyx_22040750 sram1 A", false,-1, 5,0);
        tracep->declArray(c+20,"ysyx_22040750 sram1 D", false,-1, 127,0);
        tracep->declBit(c+956,"ysyx_22040750 sram1 cen", false,-1);
        tracep->declBit(c+914,"ysyx_22040750 sram1 wen", false,-1);
        tracep->declArray(c+915,"ysyx_22040750 sram1 bwen", false,-1, 127,0);
        tracep->declBus(c+1085,"ysyx_22040750 sram2 Bits", false,-1, 31,0);
        tracep->declBus(c+1039,"ysyx_22040750 sram2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1087,"ysyx_22040750 sram2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+1085,"ysyx_22040750 sram2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+29,"ysyx_22040750 sram2 Q", false,-1, 127,0);
        tracep->declBit(c+963,"ysyx_22040750 sram2 CLK", false,-1);
        tracep->declBit(c+935,"ysyx_22040750 sram2 CEN", false,-1);
        tracep->declBit(c+28,"ysyx_22040750 sram2 WEN", false,-1);
        tracep->declArray(c+3,"ysyx_22040750 sram2 BWEN", false,-1, 127,0);
        tracep->declBus(c+1,"ysyx_22040750 sram2 A", false,-1, 5,0);
        tracep->declArray(c+7,"ysyx_22040750 sram2 D", false,-1, 127,0);
        tracep->declBit(c+957,"ysyx_22040750 sram2 cen", false,-1);
        tracep->declBit(c+919,"ysyx_22040750 sram2 wen", false,-1);
        tracep->declArray(c+910,"ysyx_22040750 sram2 bwen", false,-1, 127,0);
        tracep->declBus(c+1085,"ysyx_22040750 sram3 Bits", false,-1, 31,0);
        tracep->declBus(c+1039,"ysyx_22040750 sram3 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1087,"ysyx_22040750 sram3 Add_Width", false,-1, 31,0);
        tracep->declBus(c+1085,"ysyx_22040750 sram3 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+34,"ysyx_22040750 sram3 Q", false,-1, 127,0);
        tracep->declBit(c+963,"ysyx_22040750 sram3 CLK", false,-1);
        tracep->declBit(c+936,"ysyx_22040750 sram3 CEN", false,-1);
        tracep->declBit(c+33,"ysyx_22040750 sram3 WEN", false,-1);
        tracep->declArray(c+16,"ysyx_22040750 sram3 BWEN", false,-1, 127,0);
        tracep->declBus(c+1,"ysyx_22040750 sram3 A", false,-1, 5,0);
        tracep->declArray(c+20,"ysyx_22040750 sram3 D", false,-1, 127,0);
        tracep->declBit(c+958,"ysyx_22040750 sram3 cen", false,-1);
        tracep->declBit(c+920,"ysyx_22040750 sram3 wen", false,-1);
        tracep->declArray(c+915,"ysyx_22040750 sram3 bwen", false,-1, 127,0);
        tracep->declBus(c+1085,"ysyx_22040750 sram4 Bits", false,-1, 31,0);
        tracep->declBus(c+1039,"ysyx_22040750 sram4 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1087,"ysyx_22040750 sram4 Add_Width", false,-1, 31,0);
        tracep->declBus(c+1085,"ysyx_22040750 sram4 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+48,"ysyx_22040750 sram4 Q", false,-1, 127,0);
        tracep->declBit(c+963,"ysyx_22040750 sram4 CLK", false,-1);
        tracep->declBit(c+937,"ysyx_22040750 sram4 CEN", false,-1);
        tracep->declBit(c+39,"ysyx_22040750 sram4 WEN", false,-1);
        tracep->declArray(c+40,"ysyx_22040750 sram4 BWEN", false,-1, 127,0);
        tracep->declBus(c+38,"ysyx_22040750 sram4 A", false,-1, 5,0);
        tracep->declArray(c+44,"ysyx_22040750 sram4 D", false,-1, 127,0);
        tracep->declBit(c+959,"ysyx_22040750 sram4 cen", false,-1);
        tracep->declBit(c+921,"ysyx_22040750 sram4 wen", false,-1);
        tracep->declArray(c+922,"ysyx_22040750 sram4 bwen", false,-1, 127,0);
        tracep->declBus(c+1085,"ysyx_22040750 sram5 Bits", false,-1, 31,0);
        tracep->declBus(c+1039,"ysyx_22040750 sram5 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1087,"ysyx_22040750 sram5 Add_Width", false,-1, 31,0);
        tracep->declBus(c+1085,"ysyx_22040750 sram5 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+61,"ysyx_22040750 sram5 Q", false,-1, 127,0);
        tracep->declBit(c+963,"ysyx_22040750 sram5 CLK", false,-1);
        tracep->declBit(c+938,"ysyx_22040750 sram5 CEN", false,-1);
        tracep->declBit(c+52,"ysyx_22040750 sram5 WEN", false,-1);
        tracep->declArray(c+53,"ysyx_22040750 sram5 BWEN", false,-1, 127,0);
        tracep->declBus(c+38,"ysyx_22040750 sram5 A", false,-1, 5,0);
        tracep->declArray(c+57,"ysyx_22040750 sram5 D", false,-1, 127,0);
        tracep->declBit(c+960,"ysyx_22040750 sram5 cen", false,-1);
        tracep->declBit(c+926,"ysyx_22040750 sram5 wen", false,-1);
        tracep->declArray(c+927,"ysyx_22040750 sram5 bwen", false,-1, 127,0);
        tracep->declBus(c+1085,"ysyx_22040750 sram6 Bits", false,-1, 31,0);
        tracep->declBus(c+1039,"ysyx_22040750 sram6 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1087,"ysyx_22040750 sram6 Add_Width", false,-1, 31,0);
        tracep->declBus(c+1085,"ysyx_22040750 sram6 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+66,"ysyx_22040750 sram6 Q", false,-1, 127,0);
        tracep->declBit(c+963,"ysyx_22040750 sram6 CLK", false,-1);
        tracep->declBit(c+939,"ysyx_22040750 sram6 CEN", false,-1);
        tracep->declBit(c+65,"ysyx_22040750 sram6 WEN", false,-1);
        tracep->declArray(c+40,"ysyx_22040750 sram6 BWEN", false,-1, 127,0);
        tracep->declBus(c+38,"ysyx_22040750 sram6 A", false,-1, 5,0);
        tracep->declArray(c+44,"ysyx_22040750 sram6 D", false,-1, 127,0);
        tracep->declBit(c+961,"ysyx_22040750 sram6 cen", false,-1);
        tracep->declBit(c+931,"ysyx_22040750 sram6 wen", false,-1);
        tracep->declArray(c+922,"ysyx_22040750 sram6 bwen", false,-1, 127,0);
        tracep->declBus(c+1085,"ysyx_22040750 sram7 Bits", false,-1, 31,0);
        tracep->declBus(c+1039,"ysyx_22040750 sram7 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1087,"ysyx_22040750 sram7 Add_Width", false,-1, 31,0);
        tracep->declBus(c+1085,"ysyx_22040750 sram7 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+71,"ysyx_22040750 sram7 Q", false,-1, 127,0);
        tracep->declBit(c+963,"ysyx_22040750 sram7 CLK", false,-1);
        tracep->declBit(c+940,"ysyx_22040750 sram7 CEN", false,-1);
        tracep->declBit(c+70,"ysyx_22040750 sram7 WEN", false,-1);
        tracep->declArray(c+53,"ysyx_22040750 sram7 BWEN", false,-1, 127,0);
        tracep->declBus(c+38,"ysyx_22040750 sram7 A", false,-1, 5,0);
        tracep->declArray(c+57,"ysyx_22040750 sram7 D", false,-1, 127,0);
        tracep->declBit(c+962,"ysyx_22040750 sram7 cen", false,-1);
        tracep->declBit(c+932,"ysyx_22040750 sram7 wen", false,-1);
        tracep->declArray(c+927,"ysyx_22040750 sram7 bwen", false,-1, 127,0);
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
    VlWide<4>/*127:0*/ __Vtemp384;
    VlWide<4>/*127:0*/ __Vtemp385;
    VlWide<4>/*127:0*/ __Vtemp388;
    VlWide<4>/*127:0*/ __Vtemp389;
    VlWide<4>/*127:0*/ __Vtemp390;
    VlWide<4>/*127:0*/ __Vtemp391;
    VlWide<4>/*127:0*/ __Vtemp392;
    VlWide<4>/*127:0*/ __Vtemp393;
    VlWide<3>/*95:0*/ __Vtemp395;
    VlWide<3>/*95:0*/ __Vtemp396;
    VlWide<3>/*95:0*/ __Vtemp397;
    VlWide<3>/*95:0*/ __Vtemp398;
    VlWide<3>/*95:0*/ __Vtemp399;
    VlWide<3>/*95:0*/ __Vtemp414;
    VlWide<3>/*95:0*/ __Vtemp415;
    VlWide<3>/*95:0*/ __Vtemp416;
    VlWide<3>/*95:0*/ __Vtemp417;
    VlWide<3>/*95:0*/ __Vtemp418;
    VlWide<4>/*127:0*/ __Vtemp420;
    VlWide<5>/*159:0*/ __Vtemp446;
    VlWide<5>/*159:0*/ __Vtemp448;
    VlWide<8>/*255:0*/ __Vtemp449;
    VlWide<8>/*255:0*/ __Vtemp450;
    VlWide<8>/*255:0*/ __Vtemp452;
    VlWide<8>/*255:0*/ __Vtemp453;
    VlWide<8>/*255:0*/ __Vtemp458;
    VlWide<8>/*255:0*/ __Vtemp461;
    VlWide<8>/*255:0*/ __Vtemp462;
    VlWide<4>/*127:0*/ __Vtemp466;
    VlWide<4>/*127:0*/ __Vtemp470;
    VlWide<4>/*127:0*/ __Vtemp472;
    VlWide<4>/*127:0*/ __Vtemp474;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlSelf->ysyx_22040750__DOT__iaddr),6);
        tracep->fullBit(oldp+2,((1U & (IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen))));
        if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
              ? 1U : 0U)) {
            __Vtemp384[0U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[0U];
            __Vtemp384[1U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[1U];
            __Vtemp384[2U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[2U];
            __Vtemp384[3U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[3U];
        } else {
            __Vtemp384[0U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[0U];
            __Vtemp384[1U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[1U];
            __Vtemp384[2U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[2U];
            __Vtemp384[3U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[3U];
        }
        tracep->fullWData(oldp+3,(__Vtemp384),128);
        __Vtemp385[0U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[0U];
        __Vtemp385[1U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[1U];
        __Vtemp385[2U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[2U];
        __Vtemp385[3U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[3U];
        tracep->fullWData(oldp+7,(__Vtemp385),128);
        tracep->fullWData(oldp+11,(vlSelf->ysyx_22040750__DOT__io_sram0_rdata),128);
        tracep->fullBit(oldp+15,((1U & ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen) 
                                        >> 1U))));
        if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
              ? 1U : 0U)) {
            __Vtemp388[0U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[4U];
            __Vtemp388[1U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[5U];
            __Vtemp388[2U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[6U];
            __Vtemp388[3U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[7U];
        } else {
            __Vtemp388[0U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[4U];
            __Vtemp388[1U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[5U];
            __Vtemp388[2U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[6U];
            __Vtemp388[3U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[7U];
        }
        tracep->fullWData(oldp+16,(__Vtemp388),128);
        __Vtemp389[0U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[4U];
        __Vtemp389[1U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[5U];
        __Vtemp389[2U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[6U];
        __Vtemp389[3U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[7U];
        tracep->fullWData(oldp+20,(__Vtemp389),128);
        tracep->fullWData(oldp+24,(vlSelf->ysyx_22040750__DOT__io_sram1_rdata),128);
        tracep->fullBit(oldp+28,((1U & ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen) 
                                        >> 2U))));
        tracep->fullWData(oldp+29,(vlSelf->ysyx_22040750__DOT__io_sram2_rdata),128);
        tracep->fullBit(oldp+33,((1U & ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen) 
                                        >> 3U))));
        tracep->fullWData(oldp+34,(vlSelf->ysyx_22040750__DOT__io_sram3_rdata),128);
        tracep->fullCData(oldp+38,(vlSelf->ysyx_22040750__DOT__daddr),6);
        tracep->fullBit(oldp+39,((1U & ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen) 
                                        >> 4U))));
        __Vtemp390[0U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[0U];
        __Vtemp390[1U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[1U];
        __Vtemp390[2U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[2U];
        __Vtemp390[3U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[3U];
        tracep->fullWData(oldp+40,(__Vtemp390),128);
        __Vtemp391[0U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[0U];
        __Vtemp391[1U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[1U];
        __Vtemp391[2U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[2U];
        __Vtemp391[3U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[3U];
        tracep->fullWData(oldp+44,(__Vtemp391),128);
        tracep->fullWData(oldp+48,(vlSelf->ysyx_22040750__DOT__io_sram4_rdata),128);
        tracep->fullBit(oldp+52,((1U & ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen) 
                                        >> 5U))));
        __Vtemp392[0U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[4U];
        __Vtemp392[1U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[5U];
        __Vtemp392[2U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[6U];
        __Vtemp392[3U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[7U];
        tracep->fullWData(oldp+53,(__Vtemp392),128);
        __Vtemp393[0U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[4U];
        __Vtemp393[1U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[5U];
        __Vtemp393[2U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[6U];
        __Vtemp393[3U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[7U];
        tracep->fullWData(oldp+57,(__Vtemp393),128);
        tracep->fullWData(oldp+61,(vlSelf->ysyx_22040750__DOT__io_sram5_rdata),128);
        tracep->fullBit(oldp+65,((1U & ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen) 
                                        >> 6U))));
        tracep->fullWData(oldp+66,(vlSelf->ysyx_22040750__DOT__io_sram6_rdata),128);
        tracep->fullBit(oldp+70,((1U & ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen) 
                                        >> 7U))));
        tracep->fullWData(oldp+71,(vlSelf->ysyx_22040750__DOT__io_sram7_rdata),128);
        tracep->fullIData(oldp+75,(vlSelf->ysyx_22040750__DOT__cpu_inst),32);
        tracep->fullQData(oldp+76,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc),64);
        tracep->fullBit(oldp+78,((1U & ((1U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state)) 
                                        | ((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                                            ? 1U : 0U)))));
        tracep->fullBit(oldp+79,(vlSelf->ysyx_22040750__DOT__cpu_pc_valid));
        tracep->fullBit(oldp+80,(((0U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state)) 
                                  | (1U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state)))));
        tracep->fullQData(oldp+81,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_mem_addr),64);
        tracep->fullBit(oldp+83,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_reg_e__DOT__mem_rd_en));
        tracep->fullBit(oldp+84,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_reg_e__DOT__mem_wr_en));
        tracep->fullQData(oldp+85,((((QData)((IData)(
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
        tracep->fullQData(oldp+87,(vlSelf->ysyx_22040750__DOT__mem_wdata),64);
        tracep->fullBit(oldp+89,((1U & ((2U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state)) 
                                        | ((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                            ? 1U : 0U)))));
        tracep->fullBit(oldp+90,((0x40U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))));
        tracep->fullCData(oldp+91,((0xffU & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_wstrb) 
                                             << (7U 
                                                 & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_mem_addr))))),8);
        tracep->fullQData(oldp+92,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__current_pc),64);
        tracep->fullQData(oldp+94,((4ULL + vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__current_pc)),64);
        tracep->fullIData(oldp+96,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__current_inst),32);
        tracep->fullQData(oldp+97,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__imm),64);
        tracep->fullQData(oldp+99,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__wr_data),64);
        tracep->fullQData(oldp+101,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr
                                    [(0x1fU & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                               >> 0xfU))]),64);
        tracep->fullQData(oldp+103,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr
                                    [(0x1fU & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                               >> 0x14U))]),64);
        tracep->fullQData(oldp+105,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op1),64);
        tracep->fullQData(oldp+107,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op2),64);
        tracep->fullQData(oldp+109,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_out),64);
        tracep->fullQData(oldp+111,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__mem_in),64);
        tracep->fullQData(oldp+113,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_rs2),64);
        tracep->fullQData(oldp+115,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__result),64);
        tracep->fullQData(oldp+117,(((2U == (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_intr) 
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
        tracep->fullQData(oldp+119,((((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__csr_alu_e__DOT__op 
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
        tracep->fullCData(oldp+121,((0x1fU & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+122,((0x1fU & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                              >> 0x14U))),5);
        tracep->fullCData(oldp+123,((0x1fU & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                              >> 7U))),5);
        tracep->fullCData(oldp+124,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc_sel),5);
        tracep->fullCData(oldp+125,(((((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__reg_wen) 
                                       & (3U == (0x7fU 
                                                 & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))) 
                                      << 1U) | ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__reg_wen) 
                                                & (3U 
                                                   != 
                                                   (0x7fU 
                                                    & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))))),3);
        tracep->fullCData(oldp+126,((((1U & (- (IData)(
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
        tracep->fullCData(oldp+127,((((1U & (- (IData)((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__typeR)))) 
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
        tracep->fullSData(oldp+128,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op_sel),15);
        tracep->fullCData(oldp+129,((0xffU & ((((- (IData)((IData)(
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
        tracep->fullSData(oldp+130,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__mem_rstrb),9);
        tracep->fullBit(oldp+131,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__reg_wen));
        tracep->fullBit(oldp+132,((0x23U == (0x7fU 
                                             & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))));
        tracep->fullBit(oldp+133,(((0x1bU == (0x7fU 
                                              & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                   | (0x3bU == (0x7fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
        tracep->fullCData(oldp+134,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op_sext),2);
        tracep->fullSData(oldp+135,((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                     >> 0x14U)),12);
        tracep->fullBit(oldp+136,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_wen));
        tracep->fullBit(oldp+137,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_intr));
        tracep->fullBit(oldp+138,((0x30200073U == vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)));
        tracep->fullCData(oldp+139,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_op_sel),7);
        tracep->fullQData(oldp+140,(((0x73U == vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)
                                      ? 0xbULL : ((0x100073U 
                                                   == vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)
                                                   ? 4ULL
                                                   : 0ULL))),64);
        tracep->fullBit(oldp+142,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_valid));
        tracep->fullQData(oldp+143,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_pc),64);
        tracep->fullIData(oldp+145,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst),32);
        tracep->fullBit(oldp+146,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_allowin));
        tracep->fullBit(oldp+147,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_valid));
        tracep->fullBit(oldp+148,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_stall));
        tracep->fullBit(oldp+149,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_bubble));
        tracep->fullBit(oldp+150,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_reg_e__DOT__input_valid));
        tracep->fullQData(oldp+151,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_imm),64);
        tracep->fullQData(oldp+153,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_pc),64);
        tracep->fullQData(oldp+155,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_rs1),64);
        tracep->fullQData(oldp+157,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_rs2),64);
        tracep->fullQData(oldp+159,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr),64);
        tracep->fullCData(oldp+161,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_rd_addr),5);
        tracep->fullCData(oldp+162,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_wstrb),8);
        tracep->fullSData(oldp+163,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_rstrb),9);
        tracep->fullCData(oldp+164,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_op2_sel),3);
        tracep->fullCData(oldp+165,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_op1_sel),3);
        tracep->fullCData(oldp+166,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_regin_sel),3);
        tracep->fullCData(oldp+167,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_sext),2);
        tracep->fullSData(oldp+168,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel),15);
        tracep->fullBit(oldp+169,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_reg_wen));
        tracep->fullBit(oldp+170,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_mem_wen));
        tracep->fullBit(oldp+171,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_word_op_mask));
        tracep->fullBit(oldp+172,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_valid));
        tracep->fullBit(oldp+173,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_allowin));
        tracep->fullCData(oldp+174,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_stall),2);
        tracep->fullIData(oldp+175,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_inst),32);
        tracep->fullBit(oldp+176,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_bubble));
        tracep->fullBit(oldp+177,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_reg_e__DOT__input_valid));
        tracep->fullBit(oldp+178,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_multicycle));
        tracep->fullBit(oldp+179,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_out_valid));
        tracep->fullSData(oldp+180,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_addr),12);
        tracep->fullBit(oldp+181,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_wen));
        tracep->fullBit(oldp+182,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_intr));
        tracep->fullBit(oldp+183,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_mret));
        tracep->fullCData(oldp+184,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel),7);
        tracep->fullCData(oldp+185,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_uimm),5);
        tracep->fullQData(oldp+186,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_intr_no),64);
        tracep->fullBit(oldp+188,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_valid));
        tracep->fullSData(oldp+189,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_rstrb),9);
        tracep->fullCData(oldp+190,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_wstrb),8);
        tracep->fullQData(oldp+191,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out),64);
        tracep->fullQData(oldp+193,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr),64);
        tracep->fullBit(oldp+195,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_mem_wen));
        tracep->fullQData(oldp+196,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_pc),64);
        tracep->fullBit(oldp+198,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_reg_wen));
        tracep->fullCData(oldp+199,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_rd_addr),5);
        tracep->fullCData(oldp+200,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_regin_sel),3);
        tracep->fullCData(oldp+201,((7U & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_mem_addr))),3);
        tracep->fullBit(oldp+202,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_allowin));
        tracep->fullCData(oldp+203,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_stall),2);
        tracep->fullIData(oldp+204,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_inst),32);
        tracep->fullBit(oldp+205,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_bubble));
        tracep->fullBit(oldp+206,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_reg_e__DOT__input_valid));
        tracep->fullSData(oldp+207,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr_addr),12);
        tracep->fullBit(oldp+208,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr_wen));
        tracep->fullBit(oldp+209,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr_intr));
        tracep->fullBit(oldp+210,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr_mret));
        tracep->fullQData(oldp+211,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr_intr_no),64);
        tracep->fullQData(oldp+213,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_pc),64);
        tracep->fullBit(oldp+215,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_reg_e__DOT__input_valid));
        tracep->fullQData(oldp+216,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_mem_data),64);
        tracep->fullSData(oldp+218,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_mem_rstrb),9);
        tracep->fullQData(oldp+219,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_alu_out),64);
        tracep->fullQData(oldp+221,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr),64);
        tracep->fullBit(oldp+223,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_reg_wen));
        tracep->fullCData(oldp+224,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_rd_addr),5);
        tracep->fullCData(oldp+225,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_regin_sel),3);
        tracep->fullCData(oldp+226,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_shamt),3);
        tracep->fullBit(oldp+227,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_allowin));
        tracep->fullIData(oldp+228,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_inst),32);
        tracep->fullBit(oldp+229,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_bubble));
        tracep->fullCData(oldp+230,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_stall),2);
        tracep->fullSData(oldp+231,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr_addr),12);
        tracep->fullBit(oldp+232,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr_wen));
        tracep->fullBit(oldp+233,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr_intr));
        tracep->fullBit(oldp+234,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr_mret));
        tracep->fullQData(oldp+235,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr_intr_no),64);
        tracep->fullCData(oldp+237,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__stall_en),2);
        tracep->fullQData(oldp+238,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__rs1_forward_data),64);
        tracep->fullQData(oldp+240,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__rs2_forward_data),64);
        tracep->fullQData(oldp+242,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_forward_data),64);
        tracep->fullBit(oldp+244,((1U & (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_regin_sel) 
                                          >> 1U) | (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_mem_wen)))));
        tracep->fullBit(oldp+245,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_mem_op));
        tracep->fullQData(oldp+246,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_mem_addr),64);
        tracep->fullQData(oldp+248,(((8U & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc_sel))
                                      ? vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__rs1_forward_data
                                      : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_pc)),64);
        tracep->fullQData(oldp+250,((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__imm 
                                     + ((8U & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc_sel))
                                         ? vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__rs1_forward_data
                                         : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_pc))),64);
        tracep->fullQData(oldp+252,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__npc_e__DOT__dnpc),64);
        tracep->fullBit(oldp+254,((1U & (~ ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc_sel) 
                                            | ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc_sel) 
                                               >> 4U))))));
        tracep->fullBit(oldp+255,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc_sel) 
                                         >> 4U))));
        tracep->fullWData(oldp+256,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__npc_e__DOT____Vcellinp__nextpc_64bit_3sel__I_sel_data),192);
        tracep->fullCData(oldp+262,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__npc_e__DOT____Vcellinp__nextpc_64bit_3sel__I_sel),3);
        tracep->fullQData(oldp+263,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__npc_e__DOT__nextpc_64bit_3sel__DOT__sel_data[0]),64);
        tracep->fullQData(oldp+265,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__npc_e__DOT__nextpc_64bit_3sel__DOT__sel_data[1]),64);
        tracep->fullQData(oldp+267,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__npc_e__DOT__nextpc_64bit_3sel__DOT__sel_data[2]),64);
        tracep->fullBit(oldp+269,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__pc_e__DOT__IF_ready_go));
        tracep->fullBit(oldp+270,((1U & ((~ (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__pc_e__DOT__IF_valid)) 
                                         | ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__pc_e__DOT__IF_ready_go) 
                                            & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_allowin))))));
        tracep->fullBit(oldp+271,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__pc_e__DOT__IF_handshake));
        tracep->fullBit(oldp+272,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__pc_e__DOT__IF_valid));
        tracep->fullBit(oldp+273,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__pc_e__DOT__IF_en));
        tracep->fullIData(oldp+274,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__pc_e__DOT__inst_cache),32);
        tracep->fullBit(oldp+275,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__pc_e__DOT__cache_valid));
        tracep->fullBit(oldp+276,((1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc_sel)))));
        tracep->fullBit(oldp+277,((1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_stall)))));
        tracep->fullBit(oldp+278,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_regin_sel) 
                                         >> 1U))));
        tracep->fullBit(oldp+279,((0U != (0xfU & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                                  >> 0xaU)))));
        tracep->fullBit(oldp+280,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_regin_sel) 
                                         >> 1U))));
        tracep->fullCData(oldp+281,(((0xfffffffeU & 
                                      ((((0x1fU & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                   >> 0xfU)) 
                                         == (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_rd_addr)) 
                                        << 1U) & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__stall_en))) 
                                     | (((0x1fU & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                   >> 0x14U)) 
                                         == (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_rd_addr)) 
                                        & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__stall_en)))),2);
        tracep->fullCData(oldp+282,(((0xfffffffeU & 
                                      ((((0x1fU & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                   >> 0xfU)) 
                                         == (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_rd_addr)) 
                                        << 1U) & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__stall_en))) 
                                     | (((0x1fU & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                   >> 0x14U)) 
                                         == (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_rd_addr)) 
                                        & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__stall_en)))),2);
        tracep->fullCData(oldp+283,(((0xfffffffeU & 
                                      ((((0x1fU & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                   >> 0xfU)) 
                                         == (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_rd_addr)) 
                                        << 1U) & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__stall_en))) 
                                     | (((0x1fU & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                   >> 0x14U)) 
                                         == (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_rd_addr)) 
                                        & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__stall_en)))),2);
        tracep->fullBit(oldp+284,((((0U != (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_stall)) 
                                    & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_regin_sel) 
                                       >> 1U)) | ((0U 
                                                   != (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_stall)) 
                                                  & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_regin_sel) 
                                                     >> 1U)))));
        tracep->fullBit(oldp+285,(((0U != (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_stall)) 
                                   & (0U != (0xfU & 
                                             ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                              >> 0xaU))))));
        tracep->fullBit(oldp+286,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT____Vcellinp__forward_unit_e__I_WB_reg_wen));
        tracep->fullBit(oldp+287,((((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_wen) 
                                    & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_wen)) 
                                   & ((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                       >> 0x14U) == (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_addr)))));
        tracep->fullBit(oldp+288,((((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_wen) 
                                    & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr_wen)) 
                                   & ((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                       >> 0x14U) == (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr_addr)))));
        tracep->fullBit(oldp+289,((((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_wen) 
                                    & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr_wen)) 
                                   & ((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                       >> 0x14U) == (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr_addr)))));
        tracep->fullCData(oldp+290,((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                     >> 0x19U)),7);
        tracep->fullCData(oldp+291,((0x7fU & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)),7);
        tracep->fullCData(oldp+292,((7U & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                           >> 0xcU))),3);
        tracep->fullSData(oldp+293,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__immS),12);
        tracep->fullSData(oldp+294,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__immB),13);
        tracep->fullIData(oldp+295,((0xfffff000U & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)),32);
        tracep->fullIData(oldp+296,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__immJ),21);
        tracep->fullBit(oldp+297,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__typeI));
        tracep->fullBit(oldp+298,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__typeR));
        tracep->fullBit(oldp+299,((0x63U == (0x7fU 
                                             & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))));
        tracep->fullBit(oldp+300,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__typeU));
        tracep->fullBit(oldp+301,((0x6fU == (0x7fU 
                                             & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))));
        tracep->fullBit(oldp+302,((0x73U == (0x7fU 
                                             & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))));
        tracep->fullBit(oldp+303,((0x37U == (0x7fU 
                                             & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))));
        tracep->fullBit(oldp+304,((0x17U == (0x7fU 
                                             & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))));
        tracep->fullBit(oldp+305,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__JALR));
        tracep->fullBit(oldp+306,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__LD));
        tracep->fullBit(oldp+307,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__LW));
        tracep->fullBit(oldp+308,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__LWU));
        tracep->fullBit(oldp+309,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__LH));
        tracep->fullBit(oldp+310,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__LHU));
        tracep->fullBit(oldp+311,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__LB));
        tracep->fullBit(oldp+312,((IData)((0x4003U 
                                           == (0x707fU 
                                               & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+313,((IData)((0x13U == 
                                           (0x707fU 
                                            & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+314,((IData)((0x2013U 
                                           == (0x707fU 
                                               & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+315,((IData)((0x3013U 
                                           == (0x707fU 
                                               & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+316,((IData)((0x4013U 
                                           == (0x707fU 
                                               & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+317,((IData)((0x6013U 
                                           == (0x707fU 
                                               & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+318,((IData)((0x7013U 
                                           == (0x707fU 
                                               & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+319,((IData)(((0x1013U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                               >> 0x1aU))))));
        tracep->fullBit(oldp+320,((IData)(((0x5013U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                               >> 0x1aU))))));
        tracep->fullBit(oldp+321,((IData)(((0x5013U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                           & (0x10U 
                                              == (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x1aU))))));
        tracep->fullBit(oldp+322,((IData)((0x1bU == 
                                           (0x707fU 
                                            & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+323,((IData)(((0x101bU 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+324,((IData)(((0x501bU 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+325,((IData)(((0x501bU 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                           & (0x20U 
                                              == (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
        tracep->fullBit(oldp+326,((IData)(((0x33U == 
                                            (0x707fU 
                                             & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+327,((IData)(((0x33U == 
                                            (0x707fU 
                                             & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                           & (0x20U 
                                              == (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
        tracep->fullBit(oldp+328,((IData)(((0x1033U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+329,((IData)(((0x2033U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+330,((IData)(((0x3033U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+331,((IData)(((0x4033U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+332,((IData)(((0x5033U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+333,((IData)(((0x5033U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                           & (0x20U 
                                              == (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
        tracep->fullBit(oldp+334,((IData)(((0x6033U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+335,((IData)(((0x7033U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+336,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__MUL));
        tracep->fullBit(oldp+337,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__MULH));
        tracep->fullBit(oldp+338,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__MULHSU));
        tracep->fullBit(oldp+339,((IData)(((0x3033U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                           & (1U == 
                                              (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+340,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__DIV));
        tracep->fullBit(oldp+341,((IData)(((0x5033U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                           & (1U == 
                                              (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+342,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__REM));
        tracep->fullBit(oldp+343,((IData)(((0x7033U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                           & (1U == 
                                              (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+344,((IData)(((0x3bU == 
                                            (0x707fU 
                                             & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+345,((IData)(((0x3bU == 
                                            (0x707fU 
                                             & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                           & (0x20U 
                                              == (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
        tracep->fullBit(oldp+346,((IData)(((0x103bU 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+347,((IData)(((0x503bU 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+348,((IData)(((0x503bU 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                           & (0x20U 
                                              == (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
        tracep->fullBit(oldp+349,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__MULW));
        tracep->fullBit(oldp+350,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__DIVW));
        tracep->fullBit(oldp+351,((IData)(((0x503bU 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                           & (1U == 
                                              (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+352,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__REMW));
        tracep->fullBit(oldp+353,((IData)(((0x703bU 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                           & (1U == 
                                              (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+354,((IData)((0x3023U 
                                           == (0x707fU 
                                               & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+355,((IData)((0x2023U 
                                           == (0x707fU 
                                               & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+356,((IData)((0x1023U 
                                           == (0x707fU 
                                               & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+357,((IData)((0x23U == 
                                           (0x707fU 
                                            & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+358,((IData)((0x63U == 
                                           (0x707fU 
                                            & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+359,((IData)((0x1063U 
                                           == (0x707fU 
                                               & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+360,((IData)((0x4063U 
                                           == (0x707fU 
                                               & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+361,((IData)((0x5063U 
                                           == (0x707fU 
                                               & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+362,((IData)((0x6063U 
                                           == (0x707fU 
                                               & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+363,((IData)((0x7063U 
                                           == (0x707fU 
                                               & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+364,((0x73U == vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)));
        tracep->fullBit(oldp+365,((0x100073U == vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)));
        tracep->fullBit(oldp+366,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__CSRRW));
        tracep->fullBit(oldp+367,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__CSRRS));
        tracep->fullBit(oldp+368,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__CSRRC));
        tracep->fullBit(oldp+369,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__CSRRWI));
        tracep->fullBit(oldp+370,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__CSRRSI));
        tracep->fullBit(oldp+371,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__CSRRCI));
        tracep->fullBit(oldp+372,((((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__CSRRW) 
                                    | (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__CSRRS)) 
                                   | (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__CSRRC))));
        tracep->fullBit(oldp+373,((3U == (0x7fU & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))));
        tracep->fullBit(oldp+374,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__typeB_jr));
        tracep->fullBit(oldp+375,((((0x73U == vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst) 
                                    | (0x100073U == vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                   | (0x30200073U == vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))));
        tracep->fullBit(oldp+376,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__eq));
        tracep->fullBit(oldp+377,((1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__eq)))));
        tracep->fullBit(oldp+378,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__lt));
        tracep->fullBit(oldp+379,((1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__lt)))));
        tracep->fullBit(oldp+380,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__ltu));
        tracep->fullBit(oldp+381,((1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__ltu)))));
        tracep->fullBit(oldp+382,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__add_flag));
        tracep->fullBit(oldp+383,(((IData)(((0x33U 
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
        tracep->fullBit(oldp+384,(((IData)((0x2013U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))) 
                                   | (IData)(((0x2033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U)))))));
        tracep->fullBit(oldp+385,(((IData)((0x3013U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))) 
                                   | (IData)(((0x3033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U)))))));
        tracep->fullBit(oldp+386,(((IData)((0x4013U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))) 
                                   | (IData)(((0x4033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U)))))));
        tracep->fullBit(oldp+387,(((IData)((0x6013U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))) 
                                   | (IData)(((0x6033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U)))))));
        tracep->fullBit(oldp+388,(((IData)((0x7013U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))) 
                                   | (IData)(((0x7033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U)))))));
        tracep->fullBit(oldp+389,(((((IData)(((0x1013U 
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
        tracep->fullBit(oldp+390,(((((IData)(((0x5013U 
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
        tracep->fullBit(oldp+391,(((((IData)(((0x5013U 
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
        tracep->fullBit(oldp+392,(((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__MUL) 
                                   | (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__MULW))));
        tracep->fullBit(oldp+393,((((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__MULH) 
                                    | (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__MULHSU)) 
                                   | (IData)(((0x3033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (1U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U)))))));
        tracep->fullBit(oldp+394,(((((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__DIV) 
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
        tracep->fullBit(oldp+395,(((((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__REM) 
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
        tracep->fullBit(oldp+396,(((((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__typeR) 
                                     | ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__typeI) 
                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__JALR)))) 
                                    | (0x23U == (0x7fU 
                                                 & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))) 
                                   | (0x73U == (0x7fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+397,(((((0x63U == (0x7fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                     | (0x6fU == (0x7fU 
                                                  & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))) 
                                    | (0x17U == (0x7fU 
                                                 & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))) 
                                   | (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__JALR))));
        tracep->fullBit(oldp+398,((((((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__typeI) 
                                      & (~ (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__JALR))) 
                                     | (0x23U == (0x7fU 
                                                  & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))) 
                                    | (0x63U == (0x7fU 
                                                 & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))) 
                                   | (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__typeU))));
        tracep->fullBit(oldp+399,(((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__JALR) 
                                   | (0x6fU == (0x7fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
        tracep->fullWData(oldp+400,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT____Vcellinp__alu_op1_64bit_3sel__I_sel_data),192);
        tracep->fullQData(oldp+406,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op1_64bit_3sel__DOT__sel_data[0]),64);
        tracep->fullQData(oldp+408,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op1_64bit_3sel__DOT__sel_data[1]),64);
        tracep->fullQData(oldp+410,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op1_64bit_3sel__DOT__sel_data[2]),64);
        tracep->fullWData(oldp+412,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT____Vcellinp__alu_op2_64bit_3sel__I_sel_data),192);
        tracep->fullQData(oldp+418,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op2_64bit_3sel__DOT__sel_data[0]),64);
        tracep->fullQData(oldp+420,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op2_64bit_3sel__DOT__sel_data[1]),64);
        tracep->fullQData(oldp+422,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op2_64bit_3sel__DOT__sel_data[2]),64);
        tracep->fullBit(oldp+424,((1U & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel))));
        tracep->fullBit(oldp+425,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                         >> 1U))));
        tracep->fullBit(oldp+426,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                         >> 2U))));
        tracep->fullBit(oldp+427,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                         >> 3U))));
        tracep->fullBit(oldp+428,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                         >> 4U))));
        tracep->fullBit(oldp+429,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                         >> 5U))));
        tracep->fullBit(oldp+430,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                         >> 6U))));
        tracep->fullBit(oldp+431,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                         >> 7U))));
        tracep->fullBit(oldp+432,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                         >> 8U))));
        tracep->fullBit(oldp+433,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                         >> 9U))));
        tracep->fullBit(oldp+434,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                         >> 0xaU))));
        tracep->fullBit(oldp+435,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                         >> 0xbU))));
        tracep->fullBit(oldp+436,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                         >> 0xcU))));
        tracep->fullBit(oldp+437,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                         >> 0xdU))));
        tracep->fullBit(oldp+438,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                         >> 0xeU))));
        tracep->fullQData(oldp+439,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__slt_result),64);
        VL_EXTEND_WQ(65,64, __Vtemp395, vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op1);
        VL_EXTEND_WQ(65,64, __Vtemp396, vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__adder2);
        VL_ADD_W(3, __Vtemp397, __Vtemp395, __Vtemp396);
        VL_EXTEND_WQ(65,64, __Vtemp398, vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__cin);
        VL_ADD_W(3, __Vtemp399, __Vtemp397, __Vtemp398);
        tracep->fullQData(oldp+441,((QData)((IData)(
                                                    (1U 
                                                     & (~ 
                                                        (1U 
                                                         & __Vtemp399[2U])))))),64);
        tracep->fullQData(oldp+443,((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op1 
                                     ^ vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op2)),64);
        tracep->fullQData(oldp+445,((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op1 
                                     | vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op2)),64);
        tracep->fullQData(oldp+447,((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op1 
                                     & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op2)),64);
        tracep->fullQData(oldp+449,(((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_word_op_mask)
                                      ? (((QData)((IData)(
                                                          (- (IData)(
                                                                     (1U 
                                                                      & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result)))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__slldw_result 
                                                            >> 0x20U))))
                                      : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__slldw_result)),64);
        tracep->fullQData(oldp+451,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result),64);
        tracep->fullQData(oldp+453,((((- (QData)((IData)(
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
        tracep->fullQData(oldp+455,((((QData)((IData)(
                                                      vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[0U])))),64);
        tracep->fullQData(oldp+457,((((QData)((IData)(
                                                      vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[2U])))),64);
        tracep->fullQData(oldp+459,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__div_result),64);
        tracep->fullQData(oldp+461,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__rem_result),64);
        tracep->fullWData(oldp+463,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__op1_sext),65);
        tracep->fullWData(oldp+466,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__op2_sext),65);
        tracep->fullBit(oldp+469,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_word_op_mask)
                                          ? (IData)(
                                                    (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op1 
                                                     >> 0x1fU))
                                          : (IData)(
                                                    (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op1 
                                                     >> 0x3fU))))));
        tracep->fullBit(oldp+470,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_word_op_mask)
                                          ? (IData)(
                                                    (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op2 
                                                     >> 0x1fU))
                                          : (IData)(
                                                    (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op2 
                                                     >> 0x3fU))))));
        tracep->fullBit(oldp+471,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__sext1));
        tracep->fullBit(oldp+472,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__sext2));
        tracep->fullBit(oldp+473,((IData)((0U != (0xc00U 
                                                  & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel))))));
        tracep->fullBit(oldp+474,((IData)((0U != (0x3000U 
                                                  & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel))))));
        tracep->fullBit(oldp+475,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_valid));
        tracep->fullBit(oldp+476,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__div_valid));
        tracep->fullBit(oldp+477,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_out_valid));
        tracep->fullBit(oldp+478,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__div_out_valid));
        tracep->fullQData(oldp+479,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mulh_reg),64);
        tracep->fullQData(oldp+481,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_reg),64);
        tracep->fullQData(oldp+483,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__div_reg),64);
        tracep->fullQData(oldp+485,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__rem_reg),64);
        tracep->fullBit(oldp+487,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_reg_valid));
        tracep->fullBit(oldp+488,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__div_reg_valid));
        tracep->fullQData(oldp+489,((((QData)((IData)(
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
        tracep->fullQData(oldp+491,((((QData)((IData)(
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
        tracep->fullQData(oldp+493,((((QData)((IData)(
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
        tracep->fullQData(oldp+495,((((QData)((IData)(
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
        tracep->fullQData(oldp+497,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__adder2),64);
        tracep->fullQData(oldp+499,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__cin),64);
        VL_EXTEND_WQ(65,64, __Vtemp414, vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op1);
        VL_EXTEND_WQ(65,64, __Vtemp415, vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__adder2);
        VL_ADD_W(3, __Vtemp416, __Vtemp414, __Vtemp415);
        VL_EXTEND_WQ(65,64, __Vtemp417, vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__cin);
        VL_ADD_W(3, __Vtemp418, __Vtemp416, __Vtemp417);
        tracep->fullBit(oldp+501,((1U & __Vtemp418[2U])));
        tracep->fullQData(oldp+502,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__reverse_op1),64);
        tracep->fullQData(oldp+504,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_op),64);
        tracep->fullCData(oldp+506,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__shamt),6);
        tracep->fullQData(oldp+507,(((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_word_op_mask)
                                      ? (~ (0xffffffffULL 
                                            >> (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__shamt)))
                                      : (~ (0xffffffffffffffffULL 
                                            >> (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__shamt))))),64);
        tracep->fullIData(oldp+509,(((0x80U & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel))
                                      ? (IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_op 
                                                 >> 0x20U))
                                      : (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_op))),32);
        tracep->fullQData(oldp+510,(((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_word_op_mask)
                                      ? (QData)((IData)(
                                                        ((0x80U 
                                                          & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel))
                                                          ? (IData)(
                                                                    (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_op 
                                                                     >> 0x20U))
                                                          : (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_op))))
                                      : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_op)),64);
        tracep->fullQData(oldp+512,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result)))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__slldw_result 
                                                                   >> 0x20U))))),64);
        tracep->fullQData(oldp+514,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__slldw_result),64);
        tracep->fullQData(oldp+516,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__dword_result),64);
        tracep->fullQData(oldp+518,((((QData)((IData)(
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
        tracep->fullBit(oldp+520,(((1U & ((IData)((0U 
                                                   != 
                                                   (0x3000U 
                                                    & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel)))) 
                                          & (~ (IData)(
                                                       (0U 
                                                        != (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_sext))))))
                                    ? 0U : (1U & (IData)(
                                                         (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__dword_result 
                                                          >> 0x1fU))))));
        tracep->fullQData(oldp+521,((((QData)((IData)(
                                                      vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__op1_sext[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__op1_sext[0U])))),64);
        tracep->fullQData(oldp+523,((((QData)((IData)(
                                                      vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__op2_sext[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__op2_sext[0U])))),64);
        __Vtemp420[0U] = vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[0U];
        __Vtemp420[1U] = vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[1U];
        __Vtemp420[2U] = vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[2U];
        __Vtemp420[3U] = vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[3U];
        tracep->fullWData(oldp+525,(__Vtemp420),128);
        tracep->fullBit(oldp+529,(((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__op1_sext[1U] 
                                    >> 0x1fU) & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__sext1))));
        tracep->fullBit(oldp+530,(((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__op2_sext[1U] 
                                    >> 0x1fU) & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__sext1))));
        tracep->fullWData(oldp+531,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1),67);
        tracep->fullWData(oldp+534,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2),132);
        __Vtemp446[0U] = ((((~ ((- (IData)((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_negative))) 
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
        __Vtemp446[1U] = ((((~ ((- (IData)((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_negative))) 
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
        __Vtemp446[2U] = ((((~ ((- (IData)((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_negative))) 
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
        __Vtemp446[3U] = ((((~ ((- (IData)((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_negative))) 
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
        __Vtemp446[4U] = ((((~ ((- (IData)((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_negative))) 
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
        __Vtemp448[0U] = (~ __Vtemp446[0U]);
        __Vtemp448[1U] = (~ __Vtemp446[1U]);
        __Vtemp448[2U] = (~ __Vtemp446[2U]);
        __Vtemp448[3U] = (~ __Vtemp446[3U]);
        __Vtemp448[4U] = (0xfU & (~ __Vtemp446[4U]));
        tracep->fullWData(oldp+539,(__Vtemp448),132);
        tracep->fullBit(oldp+544,(((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_double_negative) 
                                   | (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_negative))));
        tracep->fullWData(oldp+545,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__mid_result),132);
        tracep->fullCData(oldp+550,((7U & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])),3);
        tracep->fullWData(oldp+551,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S),132);
        tracep->fullBit(oldp+556,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__mul_process));
        tracep->fullCData(oldp+557,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__iter_cnt),6);
        tracep->fullBit(oldp+558,((1U & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                         >> 2U))));
        tracep->fullBit(oldp+559,((1U & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                         >> 1U))));
        tracep->fullBit(oldp+560,((1U & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])));
        tracep->fullBit(oldp+561,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_negative));
        tracep->fullBit(oldp+562,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_double_negative));
        tracep->fullBit(oldp+563,((1U & ((~ (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                             >> 2U)) 
                                         & (((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                              >> 1U) 
                                             & (~ vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])) 
                                            | ((~ (
                                                   vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                   >> 1U)) 
                                               & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U]))))));
        tracep->fullBit(oldp+564,((1U & (((~ (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                              >> 2U)) 
                                          & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                             >> 1U)) 
                                         & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U]))));
        tracep->fullWData(oldp+565,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__abs_dividend),128);
        tracep->fullWData(oldp+569,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__abs_divisor),128);
        tracep->fullWData(oldp+573,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__current_sub_result),128);
        tracep->fullBit(oldp+577,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__current_q));
        tracep->fullBit(oldp+578,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__dividend_flag));
        tracep->fullBit(oldp+579,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__divisor_flag));
        tracep->fullBit(oldp+580,(((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__dividend_flag) 
                                   ^ (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__divisor_flag))));
        tracep->fullQData(oldp+581,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__abs_quotient),64);
        tracep->fullBit(oldp+583,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__div_process));
        tracep->fullCData(oldp+584,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__iter_cnt),6);
        tracep->fullBit(oldp+585,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel) 
                                         >> 5U))));
        tracep->fullBit(oldp+586,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel) 
                                         >> 2U))));
        tracep->fullBit(oldp+587,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel) 
                                         >> 4U))));
        tracep->fullBit(oldp+588,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel) 
                                         >> 1U))));
        tracep->fullBit(oldp+589,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel) 
                                         >> 3U))));
        tracep->fullBit(oldp+590,((1U & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel))));
        tracep->fullBit(oldp+591,((IData)((0U != (0x24U 
                                                  & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel))))));
        tracep->fullBit(oldp+592,((IData)((0U != (0x12U 
                                                  & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel))))));
        tracep->fullBit(oldp+593,((IData)((0U != (9U 
                                                  & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel))))));
        tracep->fullBit(oldp+594,((0U != (7U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel) 
                                                >> 3U)))));
        tracep->fullBit(oldp+595,((0U != (7U & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel)))));
        tracep->fullQData(oldp+596,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__csr_alu_e__DOT__op),64);
        tracep->fullQData(oldp+598,((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr 
                                     | vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__csr_alu_e__DOT__op)),64);
        tracep->fullQData(oldp+600,((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr 
                                     & (~ vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__csr_alu_e__DOT__op))),64);
        tracep->fullBit(oldp+602,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_reg_e__DOT__output_valid));
        tracep->fullBit(oldp+603,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_mem_rstrb) 
                                         >> 8U))));
        tracep->fullBit(oldp+604,((1U & (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_mem_rstrb) 
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
        tracep->fullCData(oldp+605,((0xffU & (~ (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_mem_rstrb)))),8);
        tracep->fullQData(oldp+606,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__mem_ld_e__DOT__ld_data),64);
        tracep->fullWData(oldp+608,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT____Vcellinp__regin_64bit_2sel__I_sel_data),128);
        tracep->fullCData(oldp+612,((3U & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_regin_sel))),2);
        tracep->fullQData(oldp+613,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__regin_64bit_2sel__DOT__sel_data[0]),64);
        tracep->fullQData(oldp+615,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__regin_64bit_2sel__DOT__sel_data[1]),64);
        tracep->fullBit(oldp+617,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT____Vcellinp__gpr_e__I_wen));
        tracep->fullQData(oldp+618,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[0]),64);
        tracep->fullQData(oldp+620,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[1]),64);
        tracep->fullQData(oldp+622,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[2]),64);
        tracep->fullQData(oldp+624,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[3]),64);
        tracep->fullQData(oldp+626,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[4]),64);
        tracep->fullQData(oldp+628,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[5]),64);
        tracep->fullQData(oldp+630,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[6]),64);
        tracep->fullQData(oldp+632,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[7]),64);
        tracep->fullQData(oldp+634,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[8]),64);
        tracep->fullQData(oldp+636,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[9]),64);
        tracep->fullQData(oldp+638,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[10]),64);
        tracep->fullQData(oldp+640,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[11]),64);
        tracep->fullQData(oldp+642,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[12]),64);
        tracep->fullQData(oldp+644,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[13]),64);
        tracep->fullQData(oldp+646,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[14]),64);
        tracep->fullQData(oldp+648,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[15]),64);
        tracep->fullQData(oldp+650,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[16]),64);
        tracep->fullQData(oldp+652,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[17]),64);
        tracep->fullQData(oldp+654,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[18]),64);
        tracep->fullQData(oldp+656,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[19]),64);
        tracep->fullQData(oldp+658,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[20]),64);
        tracep->fullQData(oldp+660,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[21]),64);
        tracep->fullQData(oldp+662,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[22]),64);
        tracep->fullQData(oldp+664,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[23]),64);
        tracep->fullQData(oldp+666,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[24]),64);
        tracep->fullQData(oldp+668,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[25]),64);
        tracep->fullQData(oldp+670,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[26]),64);
        tracep->fullQData(oldp+672,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[27]),64);
        tracep->fullQData(oldp+674,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[28]),64);
        tracep->fullQData(oldp+676,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[29]),64);
        tracep->fullQData(oldp+678,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[30]),64);
        tracep->fullQData(oldp+680,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[31]),64);
        tracep->fullBit(oldp+682,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[0]));
        tracep->fullBit(oldp+683,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[1]));
        tracep->fullBit(oldp+684,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[2]));
        tracep->fullBit(oldp+685,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[3]));
        tracep->fullBit(oldp+686,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[4]));
        tracep->fullBit(oldp+687,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[5]));
        tracep->fullBit(oldp+688,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[6]));
        tracep->fullBit(oldp+689,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[7]));
        tracep->fullBit(oldp+690,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[8]));
        tracep->fullBit(oldp+691,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[9]));
        tracep->fullBit(oldp+692,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[10]));
        tracep->fullBit(oldp+693,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[11]));
        tracep->fullBit(oldp+694,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[12]));
        tracep->fullBit(oldp+695,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[13]));
        tracep->fullBit(oldp+696,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[14]));
        tracep->fullBit(oldp+697,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[15]));
        tracep->fullBit(oldp+698,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[16]));
        tracep->fullBit(oldp+699,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[17]));
        tracep->fullBit(oldp+700,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[18]));
        tracep->fullBit(oldp+701,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[19]));
        tracep->fullBit(oldp+702,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[20]));
        tracep->fullBit(oldp+703,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[21]));
        tracep->fullBit(oldp+704,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[22]));
        tracep->fullBit(oldp+705,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[23]));
        tracep->fullBit(oldp+706,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[24]));
        tracep->fullBit(oldp+707,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[25]));
        tracep->fullBit(oldp+708,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[26]));
        tracep->fullBit(oldp+709,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[27]));
        tracep->fullBit(oldp+710,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[28]));
        tracep->fullBit(oldp+711,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[29]));
        tracep->fullBit(oldp+712,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[30]));
        tracep->fullBit(oldp+713,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[31]));
        tracep->fullQData(oldp+714,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mepc),64);
        tracep->fullQData(oldp+716,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mstatus),64);
        tracep->fullQData(oldp+718,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mtvec),64);
        tracep->fullQData(oldp+720,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mcause),64);
        tracep->fullQData(oldp+722,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mscratch),64);
        tracep->fullBit(oldp+724,((1U & (IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mstatus 
                                                 >> 3U)))));
        tracep->fullBit(oldp+725,((1U & (IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mstatus 
                                                 >> 7U)))));
        tracep->fullIData(oldp+726,((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc)),32);
        tracep->fullIData(oldp+727,((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_mem_addr)),32);
        tracep->fullCData(oldp+728,(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen),8);
        tracep->fullCData(oldp+729,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cen_icache),4);
        tracep->fullCData(oldp+730,((((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                                       ? 1U : 0U) ? 0U
                                      : 0xfU)),4);
        __Vtemp449[0U] = vlSelf->ysyx_22040750__DOT__io_sram0_rdata[0U];
        __Vtemp449[1U] = vlSelf->ysyx_22040750__DOT__io_sram0_rdata[1U];
        __Vtemp449[2U] = vlSelf->ysyx_22040750__DOT__io_sram0_rdata[2U];
        __Vtemp449[3U] = vlSelf->ysyx_22040750__DOT__io_sram0_rdata[3U];
        __Vtemp449[4U] = vlSelf->ysyx_22040750__DOT__io_sram1_rdata[0U];
        __Vtemp449[5U] = vlSelf->ysyx_22040750__DOT__io_sram1_rdata[1U];
        __Vtemp449[6U] = vlSelf->ysyx_22040750__DOT__io_sram1_rdata[2U];
        __Vtemp449[7U] = vlSelf->ysyx_22040750__DOT__io_sram1_rdata[3U];
        tracep->fullWData(oldp+731,(__Vtemp449),256);
        __Vtemp450[0U] = vlSelf->ysyx_22040750__DOT__io_sram2_rdata[0U];
        __Vtemp450[1U] = vlSelf->ysyx_22040750__DOT__io_sram2_rdata[1U];
        __Vtemp450[2U] = vlSelf->ysyx_22040750__DOT__io_sram2_rdata[2U];
        __Vtemp450[3U] = vlSelf->ysyx_22040750__DOT__io_sram2_rdata[3U];
        __Vtemp450[4U] = vlSelf->ysyx_22040750__DOT__io_sram3_rdata[0U];
        __Vtemp450[5U] = vlSelf->ysyx_22040750__DOT__io_sram3_rdata[1U];
        __Vtemp450[6U] = vlSelf->ysyx_22040750__DOT__io_sram3_rdata[2U];
        __Vtemp450[7U] = vlSelf->ysyx_22040750__DOT__io_sram3_rdata[3U];
        tracep->fullWData(oldp+739,(__Vtemp450),256);
        tracep->fullWData(oldp+747,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg),256);
        if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
              ? 1U : 0U)) {
            __Vtemp452[0U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[0U];
            __Vtemp452[1U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[1U];
            __Vtemp452[2U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[2U];
            __Vtemp452[3U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[3U];
            __Vtemp452[4U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[4U];
            __Vtemp452[5U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[5U];
            __Vtemp452[6U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[6U];
            __Vtemp452[7U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[7U];
        } else {
            __Vtemp452[0U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[0U];
            __Vtemp452[1U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[1U];
            __Vtemp452[2U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[2U];
            __Vtemp452[3U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[3U];
            __Vtemp452[4U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[4U];
            __Vtemp452[5U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[5U];
            __Vtemp452[6U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[6U];
            __Vtemp452[7U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[7U];
        }
        tracep->fullWData(oldp+755,(__Vtemp452),256);
        tracep->fullCData(oldp+763,(((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__sram_wflag)
                                      ? ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)
                                          ? 0xcU : 3U)
                                      : 0xfU)),4);
        tracep->fullWData(oldp+764,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata),256);
        tracep->fullWData(oldp+772,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata),256);
        tracep->fullWData(oldp+780,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg),256);
        tracep->fullWData(oldp+788,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask),256);
        tracep->fullIData(oldp+796,((0xffffffe0U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr)),32);
        tracep->fullIData(oldp+797,((0xffffffe0U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr)),32);
        tracep->fullBit(oldp+798,(((2U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                                    ? 1U : 0U)));
        tracep->fullBit(oldp+799,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_arvalid));
        if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op) {
            __Vtemp453[0U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[0U];
            __Vtemp453[1U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[1U];
            __Vtemp453[2U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[2U];
            __Vtemp453[3U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[3U];
            __Vtemp453[4U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[4U];
            __Vtemp453[5U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[5U];
            __Vtemp453[6U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[6U];
            __Vtemp453[7U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[7U];
        } else {
            __Vtemp453[0U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[0U];
            __Vtemp453[1U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[1U];
            __Vtemp453[2U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[2U];
            __Vtemp453[3U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[3U];
            __Vtemp453[4U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[4U];
            __Vtemp453[5U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[5U];
            __Vtemp453[6U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[6U];
            __Vtemp453[7U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[7U];
        }
        tracep->fullQData(oldp+800,((((QData)((IData)(
                                                      __Vtemp453[
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
                                                          __Vtemp453[
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
                                                           __Vtemp453[
                                                           (0x7fffffeU 
                                                            & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wdata_cnt) 
                                                               << 1U))])) 
                                           >> (0x1fU 
                                               & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wdata_cnt) 
                                                  << 6U)))))),64);
        tracep->fullBit(oldp+802,(((4U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wb_state))
                                    ? 1U : 0U)));
        tracep->fullBit(oldp+803,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_wlast));
        tracep->fullIData(oldp+804,(((2U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wb_state))
                                      ? (0xffffffe0U 
                                         & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr)
                                      : 0U)),32);
        tracep->fullBit(oldp+805,(((2U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wb_state))
                                    ? 1U : 0U)));
        tracep->fullBit(oldp+806,((1U & (((2U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                                           ? 1U : 0U) 
                                         & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_arvalid))))));
        tracep->fullBit(oldp+807,(((~ ((2U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                                        ? 1U : 0U)) 
                                   & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_arvalid))));
        tracep->fullBit(oldp+808,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__crossbar_e__DOT__req_both));
        tracep->fullBit(oldp+809,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__crossbar_e__DOT__resp0));
        tracep->fullBit(oldp+810,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__crossbar_e__DOT__resp1));
        tracep->fullBit(oldp+811,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__crossbar_e__DOT__ch0_process));
        tracep->fullBit(oldp+812,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__crossbar_e__DOT__ch1_process));
        tracep->fullBit(oldp+813,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__crossbar_e__DOT__priority_flag));
        tracep->fullCData(oldp+814,((0x1fU & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc))),5);
        tracep->fullCData(oldp+815,((0x3fU & (IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc 
                                                      >> 5U)))),6);
        tracep->fullIData(oldp+816,((0x1fffffU & (IData)(
                                                         (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc 
                                                          >> 0xbU)))),21);
        tracep->fullCData(oldp+817,((0x1fU & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr)),5);
        tracep->fullCData(oldp+818,((0x3fU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                              >> 5U))),6);
        tracep->fullIData(oldp+819,((vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                     >> 0xbU)),21);
        tracep->fullIData(oldp+820,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr),32);
        tracep->fullWData(oldp+821,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table),128);
        tracep->fullIData(oldp+825,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
                                    [(0x7eU & ((IData)(
                                                       (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc 
                                                        >> 5U)) 
                                               << 1U))]),21);
        tracep->fullIData(oldp+826,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
                                    [(1U | (0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc 
                                                      >> 5U)) 
                                             << 1U)))]),21);
        tracep->fullBit(oldp+827,((1U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
                                         (3U & ((IData)(
                                                        (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc 
                                                         >> 5U)) 
                                                >> 4U))] 
                                         >> (0x1eU 
                                             & ((IData)(
                                                        (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc 
                                                         >> 5U)) 
                                                << 1U))))));
        tracep->fullBit(oldp+828,((1U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
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
        tracep->fullBit(oldp+829,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way0_hit));
        tracep->fullBit(oldp+830,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_hit));
        tracep->fullBit(oldp+831,((1U & (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                                           ? 1U : 0U) 
                                         & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace))))));
        tracep->fullBit(oldp+832,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
        if ((1U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))) {
            __Vtemp458[0U] = ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way0_hit)
                               ? vlSelf->ysyx_22040750__DOT__io_sram0_rdata[0U]
                               : vlSelf->ysyx_22040750__DOT__io_sram2_rdata[0U]);
            __Vtemp458[1U] = ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way0_hit)
                               ? vlSelf->ysyx_22040750__DOT__io_sram0_rdata[1U]
                               : vlSelf->ysyx_22040750__DOT__io_sram2_rdata[1U]);
            __Vtemp458[2U] = ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way0_hit)
                               ? vlSelf->ysyx_22040750__DOT__io_sram0_rdata[2U]
                               : vlSelf->ysyx_22040750__DOT__io_sram2_rdata[2U]);
            __Vtemp458[3U] = ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way0_hit)
                               ? vlSelf->ysyx_22040750__DOT__io_sram0_rdata[3U]
                               : vlSelf->ysyx_22040750__DOT__io_sram2_rdata[3U]);
            __Vtemp458[4U] = ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way0_hit)
                               ? vlSelf->ysyx_22040750__DOT__io_sram1_rdata[0U]
                               : vlSelf->ysyx_22040750__DOT__io_sram3_rdata[0U]);
            __Vtemp458[5U] = ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way0_hit)
                               ? vlSelf->ysyx_22040750__DOT__io_sram1_rdata[1U]
                               : vlSelf->ysyx_22040750__DOT__io_sram3_rdata[1U]);
            __Vtemp458[6U] = ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way0_hit)
                               ? vlSelf->ysyx_22040750__DOT__io_sram1_rdata[2U]
                               : vlSelf->ysyx_22040750__DOT__io_sram3_rdata[2U]);
            __Vtemp458[7U] = ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way0_hit)
                               ? vlSelf->ysyx_22040750__DOT__io_sram1_rdata[3U]
                               : vlSelf->ysyx_22040750__DOT__io_sram3_rdata[3U]);
        } else {
            __Vtemp458[0U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[0U];
            __Vtemp458[1U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[1U];
            __Vtemp458[2U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[2U];
            __Vtemp458[3U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[3U];
            __Vtemp458[4U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[4U];
            __Vtemp458[5U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[5U];
            __Vtemp458[6U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[6U];
            __Vtemp458[7U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[7U];
        }
        tracep->fullWData(oldp+833,(__Vtemp458),256);
        if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way0_hit) {
            __Vtemp461[0U] = vlSelf->ysyx_22040750__DOT__io_sram0_rdata[0U];
            __Vtemp461[1U] = vlSelf->ysyx_22040750__DOT__io_sram0_rdata[1U];
            __Vtemp461[2U] = vlSelf->ysyx_22040750__DOT__io_sram0_rdata[2U];
            __Vtemp461[3U] = vlSelf->ysyx_22040750__DOT__io_sram0_rdata[3U];
            __Vtemp461[4U] = vlSelf->ysyx_22040750__DOT__io_sram1_rdata[0U];
            __Vtemp461[5U] = vlSelf->ysyx_22040750__DOT__io_sram1_rdata[1U];
            __Vtemp461[6U] = vlSelf->ysyx_22040750__DOT__io_sram1_rdata[2U];
            __Vtemp461[7U] = vlSelf->ysyx_22040750__DOT__io_sram1_rdata[3U];
        } else {
            __Vtemp461[0U] = vlSelf->ysyx_22040750__DOT__io_sram2_rdata[0U];
            __Vtemp461[1U] = vlSelf->ysyx_22040750__DOT__io_sram2_rdata[1U];
            __Vtemp461[2U] = vlSelf->ysyx_22040750__DOT__io_sram2_rdata[2U];
            __Vtemp461[3U] = vlSelf->ysyx_22040750__DOT__io_sram2_rdata[3U];
            __Vtemp461[4U] = vlSelf->ysyx_22040750__DOT__io_sram3_rdata[0U];
            __Vtemp461[5U] = vlSelf->ysyx_22040750__DOT__io_sram3_rdata[1U];
            __Vtemp461[6U] = vlSelf->ysyx_22040750__DOT__io_sram3_rdata[2U];
            __Vtemp461[7U] = vlSelf->ysyx_22040750__DOT__io_sram3_rdata[3U];
        }
        tracep->fullWData(oldp+841,(__Vtemp461),256);
        tracep->fullBit(oldp+849,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__rd_hit));
        tracep->fullBit(oldp+850,(((IData)(vlSelf->ysyx_22040750__DOT__cpu_pc_valid) 
                                   & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__rd_hit)))));
        tracep->fullBit(oldp+851,((4U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))));
        tracep->fullBit(oldp+852,(((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                                    ? 1U : 0U)));
        tracep->fullCData(oldp+853,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state),4);
        tracep->fullBit(oldp+854,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mmio_flag));
        tracep->fullSData(oldp+855,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state),13);
        tracep->fullBit(oldp+856,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__replace_dirty));
        tracep->fullBit(oldp+857,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__rd_hit));
        tracep->fullBit(oldp+858,((((~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit)) 
                                    & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_reg_e__DOT__mem_rd_en)) 
                                   & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mmio_flag)))));
        tracep->fullBit(oldp+859,(((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                    ? 1U : 0U)));
        tracep->fullBit(oldp+860,(((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                    ? 1U : 0U)));
        tracep->fullBit(oldp+861,(((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                    ? 1U : 0U)));
        tracep->fullBit(oldp+862,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit));
        tracep->fullBit(oldp+863,((((~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit)) 
                                    & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_reg_e__DOT__mem_wr_en)) 
                                   & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mmio_flag)))));
        tracep->fullBit(oldp+864,(((0x100U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                    ? 1U : 0U)));
        tracep->fullBit(oldp+865,(((0x200U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                    ? 1U : 0U)));
        tracep->fullBit(oldp+866,(((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                    ? 1U : 0U)));
        tracep->fullCData(oldp+867,((0x1fU & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_mem_addr))),5);
        tracep->fullCData(oldp+868,((0x1fU & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr)),5);
        tracep->fullCData(oldp+869,((0x3fU & (IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_mem_addr 
                                                      >> 5U)))),6);
        tracep->fullCData(oldp+870,((0x3fU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                              >> 5U))),6);
        tracep->fullIData(oldp+871,((0x1fffffU & (IData)(
                                                         (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_mem_addr 
                                                          >> 0xbU)))),21);
        tracep->fullIData(oldp+872,((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                     >> 0xbU)),21);
        tracep->fullIData(oldp+873,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr),32);
        tracep->fullCData(oldp+874,((0xffU & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cpu_mask_reg)))),8);
        tracep->fullIData(oldp+875,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__sram_wmaskB),32);
        tracep->fullQData(oldp+876,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cpu_reg),64);
        tracep->fullCData(oldp+878,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cpu_mask_reg),8);
        tracep->fullBit(oldp+879,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__sram_wflag));
        tracep->fullWData(oldp+880,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table),128);
        tracep->fullWData(oldp+884,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table),128);
        tracep->fullIData(oldp+888,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
                                    [(0x7eU & ((IData)(
                                                       (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_mem_addr 
                                                        >> 5U)) 
                                               << 1U))]),21);
        tracep->fullIData(oldp+889,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
                                    [(1U | (0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_mem_addr 
                                                      >> 5U)) 
                                             << 1U)))]),21);
        tracep->fullBit(oldp+890,((1U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
                                         (3U & ((IData)(
                                                        (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_mem_addr 
                                                         >> 5U)) 
                                                >> 4U))] 
                                         >> (0x1eU 
                                             & ((IData)(
                                                        (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_mem_addr 
                                                         >> 5U)) 
                                                << 1U))))));
        tracep->fullBit(oldp+891,((1U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
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
        tracep->fullBit(oldp+892,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way0_hit));
        tracep->fullBit(oldp+893,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit));
        tracep->fullBit(oldp+894,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit));
        tracep->fullBit(oldp+895,((1U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
                                         (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 9U))] 
                                         >> (0x1eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U))))));
        tracep->fullBit(oldp+896,((1U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
                                         (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 9U))] 
                                         >> (0x1fU 
                                             & (1U 
                                                | (0x7eU 
                                                   & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                      >> 4U))))))));
        tracep->fullBit(oldp+897,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
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
        tracep->fullBit(oldp+898,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op));
        tracep->fullCData(oldp+899,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wb_state),3);
        tracep->fullCData(oldp+900,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wdata_cnt),2);
        if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op) {
            __Vtemp462[0U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[0U];
            __Vtemp462[1U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[1U];
            __Vtemp462[2U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[2U];
            __Vtemp462[3U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[3U];
            __Vtemp462[4U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[4U];
            __Vtemp462[5U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[5U];
            __Vtemp462[6U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[6U];
            __Vtemp462[7U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[7U];
        } else {
            __Vtemp462[0U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[0U];
            __Vtemp462[1U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[1U];
            __Vtemp462[2U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[2U];
            __Vtemp462[3U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[3U];
            __Vtemp462[4U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[4U];
            __Vtemp462[5U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[5U];
            __Vtemp462[6U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[6U];
            __Vtemp462[7U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[7U];
        }
        tracep->fullWData(oldp+901,(__Vtemp462),256);
        tracep->fullBit(oldp+909,((1U & (~ (IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen)))));
        __Vtemp466[0U] = (~ (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                               ? 1U : 0U) ? Vysyx_22040750__ConstPool__CONST_9e67c271_0[0U]
                              : Vysyx_22040750__ConstPool__CONST_5b979007_0[0U]));
        __Vtemp466[1U] = (~ (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                               ? 1U : 0U) ? Vysyx_22040750__ConstPool__CONST_9e67c271_0[1U]
                              : Vysyx_22040750__ConstPool__CONST_5b979007_0[1U]));
        __Vtemp466[2U] = (~ (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                               ? 1U : 0U) ? Vysyx_22040750__ConstPool__CONST_9e67c271_0[2U]
                              : Vysyx_22040750__ConstPool__CONST_5b979007_0[2U]));
        __Vtemp466[3U] = (~ (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                               ? 1U : 0U) ? Vysyx_22040750__ConstPool__CONST_9e67c271_0[3U]
                              : Vysyx_22040750__ConstPool__CONST_5b979007_0[3U]));
        tracep->fullWData(oldp+910,(__Vtemp466),128);
        tracep->fullBit(oldp+914,((1U & (~ ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen) 
                                            >> 1U)))));
        __Vtemp470[0U] = (~ (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                               ? 1U : 0U) ? Vysyx_22040750__ConstPool__CONST_9e67c271_0[4U]
                              : Vysyx_22040750__ConstPool__CONST_5b979007_0[4U]));
        __Vtemp470[1U] = (~ (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                               ? 1U : 0U) ? Vysyx_22040750__ConstPool__CONST_9e67c271_0[5U]
                              : Vysyx_22040750__ConstPool__CONST_5b979007_0[5U]));
        __Vtemp470[2U] = (~ (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                               ? 1U : 0U) ? Vysyx_22040750__ConstPool__CONST_9e67c271_0[6U]
                              : Vysyx_22040750__ConstPool__CONST_5b979007_0[6U]));
        __Vtemp470[3U] = (~ (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                               ? 1U : 0U) ? Vysyx_22040750__ConstPool__CONST_9e67c271_0[7U]
                              : Vysyx_22040750__ConstPool__CONST_5b979007_0[7U]));
        tracep->fullWData(oldp+915,(__Vtemp470),128);
        tracep->fullBit(oldp+919,((1U & (~ ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen) 
                                            >> 2U)))));
        tracep->fullBit(oldp+920,((1U & (~ ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen) 
                                            >> 3U)))));
        tracep->fullBit(oldp+921,((1U & (~ ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen) 
                                            >> 4U)))));
        __Vtemp472[0U] = (~ vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[0U]);
        __Vtemp472[1U] = (~ vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[1U]);
        __Vtemp472[2U] = (~ vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[2U]);
        __Vtemp472[3U] = (~ vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[3U]);
        tracep->fullWData(oldp+922,(__Vtemp472),128);
        tracep->fullBit(oldp+926,((1U & (~ ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen) 
                                            >> 5U)))));
        __Vtemp474[0U] = (~ vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[4U]);
        __Vtemp474[1U] = (~ vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[5U]);
        __Vtemp474[2U] = (~ vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[6U]);
        __Vtemp474[3U] = (~ vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[7U]);
        tracep->fullWData(oldp+927,(__Vtemp474),128);
        tracep->fullBit(oldp+931,((1U & (~ ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen) 
                                            >> 6U)))));
        tracep->fullBit(oldp+932,((1U & (~ ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen) 
                                            >> 7U)))));
        tracep->fullBit(oldp+933,((1U & (IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen))));
        tracep->fullBit(oldp+934,((1U & ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen) 
                                         >> 1U))));
        tracep->fullBit(oldp+935,((1U & ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen) 
                                         >> 2U))));
        tracep->fullBit(oldp+936,((1U & ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen) 
                                         >> 3U))));
        tracep->fullBit(oldp+937,((1U & ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen) 
                                         >> 4U))));
        tracep->fullBit(oldp+938,((1U & ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen) 
                                         >> 5U))));
        tracep->fullBit(oldp+939,((1U & ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen) 
                                         >> 6U))));
        tracep->fullBit(oldp+940,((1U & ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen) 
                                         >> 7U))));
        tracep->fullCData(oldp+941,(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen),8);
        tracep->fullBit(oldp+942,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_icache_rvalid));
        tracep->fullBit(oldp+943,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_rvalid));
        tracep->fullBit(oldp+944,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_icache_rlast));
        tracep->fullBit(oldp+945,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_rlast));
        tracep->fullBit(oldp+946,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_icache_arready));
        tracep->fullBit(oldp+947,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_arready));
        tracep->fullBit(oldp+948,(((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_icache_rvalid) 
                                   & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_icache_rlast))));
        tracep->fullBit(oldp+949,(((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_rvalid) 
                                   & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_rlast))));
        tracep->fullCData(oldp+950,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__next_state),4);
        tracep->fullSData(oldp+951,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__next_state),13);
        tracep->fullBit(oldp+952,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__rd_handshake));
        tracep->fullCData(oldp+953,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wb_next_state),3);
        tracep->fullBit(oldp+954,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_handshake));
        tracep->fullBit(oldp+955,((1U & (~ (IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen)))));
        tracep->fullBit(oldp+956,((1U & (~ ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen) 
                                            >> 1U)))));
        tracep->fullBit(oldp+957,((1U & (~ ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen) 
                                            >> 2U)))));
        tracep->fullBit(oldp+958,((1U & (~ ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen) 
                                            >> 3U)))));
        tracep->fullBit(oldp+959,((1U & (~ ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen) 
                                            >> 4U)))));
        tracep->fullBit(oldp+960,((1U & (~ ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen) 
                                            >> 5U)))));
        tracep->fullBit(oldp+961,((1U & (~ ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen) 
                                            >> 6U)))));
        tracep->fullBit(oldp+962,((1U & (~ ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen) 
                                            >> 7U)))));
        tracep->fullBit(oldp+963,(vlSelf->clock));
        tracep->fullBit(oldp+964,(vlSelf->reset));
        tracep->fullBit(oldp+965,(vlSelf->io_interrupt));
        tracep->fullBit(oldp+966,(vlSelf->io_master_awready));
        tracep->fullBit(oldp+967,(vlSelf->io_master_awvalid));
        tracep->fullCData(oldp+968,(vlSelf->io_master_awid),4);
        tracep->fullIData(oldp+969,(vlSelf->io_master_awaddr),32);
        tracep->fullCData(oldp+970,(vlSelf->io_master_awlen),8);
        tracep->fullCData(oldp+971,(vlSelf->io_master_awsize),3);
        tracep->fullCData(oldp+972,(vlSelf->io_master_awburst),2);
        tracep->fullBit(oldp+973,(vlSelf->io_master_wready));
        tracep->fullBit(oldp+974,(vlSelf->io_master_wvalid));
        tracep->fullQData(oldp+975,(vlSelf->io_master_wdata),64);
        tracep->fullCData(oldp+977,(vlSelf->io_master_wstrb),8);
        tracep->fullBit(oldp+978,(vlSelf->io_master_wlast));
        tracep->fullBit(oldp+979,(vlSelf->io_master_bready));
        tracep->fullBit(oldp+980,(vlSelf->io_master_bvalid));
        tracep->fullCData(oldp+981,(vlSelf->io_master_bid),4);
        tracep->fullCData(oldp+982,(vlSelf->io_master_bresp),2);
        tracep->fullBit(oldp+983,(vlSelf->io_master_arready));
        tracep->fullBit(oldp+984,(vlSelf->io_master_arvalid));
        tracep->fullCData(oldp+985,(vlSelf->io_master_arid),4);
        tracep->fullIData(oldp+986,(vlSelf->io_master_araddr),32);
        tracep->fullCData(oldp+987,(vlSelf->io_master_arlen),8);
        tracep->fullCData(oldp+988,(vlSelf->io_master_arsize),3);
        tracep->fullCData(oldp+989,(vlSelf->io_master_arburst),2);
        tracep->fullBit(oldp+990,(vlSelf->io_master_rready));
        tracep->fullBit(oldp+991,(vlSelf->io_master_rvalid));
        tracep->fullCData(oldp+992,(vlSelf->io_master_rid),4);
        tracep->fullCData(oldp+993,(vlSelf->io_master_rresp),2);
        tracep->fullQData(oldp+994,(vlSelf->io_master_rdata),64);
        tracep->fullBit(oldp+996,(vlSelf->io_master_rlast));
        tracep->fullBit(oldp+997,(vlSelf->io_slave_awready));
        tracep->fullBit(oldp+998,(vlSelf->io_slave_awvalid));
        tracep->fullCData(oldp+999,(vlSelf->io_slave_awid),4);
        tracep->fullIData(oldp+1000,(vlSelf->io_slave_awaddr),32);
        tracep->fullCData(oldp+1001,(vlSelf->io_slave_awlen),8);
        tracep->fullCData(oldp+1002,(vlSelf->io_slave_awsize),3);
        tracep->fullCData(oldp+1003,(vlSelf->io_slave_awburst),2);
        tracep->fullBit(oldp+1004,(vlSelf->io_slave_wready));
        tracep->fullBit(oldp+1005,(vlSelf->io_slave_wvalid));
        tracep->fullQData(oldp+1006,(vlSelf->io_slave_wdata),64);
        tracep->fullCData(oldp+1008,(vlSelf->io_slave_wstrb),8);
        tracep->fullBit(oldp+1009,(vlSelf->io_slave_wlast));
        tracep->fullBit(oldp+1010,(vlSelf->io_slave_bready));
        tracep->fullBit(oldp+1011,(vlSelf->io_slave_bvalid));
        tracep->fullCData(oldp+1012,(vlSelf->io_slave_bid),4);
        tracep->fullCData(oldp+1013,(vlSelf->io_slave_bresp),2);
        tracep->fullBit(oldp+1014,(vlSelf->io_slave_arready));
        tracep->fullBit(oldp+1015,(vlSelf->io_slave_arvalid));
        tracep->fullCData(oldp+1016,(vlSelf->io_slave_arid),4);
        tracep->fullIData(oldp+1017,(vlSelf->io_slave_araddr),32);
        tracep->fullCData(oldp+1018,(vlSelf->io_slave_arlen),8);
        tracep->fullCData(oldp+1019,(vlSelf->io_slave_arsize),3);
        tracep->fullCData(oldp+1020,(vlSelf->io_slave_arburst),2);
        tracep->fullBit(oldp+1021,(vlSelf->io_slave_rready));
        tracep->fullBit(oldp+1022,(vlSelf->io_slave_rvalid));
        tracep->fullCData(oldp+1023,(vlSelf->io_slave_rid),4);
        tracep->fullCData(oldp+1024,(vlSelf->io_slave_rresp),2);
        tracep->fullQData(oldp+1025,(vlSelf->io_slave_rdata),64);
        tracep->fullBit(oldp+1027,(vlSelf->io_slave_rlast));
        tracep->fullCData(oldp+1028,(((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__rd_hit)
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
        tracep->fullQData(oldp+1029,(((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__crossbar_e__DOT__ch0_process)
                                       ? vlSelf->io_master_rdata
                                       : 0ULL)),64);
        tracep->fullQData(oldp+1031,(((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__crossbar_e__DOT__ch1_process)
                                       ? vlSelf->io_master_rdata
                                       : 0ULL)),64);
        tracep->fullBit(oldp+1033,(((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_icache_arready) 
                                    & ((2U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                                        ? 1U : 0U))));
        tracep->fullBit(oldp+1034,(((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_arready) 
                                    & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_arvalid))));
        tracep->fullBit(oldp+1035,((1U & (((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_rlast) 
                                           | ((0x10U 
                                               == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                               ? 1U
                                               : 0U)) 
                                          | ((0x200U 
                                              == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                              ? 1U : 0U)))));
        tracep->fullBit(oldp+1036,(((IData)(vlSelf->io_master_awready) 
                                    & ((2U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wb_state))
                                        ? 1U : 0U))));
        tracep->fullQData(oldp+1037,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_mem_data),64);
        tracep->fullIData(oldp+1039,(0x40U),32);
        tracep->fullIData(oldp+1040,(3U),32);
        tracep->fullIData(oldp+1041,(3U),32);
        tracep->fullQData(oldp+1042,(0x7ffffffcULL),64);
        tracep->fullSData(oldp+1044,(1U),15);
        tracep->fullSData(oldp+1045,(2U),15);
        tracep->fullSData(oldp+1046,(4U),15);
        tracep->fullSData(oldp+1047,(8U),15);
        tracep->fullSData(oldp+1048,(0x10U),15);
        tracep->fullSData(oldp+1049,(0x20U),15);
        tracep->fullSData(oldp+1050,(0x40U),15);
        tracep->fullSData(oldp+1051,(0x80U),15);
        tracep->fullSData(oldp+1052,(0x100U),15);
        tracep->fullSData(oldp+1053,(0x200U),15);
        tracep->fullSData(oldp+1054,(0x400U),15);
        tracep->fullSData(oldp+1055,(0x800U),15);
        tracep->fullSData(oldp+1056,(0x1000U),15);
        tracep->fullSData(oldp+1057,(0x2000U),15);
        tracep->fullSData(oldp+1058,(0x4000U),15);
        tracep->fullCData(oldp+1059,(1U),3);
        tracep->fullCData(oldp+1060,(2U),3);
        tracep->fullCData(oldp+1061,(4U),3);
        tracep->fullBit(oldp+1062,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_valid_d));
        tracep->fullBit(oldp+1063,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__div_valid_d));
        tracep->fullBit(oldp+1064,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__end_flag));
        tracep->fullIData(oldp+1065,(2U),32);
        tracep->fullIData(oldp+1066,(2U),32);
        tracep->fullIData(oldp+1067,(0x1000U),32);
        tracep->fullSData(oldp+1068,(0x341U),12);
        tracep->fullSData(oldp+1069,(0x300U),12);
        tracep->fullSData(oldp+1070,(0x305U),12);
        tracep->fullSData(oldp+1071,(0x342U),12);
        tracep->fullSData(oldp+1072,(0x340U),12);
        tracep->fullBit(oldp+1073,(1U));
        tracep->fullCData(oldp+1074,(3U),8);
        tracep->fullCData(oldp+1075,(3U),3);
        tracep->fullCData(oldp+1076,(0xffU),8);
        tracep->fullBit(oldp+1077,(0U));
        tracep->fullBit(oldp+1078,(1U));
        tracep->fullCData(oldp+1079,(0U),2);
        tracep->fullCData(oldp+1080,(1U),2);
        tracep->fullCData(oldp+1081,(2U),2);
        tracep->fullCData(oldp+1082,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__crossbar_e__DOT__current_state),2);
        tracep->fullCData(oldp+1083,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__crossbar_e__DOT__next_state),2);
        tracep->fullIData(oldp+1084,(0x20U),32);
        tracep->fullIData(oldp+1085,(0x80U),32);
        tracep->fullIData(oldp+1086,(5U),32);
        tracep->fullIData(oldp+1087,(6U),32);
        tracep->fullIData(oldp+1088,(0x15U),32);
        tracep->fullCData(oldp+1089,(0U),4);
        tracep->fullCData(oldp+1090,(1U),4);
        tracep->fullCData(oldp+1091,(2U),4);
        tracep->fullCData(oldp+1092,(4U),4);
        tracep->fullCData(oldp+1093,(8U),4);
        tracep->fullSData(oldp+1094,(1U),13);
        tracep->fullSData(oldp+1095,(2U),13);
        tracep->fullSData(oldp+1096,(4U),13);
        tracep->fullSData(oldp+1097,(8U),13);
        tracep->fullSData(oldp+1098,(0x10U),13);
        tracep->fullSData(oldp+1099,(0x20U),13);
        tracep->fullSData(oldp+1100,(0x40U),13);
        tracep->fullSData(oldp+1101,(0x80U),13);
        tracep->fullSData(oldp+1102,(0x100U),13);
        tracep->fullSData(oldp+1103,(0x200U),13);
        tracep->fullSData(oldp+1104,(0x400U),13);
        tracep->fullSData(oldp+1105,(0x800U),13);
        tracep->fullSData(oldp+1106,(0x1000U),13);
    }
}

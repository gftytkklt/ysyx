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
        tracep->declBit(c+988,"clock", false,-1);
        tracep->declBit(c+989,"reset", false,-1);
        tracep->declBit(c+990,"io_interrupt", false,-1);
        tracep->declBit(c+991,"io_master_awready", false,-1);
        tracep->declBit(c+992,"io_master_awvalid", false,-1);
        tracep->declBus(c+993,"io_master_awid", false,-1, 3,0);
        tracep->declBus(c+994,"io_master_awaddr", false,-1, 31,0);
        tracep->declBus(c+995,"io_master_awlen", false,-1, 7,0);
        tracep->declBus(c+996,"io_master_awsize", false,-1, 2,0);
        tracep->declBus(c+997,"io_master_awburst", false,-1, 1,0);
        tracep->declBit(c+998,"io_master_wready", false,-1);
        tracep->declBit(c+999,"io_master_wvalid", false,-1);
        tracep->declQuad(c+1000,"io_master_wdata", false,-1, 63,0);
        tracep->declBus(c+1002,"io_master_wstrb", false,-1, 7,0);
        tracep->declBit(c+1003,"io_master_wlast", false,-1);
        tracep->declBit(c+1004,"io_master_bready", false,-1);
        tracep->declBit(c+1005,"io_master_bvalid", false,-1);
        tracep->declBus(c+1006,"io_master_bid", false,-1, 3,0);
        tracep->declBus(c+1007,"io_master_bresp", false,-1, 1,0);
        tracep->declBit(c+1008,"io_master_arready", false,-1);
        tracep->declBit(c+1009,"io_master_arvalid", false,-1);
        tracep->declBus(c+1010,"io_master_arid", false,-1, 3,0);
        tracep->declBus(c+1011,"io_master_araddr", false,-1, 31,0);
        tracep->declBus(c+1012,"io_master_arlen", false,-1, 7,0);
        tracep->declBus(c+1013,"io_master_arsize", false,-1, 2,0);
        tracep->declBus(c+1014,"io_master_arburst", false,-1, 1,0);
        tracep->declBit(c+1015,"io_master_rready", false,-1);
        tracep->declBit(c+1016,"io_master_rvalid", false,-1);
        tracep->declBus(c+1017,"io_master_rid", false,-1, 3,0);
        tracep->declBus(c+1018,"io_master_rresp", false,-1, 1,0);
        tracep->declQuad(c+1019,"io_master_rdata", false,-1, 63,0);
        tracep->declBit(c+1021,"io_master_rlast", false,-1);
        tracep->declBit(c+1022,"io_slave_awready", false,-1);
        tracep->declBit(c+1023,"io_slave_awvalid", false,-1);
        tracep->declBus(c+1024,"io_slave_awid", false,-1, 3,0);
        tracep->declBus(c+1025,"io_slave_awaddr", false,-1, 31,0);
        tracep->declBus(c+1026,"io_slave_awlen", false,-1, 7,0);
        tracep->declBus(c+1027,"io_slave_awsize", false,-1, 2,0);
        tracep->declBus(c+1028,"io_slave_awburst", false,-1, 1,0);
        tracep->declBit(c+1029,"io_slave_wready", false,-1);
        tracep->declBit(c+1030,"io_slave_wvalid", false,-1);
        tracep->declQuad(c+1031,"io_slave_wdata", false,-1, 63,0);
        tracep->declBus(c+1033,"io_slave_wstrb", false,-1, 7,0);
        tracep->declBit(c+1034,"io_slave_wlast", false,-1);
        tracep->declBit(c+1035,"io_slave_bready", false,-1);
        tracep->declBit(c+1036,"io_slave_bvalid", false,-1);
        tracep->declBus(c+1037,"io_slave_bid", false,-1, 3,0);
        tracep->declBus(c+1038,"io_slave_bresp", false,-1, 1,0);
        tracep->declBit(c+1039,"io_slave_arready", false,-1);
        tracep->declBit(c+1040,"io_slave_arvalid", false,-1);
        tracep->declBus(c+1041,"io_slave_arid", false,-1, 3,0);
        tracep->declBus(c+1042,"io_slave_araddr", false,-1, 31,0);
        tracep->declBus(c+1043,"io_slave_arlen", false,-1, 7,0);
        tracep->declBus(c+1044,"io_slave_arsize", false,-1, 2,0);
        tracep->declBus(c+1045,"io_slave_arburst", false,-1, 1,0);
        tracep->declBit(c+1046,"io_slave_rready", false,-1);
        tracep->declBit(c+1047,"io_slave_rvalid", false,-1);
        tracep->declBus(c+1048,"io_slave_rid", false,-1, 3,0);
        tracep->declBus(c+1049,"io_slave_rresp", false,-1, 1,0);
        tracep->declQuad(c+1050,"io_slave_rdata", false,-1, 63,0);
        tracep->declBit(c+1052,"io_slave_rlast", false,-1);
        tracep->declBit(c+988,"ysyx_22040750 clock", false,-1);
        tracep->declBit(c+989,"ysyx_22040750 reset", false,-1);
        tracep->declBit(c+990,"ysyx_22040750 io_interrupt", false,-1);
        tracep->declBit(c+991,"ysyx_22040750 io_master_awready", false,-1);
        tracep->declBit(c+992,"ysyx_22040750 io_master_awvalid", false,-1);
        tracep->declBus(c+993,"ysyx_22040750 io_master_awid", false,-1, 3,0);
        tracep->declBus(c+994,"ysyx_22040750 io_master_awaddr", false,-1, 31,0);
        tracep->declBus(c+995,"ysyx_22040750 io_master_awlen", false,-1, 7,0);
        tracep->declBus(c+996,"ysyx_22040750 io_master_awsize", false,-1, 2,0);
        tracep->declBus(c+997,"ysyx_22040750 io_master_awburst", false,-1, 1,0);
        tracep->declBit(c+998,"ysyx_22040750 io_master_wready", false,-1);
        tracep->declBit(c+999,"ysyx_22040750 io_master_wvalid", false,-1);
        tracep->declQuad(c+1000,"ysyx_22040750 io_master_wdata", false,-1, 63,0);
        tracep->declBus(c+1002,"ysyx_22040750 io_master_wstrb", false,-1, 7,0);
        tracep->declBit(c+1003,"ysyx_22040750 io_master_wlast", false,-1);
        tracep->declBit(c+1004,"ysyx_22040750 io_master_bready", false,-1);
        tracep->declBit(c+1005,"ysyx_22040750 io_master_bvalid", false,-1);
        tracep->declBus(c+1006,"ysyx_22040750 io_master_bid", false,-1, 3,0);
        tracep->declBus(c+1007,"ysyx_22040750 io_master_bresp", false,-1, 1,0);
        tracep->declBit(c+1008,"ysyx_22040750 io_master_arready", false,-1);
        tracep->declBit(c+1009,"ysyx_22040750 io_master_arvalid", false,-1);
        tracep->declBus(c+1010,"ysyx_22040750 io_master_arid", false,-1, 3,0);
        tracep->declBus(c+1011,"ysyx_22040750 io_master_araddr", false,-1, 31,0);
        tracep->declBus(c+1012,"ysyx_22040750 io_master_arlen", false,-1, 7,0);
        tracep->declBus(c+1013,"ysyx_22040750 io_master_arsize", false,-1, 2,0);
        tracep->declBus(c+1014,"ysyx_22040750 io_master_arburst", false,-1, 1,0);
        tracep->declBit(c+1015,"ysyx_22040750 io_master_rready", false,-1);
        tracep->declBit(c+1016,"ysyx_22040750 io_master_rvalid", false,-1);
        tracep->declBus(c+1017,"ysyx_22040750 io_master_rid", false,-1, 3,0);
        tracep->declBus(c+1018,"ysyx_22040750 io_master_rresp", false,-1, 1,0);
        tracep->declQuad(c+1019,"ysyx_22040750 io_master_rdata", false,-1, 63,0);
        tracep->declBit(c+1021,"ysyx_22040750 io_master_rlast", false,-1);
        tracep->declBit(c+1022,"ysyx_22040750 io_slave_awready", false,-1);
        tracep->declBit(c+1023,"ysyx_22040750 io_slave_awvalid", false,-1);
        tracep->declBus(c+1024,"ysyx_22040750 io_slave_awid", false,-1, 3,0);
        tracep->declBus(c+1025,"ysyx_22040750 io_slave_awaddr", false,-1, 31,0);
        tracep->declBus(c+1026,"ysyx_22040750 io_slave_awlen", false,-1, 7,0);
        tracep->declBus(c+1027,"ysyx_22040750 io_slave_awsize", false,-1, 2,0);
        tracep->declBus(c+1028,"ysyx_22040750 io_slave_awburst", false,-1, 1,0);
        tracep->declBit(c+1029,"ysyx_22040750 io_slave_wready", false,-1);
        tracep->declBit(c+1030,"ysyx_22040750 io_slave_wvalid", false,-1);
        tracep->declQuad(c+1031,"ysyx_22040750 io_slave_wdata", false,-1, 63,0);
        tracep->declBus(c+1033,"ysyx_22040750 io_slave_wstrb", false,-1, 7,0);
        tracep->declBit(c+1034,"ysyx_22040750 io_slave_wlast", false,-1);
        tracep->declBit(c+1035,"ysyx_22040750 io_slave_bready", false,-1);
        tracep->declBit(c+1036,"ysyx_22040750 io_slave_bvalid", false,-1);
        tracep->declBus(c+1037,"ysyx_22040750 io_slave_bid", false,-1, 3,0);
        tracep->declBus(c+1038,"ysyx_22040750 io_slave_bresp", false,-1, 1,0);
        tracep->declBit(c+1039,"ysyx_22040750 io_slave_arready", false,-1);
        tracep->declBit(c+1040,"ysyx_22040750 io_slave_arvalid", false,-1);
        tracep->declBus(c+1041,"ysyx_22040750 io_slave_arid", false,-1, 3,0);
        tracep->declBus(c+1042,"ysyx_22040750 io_slave_araddr", false,-1, 31,0);
        tracep->declBus(c+1043,"ysyx_22040750 io_slave_arlen", false,-1, 7,0);
        tracep->declBus(c+1044,"ysyx_22040750 io_slave_arsize", false,-1, 2,0);
        tracep->declBus(c+1045,"ysyx_22040750 io_slave_arburst", false,-1, 1,0);
        tracep->declBit(c+1046,"ysyx_22040750 io_slave_rready", false,-1);
        tracep->declBit(c+1047,"ysyx_22040750 io_slave_rvalid", false,-1);
        tracep->declBus(c+1048,"ysyx_22040750 io_slave_rid", false,-1, 3,0);
        tracep->declBus(c+1049,"ysyx_22040750 io_slave_rresp", false,-1, 1,0);
        tracep->declQuad(c+1050,"ysyx_22040750 io_slave_rdata", false,-1, 63,0);
        tracep->declBit(c+1052,"ysyx_22040750 io_slave_rlast", false,-1);
        tracep->declBus(c+942,"ysyx_22040750 io_sram0_addr", false,-1, 5,0);
        tracep->declBit(c+943,"ysyx_22040750 io_sram0_cen", false,-1);
        tracep->declBit(c+1,"ysyx_22040750 io_sram0_wen", false,-1);
        tracep->declArray(c+2,"ysyx_22040750 io_sram0_wmask", false,-1, 127,0);
        tracep->declArray(c+6,"ysyx_22040750 io_sram0_wdata", false,-1, 127,0);
        tracep->declArray(c+10,"ysyx_22040750 io_sram0_rdata", false,-1, 127,0);
        tracep->declBus(c+942,"ysyx_22040750 io_sram1_addr", false,-1, 5,0);
        tracep->declBit(c+944,"ysyx_22040750 io_sram1_cen", false,-1);
        tracep->declBit(c+14,"ysyx_22040750 io_sram1_wen", false,-1);
        tracep->declArray(c+15,"ysyx_22040750 io_sram1_wmask", false,-1, 127,0);
        tracep->declArray(c+19,"ysyx_22040750 io_sram1_wdata", false,-1, 127,0);
        tracep->declArray(c+23,"ysyx_22040750 io_sram1_rdata", false,-1, 127,0);
        tracep->declBus(c+942,"ysyx_22040750 io_sram2_addr", false,-1, 5,0);
        tracep->declBit(c+945,"ysyx_22040750 io_sram2_cen", false,-1);
        tracep->declBit(c+27,"ysyx_22040750 io_sram2_wen", false,-1);
        tracep->declArray(c+2,"ysyx_22040750 io_sram2_wmask", false,-1, 127,0);
        tracep->declArray(c+6,"ysyx_22040750 io_sram2_wdata", false,-1, 127,0);
        tracep->declArray(c+28,"ysyx_22040750 io_sram2_rdata", false,-1, 127,0);
        tracep->declBus(c+942,"ysyx_22040750 io_sram3_addr", false,-1, 5,0);
        tracep->declBit(c+946,"ysyx_22040750 io_sram3_cen", false,-1);
        tracep->declBit(c+32,"ysyx_22040750 io_sram3_wen", false,-1);
        tracep->declArray(c+15,"ysyx_22040750 io_sram3_wmask", false,-1, 127,0);
        tracep->declArray(c+19,"ysyx_22040750 io_sram3_wdata", false,-1, 127,0);
        tracep->declArray(c+33,"ysyx_22040750 io_sram3_rdata", false,-1, 127,0);
        tracep->declBus(c+37,"ysyx_22040750 io_sram4_addr", false,-1, 5,0);
        tracep->declBit(c+947,"ysyx_22040750 io_sram4_cen", false,-1);
        tracep->declBit(c+38,"ysyx_22040750 io_sram4_wen", false,-1);
        tracep->declArray(c+39,"ysyx_22040750 io_sram4_wmask", false,-1, 127,0);
        tracep->declArray(c+43,"ysyx_22040750 io_sram4_wdata", false,-1, 127,0);
        tracep->declArray(c+47,"ysyx_22040750 io_sram4_rdata", false,-1, 127,0);
        tracep->declBus(c+37,"ysyx_22040750 io_sram5_addr", false,-1, 5,0);
        tracep->declBit(c+948,"ysyx_22040750 io_sram5_cen", false,-1);
        tracep->declBit(c+51,"ysyx_22040750 io_sram5_wen", false,-1);
        tracep->declArray(c+52,"ysyx_22040750 io_sram5_wmask", false,-1, 127,0);
        tracep->declArray(c+56,"ysyx_22040750 io_sram5_wdata", false,-1, 127,0);
        tracep->declArray(c+60,"ysyx_22040750 io_sram5_rdata", false,-1, 127,0);
        tracep->declBus(c+37,"ysyx_22040750 io_sram6_addr", false,-1, 5,0);
        tracep->declBit(c+949,"ysyx_22040750 io_sram6_cen", false,-1);
        tracep->declBit(c+64,"ysyx_22040750 io_sram6_wen", false,-1);
        tracep->declArray(c+39,"ysyx_22040750 io_sram6_wmask", false,-1, 127,0);
        tracep->declArray(c+43,"ysyx_22040750 io_sram6_wdata", false,-1, 127,0);
        tracep->declArray(c+65,"ysyx_22040750 io_sram6_rdata", false,-1, 127,0);
        tracep->declBus(c+37,"ysyx_22040750 io_sram7_addr", false,-1, 5,0);
        tracep->declBit(c+950,"ysyx_22040750 io_sram7_cen", false,-1);
        tracep->declBit(c+69,"ysyx_22040750 io_sram7_wen", false,-1);
        tracep->declArray(c+52,"ysyx_22040750 io_sram7_wmask", false,-1, 127,0);
        tracep->declArray(c+56,"ysyx_22040750 io_sram7_wdata", false,-1, 127,0);
        tracep->declArray(c+70,"ysyx_22040750 io_sram7_rdata", false,-1, 127,0);
        tracep->declBus(c+942,"ysyx_22040750 iaddr", false,-1, 5,0);
        tracep->declBus(c+37,"ysyx_22040750 daddr", false,-1, 5,0);
        tracep->declBus(c+74,"ysyx_22040750 cpu_inst", false,-1, 31,0);
        tracep->declBus(c+75,"ysyx_22040750 cpu_pc", false,-1, 31,0);
        tracep->declBit(c+76,"ysyx_22040750 cpu_inst_valid", false,-1);
        tracep->declBit(c+951,"ysyx_22040750 cpu_pc_valid", false,-1);
        tracep->declBit(c+77,"ysyx_22040750 cpu_pc_ready", false,-1);
        tracep->declBus(c+78,"ysyx_22040750 mem_addr", false,-1, 31,0);
        tracep->declBit(c+79,"ysyx_22040750 cpu_rreq", false,-1);
        tracep->declBit(c+80,"ysyx_22040750 cpu_wreq", false,-1);
        tracep->declQuad(c+932,"ysyx_22040750 mem_rdata", false,-1, 63,0);
        tracep->declQuad(c+81,"ysyx_22040750 mem_wdata", false,-1, 63,0);
        tracep->declBit(c+934,"ysyx_22040750 mem_rvalid", false,-1);
        tracep->declBit(c+1053,"ysyx_22040750 mem_bvalid", false,-1);
        tracep->declBit(c+83,"ysyx_22040750 cpu_mem_ready", false,-1);
        tracep->declBus(c+84,"ysyx_22040750 cpu_wmask", false,-1, 7,0);
        tracep->declBit(c+988,"ysyx_22040750 cpu_core_e I_sys_clk", false,-1);
        tracep->declBit(c+989,"ysyx_22040750 cpu_core_e I_rst", false,-1);
        tracep->declBus(c+74,"ysyx_22040750 cpu_core_e I_inst", false,-1, 31,0);
        tracep->declBit(c+76,"ysyx_22040750 cpu_core_e I_inst_valid", false,-1);
        tracep->declBit(c+77,"ysyx_22040750 cpu_core_e I_pc_ready", false,-1);
        tracep->declBit(c+83,"ysyx_22040750 cpu_core_e I_mem_ready", false,-1);
        tracep->declBus(c+75,"ysyx_22040750 cpu_core_e O_pc", false,-1, 31,0);
        tracep->declBit(c+951,"ysyx_22040750 cpu_core_e O_pc_valid", false,-1);
        tracep->declBus(c+78,"ysyx_22040750 cpu_core_e O_mem_addr", false,-1, 31,0);
        tracep->declBit(c+79,"ysyx_22040750 cpu_core_e O_mem_rd_en", false,-1);
        tracep->declBit(c+80,"ysyx_22040750 cpu_core_e O_mem_wen", false,-1);
        tracep->declQuad(c+932,"ysyx_22040750 cpu_core_e I_mem_rd_data", false,-1, 63,0);
        tracep->declBit(c+934,"ysyx_22040750 cpu_core_e I_mem_rd_data_valid", false,-1);
        tracep->declBit(c+1053,"ysyx_22040750 cpu_core_e I_mem_wr_data_valid", false,-1);
        tracep->declQuad(c+81,"ysyx_22040750 cpu_core_e O_mem_wr_data", false,-1, 63,0);
        tracep->declBus(c+84,"ysyx_22040750 cpu_core_e O_mem_wr_strb", false,-1, 7,0);
        tracep->declBus(c+85,"ysyx_22040750 cpu_core_e current_pc", false,-1, 31,0);
        tracep->declBus(c+75,"ysyx_22040750 cpu_core_e dnpc", false,-1, 31,0);
        tracep->declBus(c+86,"ysyx_22040750 cpu_core_e snpc", false,-1, 31,0);
        tracep->declBus(c+87,"ysyx_22040750 cpu_core_e current_inst", false,-1, 31,0);
        tracep->declBus(c+1056,"ysyx_22040750 cpu_core_e mem_addr", false,-1, 31,0);
        tracep->declQuad(c+88,"ysyx_22040750 cpu_core_e imm", false,-1, 63,0);
        tracep->declQuad(c+90,"ysyx_22040750 cpu_core_e wr_data", false,-1, 63,0);
        tracep->declQuad(c+92,"ysyx_22040750 cpu_core_e rs1_data", false,-1, 63,0);
        tracep->declQuad(c+94,"ysyx_22040750 cpu_core_e rs2_data", false,-1, 63,0);
        tracep->declQuad(c+96,"ysyx_22040750 cpu_core_e alu_op1", false,-1, 63,0);
        tracep->declQuad(c+98,"ysyx_22040750 cpu_core_e alu_op2", false,-1, 63,0);
        tracep->declQuad(c+100,"ysyx_22040750 cpu_core_e alu_out", false,-1, 63,0);
        tracep->declQuad(c+102,"ysyx_22040750 cpu_core_e mem_in", false,-1, 63,0);
        tracep->declQuad(c+104,"ysyx_22040750 cpu_core_e mem_out", false,-1, 63,0);
        tracep->declQuad(c+106,"ysyx_22040750 cpu_core_e csr_rd_data", false,-1, 63,0);
        tracep->declQuad(c+108,"ysyx_22040750 cpu_core_e alu_csr_data", false,-1, 63,0);
        tracep->declBus(c+110,"ysyx_22040750 cpu_core_e rs1_addr", false,-1, 4,0);
        tracep->declBus(c+111,"ysyx_22040750 cpu_core_e rs2_addr", false,-1, 4,0);
        tracep->declBus(c+112,"ysyx_22040750 cpu_core_e rd_addr", false,-1, 4,0);
        tracep->declBus(c+113,"ysyx_22040750 cpu_core_e dnpc_sel", false,-1, 4,0);
        tracep->declBus(c+114,"ysyx_22040750 cpu_core_e regin_sel", false,-1, 2,0);
        tracep->declBus(c+115,"ysyx_22040750 cpu_core_e opnum1_sel", false,-1, 2,0);
        tracep->declBus(c+116,"ysyx_22040750 cpu_core_e opnum2_sel", false,-1, 2,0);
        tracep->declBus(c+117,"ysyx_22040750 cpu_core_e alu_op_sel", false,-1, 14,0);
        tracep->declBus(c+118,"ysyx_22040750 cpu_core_e mem_wstrb", false,-1, 7,0);
        tracep->declBus(c+119,"ysyx_22040750 cpu_core_e mem_rstrb", false,-1, 8,0);
        tracep->declBit(c+120,"ysyx_22040750 cpu_core_e reg_wen", false,-1);
        tracep->declBit(c+121,"ysyx_22040750 cpu_core_e mem_wen", false,-1);
        tracep->declBit(c+122,"ysyx_22040750 cpu_core_e word_op_mask", false,-1);
        tracep->declBus(c+123,"ysyx_22040750 cpu_core_e alu_op_sext", false,-1, 1,0);
        tracep->declBus(c+124,"ysyx_22040750 cpu_core_e csr_addr", false,-1, 11,0);
        tracep->declBit(c+125,"ysyx_22040750 cpu_core_e csr_wen", false,-1);
        tracep->declBit(c+126,"ysyx_22040750 cpu_core_e csr_intr", false,-1);
        tracep->declBit(c+127,"ysyx_22040750 cpu_core_e csr_mret", false,-1);
        tracep->declBus(c+128,"ysyx_22040750 cpu_core_e csr_op_sel", false,-1, 6,0);
        tracep->declBus(c+110,"ysyx_22040750 cpu_core_e csr_uimm", false,-1, 4,0);
        tracep->declQuad(c+129,"ysyx_22040750 cpu_core_e csr_intr_no", false,-1, 63,0);
        tracep->declBit(c+131,"ysyx_22040750 cpu_core_e IF_valid", false,-1);
        tracep->declBus(c+132,"ysyx_22040750 cpu_core_e IF_ID_pc", false,-1, 31,0);
        tracep->declBus(c+133,"ysyx_22040750 cpu_core_e IF_ID_inst", false,-1, 31,0);
        tracep->declBit(c+952,"ysyx_22040750 cpu_core_e IF_ID_allowin", false,-1);
        tracep->declBit(c+134,"ysyx_22040750 cpu_core_e IF_ID_valid", false,-1);
        tracep->declBit(c+135,"ysyx_22040750 cpu_core_e IF_ID_stall", false,-1);
        tracep->declBit(c+136,"ysyx_22040750 cpu_core_e IF_ID_bubble", false,-1);
        tracep->declBit(c+137,"ysyx_22040750 cpu_core_e IF_ID_input_valid", false,-1);
        tracep->declQuad(c+138,"ysyx_22040750 cpu_core_e ID_EX_imm", false,-1, 63,0);
        tracep->declQuad(c+140,"ysyx_22040750 cpu_core_e ID_EX_rs1", false,-1, 63,0);
        tracep->declQuad(c+142,"ysyx_22040750 cpu_core_e ID_EX_rs2", false,-1, 63,0);
        tracep->declQuad(c+144,"ysyx_22040750 cpu_core_e ID_EX_csr", false,-1, 63,0);
        tracep->declBus(c+146,"ysyx_22040750 cpu_core_e ID_EX_pc", false,-1, 31,0);
        tracep->declBus(c+147,"ysyx_22040750 cpu_core_e ID_EX_rd_addr", false,-1, 4,0);
        tracep->declBus(c+148,"ysyx_22040750 cpu_core_e ID_EX_wstrb", false,-1, 7,0);
        tracep->declBus(c+149,"ysyx_22040750 cpu_core_e ID_EX_rstrb", false,-1, 8,0);
        tracep->declBus(c+150,"ysyx_22040750 cpu_core_e ID_EX_op2_sel", false,-1, 2,0);
        tracep->declBus(c+151,"ysyx_22040750 cpu_core_e ID_EX_op1_sel", false,-1, 2,0);
        tracep->declBus(c+152,"ysyx_22040750 cpu_core_e ID_EX_regin_sel", false,-1, 2,0);
        tracep->declBus(c+153,"ysyx_22040750 cpu_core_e ID_EX_alu_sext", false,-1, 1,0);
        tracep->declBus(c+154,"ysyx_22040750 cpu_core_e ID_EX_alu_op_sel", false,-1, 14,0);
        tracep->declBit(c+155,"ysyx_22040750 cpu_core_e ID_EX_reg_wen", false,-1);
        tracep->declBit(c+156,"ysyx_22040750 cpu_core_e ID_EX_mem_wen", false,-1);
        tracep->declBit(c+157,"ysyx_22040750 cpu_core_e ID_EX_word_op_mask", false,-1);
        tracep->declBit(c+158,"ysyx_22040750 cpu_core_e ID_EX_valid", false,-1);
        tracep->declBit(c+953,"ysyx_22040750 cpu_core_e ID_EX_allowin", false,-1);
        tracep->declBus(c+159,"ysyx_22040750 cpu_core_e ID_EX_stall", false,-1, 1,0);
        tracep->declBus(c+160,"ysyx_22040750 cpu_core_e ID_EX_inst", false,-1, 31,0);
        tracep->declBit(c+161,"ysyx_22040750 cpu_core_e ID_EX_bubble", false,-1);
        tracep->declBit(c+162,"ysyx_22040750 cpu_core_e ID_EX_input_valid", false,-1);
        tracep->declBit(c+163,"ysyx_22040750 cpu_core_e ID_EX_alu_multicycle", false,-1);
        tracep->declBit(c+164,"ysyx_22040750 cpu_core_e alu_out_valid", false,-1);
        tracep->declBus(c+165,"ysyx_22040750 cpu_core_e ID_EX_csr_addr", false,-1, 11,0);
        tracep->declBit(c+166,"ysyx_22040750 cpu_core_e ID_EX_csr_wen", false,-1);
        tracep->declBit(c+167,"ysyx_22040750 cpu_core_e ID_EX_csr_intr", false,-1);
        tracep->declBit(c+168,"ysyx_22040750 cpu_core_e ID_EX_csr_mret", false,-1);
        tracep->declBus(c+169,"ysyx_22040750 cpu_core_e ID_EX_csr_op_sel", false,-1, 6,0);
        tracep->declBus(c+170,"ysyx_22040750 cpu_core_e ID_EX_csr_uimm", false,-1, 4,0);
        tracep->declQuad(c+171,"ysyx_22040750 cpu_core_e ID_EX_csr_intr_no", false,-1, 63,0);
        tracep->declBit(c+954,"ysyx_22040750 cpu_core_e EX_MEM_valid", false,-1);
        tracep->declBus(c+173,"ysyx_22040750 cpu_core_e EX_MEM_rstrb", false,-1, 8,0);
        tracep->declBus(c+174,"ysyx_22040750 cpu_core_e EX_MEM_wstrb", false,-1, 7,0);
        tracep->declBus(c+78,"ysyx_22040750 cpu_core_e EX_MEM_mem_addr", false,-1, 31,0);
        tracep->declQuad(c+175,"ysyx_22040750 cpu_core_e EX_MEM_alu_out", false,-1, 63,0);
        tracep->declQuad(c+104,"ysyx_22040750 cpu_core_e EX_MEM_rs2", false,-1, 63,0);
        tracep->declQuad(c+177,"ysyx_22040750 cpu_core_e EX_MEM_csr", false,-1, 63,0);
        tracep->declBit(c+179,"ysyx_22040750 cpu_core_e EX_MEM_mem_wen", false,-1);
        tracep->declBit(c+79,"ysyx_22040750 cpu_core_e EX_MEM_mem_rd_en", false,-1);
        tracep->declBit(c+80,"ysyx_22040750 cpu_core_e EX_MEM_mem_wr_en", false,-1);
        tracep->declBus(c+180,"ysyx_22040750 cpu_core_e EX_MEM_pc", false,-1, 31,0);
        tracep->declQuad(c+1057,"ysyx_22040750 cpu_core_e EX_MEM_mem_data", false,-1, 63,0);
        tracep->declBit(c+181,"ysyx_22040750 cpu_core_e EX_MEM_reg_wen", false,-1);
        tracep->declBus(c+182,"ysyx_22040750 cpu_core_e EX_MEM_rd_addr", false,-1, 4,0);
        tracep->declBus(c+183,"ysyx_22040750 cpu_core_e EX_MEM_regin_sel", false,-1, 2,0);
        tracep->declBus(c+184,"ysyx_22040750 cpu_core_e EX_MEM_shamt", false,-1, 2,0);
        tracep->declBit(c+955,"ysyx_22040750 cpu_core_e EX_MEM_allowin", false,-1);
        tracep->declBus(c+185,"ysyx_22040750 cpu_core_e EX_MEM_stall", false,-1, 1,0);
        tracep->declBus(c+186,"ysyx_22040750 cpu_core_e EX_MEM_inst", false,-1, 31,0);
        tracep->declBit(c+187,"ysyx_22040750 cpu_core_e EX_MEM_bubble", false,-1);
        tracep->declBit(c+188,"ysyx_22040750 cpu_core_e EX_MEM_input_valid", false,-1);
        tracep->declBus(c+189,"ysyx_22040750 cpu_core_e EX_MEM_csr_addr", false,-1, 11,0);
        tracep->declBit(c+190,"ysyx_22040750 cpu_core_e EX_MEM_csr_wen", false,-1);
        tracep->declBit(c+191,"ysyx_22040750 cpu_core_e EX_MEM_csr_intr", false,-1);
        tracep->declBit(c+192,"ysyx_22040750 cpu_core_e EX_MEM_csr_mret", false,-1);
        tracep->declQuad(c+193,"ysyx_22040750 cpu_core_e EX_MEM_csr_intr_no", false,-1, 63,0);
        tracep->declBus(c+195,"ysyx_22040750 cpu_core_e MEM_WB_pc", false,-1, 31,0);
        tracep->declBit(c+196,"ysyx_22040750 cpu_core_e MEM_WB_valid", false,-1);
        tracep->declQuad(c+197,"ysyx_22040750 cpu_core_e MEM_WB_mem_data", false,-1, 63,0);
        tracep->declBus(c+199,"ysyx_22040750 cpu_core_e MEM_WB_mem_rstrb", false,-1, 8,0);
        tracep->declQuad(c+200,"ysyx_22040750 cpu_core_e MEM_WB_alu_out", false,-1, 63,0);
        tracep->declQuad(c+202,"ysyx_22040750 cpu_core_e MEM_WB_csr", false,-1, 63,0);
        tracep->declBit(c+204,"ysyx_22040750 cpu_core_e MEM_WB_reg_wen", false,-1);
        tracep->declBus(c+205,"ysyx_22040750 cpu_core_e MEM_WB_rd_addr", false,-1, 4,0);
        tracep->declBus(c+206,"ysyx_22040750 cpu_core_e MEM_WB_regin_sel", false,-1, 2,0);
        tracep->declBus(c+207,"ysyx_22040750 cpu_core_e MEM_WB_shamt", false,-1, 2,0);
        tracep->declBit(c+208,"ysyx_22040750 cpu_core_e MEM_WB_allowin", false,-1);
        tracep->declBus(c+209,"ysyx_22040750 cpu_core_e MEM_WB_inst", false,-1, 31,0);
        tracep->declBit(c+210,"ysyx_22040750 cpu_core_e MEM_WB_bubble", false,-1);
        tracep->declBit(c+196,"ysyx_22040750 cpu_core_e MEM_WB_input_valid", false,-1);
        tracep->declBus(c+211,"ysyx_22040750 cpu_core_e MEM_WB_stall", false,-1, 1,0);
        tracep->declBus(c+212,"ysyx_22040750 cpu_core_e MEM_WB_csr_addr", false,-1, 11,0);
        tracep->declBit(c+213,"ysyx_22040750 cpu_core_e MEM_WB_csr_wen", false,-1);
        tracep->declBit(c+214,"ysyx_22040750 cpu_core_e MEM_WB_csr_intr", false,-1);
        tracep->declBit(c+215,"ysyx_22040750 cpu_core_e MEM_WB_csr_mret", false,-1);
        tracep->declQuad(c+216,"ysyx_22040750 cpu_core_e MEM_WB_csr_intr_no", false,-1, 63,0);
        tracep->declBus(c+218,"ysyx_22040750 cpu_core_e stall_en", false,-1, 1,0);
        tracep->declQuad(c+219,"ysyx_22040750 cpu_core_e rs1_forward_data", false,-1, 63,0);
        tracep->declQuad(c+221,"ysyx_22040750 cpu_core_e rs2_forward_data", false,-1, 63,0);
        tracep->declQuad(c+223,"ysyx_22040750 cpu_core_e csr_forward_data", false,-1, 63,0);
        tracep->declBit(c+225,"ysyx_22040750 cpu_core_e EX_MEM_mem_op", false,-1);
        tracep->declBit(c+226,"ysyx_22040750 cpu_core_e MEM_WB_mem_op", false,-1);
        tracep->declBus(c+227,"ysyx_22040750 cpu_core_e MEM_WB_mem_addr", false,-1, 31,0);
        tracep->declBit(c+988,"ysyx_22040750 cpu_core_e npc_e I_clk", false,-1);
        tracep->declBit(c+989,"ysyx_22040750 cpu_core_e npc_e I_rst", false,-1);
        tracep->declBit(c+951,"ysyx_22040750 cpu_core_e npc_e I_pc_valid", false,-1);
        tracep->declBit(c+77,"ysyx_22040750 cpu_core_e npc_e I_pc_ready", false,-1);
        tracep->declBit(c+134,"ysyx_22040750 cpu_core_e npc_e I_IF_ID_valid", false,-1);
        tracep->declQuad(c+219,"ysyx_22040750 cpu_core_e npc_e I_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+221,"ysyx_22040750 cpu_core_e npc_e I_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+88,"ysyx_22040750 cpu_core_e npc_e I_imm", false,-1, 63,0);
        tracep->declQuad(c+223,"ysyx_22040750 cpu_core_e npc_e I_intr_pc", false,-1, 63,0);
        tracep->declBus(c+132,"ysyx_22040750 cpu_core_e npc_e I_pc", false,-1, 31,0);
        tracep->declBus(c+86,"ysyx_22040750 cpu_core_e npc_e I_snpc", false,-1, 31,0);
        tracep->declBus(c+113,"ysyx_22040750 cpu_core_e npc_e I_dnpc_sel", false,-1, 4,0);
        tracep->declBus(c+75,"ysyx_22040750 cpu_core_e npc_e O_dnpc", false,-1, 31,0);
        tracep->declBit(c+935,"ysyx_22040750 cpu_core_e npc_e pc_handshake", false,-1);
        tracep->declBus(c+228,"ysyx_22040750 cpu_core_e npc_e dnpc_src1", false,-1, 31,0);
        tracep->declBus(c+229,"ysyx_22040750 cpu_core_e npc_e dnpc_src2", false,-1, 31,0);
        tracep->declBus(c+230,"ysyx_22040750 cpu_core_e npc_e dnpc_sum", false,-1, 31,0);
        tracep->declBus(c+231,"ysyx_22040750 cpu_core_e npc_e dnpc", false,-1, 31,0);
        tracep->declBus(c+232,"ysyx_22040750 cpu_core_e npc_e dnpc_reg", false,-1, 31,0);
        tracep->declBit(c+233,"ysyx_22040750 cpu_core_e npc_e dnpc_reg_valid", false,-1);
        tracep->declBit(c+234,"ysyx_22040750 cpu_core_e npc_e dnpc_sel", false,-1);
        tracep->declBit(c+235,"ysyx_22040750 cpu_core_e npc_e intr_sel", false,-1);
        tracep->declBit(c+956,"ysyx_22040750 cpu_core_e npc_e store_dnpc", false,-1);
        tracep->declBus(c+1059,"ysyx_22040750 cpu_core_e npc_e nextpc_64bit_3sel N", false,-1, 31,0);
        tracep->declBus(c+1060,"ysyx_22040750 cpu_core_e npc_e nextpc_64bit_3sel M", false,-1, 31,0);
        tracep->declArray(c+236,"ysyx_22040750 cpu_core_e npc_e nextpc_64bit_3sel I_sel_data", false,-1, 95,0);
        tracep->declBus(c+239,"ysyx_22040750 cpu_core_e npc_e nextpc_64bit_3sel I_sel", false,-1, 2,0);
        tracep->declBus(c+231,"ysyx_22040750 cpu_core_e npc_e nextpc_64bit_3sel O_sel_data", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+240+i*1,"ysyx_22040750 cpu_core_e npc_e nextpc_64bit_3sel sel_data", true,(i+0), 31,0);}}
        tracep->declBus(c+1061,"ysyx_22040750 cpu_core_e npc_e nextpc_64bit_3sel unnamedblk1 i", false,-1, 31,0);
        tracep->declBit(c+988,"ysyx_22040750 cpu_core_e pc_e I_sys_clk", false,-1);
        tracep->declBit(c+989,"ysyx_22040750 cpu_core_e pc_e I_rst", false,-1);
        tracep->declBus(c+75,"ysyx_22040750 cpu_core_e pc_e I_dnpc", false,-1, 31,0);
        tracep->declBus(c+74,"ysyx_22040750 cpu_core_e pc_e I_inst", false,-1, 31,0);
        tracep->declBit(c+76,"ysyx_22040750 cpu_core_e pc_e I_inst_valid", false,-1);
        tracep->declBit(c+77,"ysyx_22040750 cpu_core_e pc_e I_inst_ready", false,-1);
        tracep->declBit(c+952,"ysyx_22040750 cpu_core_e pc_e I_IF_ID_allowin", false,-1);
        tracep->declBit(c+131,"ysyx_22040750 cpu_core_e pc_e O_IF_valid", false,-1);
        tracep->declBus(c+85,"ysyx_22040750 cpu_core_e pc_e O_pc", false,-1, 31,0);
        tracep->declBus(c+87,"ysyx_22040750 cpu_core_e pc_e O_inst", false,-1, 31,0);
        tracep->declBit(c+951,"ysyx_22040750 cpu_core_e pc_e O_pc_valid", false,-1);
        tracep->declBus(c+1062,"ysyx_22040750 cpu_core_e pc_e PC_RESET", false,-1, 31,0);
        tracep->declBit(c+243,"ysyx_22040750 cpu_core_e pc_e IF_ready_go", false,-1);
        tracep->declBit(c+936,"ysyx_22040750 cpu_core_e pc_e IF_allow_in", false,-1);
        tracep->declBit(c+957,"ysyx_22040750 cpu_core_e pc_e IF_handshake", false,-1);
        tracep->declBit(c+244,"ysyx_22040750 cpu_core_e pc_e IF_valid", false,-1);
        tracep->declBit(c+245,"ysyx_22040750 cpu_core_e pc_e IF_en", false,-1);
        tracep->declBus(c+246,"ysyx_22040750 cpu_core_e pc_e inst_cache", false,-1, 31,0);
        tracep->declBit(c+247,"ysyx_22040750 cpu_core_e pc_e cache_valid", false,-1);
        tracep->declBit(c+988,"ysyx_22040750 cpu_core_e IF_ID_reg_e I_sys_clk", false,-1);
        tracep->declBit(c+989,"ysyx_22040750 cpu_core_e IF_ID_reg_e I_rst", false,-1);
        tracep->declBus(c+85,"ysyx_22040750 cpu_core_e IF_ID_reg_e I_pc", false,-1, 31,0);
        tracep->declBus(c+87,"ysyx_22040750 cpu_core_e IF_ID_reg_e I_inst", false,-1, 31,0);
        tracep->declBit(c+131,"ysyx_22040750 cpu_core_e IF_ID_reg_e I_IF_ID_valid", false,-1);
        tracep->declBit(c+953,"ysyx_22040750 cpu_core_e IF_ID_reg_e I_IF_ID_allowout", false,-1);
        tracep->declBit(c+135,"ysyx_22040750 cpu_core_e IF_ID_reg_e I_IF_ID_stall", false,-1);
        tracep->declBit(c+248,"ysyx_22040750 cpu_core_e IF_ID_reg_e I_IF_ID_jmp", false,-1);
        tracep->declBit(c+952,"ysyx_22040750 cpu_core_e IF_ID_reg_e O_IF_ID_allowin", false,-1);
        tracep->declBus(c+132,"ysyx_22040750 cpu_core_e IF_ID_reg_e O_pc", false,-1, 31,0);
        tracep->declBus(c+133,"ysyx_22040750 cpu_core_e IF_ID_reg_e O_inst", false,-1, 31,0);
        tracep->declBit(c+136,"ysyx_22040750 cpu_core_e IF_ID_reg_e O_bubble_inst_debug", false,-1);
        tracep->declBit(c+137,"ysyx_22040750 cpu_core_e IF_ID_reg_e O_IF_ID_input_valid", false,-1);
        tracep->declBit(c+134,"ysyx_22040750 cpu_core_e IF_ID_reg_e O_IF_ID_valid", false,-1);
        tracep->declBit(c+137,"ysyx_22040750 cpu_core_e IF_ID_reg_e input_valid", false,-1);
        tracep->declBit(c+249,"ysyx_22040750 cpu_core_e IF_ID_reg_e output_valid", false,-1);
        tracep->declBus(c+110,"ysyx_22040750 cpu_core_e stall_unit_e I_rs1_addr", false,-1, 4,0);
        tracep->declBus(c+111,"ysyx_22040750 cpu_core_e stall_unit_e I_rs2_addr", false,-1, 4,0);
        tracep->declBit(c+137,"ysyx_22040750 cpu_core_e stall_unit_e I_ID_valid", false,-1);
        tracep->declBus(c+147,"ysyx_22040750 cpu_core_e stall_unit_e I_EX_rd_addr", false,-1, 4,0);
        tracep->declBit(c+162,"ysyx_22040750 cpu_core_e stall_unit_e I_EX_valid", false,-1);
        tracep->declBit(c+250,"ysyx_22040750 cpu_core_e stall_unit_e I_EX_mem_rd_en", false,-1);
        tracep->declBit(c+251,"ysyx_22040750 cpu_core_e stall_unit_e I_EX_alu_multcycle", false,-1);
        tracep->declBus(c+182,"ysyx_22040750 cpu_core_e stall_unit_e I_MEM_rd_addr", false,-1, 4,0);
        tracep->declBit(c+188,"ysyx_22040750 cpu_core_e stall_unit_e I_MEM_valid", false,-1);
        tracep->declBit(c+252,"ysyx_22040750 cpu_core_e stall_unit_e I_MEM_mem_rd_en", false,-1);
        tracep->declBus(c+205,"ysyx_22040750 cpu_core_e stall_unit_e I_WB_rd_addr", false,-1, 4,0);
        tracep->declBit(c+196,"ysyx_22040750 cpu_core_e stall_unit_e I_WB_valid", false,-1);
        tracep->declBus(c+218,"ysyx_22040750 cpu_core_e stall_unit_e I_stall_en", false,-1, 1,0);
        tracep->declBit(c+135,"ysyx_22040750 cpu_core_e stall_unit_e O_ID_stall", false,-1);
        tracep->declBus(c+159,"ysyx_22040750 cpu_core_e stall_unit_e O_EX_stall", false,-1, 1,0);
        tracep->declBus(c+185,"ysyx_22040750 cpu_core_e stall_unit_e O_MEM_stall", false,-1, 1,0);
        tracep->declBus(c+211,"ysyx_22040750 cpu_core_e stall_unit_e O_WB_stall", false,-1, 1,0);
        tracep->declBus(c+253,"ysyx_22040750 cpu_core_e stall_unit_e EX_stall", false,-1, 1,0);
        tracep->declBus(c+254,"ysyx_22040750 cpu_core_e stall_unit_e MEM_stall", false,-1, 1,0);
        tracep->declBus(c+255,"ysyx_22040750 cpu_core_e stall_unit_e WB_stall", false,-1, 1,0);
        tracep->declBit(c+256,"ysyx_22040750 cpu_core_e stall_unit_e mem_rd", false,-1);
        tracep->declBit(c+257,"ysyx_22040750 cpu_core_e stall_unit_e multicycle_alu_op", false,-1);
        tracep->declQuad(c+92,"ysyx_22040750 cpu_core_e forward_unit_e I_ID_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+94,"ysyx_22040750 cpu_core_e forward_unit_e I_ID_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+100,"ysyx_22040750 cpu_core_e forward_unit_e I_EX_data", false,-1, 63,0);
        tracep->declQuad(c+175,"ysyx_22040750 cpu_core_e forward_unit_e I_MEM_data", false,-1, 63,0);
        tracep->declQuad(c+90,"ysyx_22040750 cpu_core_e forward_unit_e I_WB_data", false,-1, 63,0);
        tracep->declBus(c+218,"ysyx_22040750 cpu_core_e forward_unit_e I_stall_en", false,-1, 1,0);
        tracep->declBus(c+159,"ysyx_22040750 cpu_core_e forward_unit_e I_EX_stall", false,-1, 1,0);
        tracep->declBus(c+185,"ysyx_22040750 cpu_core_e forward_unit_e I_MEM_stall", false,-1, 1,0);
        tracep->declBus(c+211,"ysyx_22040750 cpu_core_e forward_unit_e I_WB_stall", false,-1, 1,0);
        tracep->declBit(c+155,"ysyx_22040750 cpu_core_e forward_unit_e I_EX_reg_wen", false,-1);
        tracep->declBit(c+181,"ysyx_22040750 cpu_core_e forward_unit_e I_MEM_reg_wen", false,-1);
        tracep->declBit(c+258,"ysyx_22040750 cpu_core_e forward_unit_e I_WB_reg_wen", false,-1);
        tracep->declQuad(c+219,"ysyx_22040750 cpu_core_e forward_unit_e O_ID_EX_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+221,"ysyx_22040750 cpu_core_e forward_unit_e O_ID_EX_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+106,"ysyx_22040750 cpu_core_e csr_foward_e I_csr_ID", false,-1, 63,0);
        tracep->declQuad(c+144,"ysyx_22040750 cpu_core_e csr_foward_e I_csr_EX", false,-1, 63,0);
        tracep->declQuad(c+177,"ysyx_22040750 cpu_core_e csr_foward_e I_csr_MEM", false,-1, 63,0);
        tracep->declQuad(c+202,"ysyx_22040750 cpu_core_e csr_foward_e I_csr_WB", false,-1, 63,0);
        tracep->declBus(c+124,"ysyx_22040750 cpu_core_e csr_foward_e I_csr_addr_ID", false,-1, 11,0);
        tracep->declBus(c+165,"ysyx_22040750 cpu_core_e csr_foward_e I_csr_addr_EX", false,-1, 11,0);
        tracep->declBus(c+189,"ysyx_22040750 cpu_core_e csr_foward_e I_csr_addr_MEM", false,-1, 11,0);
        tracep->declBus(c+212,"ysyx_22040750 cpu_core_e csr_foward_e I_csr_addr_WB", false,-1, 11,0);
        tracep->declBit(c+125,"ysyx_22040750 cpu_core_e csr_foward_e I_csr_wen_ID", false,-1);
        tracep->declBit(c+166,"ysyx_22040750 cpu_core_e csr_foward_e I_csr_wen_EX", false,-1);
        tracep->declBit(c+190,"ysyx_22040750 cpu_core_e csr_foward_e I_csr_wen_MEM", false,-1);
        tracep->declBit(c+213,"ysyx_22040750 cpu_core_e csr_foward_e I_csr_wen_WB", false,-1);
        tracep->declQuad(c+223,"ysyx_22040750 cpu_core_e csr_foward_e O_csr_foward_data", false,-1, 63,0);
        tracep->declBit(c+259,"ysyx_22040750 cpu_core_e csr_foward_e EX_foward", false,-1);
        tracep->declBit(c+260,"ysyx_22040750 cpu_core_e csr_foward_e MEM_foward", false,-1);
        tracep->declBit(c+261,"ysyx_22040750 cpu_core_e csr_foward_e WB_foward", false,-1);
        tracep->declBit(c+988,"ysyx_22040750 cpu_core_e decoder_e I_sys_clk", false,-1);
        tracep->declBit(c+989,"ysyx_22040750 cpu_core_e decoder_e I_rst", false,-1);
        tracep->declBus(c+133,"ysyx_22040750 cpu_core_e decoder_e I_inst", false,-1, 31,0);
        tracep->declQuad(c+88,"ysyx_22040750 cpu_core_e decoder_e O_imm", false,-1, 63,0);
        tracep->declQuad(c+219,"ysyx_22040750 cpu_core_e decoder_e I_rs1_data", false,-1, 63,0);
        tracep->declBus(c+110,"ysyx_22040750 cpu_core_e decoder_e O_rs1", false,-1, 4,0);
        tracep->declQuad(c+221,"ysyx_22040750 cpu_core_e decoder_e I_rs2_data", false,-1, 63,0);
        tracep->declBus(c+111,"ysyx_22040750 cpu_core_e decoder_e O_rs2", false,-1, 4,0);
        tracep->declBus(c+112,"ysyx_22040750 cpu_core_e decoder_e O_rd", false,-1, 4,0);
        tracep->declBit(c+120,"ysyx_22040750 cpu_core_e decoder_e O_reg_wen", false,-1);
        tracep->declBit(c+121,"ysyx_22040750 cpu_core_e decoder_e O_mem_wen", false,-1);
        tracep->declBus(c+118,"ysyx_22040750 cpu_core_e decoder_e O_mem_wstrb", false,-1, 7,0);
        tracep->declBus(c+119,"ysyx_22040750 cpu_core_e decoder_e O_mem_rstrb", false,-1, 8,0);
        tracep->declBus(c+113,"ysyx_22040750 cpu_core_e decoder_e O_dnpc_sel", false,-1, 4,0);
        tracep->declBus(c+114,"ysyx_22040750 cpu_core_e decoder_e O_regin_sel", false,-1, 2,0);
        tracep->declBus(c+115,"ysyx_22040750 cpu_core_e decoder_e O_opnum1_sel", false,-1, 2,0);
        tracep->declBus(c+116,"ysyx_22040750 cpu_core_e decoder_e O_opnum2_sel", false,-1, 2,0);
        tracep->declBus(c+117,"ysyx_22040750 cpu_core_e decoder_e O_alu_op_sel", false,-1, 14,0);
        tracep->declBus(c+123,"ysyx_22040750 cpu_core_e decoder_e O_alu_op_sext", false,-1, 1,0);
        tracep->declBit(c+122,"ysyx_22040750 cpu_core_e decoder_e O_word_op_mask", false,-1);
        tracep->declBus(c+128,"ysyx_22040750 cpu_core_e decoder_e O_csr_op_sel", false,-1, 6,0);
        tracep->declBus(c+110,"ysyx_22040750 cpu_core_e decoder_e O_csr_imm", false,-1, 4,0);
        tracep->declBus(c+124,"ysyx_22040750 cpu_core_e decoder_e O_csr_addr", false,-1, 11,0);
        tracep->declBit(c+125,"ysyx_22040750 cpu_core_e decoder_e O_csr_wen", false,-1);
        tracep->declBit(c+126,"ysyx_22040750 cpu_core_e decoder_e O_csr_intr", false,-1);
        tracep->declQuad(c+129,"ysyx_22040750 cpu_core_e decoder_e O_csr_intr_no", false,-1, 63,0);
        tracep->declBit(c+127,"ysyx_22040750 cpu_core_e decoder_e O_csr_mret", false,-1);
        tracep->declBus(c+218,"ysyx_22040750 cpu_core_e decoder_e O_stall_en", false,-1, 1,0);
        tracep->declBus(c+262,"ysyx_22040750 cpu_core_e decoder_e funct7", false,-1, 6,0);
        tracep->declBus(c+263,"ysyx_22040750 cpu_core_e decoder_e opcode", false,-1, 6,0);
        tracep->declBus(c+111,"ysyx_22040750 cpu_core_e decoder_e rs2", false,-1, 4,0);
        tracep->declBus(c+110,"ysyx_22040750 cpu_core_e decoder_e rs1", false,-1, 4,0);
        tracep->declBus(c+112,"ysyx_22040750 cpu_core_e decoder_e rd", false,-1, 4,0);
        tracep->declBus(c+264,"ysyx_22040750 cpu_core_e decoder_e funct3", false,-1, 2,0);
        tracep->declBus(c+124,"ysyx_22040750 cpu_core_e decoder_e immI", false,-1, 11,0);
        tracep->declBus(c+265,"ysyx_22040750 cpu_core_e decoder_e immS", false,-1, 11,0);
        tracep->declBus(c+266,"ysyx_22040750 cpu_core_e decoder_e immB", false,-1, 12,0);
        tracep->declBus(c+267,"ysyx_22040750 cpu_core_e decoder_e immU", false,-1, 31,0);
        tracep->declBus(c+268,"ysyx_22040750 cpu_core_e decoder_e immJ", false,-1, 20,0);
        tracep->declBit(c+269,"ysyx_22040750 cpu_core_e decoder_e typeI", false,-1);
        tracep->declBit(c+121,"ysyx_22040750 cpu_core_e decoder_e typeS", false,-1);
        tracep->declBit(c+270,"ysyx_22040750 cpu_core_e decoder_e typeR", false,-1);
        tracep->declBit(c+271,"ysyx_22040750 cpu_core_e decoder_e typeB", false,-1);
        tracep->declBit(c+272,"ysyx_22040750 cpu_core_e decoder_e typeU", false,-1);
        tracep->declBit(c+273,"ysyx_22040750 cpu_core_e decoder_e typeJ", false,-1);
        tracep->declBit(c+274,"ysyx_22040750 cpu_core_e decoder_e typeC", false,-1);
        tracep->declBit(c+275,"ysyx_22040750 cpu_core_e decoder_e LUI", false,-1);
        tracep->declBit(c+276,"ysyx_22040750 cpu_core_e decoder_e AUIPC", false,-1);
        tracep->declBit(c+273,"ysyx_22040750 cpu_core_e decoder_e JAL", false,-1);
        tracep->declBit(c+277,"ysyx_22040750 cpu_core_e decoder_e JALR", false,-1);
        tracep->declBit(c+278,"ysyx_22040750 cpu_core_e decoder_e LD", false,-1);
        tracep->declBit(c+279,"ysyx_22040750 cpu_core_e decoder_e LW", false,-1);
        tracep->declBit(c+280,"ysyx_22040750 cpu_core_e decoder_e LWU", false,-1);
        tracep->declBit(c+281,"ysyx_22040750 cpu_core_e decoder_e LH", false,-1);
        tracep->declBit(c+282,"ysyx_22040750 cpu_core_e decoder_e LHU", false,-1);
        tracep->declBit(c+283,"ysyx_22040750 cpu_core_e decoder_e LB", false,-1);
        tracep->declBit(c+284,"ysyx_22040750 cpu_core_e decoder_e LBU", false,-1);
        tracep->declBit(c+285,"ysyx_22040750 cpu_core_e decoder_e ADDI", false,-1);
        tracep->declBit(c+286,"ysyx_22040750 cpu_core_e decoder_e SLTI", false,-1);
        tracep->declBit(c+287,"ysyx_22040750 cpu_core_e decoder_e SLTIU", false,-1);
        tracep->declBit(c+288,"ysyx_22040750 cpu_core_e decoder_e XORI", false,-1);
        tracep->declBit(c+289,"ysyx_22040750 cpu_core_e decoder_e ORI", false,-1);
        tracep->declBit(c+290,"ysyx_22040750 cpu_core_e decoder_e ANDI", false,-1);
        tracep->declBit(c+291,"ysyx_22040750 cpu_core_e decoder_e SLLI", false,-1);
        tracep->declBit(c+292,"ysyx_22040750 cpu_core_e decoder_e SRLI", false,-1);
        tracep->declBit(c+293,"ysyx_22040750 cpu_core_e decoder_e SRAI", false,-1);
        tracep->declBit(c+294,"ysyx_22040750 cpu_core_e decoder_e ADDIW", false,-1);
        tracep->declBit(c+295,"ysyx_22040750 cpu_core_e decoder_e SLLIW", false,-1);
        tracep->declBit(c+296,"ysyx_22040750 cpu_core_e decoder_e SRLIW", false,-1);
        tracep->declBit(c+297,"ysyx_22040750 cpu_core_e decoder_e SRAIW", false,-1);
        tracep->declBit(c+298,"ysyx_22040750 cpu_core_e decoder_e ADD", false,-1);
        tracep->declBit(c+299,"ysyx_22040750 cpu_core_e decoder_e SUB", false,-1);
        tracep->declBit(c+300,"ysyx_22040750 cpu_core_e decoder_e SLL", false,-1);
        tracep->declBit(c+301,"ysyx_22040750 cpu_core_e decoder_e SLT", false,-1);
        tracep->declBit(c+302,"ysyx_22040750 cpu_core_e decoder_e SLTU", false,-1);
        tracep->declBit(c+303,"ysyx_22040750 cpu_core_e decoder_e XOR", false,-1);
        tracep->declBit(c+304,"ysyx_22040750 cpu_core_e decoder_e SRL", false,-1);
        tracep->declBit(c+305,"ysyx_22040750 cpu_core_e decoder_e SRA", false,-1);
        tracep->declBit(c+306,"ysyx_22040750 cpu_core_e decoder_e OR", false,-1);
        tracep->declBit(c+307,"ysyx_22040750 cpu_core_e decoder_e AND", false,-1);
        tracep->declBit(c+308,"ysyx_22040750 cpu_core_e decoder_e MUL", false,-1);
        tracep->declBit(c+309,"ysyx_22040750 cpu_core_e decoder_e MULH", false,-1);
        tracep->declBit(c+310,"ysyx_22040750 cpu_core_e decoder_e MULHSU", false,-1);
        tracep->declBit(c+311,"ysyx_22040750 cpu_core_e decoder_e MULHU", false,-1);
        tracep->declBit(c+312,"ysyx_22040750 cpu_core_e decoder_e DIV", false,-1);
        tracep->declBit(c+313,"ysyx_22040750 cpu_core_e decoder_e DIVU", false,-1);
        tracep->declBit(c+314,"ysyx_22040750 cpu_core_e decoder_e REM", false,-1);
        tracep->declBit(c+315,"ysyx_22040750 cpu_core_e decoder_e REMU", false,-1);
        tracep->declBit(c+316,"ysyx_22040750 cpu_core_e decoder_e ADDW", false,-1);
        tracep->declBit(c+317,"ysyx_22040750 cpu_core_e decoder_e SUBW", false,-1);
        tracep->declBit(c+318,"ysyx_22040750 cpu_core_e decoder_e SLLW", false,-1);
        tracep->declBit(c+319,"ysyx_22040750 cpu_core_e decoder_e SRLW", false,-1);
        tracep->declBit(c+320,"ysyx_22040750 cpu_core_e decoder_e SRAW", false,-1);
        tracep->declBit(c+321,"ysyx_22040750 cpu_core_e decoder_e MULW", false,-1);
        tracep->declBit(c+322,"ysyx_22040750 cpu_core_e decoder_e DIVW", false,-1);
        tracep->declBit(c+323,"ysyx_22040750 cpu_core_e decoder_e DIVUW", false,-1);
        tracep->declBit(c+324,"ysyx_22040750 cpu_core_e decoder_e REMW", false,-1);
        tracep->declBit(c+325,"ysyx_22040750 cpu_core_e decoder_e REMUW", false,-1);
        tracep->declBit(c+326,"ysyx_22040750 cpu_core_e decoder_e SD", false,-1);
        tracep->declBit(c+327,"ysyx_22040750 cpu_core_e decoder_e SW", false,-1);
        tracep->declBit(c+328,"ysyx_22040750 cpu_core_e decoder_e SH", false,-1);
        tracep->declBit(c+329,"ysyx_22040750 cpu_core_e decoder_e SB", false,-1);
        tracep->declBit(c+330,"ysyx_22040750 cpu_core_e decoder_e BEQ", false,-1);
        tracep->declBit(c+331,"ysyx_22040750 cpu_core_e decoder_e BNE", false,-1);
        tracep->declBit(c+332,"ysyx_22040750 cpu_core_e decoder_e BLT", false,-1);
        tracep->declBit(c+333,"ysyx_22040750 cpu_core_e decoder_e BGE", false,-1);
        tracep->declBit(c+334,"ysyx_22040750 cpu_core_e decoder_e BLTU", false,-1);
        tracep->declBit(c+335,"ysyx_22040750 cpu_core_e decoder_e BGEU", false,-1);
        tracep->declBit(c+336,"ysyx_22040750 cpu_core_e decoder_e ECALL", false,-1);
        tracep->declBit(c+337,"ysyx_22040750 cpu_core_e decoder_e EBREAK", false,-1);
        tracep->declBit(c+338,"ysyx_22040750 cpu_core_e decoder_e CSRRW", false,-1);
        tracep->declBit(c+339,"ysyx_22040750 cpu_core_e decoder_e CSRRS", false,-1);
        tracep->declBit(c+340,"ysyx_22040750 cpu_core_e decoder_e CSRRC", false,-1);
        tracep->declBit(c+341,"ysyx_22040750 cpu_core_e decoder_e CSRRWI", false,-1);
        tracep->declBit(c+342,"ysyx_22040750 cpu_core_e decoder_e CSRRSI", false,-1);
        tracep->declBit(c+343,"ysyx_22040750 cpu_core_e decoder_e CSRRCI", false,-1);
        tracep->declBit(c+127,"ysyx_22040750 cpu_core_e decoder_e MRET", false,-1);
        tracep->declBit(c+344,"ysyx_22040750 cpu_core_e decoder_e csr_rd_gpr", false,-1);
        tracep->declQuad(c+129,"ysyx_22040750 cpu_core_e decoder_e NO", false,-1, 63,0);
        tracep->declBit(c+345,"ysyx_22040750 cpu_core_e decoder_e regin_from_mem", false,-1);
        tracep->declBit(c+346,"ysyx_22040750 cpu_core_e decoder_e typeB_jr", false,-1);
        tracep->declBit(c+347,"ysyx_22040750 cpu_core_e decoder_e csr_jr", false,-1);
        tracep->declBit(c+348,"ysyx_22040750 cpu_core_e decoder_e eq", false,-1);
        tracep->declBit(c+349,"ysyx_22040750 cpu_core_e decoder_e neq", false,-1);
        tracep->declBit(c+350,"ysyx_22040750 cpu_core_e decoder_e lt", false,-1);
        tracep->declBit(c+351,"ysyx_22040750 cpu_core_e decoder_e ge", false,-1);
        tracep->declBit(c+352,"ysyx_22040750 cpu_core_e decoder_e ltu", false,-1);
        tracep->declBit(c+353,"ysyx_22040750 cpu_core_e decoder_e geu", false,-1);
        tracep->declBus(c+1063,"ysyx_22040750 cpu_core_e decoder_e OP_ADD", false,-1, 14,0);
        tracep->declBus(c+1064,"ysyx_22040750 cpu_core_e decoder_e OP_SUB", false,-1, 14,0);
        tracep->declBus(c+1065,"ysyx_22040750 cpu_core_e decoder_e OP_SLT", false,-1, 14,0);
        tracep->declBus(c+1066,"ysyx_22040750 cpu_core_e decoder_e OP_SLTU", false,-1, 14,0);
        tracep->declBus(c+1067,"ysyx_22040750 cpu_core_e decoder_e OP_XOR", false,-1, 14,0);
        tracep->declBus(c+1068,"ysyx_22040750 cpu_core_e decoder_e OP_OR", false,-1, 14,0);
        tracep->declBus(c+1069,"ysyx_22040750 cpu_core_e decoder_e OP_AND", false,-1, 14,0);
        tracep->declBus(c+1070,"ysyx_22040750 cpu_core_e decoder_e OP_SLL", false,-1, 14,0);
        tracep->declBus(c+1071,"ysyx_22040750 cpu_core_e decoder_e OP_SRL", false,-1, 14,0);
        tracep->declBus(c+1072,"ysyx_22040750 cpu_core_e decoder_e OP_SRA", false,-1, 14,0);
        tracep->declBus(c+1073,"ysyx_22040750 cpu_core_e decoder_e OP_MUL", false,-1, 14,0);
        tracep->declBus(c+1074,"ysyx_22040750 cpu_core_e decoder_e OP_MULH", false,-1, 14,0);
        tracep->declBus(c+1075,"ysyx_22040750 cpu_core_e decoder_e OP_DIV", false,-1, 14,0);
        tracep->declBus(c+1076,"ysyx_22040750 cpu_core_e decoder_e OP_REM", false,-1, 14,0);
        tracep->declBus(c+1077,"ysyx_22040750 cpu_core_e decoder_e OP_CSR", false,-1, 14,0);
        tracep->declBit(c+354,"ysyx_22040750 cpu_core_e decoder_e add_flag", false,-1);
        tracep->declBit(c+345,"ysyx_22040750 cpu_core_e decoder_e ld_flag", false,-1);
        tracep->declBit(c+355,"ysyx_22040750 cpu_core_e decoder_e sub_flag", false,-1);
        tracep->declBit(c+356,"ysyx_22040750 cpu_core_e decoder_e slt_flag", false,-1);
        tracep->declBit(c+357,"ysyx_22040750 cpu_core_e decoder_e sltu_flag", false,-1);
        tracep->declBit(c+358,"ysyx_22040750 cpu_core_e decoder_e xor_flag", false,-1);
        tracep->declBit(c+359,"ysyx_22040750 cpu_core_e decoder_e or_flag", false,-1);
        tracep->declBit(c+360,"ysyx_22040750 cpu_core_e decoder_e and_flag", false,-1);
        tracep->declBit(c+361,"ysyx_22040750 cpu_core_e decoder_e sll_flag", false,-1);
        tracep->declBit(c+362,"ysyx_22040750 cpu_core_e decoder_e srl_flag", false,-1);
        tracep->declBit(c+363,"ysyx_22040750 cpu_core_e decoder_e sra_flag", false,-1);
        tracep->declBit(c+364,"ysyx_22040750 cpu_core_e decoder_e mul_flag", false,-1);
        tracep->declBit(c+365,"ysyx_22040750 cpu_core_e decoder_e mulh_flag", false,-1);
        tracep->declBit(c+366,"ysyx_22040750 cpu_core_e decoder_e div_flag", false,-1);
        tracep->declBit(c+367,"ysyx_22040750 cpu_core_e decoder_e rem_flag", false,-1);
        tracep->declBit(c+274,"ysyx_22040750 cpu_core_e decoder_e csr_flag", false,-1);
        tracep->declBus(c+1078,"ysyx_22040750 cpu_core_e decoder_e OP1_RS1", false,-1, 2,0);
        tracep->declBus(c+1079,"ysyx_22040750 cpu_core_e decoder_e OP1_PC", false,-1, 2,0);
        tracep->declBus(c+1080,"ysyx_22040750 cpu_core_e decoder_e OP1_ZERO", false,-1, 2,0);
        tracep->declBit(c+368,"ysyx_22040750 cpu_core_e decoder_e rs1_flag", false,-1);
        tracep->declBit(c+369,"ysyx_22040750 cpu_core_e decoder_e pc_flag", false,-1);
        tracep->declBit(c+275,"ysyx_22040750 cpu_core_e decoder_e zero_flag", false,-1);
        tracep->declBus(c+1078,"ysyx_22040750 cpu_core_e decoder_e OP2_RS2", false,-1, 2,0);
        tracep->declBus(c+1079,"ysyx_22040750 cpu_core_e decoder_e OP2_IMM", false,-1, 2,0);
        tracep->declBus(c+1080,"ysyx_22040750 cpu_core_e decoder_e OP2_FOUR", false,-1, 2,0);
        tracep->declBit(c+270,"ysyx_22040750 cpu_core_e decoder_e rs2_flag", false,-1);
        tracep->declBit(c+370,"ysyx_22040750 cpu_core_e decoder_e imm_flag", false,-1);
        tracep->declBit(c+371,"ysyx_22040750 cpu_core_e decoder_e four_flag", false,-1);
        tracep->declBit(c+988,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_sys_clk", false,-1);
        tracep->declBit(c+989,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_rst", false,-1);
        tracep->declBit(c+134,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_ID_EX_valid", false,-1);
        tracep->declBit(c+955,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_ID_EX_allowout", false,-1);
        tracep->declBit(c+953,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_ID_EX_allowin", false,-1);
        tracep->declBit(c+158,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_ID_EX_valid", false,-1);
        tracep->declBit(c+164,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_alu_output_valid", false,-1);
        tracep->declQuad(c+88,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_imm", false,-1, 63,0);
        tracep->declQuad(c+219,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_rs1", false,-1, 63,0);
        tracep->declQuad(c+221,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_rs2", false,-1, 63,0);
        tracep->declBus(c+112,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_rd_addr", false,-1, 4,0);
        tracep->declBit(c+120,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_reg_wen", false,-1);
        tracep->declBit(c+121,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_mem_wen", false,-1);
        tracep->declBus(c+118,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_wstrb", false,-1, 7,0);
        tracep->declBus(c+119,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_rstrb", false,-1, 8,0);
        tracep->declBus(c+114,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_regin_sel", false,-1, 2,0);
        tracep->declBus(c+115,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_op1_sel", false,-1, 2,0);
        tracep->declBus(c+116,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_op2_sel", false,-1, 2,0);
        tracep->declBus(c+123,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_alu_sext", false,-1, 1,0);
        tracep->declBus(c+117,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_alu_op_sel", false,-1, 14,0);
        tracep->declBit(c+122,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_word_op_mask", false,-1);
        tracep->declBus(c+128,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_csr_op_sel", false,-1, 6,0);
        tracep->declBus(c+110,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_csr_imm", false,-1, 4,0);
        tracep->declBus(c+124,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_csr_addr", false,-1, 11,0);
        tracep->declBit(c+125,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_csr_wen", false,-1);
        tracep->declBit(c+126,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_csr_intr", false,-1);
        tracep->declQuad(c+129,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_csr_intr_no", false,-1, 63,0);
        tracep->declQuad(c+223,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_csr", false,-1, 63,0);
        tracep->declBit(c+127,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_csr_mret", false,-1);
        tracep->declBus(c+169,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_csr_op_sel", false,-1, 6,0);
        tracep->declBus(c+170,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_csr_imm", false,-1, 4,0);
        tracep->declBus(c+165,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_csr_addr", false,-1, 11,0);
        tracep->declBit(c+166,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_csr_wen", false,-1);
        tracep->declBit(c+167,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_csr_intr", false,-1);
        tracep->declQuad(c+171,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_csr_intr_no", false,-1, 63,0);
        tracep->declQuad(c+144,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_csr", false,-1, 63,0);
        tracep->declBit(c+168,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_csr_mret", false,-1);
        tracep->declQuad(c+138,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_imm", false,-1, 63,0);
        tracep->declQuad(c+140,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_rs1", false,-1, 63,0);
        tracep->declQuad(c+142,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_rs2", false,-1, 63,0);
        tracep->declBus(c+147,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_rd_addr", false,-1, 4,0);
        tracep->declBit(c+155,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_reg_wen", false,-1);
        tracep->declBit(c+156,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_mem_wen", false,-1);
        tracep->declBus(c+148,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_wstrb", false,-1, 7,0);
        tracep->declBus(c+149,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_rstrb", false,-1, 8,0);
        tracep->declBus(c+152,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_regin_sel", false,-1, 2,0);
        tracep->declBus(c+151,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_op1_sel", false,-1, 2,0);
        tracep->declBus(c+150,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_op2_sel", false,-1, 2,0);
        tracep->declBus(c+153,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_alu_sext", false,-1, 1,0);
        tracep->declBus(c+154,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_alu_op_sel", false,-1, 14,0);
        tracep->declBit(c+157,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_word_op_mask", false,-1);
        tracep->declBus(c+132,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_pc", false,-1, 31,0);
        tracep->declBus(c+146,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_pc", false,-1, 31,0);
        tracep->declBit(c+162,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_ID_EX_input_valid", false,-1);
        tracep->declBit(c+163,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_alu_multicycle", false,-1);
        tracep->declBus(c+133,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_inst_debug", false,-1, 31,0);
        tracep->declBus(c+160,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_inst_debug", false,-1, 31,0);
        tracep->declBit(c+136,"ysyx_22040750 cpu_core_e ID_EX_reg_e I_bubble_inst_debug", false,-1);
        tracep->declBit(c+161,"ysyx_22040750 cpu_core_e ID_EX_reg_e O_bubble_inst_debug", false,-1);
        tracep->declBit(c+162,"ysyx_22040750 cpu_core_e ID_EX_reg_e input_valid", false,-1);
        tracep->declBit(c+164,"ysyx_22040750 cpu_core_e ID_EX_reg_e output_valid", false,-1);
        tracep->declBus(c+1081,"ysyx_22040750 cpu_core_e alu_op1_64bit_3sel N", false,-1, 31,0);
        tracep->declBus(c+1060,"ysyx_22040750 cpu_core_e alu_op1_64bit_3sel M", false,-1, 31,0);
        tracep->declArray(c+372,"ysyx_22040750 cpu_core_e alu_op1_64bit_3sel I_sel_data", false,-1, 191,0);
        tracep->declBus(c+151,"ysyx_22040750 cpu_core_e alu_op1_64bit_3sel I_sel", false,-1, 2,0);
        tracep->declQuad(c+96,"ysyx_22040750 cpu_core_e alu_op1_64bit_3sel O_sel_data", false,-1, 63,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+378+i*2,"ysyx_22040750 cpu_core_e alu_op1_64bit_3sel sel_data", true,(i+0), 63,0);}}
        tracep->declBus(c+1061,"ysyx_22040750 cpu_core_e alu_op1_64bit_3sel unnamedblk1 i", false,-1, 31,0);
        tracep->declBus(c+1081,"ysyx_22040750 cpu_core_e alu_op2_64bit_3sel N", false,-1, 31,0);
        tracep->declBus(c+1060,"ysyx_22040750 cpu_core_e alu_op2_64bit_3sel M", false,-1, 31,0);
        tracep->declArray(c+384,"ysyx_22040750 cpu_core_e alu_op2_64bit_3sel I_sel_data", false,-1, 191,0);
        tracep->declBus(c+150,"ysyx_22040750 cpu_core_e alu_op2_64bit_3sel I_sel", false,-1, 2,0);
        tracep->declQuad(c+98,"ysyx_22040750 cpu_core_e alu_op2_64bit_3sel O_sel_data", false,-1, 63,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+390+i*2,"ysyx_22040750 cpu_core_e alu_op2_64bit_3sel sel_data", true,(i+0), 63,0);}}
        tracep->declBus(c+1061,"ysyx_22040750 cpu_core_e alu_op2_64bit_3sel unnamedblk1 i", false,-1, 31,0);
        tracep->declBit(c+988,"ysyx_22040750 cpu_core_e alu_e I_sys_clk", false,-1);
        tracep->declBit(c+989,"ysyx_22040750 cpu_core_e alu_e I_rst", false,-1);
        tracep->declQuad(c+96,"ysyx_22040750 cpu_core_e alu_e I_op1", false,-1, 63,0);
        tracep->declQuad(c+98,"ysyx_22040750 cpu_core_e alu_e I_op2", false,-1, 63,0);
        tracep->declBus(c+154,"ysyx_22040750 cpu_core_e alu_e I_alu_op_sel", false,-1, 14,0);
        tracep->declBus(c+153,"ysyx_22040750 cpu_core_e alu_e I_alu_op_sext", false,-1, 1,0);
        tracep->declBit(c+157,"ysyx_22040750 cpu_core_e alu_e I_word_op_mask", false,-1);
        tracep->declBit(c+163,"ysyx_22040750 cpu_core_e alu_e I_multicycle", false,-1);
        tracep->declBit(c+955,"ysyx_22040750 cpu_core_e alu_e I_EX_MEM_ready", false,-1);
        tracep->declQuad(c+144,"ysyx_22040750 cpu_core_e alu_e I_csr_data", false,-1, 63,0);
        tracep->declBus(c+170,"ysyx_22040750 cpu_core_e alu_e I_uimm", false,-1, 4,0);
        tracep->declBus(c+169,"ysyx_22040750 cpu_core_e alu_e I_csr_op_sel", false,-1, 6,0);
        tracep->declQuad(c+100,"ysyx_22040750 cpu_core_e alu_e O_result", false,-1, 63,0);
        tracep->declQuad(c+108,"ysyx_22040750 cpu_core_e alu_e O_csr_data", false,-1, 63,0);
        tracep->declBit(c+164,"ysyx_22040750 cpu_core_e alu_e O_result_valid", false,-1);
        tracep->declBit(c+988,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e I_sys_clk", false,-1);
        tracep->declBit(c+989,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e I_rst", false,-1);
        tracep->declQuad(c+144,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e I_csr_data", false,-1, 63,0);
        tracep->declQuad(c+96,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e I_op1", false,-1, 63,0);
        tracep->declQuad(c+98,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e I_op2", false,-1, 63,0);
        tracep->declBus(c+154,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e I_alu_op_sel", false,-1, 14,0);
        tracep->declBus(c+153,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e I_alu_op_sext", false,-1, 1,0);
        tracep->declBit(c+157,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e I_word_op_mask", false,-1);
        tracep->declBit(c+163,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e I_multicycle", false,-1);
        tracep->declBit(c+955,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e I_EX_MEM_ready", false,-1);
        tracep->declQuad(c+100,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e O_result", false,-1, 63,0);
        tracep->declBit(c+164,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e O_result_valid", false,-1);
        tracep->declBit(c+396,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e op_add", false,-1);
        tracep->declBit(c+397,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e op_sub", false,-1);
        tracep->declBit(c+398,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e op_slt", false,-1);
        tracep->declBit(c+399,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e op_sltu", false,-1);
        tracep->declBit(c+400,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e op_xor", false,-1);
        tracep->declBit(c+401,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e op_or", false,-1);
        tracep->declBit(c+402,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e op_and", false,-1);
        tracep->declBit(c+403,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e op_sll", false,-1);
        tracep->declBit(c+404,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e op_srl", false,-1);
        tracep->declBit(c+405,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e op_sra", false,-1);
        tracep->declBit(c+406,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e op_mul", false,-1);
        tracep->declBit(c+407,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e op_mulh", false,-1);
        tracep->declBit(c+408,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e op_div", false,-1);
        tracep->declBit(c+409,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e op_rem", false,-1);
        tracep->declBit(c+410,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e op_csr", false,-1);
        tracep->declQuad(c+411,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e add_sub_result", false,-1, 63,0);
        tracep->declQuad(c+413,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e slt_result", false,-1, 63,0);
        tracep->declQuad(c+415,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e sltu_result", false,-1, 63,0);
        tracep->declQuad(c+417,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e xor_result", false,-1, 63,0);
        tracep->declQuad(c+419,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e or_result", false,-1, 63,0);
        tracep->declQuad(c+421,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e and_result", false,-1, 63,0);
        tracep->declQuad(c+423,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e sll_result", false,-1, 63,0);
        tracep->declQuad(c+425,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e srl_result", false,-1, 63,0);
        tracep->declQuad(c+427,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e sra_result", false,-1, 63,0);
        tracep->declQuad(c+429,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e mul_result", false,-1, 63,0);
        tracep->declQuad(c+431,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e mulh_result", false,-1, 63,0);
        tracep->declQuad(c+433,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e div_result", false,-1, 63,0);
        tracep->declQuad(c+435,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e rem_result", false,-1, 63,0);
        tracep->declQuad(c+144,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e csr_result", false,-1, 63,0);
        tracep->declArray(c+437,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e op1_sext", false,-1, 64,0);
        tracep->declArray(c+440,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e op2_sext", false,-1, 64,0);
        tracep->declBit(c+443,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e sign_bit1", false,-1);
        tracep->declBit(c+444,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e sign_bit2", false,-1);
        tracep->declBit(c+445,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e sext1", false,-1);
        tracep->declBit(c+446,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e sext2", false,-1);
        tracep->declBit(c+1082,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e mul_valid_d", false,-1);
        tracep->declBit(c+1083,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e div_valid_d", false,-1);
        tracep->declBit(c+447,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e mul_flag", false,-1);
        tracep->declBit(c+448,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e div_flag", false,-1);
        tracep->declBit(c+449,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e mul_valid", false,-1);
        tracep->declBit(c+450,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e div_valid", false,-1);
        tracep->declBit(c+451,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e mul_out_valid", false,-1);
        tracep->declBit(c+452,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e div_out_valid", false,-1);
        tracep->declQuad(c+453,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e mulh_reg", false,-1, 63,0);
        tracep->declQuad(c+455,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e mul_reg", false,-1, 63,0);
        tracep->declQuad(c+457,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e div_reg", false,-1, 63,0);
        tracep->declQuad(c+459,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e rem_reg", false,-1, 63,0);
        tracep->declBit(c+461,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e mul_reg_valid", false,-1);
        tracep->declBit(c+462,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e div_reg_valid", false,-1);
        tracep->declQuad(c+463,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e mulh_final", false,-1, 63,0);
        tracep->declQuad(c+465,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e mul_final", false,-1, 63,0);
        tracep->declQuad(c+467,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e div_final", false,-1, 63,0);
        tracep->declQuad(c+469,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e rem_final", false,-1, 63,0);
        tracep->declQuad(c+96,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e adder1", false,-1, 63,0);
        tracep->declQuad(c+471,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e adder2", false,-1, 63,0);
        tracep->declQuad(c+411,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e result", false,-1, 63,0);
        tracep->declQuad(c+473,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e cin", false,-1, 63,0);
        tracep->declBit(c+475,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e cout", false,-1);
        tracep->declQuad(c+476,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e reverse_op1", false,-1, 63,0);
        tracep->declBit(c+443,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e shift_sign", false,-1);
        tracep->declQuad(c+478,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e shift_op", false,-1, 63,0);
        tracep->declBus(c+480,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e shamt", false,-1, 5,0);
        tracep->declQuad(c+481,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e sra_mask", false,-1, 63,0);
        tracep->declQuad(c+425,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e shift_result", false,-1, 63,0);
        tracep->declBus(c+483,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e shift_opW", false,-1, 31,0);
        tracep->declQuad(c+484,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e srl_op", false,-1, 63,0);
        tracep->declQuad(c+486,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e sllw_result", false,-1, 63,0);
        tracep->declQuad(c+488,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e slldw_result", false,-1, 63,0);
        tracep->declQuad(c+490,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e dword_result", false,-1, 63,0);
        tracep->declQuad(c+492,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e word_sext_result", false,-1, 63,0);
        tracep->declBit(c+494,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e word_sext", false,-1);
        tracep->declBit(c+988,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e clk", false,-1);
        tracep->declBit(c+989,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e rst", false,-1);
        tracep->declQuad(c+495,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e mul1", false,-1, 63,0);
        tracep->declQuad(c+497,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e mul2", false,-1, 63,0);
        tracep->declBit(c+445,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e is_signed", false,-1);
        tracep->declBit(c+449,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e mul_valid", false,-1);
        tracep->declBit(c+451,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e P_valid", false,-1);
        tracep->declArray(c+499,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e P", false,-1, 127,0);
        tracep->declBit(c+503,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e sgn_ext1", false,-1);
        tracep->declBit(c+504,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e sgn_ext2", false,-1);
        tracep->declArray(c+505,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e booth_mul1", false,-1, 66,0);
        tracep->declArray(c+508,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e booth_mul2", false,-1, 131,0);
        tracep->declArray(c+513,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e partial_sum", false,-1, 131,0);
        tracep->declBit(c+518,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e partial_c", false,-1);
        tracep->declArray(c+519,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e mid_result", false,-1, 131,0);
        tracep->declBus(c+524,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e booth", false,-1, 2,0);
        tracep->declArray(c+525,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e S", false,-1, 131,0);
        tracep->declBit(c+518,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e Ci", false,-1);
        tracep->declBit(c+1084,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e end_flag", false,-1);
        tracep->declBit(c+530,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e mul_process", false,-1);
        tracep->declBus(c+531,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e iter_cnt", false,-1, 5,0);
        tracep->declBus(c+524,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e radix4_unit_e booth", false,-1, 2,0);
        tracep->declArray(c+508,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e radix4_unit_e X", false,-1, 131,0);
        tracep->declArray(c+513,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e radix4_unit_e P", false,-1, 131,0);
        tracep->declBit(c+518,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e radix4_unit_e c", false,-1);
        tracep->declBit(c+532,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e radix4_unit_e y_add", false,-1);
        tracep->declBit(c+533,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e radix4_unit_e y", false,-1);
        tracep->declBit(c+534,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e radix4_unit_e y_sub", false,-1);
        tracep->declBit(c+535,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e radix4_unit_e sel_negative", false,-1);
        tracep->declBit(c+536,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e radix4_unit_e sel_double_negative", false,-1);
        tracep->declBit(c+537,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e radix4_unit_e sel_positive", false,-1);
        tracep->declBit(c+538,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e booth_mul_serial_e radix4_unit_e sel_double_positive", false,-1);
        tracep->declBit(c+988,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e radix2_div_e clk", false,-1);
        tracep->declBit(c+989,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e radix2_div_e rst", false,-1);
        tracep->declQuad(c+495,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e radix2_div_e dividend", false,-1, 63,0);
        tracep->declQuad(c+497,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e radix2_div_e divisor", false,-1, 63,0);
        tracep->declBit(c+445,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e radix2_div_e is_signed", false,-1);
        tracep->declBit(c+450,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e radix2_div_e div_valid", false,-1);
        tracep->declQuad(c+433,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e radix2_div_e quotient", false,-1, 63,0);
        tracep->declQuad(c+435,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e radix2_div_e remainder", false,-1, 63,0);
        tracep->declBit(c+452,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e radix2_div_e Q_valid", false,-1);
        tracep->declArray(c+539,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e radix2_div_e abs_dividend", false,-1, 127,0);
        tracep->declArray(c+543,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e radix2_div_e abs_divisor", false,-1, 127,0);
        tracep->declArray(c+547,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e radix2_div_e current_sub_result", false,-1, 127,0);
        tracep->declBit(c+551,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e radix2_div_e current_q", false,-1);
        tracep->declBit(c+552,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e radix2_div_e dividend_flag", false,-1);
        tracep->declBit(c+553,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e radix2_div_e divisor_flag", false,-1);
        tracep->declBit(c+554,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e radix2_div_e q_flag", false,-1);
        tracep->declBit(c+552,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e radix2_div_e rem_flag", false,-1);
        tracep->declQuad(c+555,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e radix2_div_e abs_quotient", false,-1, 63,0);
        tracep->declBit(c+557,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e radix2_div_e div_process", false,-1);
        tracep->declBus(c+558,"ysyx_22040750 cpu_core_e alu_e gpr_alu_e radix2_div_e iter_cnt", false,-1, 5,0);
        tracep->declQuad(c+144,"ysyx_22040750 cpu_core_e alu_e csr_alu_e I_csr_data", false,-1, 63,0);
        tracep->declQuad(c+96,"ysyx_22040750 cpu_core_e alu_e csr_alu_e I_rs_data", false,-1, 63,0);
        tracep->declBus(c+170,"ysyx_22040750 cpu_core_e alu_e csr_alu_e I_uimm", false,-1, 4,0);
        tracep->declBus(c+169,"ysyx_22040750 cpu_core_e alu_e csr_alu_e I_csr_op_sel", false,-1, 6,0);
        tracep->declQuad(c+108,"ysyx_22040750 cpu_core_e alu_e csr_alu_e O_csr_data", false,-1, 63,0);
        tracep->declBit(c+559,"ysyx_22040750 cpu_core_e alu_e csr_alu_e direct_rs", false,-1);
        tracep->declBit(c+560,"ysyx_22040750 cpu_core_e alu_e csr_alu_e direct_uimm", false,-1);
        tracep->declBit(c+561,"ysyx_22040750 cpu_core_e alu_e csr_alu_e set_rs", false,-1);
        tracep->declBit(c+562,"ysyx_22040750 cpu_core_e alu_e csr_alu_e set_uimm", false,-1);
        tracep->declBit(c+563,"ysyx_22040750 cpu_core_e alu_e csr_alu_e clr_rs", false,-1);
        tracep->declBit(c+564,"ysyx_22040750 cpu_core_e alu_e csr_alu_e clr_uimm", false,-1);
        tracep->declBit(c+565,"ysyx_22040750 cpu_core_e alu_e csr_alu_e direct", false,-1);
        tracep->declBit(c+566,"ysyx_22040750 cpu_core_e alu_e csr_alu_e set", false,-1);
        tracep->declBit(c+567,"ysyx_22040750 cpu_core_e alu_e csr_alu_e clr", false,-1);
        tracep->declBit(c+568,"ysyx_22040750 cpu_core_e alu_e csr_alu_e from_rs", false,-1);
        tracep->declBit(c+569,"ysyx_22040750 cpu_core_e alu_e csr_alu_e from_uimm", false,-1);
        tracep->declQuad(c+570,"ysyx_22040750 cpu_core_e alu_e csr_alu_e op", false,-1, 63,0);
        tracep->declQuad(c+570,"ysyx_22040750 cpu_core_e alu_e csr_alu_e direct_result", false,-1, 63,0);
        tracep->declQuad(c+572,"ysyx_22040750 cpu_core_e alu_e csr_alu_e set_result", false,-1, 63,0);
        tracep->declQuad(c+574,"ysyx_22040750 cpu_core_e alu_e csr_alu_e clr_result", false,-1, 63,0);
        tracep->declBit(c+988,"ysyx_22040750 cpu_core_e EX_MEM_reg_e I_sys_clk", false,-1);
        tracep->declBit(c+989,"ysyx_22040750 cpu_core_e EX_MEM_reg_e I_rst", false,-1);
        tracep->declBit(c+158,"ysyx_22040750 cpu_core_e EX_MEM_reg_e I_EX_MEM_valid", false,-1);
        tracep->declBit(c+208,"ysyx_22040750 cpu_core_e EX_MEM_reg_e I_EX_MEM_allowout", false,-1);
        tracep->declBit(c+955,"ysyx_22040750 cpu_core_e EX_MEM_reg_e O_EX_MEM_allowin", false,-1);
        tracep->declBit(c+954,"ysyx_22040750 cpu_core_e EX_MEM_reg_e O_EX_MEM_valid", false,-1);
        tracep->declBus(c+149,"ysyx_22040750 cpu_core_e EX_MEM_reg_e I_rstrb", false,-1, 8,0);
        tracep->declBus(c+148,"ysyx_22040750 cpu_core_e EX_MEM_reg_e I_wstrb", false,-1, 7,0);
        tracep->declQuad(c+100,"ysyx_22040750 cpu_core_e EX_MEM_reg_e I_alu_out", false,-1, 63,0);
        tracep->declQuad(c+142,"ysyx_22040750 cpu_core_e EX_MEM_reg_e I_rs2_data", false,-1, 63,0);
        tracep->declBit(c+156,"ysyx_22040750 cpu_core_e EX_MEM_reg_e I_mem_wen", false,-1);
        tracep->declBus(c+146,"ysyx_22040750 cpu_core_e EX_MEM_reg_e I_pc", false,-1, 31,0);
        tracep->declBit(c+155,"ysyx_22040750 cpu_core_e EX_MEM_reg_e I_reg_wen", false,-1);
        tracep->declBus(c+147,"ysyx_22040750 cpu_core_e EX_MEM_reg_e I_rd_addr", false,-1, 4,0);
        tracep->declBus(c+152,"ysyx_22040750 cpu_core_e EX_MEM_reg_e I_regin_sel", false,-1, 2,0);
        tracep->declBit(c+83,"ysyx_22040750 cpu_core_e EX_MEM_reg_e I_mem_ready", false,-1);
        tracep->declBit(c+934,"ysyx_22040750 cpu_core_e EX_MEM_reg_e I_mem_data_rvalid", false,-1);
        tracep->declBit(c+1053,"ysyx_22040750 cpu_core_e EX_MEM_reg_e I_mem_data_bvalid", false,-1);
        tracep->declBus(c+165,"ysyx_22040750 cpu_core_e EX_MEM_reg_e I_csr_addr", false,-1, 11,0);
        tracep->declBit(c+166,"ysyx_22040750 cpu_core_e EX_MEM_reg_e I_csr_wen", false,-1);
        tracep->declBit(c+167,"ysyx_22040750 cpu_core_e EX_MEM_reg_e I_csr_intr", false,-1);
        tracep->declQuad(c+171,"ysyx_22040750 cpu_core_e EX_MEM_reg_e I_csr_intr_no", false,-1, 63,0);
        tracep->declBit(c+168,"ysyx_22040750 cpu_core_e EX_MEM_reg_e I_csr_mret", false,-1);
        tracep->declQuad(c+108,"ysyx_22040750 cpu_core_e EX_MEM_reg_e I_csr", false,-1, 63,0);
        tracep->declBus(c+189,"ysyx_22040750 cpu_core_e EX_MEM_reg_e O_csr_addr", false,-1, 11,0);
        tracep->declBit(c+190,"ysyx_22040750 cpu_core_e EX_MEM_reg_e O_csr_wen", false,-1);
        tracep->declBit(c+191,"ysyx_22040750 cpu_core_e EX_MEM_reg_e O_csr_intr", false,-1);
        tracep->declQuad(c+193,"ysyx_22040750 cpu_core_e EX_MEM_reg_e O_csr_intr_no", false,-1, 63,0);
        tracep->declBit(c+192,"ysyx_22040750 cpu_core_e EX_MEM_reg_e O_csr_mret", false,-1);
        tracep->declQuad(c+177,"ysyx_22040750 cpu_core_e EX_MEM_reg_e O_csr", false,-1, 63,0);
        tracep->declBus(c+173,"ysyx_22040750 cpu_core_e EX_MEM_reg_e O_rstrb", false,-1, 8,0);
        tracep->declBus(c+174,"ysyx_22040750 cpu_core_e EX_MEM_reg_e O_wstrb", false,-1, 7,0);
        tracep->declQuad(c+175,"ysyx_22040750 cpu_core_e EX_MEM_reg_e O_alu_out", false,-1, 63,0);
        tracep->declQuad(c+104,"ysyx_22040750 cpu_core_e EX_MEM_reg_e O_rs2_data", false,-1, 63,0);
        tracep->declBit(c+79,"ysyx_22040750 cpu_core_e EX_MEM_reg_e O_mem_rd_en", false,-1);
        tracep->declBit(c+80,"ysyx_22040750 cpu_core_e EX_MEM_reg_e O_mem_wr_en", false,-1);
        tracep->declBit(c+179,"ysyx_22040750 cpu_core_e EX_MEM_reg_e O_mem_wen", false,-1);
        tracep->declBus(c+180,"ysyx_22040750 cpu_core_e EX_MEM_reg_e O_pc", false,-1, 31,0);
        tracep->declBit(c+181,"ysyx_22040750 cpu_core_e EX_MEM_reg_e O_reg_wen", false,-1);
        tracep->declBus(c+182,"ysyx_22040750 cpu_core_e EX_MEM_reg_e O_rd_addr", false,-1, 4,0);
        tracep->declBus(c+183,"ysyx_22040750 cpu_core_e EX_MEM_reg_e O_regin_sel", false,-1, 2,0);
        tracep->declBit(c+188,"ysyx_22040750 cpu_core_e EX_MEM_reg_e O_EX_MEM_input_valid", false,-1);
        tracep->declBus(c+160,"ysyx_22040750 cpu_core_e EX_MEM_reg_e I_inst_debug", false,-1, 31,0);
        tracep->declBus(c+186,"ysyx_22040750 cpu_core_e EX_MEM_reg_e O_inst_debug", false,-1, 31,0);
        tracep->declBit(c+161,"ysyx_22040750 cpu_core_e EX_MEM_reg_e I_bubble_inst_debug", false,-1);
        tracep->declBit(c+187,"ysyx_22040750 cpu_core_e EX_MEM_reg_e O_bubble_inst_debug", false,-1);
        tracep->declBit(c+79,"ysyx_22040750 cpu_core_e EX_MEM_reg_e mem_rd_en", false,-1);
        tracep->declBit(c+80,"ysyx_22040750 cpu_core_e EX_MEM_reg_e mem_wr_en", false,-1);
        tracep->declBit(c+188,"ysyx_22040750 cpu_core_e EX_MEM_reg_e input_valid", false,-1);
        tracep->declBit(c+958,"ysyx_22040750 cpu_core_e EX_MEM_reg_e output_valid", false,-1);
        tracep->declBit(c+576,"ysyx_22040750 cpu_core_e EX_MEM_reg_e rd_handshake", false,-1);
        tracep->declBit(c+577,"ysyx_22040750 cpu_core_e EX_MEM_reg_e wr_handshake", false,-1);
        tracep->declQuad(c+104,"ysyx_22040750 cpu_core_e mem_sd_e I_data_in", false,-1, 63,0);
        tracep->declBus(c+174,"ysyx_22040750 cpu_core_e mem_sd_e I_wr_strb", false,-1, 7,0);
        tracep->declQuad(c+81,"ysyx_22040750 cpu_core_e mem_sd_e O_sd_data", false,-1, 63,0);
        tracep->declBit(c+988,"ysyx_22040750 cpu_core_e MEM_WB_reg_e I_sys_clk", false,-1);
        tracep->declBit(c+989,"ysyx_22040750 cpu_core_e MEM_WB_reg_e I_rst", false,-1);
        tracep->declBit(c+954,"ysyx_22040750 cpu_core_e MEM_WB_reg_e I_MEM_WB_valid", false,-1);
        tracep->declBit(c+208,"ysyx_22040750 cpu_core_e MEM_WB_reg_e O_MEM_WB_allowin", false,-1);
        tracep->declBit(c+196,"ysyx_22040750 cpu_core_e MEM_WB_reg_e O_MEM_WB_valid", false,-1);
        tracep->declBus(c+180,"ysyx_22040750 cpu_core_e MEM_WB_reg_e I_pc", false,-1, 31,0);
        tracep->declQuad(c+932,"ysyx_22040750 cpu_core_e MEM_WB_reg_e I_mem_data", false,-1, 63,0);
        tracep->declBus(c+173,"ysyx_22040750 cpu_core_e MEM_WB_reg_e I_mem_rstrb", false,-1, 8,0);
        tracep->declBus(c+184,"ysyx_22040750 cpu_core_e MEM_WB_reg_e I_mem_shamt", false,-1, 2,0);
        tracep->declQuad(c+175,"ysyx_22040750 cpu_core_e MEM_WB_reg_e I_alu_out", false,-1, 63,0);
        tracep->declBit(c+181,"ysyx_22040750 cpu_core_e MEM_WB_reg_e I_reg_wen", false,-1);
        tracep->declBus(c+182,"ysyx_22040750 cpu_core_e MEM_WB_reg_e I_rd_addr", false,-1, 4,0);
        tracep->declBus(c+183,"ysyx_22040750 cpu_core_e MEM_WB_reg_e I_regin_sel", false,-1, 2,0);
        tracep->declBus(c+189,"ysyx_22040750 cpu_core_e MEM_WB_reg_e I_csr_addr", false,-1, 11,0);
        tracep->declBit(c+190,"ysyx_22040750 cpu_core_e MEM_WB_reg_e I_csr_wen", false,-1);
        tracep->declBit(c+191,"ysyx_22040750 cpu_core_e MEM_WB_reg_e I_csr_intr", false,-1);
        tracep->declQuad(c+193,"ysyx_22040750 cpu_core_e MEM_WB_reg_e I_csr_intr_no", false,-1, 63,0);
        tracep->declBit(c+192,"ysyx_22040750 cpu_core_e MEM_WB_reg_e I_csr_mret", false,-1);
        tracep->declQuad(c+177,"ysyx_22040750 cpu_core_e MEM_WB_reg_e I_csr", false,-1, 63,0);
        tracep->declBus(c+212,"ysyx_22040750 cpu_core_e MEM_WB_reg_e O_csr_addr", false,-1, 11,0);
        tracep->declBit(c+213,"ysyx_22040750 cpu_core_e MEM_WB_reg_e O_csr_wen", false,-1);
        tracep->declBit(c+214,"ysyx_22040750 cpu_core_e MEM_WB_reg_e O_csr_intr", false,-1);
        tracep->declQuad(c+216,"ysyx_22040750 cpu_core_e MEM_WB_reg_e O_csr_intr_no", false,-1, 63,0);
        tracep->declBit(c+215,"ysyx_22040750 cpu_core_e MEM_WB_reg_e O_csr_mret", false,-1);
        tracep->declQuad(c+202,"ysyx_22040750 cpu_core_e MEM_WB_reg_e O_csr", false,-1, 63,0);
        tracep->declBus(c+195,"ysyx_22040750 cpu_core_e MEM_WB_reg_e O_pc", false,-1, 31,0);
        tracep->declQuad(c+197,"ysyx_22040750 cpu_core_e MEM_WB_reg_e O_mem_data", false,-1, 63,0);
        tracep->declBus(c+199,"ysyx_22040750 cpu_core_e MEM_WB_reg_e O_mem_rstrb", false,-1, 8,0);
        tracep->declBus(c+207,"ysyx_22040750 cpu_core_e MEM_WB_reg_e O_mem_shamt", false,-1, 2,0);
        tracep->declQuad(c+200,"ysyx_22040750 cpu_core_e MEM_WB_reg_e O_alu_out", false,-1, 63,0);
        tracep->declBit(c+204,"ysyx_22040750 cpu_core_e MEM_WB_reg_e O_reg_wen", false,-1);
        tracep->declBus(c+205,"ysyx_22040750 cpu_core_e MEM_WB_reg_e O_rd_addr", false,-1, 4,0);
        tracep->declBus(c+206,"ysyx_22040750 cpu_core_e MEM_WB_reg_e O_regin_sel", false,-1, 2,0);
        tracep->declBit(c+196,"ysyx_22040750 cpu_core_e MEM_WB_reg_e O_MEM_WB_input_valid", false,-1);
        tracep->declBus(c+186,"ysyx_22040750 cpu_core_e MEM_WB_reg_e I_inst_debug", false,-1, 31,0);
        tracep->declBus(c+209,"ysyx_22040750 cpu_core_e MEM_WB_reg_e O_inst_debug", false,-1, 31,0);
        tracep->declBit(c+187,"ysyx_22040750 cpu_core_e MEM_WB_reg_e I_bubble_inst_debug", false,-1);
        tracep->declBit(c+210,"ysyx_22040750 cpu_core_e MEM_WB_reg_e O_bubble_inst_debug", false,-1);
        tracep->declBit(c+225,"ysyx_22040750 cpu_core_e MEM_WB_reg_e I_mem_op_debug", false,-1);
        tracep->declBit(c+226,"ysyx_22040750 cpu_core_e MEM_WB_reg_e O_mem_op_debug", false,-1);
        tracep->declBus(c+78,"ysyx_22040750 cpu_core_e MEM_WB_reg_e I_mem_addr_debug", false,-1, 31,0);
        tracep->declBus(c+227,"ysyx_22040750 cpu_core_e MEM_WB_reg_e O_mem_addr_debug", false,-1, 31,0);
        tracep->declBit(c+196,"ysyx_22040750 cpu_core_e MEM_WB_reg_e input_valid", false,-1);
        tracep->declBit(c+196,"ysyx_22040750 cpu_core_e MEM_WB_reg_e output_valid", false,-1);
        tracep->declQuad(c+197,"ysyx_22040750 cpu_core_e mem_ld_e I_data_in", false,-1, 63,0);
        tracep->declBus(c+199,"ysyx_22040750 cpu_core_e mem_ld_e I_rd_strb", false,-1, 8,0);
        tracep->declBus(c+207,"ysyx_22040750 cpu_core_e mem_ld_e I_rd_shamt", false,-1, 2,0);
        tracep->declQuad(c+102,"ysyx_22040750 cpu_core_e mem_ld_e O_load_data", false,-1, 63,0);
        tracep->declBit(c+578,"ysyx_22040750 cpu_core_e mem_ld_e sext_flag", false,-1);
        tracep->declBit(c+579,"ysyx_22040750 cpu_core_e mem_ld_e sext_bit", false,-1);
        tracep->declBus(c+580,"ysyx_22040750 cpu_core_e mem_ld_e sext_mask", false,-1, 7,0);
        tracep->declQuad(c+581,"ysyx_22040750 cpu_core_e mem_ld_e ld_data", false,-1, 63,0);
        tracep->declBus(c+1081,"ysyx_22040750 cpu_core_e regin_64bit_2sel N", false,-1, 31,0);
        tracep->declBus(c+1085,"ysyx_22040750 cpu_core_e regin_64bit_2sel M", false,-1, 31,0);
        tracep->declArray(c+583,"ysyx_22040750 cpu_core_e regin_64bit_2sel I_sel_data", false,-1, 127,0);
        tracep->declBus(c+587,"ysyx_22040750 cpu_core_e regin_64bit_2sel I_sel", false,-1, 1,0);
        tracep->declQuad(c+90,"ysyx_22040750 cpu_core_e regin_64bit_2sel O_sel_data", false,-1, 63,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+588+i*2,"ysyx_22040750 cpu_core_e regin_64bit_2sel sel_data", true,(i+0), 63,0);}}
        tracep->declBus(c+1086,"ysyx_22040750 cpu_core_e regin_64bit_2sel unnamedblk1 i", false,-1, 31,0);
        tracep->declBit(c+988,"ysyx_22040750 cpu_core_e gpr_e I_sys_clk", false,-1);
        tracep->declBit(c+989,"ysyx_22040750 cpu_core_e gpr_e I_rst", false,-1);
        tracep->declQuad(c+90,"ysyx_22040750 cpu_core_e gpr_e I_wr_data", false,-1, 63,0);
        tracep->declBit(c+592,"ysyx_22040750 cpu_core_e gpr_e I_wen", false,-1);
        tracep->declBus(c+205,"ysyx_22040750 cpu_core_e gpr_e I_rd_addr", false,-1, 4,0);
        tracep->declBus(c+110,"ysyx_22040750 cpu_core_e gpr_e I_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+92,"ysyx_22040750 cpu_core_e gpr_e O_rs1_data", false,-1, 63,0);
        tracep->declBus(c+111,"ysyx_22040750 cpu_core_e gpr_e I_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+94,"ysyx_22040750 cpu_core_e gpr_e O_rs2_data", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+593+i*2,"ysyx_22040750 cpu_core_e gpr_e gpr", true,(i+0), 63,0);}}
        {int i; for (i=0; i<32; i++) {
                tracep->declBit(c+657+i*1,"ysyx_22040750 cpu_core_e gpr_e wen", true,(i+0));}}
        tracep->declBit(c+988,"ysyx_22040750 cpu_core_e csr_e I_sys_clk", false,-1);
        tracep->declBit(c+989,"ysyx_22040750 cpu_core_e csr_e I_rst", false,-1);
        tracep->declBit(c+196,"ysyx_22040750 cpu_core_e csr_e I_MEM_WB_valid", false,-1);
        tracep->declBit(c+213,"ysyx_22040750 cpu_core_e csr_e I_csr_wen", false,-1);
        tracep->declBit(c+214,"ysyx_22040750 cpu_core_e csr_e I_csr_intr_wr", false,-1);
        tracep->declBit(c+126,"ysyx_22040750 cpu_core_e csr_e I_csr_intr_rd", false,-1);
        tracep->declBus(c+195,"ysyx_22040750 cpu_core_e csr_e I_intr_pc", false,-1, 31,0);
        tracep->declQuad(c+216,"ysyx_22040750 cpu_core_e csr_e I_csr_intr_no", false,-1, 63,0);
        tracep->declBit(c+215,"ysyx_22040750 cpu_core_e csr_e I_csr_mret_wr", false,-1);
        tracep->declBit(c+127,"ysyx_22040750 cpu_core_e csr_e I_csr_mret_rd", false,-1);
        tracep->declBus(c+212,"ysyx_22040750 cpu_core_e csr_e I_wr_addr", false,-1, 11,0);
        tracep->declBus(c+124,"ysyx_22040750 cpu_core_e csr_e I_rd_addr", false,-1, 11,0);
        tracep->declQuad(c+202,"ysyx_22040750 cpu_core_e csr_e I_wr_data", false,-1, 63,0);
        tracep->declQuad(c+106,"ysyx_22040750 cpu_core_e csr_e O_rd_data", false,-1, 63,0);
        tracep->declBus(c+1087,"ysyx_22040750 cpu_core_e csr_e CSR_NUM", false,-1, 31,0);
        tracep->declBus(c+1088,"ysyx_22040750 cpu_core_e csr_e MEPC", false,-1, 11,0);
        tracep->declBus(c+1089,"ysyx_22040750 cpu_core_e csr_e MSTATUS", false,-1, 11,0);
        tracep->declBus(c+1090,"ysyx_22040750 cpu_core_e csr_e MTVEC", false,-1, 11,0);
        tracep->declBus(c+1091,"ysyx_22040750 cpu_core_e csr_e MCAUSE", false,-1, 11,0);
        tracep->declBus(c+1092,"ysyx_22040750 cpu_core_e csr_e MSCRATCH", false,-1, 11,0);
        tracep->declQuad(c+689,"ysyx_22040750 cpu_core_e csr_e mepc", false,-1, 63,0);
        tracep->declQuad(c+691,"ysyx_22040750 cpu_core_e csr_e mstatus", false,-1, 63,0);
        tracep->declQuad(c+693,"ysyx_22040750 cpu_core_e csr_e mtvec", false,-1, 63,0);
        tracep->declQuad(c+695,"ysyx_22040750 cpu_core_e csr_e mcause", false,-1, 63,0);
        tracep->declQuad(c+697,"ysyx_22040750 cpu_core_e csr_e mscratch", false,-1, 63,0);
        tracep->declQuad(c+106,"ysyx_22040750 cpu_core_e csr_e rd_data", false,-1, 63,0);
        tracep->declBit(c+699,"ysyx_22040750 cpu_core_e csr_e mie", false,-1);
        tracep->declBit(c+700,"ysyx_22040750 cpu_core_e csr_e mpie", false,-1);
        tracep->declBit(c+701,"ysyx_22040750 cpu_core_e csr_e csr_wen", false,-1);
        tracep->declBit(c+702,"ysyx_22040750 cpu_core_e csr_e csr_intr_wr", false,-1);
        tracep->declBit(c+703,"ysyx_22040750 cpu_core_e csr_e csr_mret_wr", false,-1);
        tracep->declBit(c+988,"ysyx_22040750 cache_e I_clk", false,-1);
        tracep->declBit(c+989,"ysyx_22040750 cache_e I_rst", false,-1);
        tracep->declBus(c+75,"ysyx_22040750 cache_e I_cpu_pc", false,-1, 31,0);
        tracep->declBit(c+951,"ysyx_22040750 cache_e I_cpu_pc_valid", false,-1);
        tracep->declBit(c+77,"ysyx_22040750 cache_e O_cpu_pc_ready", false,-1);
        tracep->declBit(c+83,"ysyx_22040750 cache_e O_cpu_mem_ready", false,-1);
        tracep->declBus(c+78,"ysyx_22040750 cache_e I_cpu_addr", false,-1, 31,0);
        tracep->declBus(c+84,"ysyx_22040750 cache_e I_cpu_wmask", false,-1, 7,0);
        tracep->declBit(c+79,"ysyx_22040750 cache_e I_cpu_rd_req", false,-1);
        tracep->declBit(c+80,"ysyx_22040750 cache_e I_cpu_wr_req", false,-1);
        tracep->declQuad(c+81,"ysyx_22040750 cache_e I_cpu_wdata", false,-1, 63,0);
        tracep->declArray(c+10,"ysyx_22040750 cache_e I_sram0_rdata", false,-1, 127,0);
        tracep->declArray(c+23,"ysyx_22040750 cache_e I_sram1_rdata", false,-1, 127,0);
        tracep->declArray(c+28,"ysyx_22040750 cache_e I_sram2_rdata", false,-1, 127,0);
        tracep->declArray(c+33,"ysyx_22040750 cache_e I_sram3_rdata", false,-1, 127,0);
        tracep->declArray(c+47,"ysyx_22040750 cache_e I_sram4_rdata", false,-1, 127,0);
        tracep->declArray(c+60,"ysyx_22040750 cache_e I_sram5_rdata", false,-1, 127,0);
        tracep->declArray(c+65,"ysyx_22040750 cache_e I_sram6_rdata", false,-1, 127,0);
        tracep->declArray(c+70,"ysyx_22040750 cache_e I_sram7_rdata", false,-1, 127,0);
        tracep->declBus(c+942,"ysyx_22040750 cache_e O_sram_iaddr", false,-1, 5,0);
        tracep->declBus(c+37,"ysyx_22040750 cache_e O_sram_daddr", false,-1, 5,0);
        tracep->declBus(c+959,"ysyx_22040750 cache_e O_sram_cen", false,-1, 7,0);
        tracep->declBus(c+704,"ysyx_22040750 cache_e O_sram_wen", false,-1, 7,0);
        tracep->declArray(c+6,"ysyx_22040750 cache_e O_sram0_wdata", false,-1, 127,0);
        tracep->declArray(c+19,"ysyx_22040750 cache_e O_sram1_wdata", false,-1, 127,0);
        tracep->declArray(c+6,"ysyx_22040750 cache_e O_sram2_wdata", false,-1, 127,0);
        tracep->declArray(c+19,"ysyx_22040750 cache_e O_sram3_wdata", false,-1, 127,0);
        tracep->declArray(c+43,"ysyx_22040750 cache_e O_sram4_wdata", false,-1, 127,0);
        tracep->declArray(c+56,"ysyx_22040750 cache_e O_sram5_wdata", false,-1, 127,0);
        tracep->declArray(c+43,"ysyx_22040750 cache_e O_sram6_wdata", false,-1, 127,0);
        tracep->declArray(c+56,"ysyx_22040750 cache_e O_sram7_wdata", false,-1, 127,0);
        tracep->declArray(c+2,"ysyx_22040750 cache_e O_sram0_wmask", false,-1, 127,0);
        tracep->declArray(c+15,"ysyx_22040750 cache_e O_sram1_wmask", false,-1, 127,0);
        tracep->declArray(c+2,"ysyx_22040750 cache_e O_sram2_wmask", false,-1, 127,0);
        tracep->declArray(c+15,"ysyx_22040750 cache_e O_sram3_wmask", false,-1, 127,0);
        tracep->declArray(c+39,"ysyx_22040750 cache_e O_sram4_wmask", false,-1, 127,0);
        tracep->declArray(c+52,"ysyx_22040750 cache_e O_sram5_wmask", false,-1, 127,0);
        tracep->declArray(c+39,"ysyx_22040750 cache_e O_sram6_wmask", false,-1, 127,0);
        tracep->declArray(c+52,"ysyx_22040750 cache_e O_sram7_wmask", false,-1, 127,0);
        tracep->declQuad(c+1019,"ysyx_22040750 cache_e I_mem_rdata", false,-1, 63,0);
        tracep->declBit(c+1016,"ysyx_22040750 cache_e I_mem_rvalid", false,-1);
        tracep->declBit(c+1015,"ysyx_22040750 cache_e O_mem_rready", false,-1);
        tracep->declBit(c+1021,"ysyx_22040750 cache_e I_mem_rlast", false,-1);
        tracep->declBus(c+1011,"ysyx_22040750 cache_e O_mem_araddr", false,-1, 31,0);
        tracep->declBit(c+1008,"ysyx_22040750 cache_e I_mem_arready", false,-1);
        tracep->declBit(c+1009,"ysyx_22040750 cache_e O_mem_arvalid", false,-1);
        tracep->declBus(c+1012,"ysyx_22040750 cache_e O_mem_arlen", false,-1, 7,0);
        tracep->declBus(c+1013,"ysyx_22040750 cache_e O_mem_arsize", false,-1, 2,0);
        tracep->declQuad(c+1000,"ysyx_22040750 cache_e O_mem_wdata", false,-1, 63,0);
        tracep->declBit(c+999,"ysyx_22040750 cache_e O_mem_wvalid", false,-1);
        tracep->declBit(c+998,"ysyx_22040750 cache_e I_mem_wready", false,-1);
        tracep->declBit(c+1003,"ysyx_22040750 cache_e O_mem_wlast", false,-1);
        tracep->declBus(c+1002,"ysyx_22040750 cache_e O_mem_wstrb", false,-1, 7,0);
        tracep->declBus(c+994,"ysyx_22040750 cache_e O_mem_awaddr", false,-1, 31,0);
        tracep->declBit(c+992,"ysyx_22040750 cache_e O_mem_awvalid", false,-1);
        tracep->declBit(c+991,"ysyx_22040750 cache_e I_mem_awready", false,-1);
        tracep->declBus(c+995,"ysyx_22040750 cache_e O_mem_awlen", false,-1, 7,0);
        tracep->declBus(c+996,"ysyx_22040750 cache_e O_mem_awsize", false,-1, 2,0);
        tracep->declBit(c+1005,"ysyx_22040750 cache_e I_mem_bvalid", false,-1);
        tracep->declBit(c+1004,"ysyx_22040750 cache_e O_mem_bready", false,-1);
        tracep->declQuad(c+932,"ysyx_22040750 cache_e O_cpu_rdata", false,-1, 63,0);
        tracep->declBus(c+74,"ysyx_22040750 cache_e O_cpu_inst", false,-1, 31,0);
        tracep->declBit(c+76,"ysyx_22040750 cache_e O_cpu_inst_valid", false,-1);
        tracep->declBit(c+934,"ysyx_22040750 cache_e O_cpu_rvalid", false,-1);
        tracep->declBit(c+1053,"ysyx_22040750 cache_e O_cpu_bvalid", false,-1);
        tracep->declBus(c+960,"ysyx_22040750 cache_e icache_cen", false,-1, 3,0);
        tracep->declBus(c+705,"ysyx_22040750 cache_e icache_wen", false,-1, 3,0);
        tracep->declArray(c+706,"ysyx_22040750 cache_e icache_way0_rdata", false,-1, 255,0);
        tracep->declArray(c+714,"ysyx_22040750 cache_e icache_way1_rdata", false,-1, 255,0);
        tracep->declArray(c+722,"ysyx_22040750 cache_e icache_wdata", false,-1, 255,0);
        tracep->declArray(c+730,"ysyx_22040750 cache_e icache_wmask", false,-1, 255,0);
        tracep->declBus(c+937,"ysyx_22040750 cache_e dcache_cen", false,-1, 3,0);
        tracep->declBus(c+738,"ysyx_22040750 cache_e dcache_wen", false,-1, 3,0);
        tracep->declArray(c+739,"ysyx_22040750 cache_e dcache_way0_rdata", false,-1, 255,0);
        tracep->declArray(c+747,"ysyx_22040750 cache_e dcache_way1_rdata", false,-1, 255,0);
        tracep->declArray(c+755,"ysyx_22040750 cache_e dcache_wdata", false,-1, 255,0);
        tracep->declArray(c+763,"ysyx_22040750 cache_e dcache_wmask", false,-1, 255,0);
        tracep->declQuad(c+1054,"ysyx_22040750 cache_e axi_icache_rdata", false,-1, 63,0);
        tracep->declQuad(c+961,"ysyx_22040750 cache_e axi_dcache_rdata", false,-1, 63,0);
        tracep->declBit(c+1093,"ysyx_22040750 cache_e axi_icache_rready", false,-1);
        tracep->declBit(c+1093,"ysyx_22040750 cache_e axi_dcache_rready", false,-1);
        tracep->declBit(c+963,"ysyx_22040750 cache_e axi_icache_rvalid", false,-1);
        tracep->declBit(c+964,"ysyx_22040750 cache_e axi_dcache_rvalid", false,-1);
        tracep->declBit(c+965,"ysyx_22040750 cache_e axi_icache_rlast", false,-1);
        tracep->declBit(c+966,"ysyx_22040750 cache_e axi_dcache_rlast", false,-1);
        tracep->declBus(c+771,"ysyx_22040750 cache_e axi_icache_araddr", false,-1, 31,0);
        tracep->declBus(c+772,"ysyx_22040750 cache_e axi_dcache_araddr", false,-1, 31,0);
        tracep->declBit(c+967,"ysyx_22040750 cache_e axi_icache_arready", false,-1);
        tracep->declBit(c+968,"ysyx_22040750 cache_e axi_dcache_arready", false,-1);
        tracep->declBit(c+773,"ysyx_22040750 cache_e axi_icache_arvalid", false,-1);
        tracep->declBit(c+774,"ysyx_22040750 cache_e axi_dcache_arvalid", false,-1);
        tracep->declBus(c+1094,"ysyx_22040750 cache_e axi_icache_arlen", false,-1, 7,0);
        tracep->declBus(c+775,"ysyx_22040750 cache_e axi_dcache_arlen", false,-1, 7,0);
        tracep->declBus(c+1095,"ysyx_22040750 cache_e axi_icache_arsize", false,-1, 2,0);
        tracep->declBus(c+1095,"ysyx_22040750 cache_e axi_dcache_arsize", false,-1, 2,0);
        tracep->declQuad(c+776,"ysyx_22040750 cache_e axi_dcache_wdata", false,-1, 63,0);
        tracep->declBit(c+778,"ysyx_22040750 cache_e axi_dcache_wvalid", false,-1);
        tracep->declBit(c+998,"ysyx_22040750 cache_e axi_dcache_wready", false,-1);
        tracep->declBit(c+779,"ysyx_22040750 cache_e axi_dcache_wlast", false,-1);
        tracep->declBus(c+780,"ysyx_22040750 cache_e axi_dcache_wstrb", false,-1, 7,0);
        tracep->declBus(c+781,"ysyx_22040750 cache_e axi_dcache_awaddr", false,-1, 31,0);
        tracep->declBit(c+782,"ysyx_22040750 cache_e axi_dcache_awvalid", false,-1);
        tracep->declBit(c+991,"ysyx_22040750 cache_e axi_dcache_awready", false,-1);
        tracep->declBus(c+775,"ysyx_22040750 cache_e axi_dcache_awlen", false,-1, 7,0);
        tracep->declBus(c+1095,"ysyx_22040750 cache_e axi_dcache_awsize", false,-1, 2,0);
        tracep->declBit(c+1005,"ysyx_22040750 cache_e axi_dcache_bvalid", false,-1);
        tracep->declBit(c+1093,"ysyx_22040750 cache_e axi_dcache_bready", false,-1);
        tracep->declBit(c+988,"ysyx_22040750 cache_e crossbar_e I_clk", false,-1);
        tracep->declBit(c+989,"ysyx_22040750 cache_e crossbar_e I_rst", false,-1);
        tracep->declQuad(c+1019,"ysyx_22040750 cache_e crossbar_e I_axi_rdata", false,-1, 63,0);
        tracep->declBit(c+1016,"ysyx_22040750 cache_e crossbar_e I_axi_rvalid", false,-1);
        tracep->declBit(c+1021,"ysyx_22040750 cache_e crossbar_e I_axi_rlast", false,-1);
        tracep->declBit(c+1015,"ysyx_22040750 cache_e crossbar_e O_axi_rready", false,-1);
        tracep->declBus(c+1011,"ysyx_22040750 cache_e crossbar_e O_axi_araddr", false,-1, 31,0);
        tracep->declBit(c+1008,"ysyx_22040750 cache_e crossbar_e I_axi_arready", false,-1);
        tracep->declBit(c+1009,"ysyx_22040750 cache_e crossbar_e O_axi_arvalid", false,-1);
        tracep->declBus(c+1012,"ysyx_22040750 cache_e crossbar_e O_axi_arlen", false,-1, 7,0);
        tracep->declBus(c+1013,"ysyx_22040750 cache_e crossbar_e O_axi_arsize", false,-1, 2,0);
        tracep->declQuad(c+1054,"ysyx_22040750 cache_e crossbar_e O_ch0_rdata", false,-1, 63,0);
        tracep->declBit(c+963,"ysyx_22040750 cache_e crossbar_e O_ch0_rvalid", false,-1);
        tracep->declBit(c+965,"ysyx_22040750 cache_e crossbar_e O_ch0_rlast", false,-1);
        tracep->declBit(c+1093,"ysyx_22040750 cache_e crossbar_e I_ch0_rready", false,-1);
        tracep->declBus(c+771,"ysyx_22040750 cache_e crossbar_e I_ch0_araddr", false,-1, 31,0);
        tracep->declBit(c+967,"ysyx_22040750 cache_e crossbar_e O_ch0_arready", false,-1);
        tracep->declBit(c+773,"ysyx_22040750 cache_e crossbar_e I_ch0_arvalid", false,-1);
        tracep->declBus(c+1094,"ysyx_22040750 cache_e crossbar_e I_ch0_arlen", false,-1, 7,0);
        tracep->declBus(c+1095,"ysyx_22040750 cache_e crossbar_e I_ch0_arsize", false,-1, 2,0);
        tracep->declQuad(c+961,"ysyx_22040750 cache_e crossbar_e O_ch1_rdata", false,-1, 63,0);
        tracep->declBit(c+964,"ysyx_22040750 cache_e crossbar_e O_ch1_rvalid", false,-1);
        tracep->declBit(c+966,"ysyx_22040750 cache_e crossbar_e O_ch1_rlast", false,-1);
        tracep->declBit(c+1093,"ysyx_22040750 cache_e crossbar_e I_ch1_rready", false,-1);
        tracep->declBus(c+772,"ysyx_22040750 cache_e crossbar_e I_ch1_araddr", false,-1, 31,0);
        tracep->declBit(c+968,"ysyx_22040750 cache_e crossbar_e O_ch1_arready", false,-1);
        tracep->declBit(c+774,"ysyx_22040750 cache_e crossbar_e I_ch1_arvalid", false,-1);
        tracep->declBus(c+775,"ysyx_22040750 cache_e crossbar_e I_ch1_arlen", false,-1, 7,0);
        tracep->declBus(c+1095,"ysyx_22040750 cache_e crossbar_e I_ch1_arsize", false,-1, 2,0);
        tracep->declBus(c+1096,"ysyx_22040750 cache_e crossbar_e CH0", false,-1, 0,0);
        tracep->declBus(c+1097,"ysyx_22040750 cache_e crossbar_e CH1", false,-1, 0,0);
        tracep->declBus(c+1098,"ysyx_22040750 cache_e crossbar_e IDLE", false,-1, 1,0);
        tracep->declBus(c+1099,"ysyx_22040750 cache_e crossbar_e RESP0", false,-1, 1,0);
        tracep->declBus(c+1100,"ysyx_22040750 cache_e crossbar_e RESP1", false,-1, 1,0);
        tracep->declBus(c+1101,"ysyx_22040750 cache_e crossbar_e current_state", false,-1, 1,0);
        tracep->declBus(c+1102,"ysyx_22040750 cache_e crossbar_e next_state", false,-1, 1,0);
        tracep->declBit(c+783,"ysyx_22040750 cache_e crossbar_e req0_only", false,-1);
        tracep->declBit(c+784,"ysyx_22040750 cache_e crossbar_e req1_only", false,-1);
        tracep->declBit(c+785,"ysyx_22040750 cache_e crossbar_e req_both", false,-1);
        tracep->declBit(c+786,"ysyx_22040750 cache_e crossbar_e resp0", false,-1);
        tracep->declBit(c+787,"ysyx_22040750 cache_e crossbar_e resp1", false,-1);
        tracep->declBit(c+938,"ysyx_22040750 cache_e crossbar_e ch0_arhandshake", false,-1);
        tracep->declBit(c+939,"ysyx_22040750 cache_e crossbar_e ch1_arhandshake", false,-1);
        tracep->declBit(c+969,"ysyx_22040750 cache_e crossbar_e ch0_last_handshake", false,-1);
        tracep->declBit(c+970,"ysyx_22040750 cache_e crossbar_e ch1_last_handshake", false,-1);
        tracep->declBit(c+788,"ysyx_22040750 cache_e crossbar_e ch0_process", false,-1);
        tracep->declBit(c+789,"ysyx_22040750 cache_e crossbar_e ch1_process", false,-1);
        tracep->declBit(c+790,"ysyx_22040750 cache_e crossbar_e priority_flag", false,-1);
        tracep->declBus(c+1059,"ysyx_22040750 cache_e icache_e BLOCK_SIZE", false,-1, 31,0);
        tracep->declBus(c+1087,"ysyx_22040750 cache_e icache_e CACHE_SIZE", false,-1, 31,0);
        tracep->declBus(c+1085,"ysyx_22040750 cache_e icache_e GROUP_NUM", false,-1, 31,0);
        tracep->declBus(c+1103,"ysyx_22040750 cache_e icache_e BLOCK_NUM", false,-1, 31,0);
        tracep->declBus(c+1104,"ysyx_22040750 cache_e icache_e OFFT_LEN", false,-1, 31,0);
        tracep->declBus(c+1105,"ysyx_22040750 cache_e icache_e INDEX_LEN", false,-1, 31,0);
        tracep->declBus(c+1106,"ysyx_22040750 cache_e icache_e TAG_LEN", false,-1, 31,0);
        tracep->declBit(c+988,"ysyx_22040750 cache_e icache_e I_clk", false,-1);
        tracep->declBit(c+989,"ysyx_22040750 cache_e icache_e I_rst", false,-1);
        tracep->declBus(c+75,"ysyx_22040750 cache_e icache_e I_cpu_addr", false,-1, 31,0);
        tracep->declBit(c+951,"ysyx_22040750 cache_e icache_e I_cpu_rd_req", false,-1);
        tracep->declBit(c+77,"ysyx_22040750 cache_e icache_e O_cpu_rd_ready", false,-1);
        tracep->declArray(c+706,"ysyx_22040750 cache_e icache_e I_way0_rdata", false,-1, 255,0);
        tracep->declArray(c+714,"ysyx_22040750 cache_e icache_e I_way1_rdata", false,-1, 255,0);
        tracep->declBus(c+942,"ysyx_22040750 cache_e icache_e O_sram_addr", false,-1, 5,0);
        tracep->declBus(c+960,"ysyx_22040750 cache_e icache_e O_sram_cen", false,-1, 3,0);
        tracep->declBus(c+705,"ysyx_22040750 cache_e icache_e O_sram_wen", false,-1, 3,0);
        tracep->declArray(c+722,"ysyx_22040750 cache_e icache_e O_sram_wdata", false,-1, 255,0);
        tracep->declArray(c+730,"ysyx_22040750 cache_e icache_e O_sram_wmask", false,-1, 255,0);
        tracep->declQuad(c+1054,"ysyx_22040750 cache_e icache_e I_mem_rdata", false,-1, 63,0);
        tracep->declBit(c+967,"ysyx_22040750 cache_e icache_e I_mem_arready", false,-1);
        tracep->declBit(c+963,"ysyx_22040750 cache_e icache_e I_mem_rvalid", false,-1);
        tracep->declBit(c+965,"ysyx_22040750 cache_e icache_e I_mem_rlast", false,-1);
        tracep->declBus(c+771,"ysyx_22040750 cache_e icache_e O_mem_araddr", false,-1, 31,0);
        tracep->declBit(c+773,"ysyx_22040750 cache_e icache_e O_mem_arvalid", false,-1);
        tracep->declBit(c+1093,"ysyx_22040750 cache_e icache_e O_mem_rready", false,-1);
        tracep->declBus(c+1094,"ysyx_22040750 cache_e icache_e O_mem_arlen", false,-1, 7,0);
        tracep->declBus(c+1095,"ysyx_22040750 cache_e icache_e O_mem_arsize", false,-1, 2,0);
        tracep->declBus(c+74,"ysyx_22040750 cache_e icache_e O_cpu_inst", false,-1, 31,0);
        tracep->declBit(c+76,"ysyx_22040750 cache_e icache_e O_cpu_rvalid", false,-1);
        tracep->declBus(c+791,"ysyx_22040750 cache_e icache_e offset", false,-1, 4,0);
        tracep->declBus(c+792,"ysyx_22040750 cache_e icache_e index", false,-1, 5,0);
        tracep->declBus(c+793,"ysyx_22040750 cache_e icache_e tag", false,-1, 20,0);
        tracep->declBus(c+794,"ysyx_22040750 cache_e icache_e mem_offset", false,-1, 4,0);
        tracep->declBus(c+795,"ysyx_22040750 cache_e icache_e mem_index", false,-1, 5,0);
        tracep->declBus(c+796,"ysyx_22040750 cache_e icache_e mem_tag", false,-1, 20,0);
        tracep->declBus(c+797,"ysyx_22040750 cache_e icache_e mem_addr", false,-1, 31,0);
        tracep->declArray(c+798,"ysyx_22040750 cache_e icache_e valid_table", false,-1, 127,0);
        tracep->declBus(c+802,"ysyx_22040750 cache_e icache_e way0_tag", false,-1, 20,0);
        tracep->declBus(c+803,"ysyx_22040750 cache_e icache_e way1_tag", false,-1, 20,0);
        tracep->declBit(c+804,"ysyx_22040750 cache_e icache_e way0_valid", false,-1);
        tracep->declBit(c+805,"ysyx_22040750 cache_e icache_e way1_valid", false,-1);
        tracep->declBit(c+971,"ysyx_22040750 cache_e icache_e way0_hit", false,-1);
        tracep->declBit(c+972,"ysyx_22040750 cache_e icache_e way1_hit", false,-1);
        tracep->declBit(c+806,"ysyx_22040750 cache_e icache_e way0_replace", false,-1);
        tracep->declBit(c+807,"ysyx_22040750 cache_e icache_e way1_replace", false,-1);
        tracep->declBus(c+808,"ysyx_22040750 cache_e icache_e hit_flag", false,-1, 1,0);
        tracep->declArray(c+809,"ysyx_22040750 cache_e icache_e mem_rdata", false,-1, 255,0);
        tracep->declArray(c+817,"ysyx_22040750 cache_e icache_e hit_rdata", false,-1, 255,0);
        tracep->declArray(c+722,"ysyx_22040750 cache_e icache_e cacheline_reg", false,-1, 255,0);
        tracep->declBit(c+973,"ysyx_22040750 cache_e icache_e rd_hit", false,-1);
        tracep->declBit(c+974,"ysyx_22040750 cache_e icache_e rd_miss", false,-1);
        tracep->declBit(c+938,"ysyx_22040750 cache_e icache_e rd_handshake", false,-1);
        tracep->declBit(c+825,"ysyx_22040750 cache_e icache_e rd_reload", false,-1);
        tracep->declBit(c+826,"ysyx_22040750 cache_e icache_e rd_allocate", false,-1);
        tracep->declBit(c+957,"ysyx_22040750 cache_e icache_e pc_handshake", false,-1);
        tracep->declBus(c+1107,"ysyx_22040750 cache_e icache_e IDLE", false,-1, 3,0);
        tracep->declBus(c+1108,"ysyx_22040750 cache_e icache_e RD_HIT", false,-1, 3,0);
        tracep->declBus(c+1109,"ysyx_22040750 cache_e icache_e RD_MISS", false,-1, 3,0);
        tracep->declBus(c+1110,"ysyx_22040750 cache_e icache_e RD_RELOAD", false,-1, 3,0);
        tracep->declBus(c+1111,"ysyx_22040750 cache_e icache_e RD_ALLOCATE", false,-1, 3,0);
        tracep->declBus(c+827,"ysyx_22040750 cache_e icache_e current_state", false,-1, 3,0);
        tracep->declBus(c+975,"ysyx_22040750 cache_e icache_e next_state", false,-1, 3,0);
        tracep->declBus(c+960,"ysyx_22040750 cache_e icache_e cen_icache", false,-1, 3,0);
        tracep->declBus(c+1059,"ysyx_22040750 cache_e dcache_e BLOCK_SIZE", false,-1, 31,0);
        tracep->declBus(c+1087,"ysyx_22040750 cache_e dcache_e CACHE_SIZE", false,-1, 31,0);
        tracep->declBus(c+1085,"ysyx_22040750 cache_e dcache_e GROUP_NUM", false,-1, 31,0);
        tracep->declBus(c+1103,"ysyx_22040750 cache_e dcache_e BLOCK_NUM", false,-1, 31,0);
        tracep->declBus(c+1104,"ysyx_22040750 cache_e dcache_e OFFT_LEN", false,-1, 31,0);
        tracep->declBus(c+1105,"ysyx_22040750 cache_e dcache_e INDEX_LEN", false,-1, 31,0);
        tracep->declBus(c+1106,"ysyx_22040750 cache_e dcache_e TAG_LEN", false,-1, 31,0);
        tracep->declBit(c+988,"ysyx_22040750 cache_e dcache_e I_clk", false,-1);
        tracep->declBit(c+989,"ysyx_22040750 cache_e dcache_e I_rst", false,-1);
        tracep->declBus(c+78,"ysyx_22040750 cache_e dcache_e I_cpu_addr", false,-1, 31,0);
        tracep->declQuad(c+81,"ysyx_22040750 cache_e dcache_e I_cpu_data", false,-1, 63,0);
        tracep->declBus(c+84,"ysyx_22040750 cache_e dcache_e I_cpu_wmask", false,-1, 7,0);
        tracep->declBit(c+79,"ysyx_22040750 cache_e dcache_e I_cpu_rd_req", false,-1);
        tracep->declBit(c+80,"ysyx_22040750 cache_e dcache_e I_cpu_wr_req", false,-1);
        tracep->declBit(c+83,"ysyx_22040750 cache_e dcache_e O_cpu_mem_ready", false,-1);
        tracep->declArray(c+739,"ysyx_22040750 cache_e dcache_e I_way0_rdata", false,-1, 255,0);
        tracep->declArray(c+747,"ysyx_22040750 cache_e dcache_e I_way1_rdata", false,-1, 255,0);
        tracep->declBus(c+37,"ysyx_22040750 cache_e dcache_e O_sram_addr", false,-1, 5,0);
        tracep->declBus(c+937,"ysyx_22040750 cache_e dcache_e O_sram_cen", false,-1, 3,0);
        tracep->declBus(c+738,"ysyx_22040750 cache_e dcache_e O_sram_wen", false,-1, 3,0);
        tracep->declArray(c+755,"ysyx_22040750 cache_e dcache_e O_sram_wdata", false,-1, 255,0);
        tracep->declArray(c+763,"ysyx_22040750 cache_e dcache_e O_sram_wmask", false,-1, 255,0);
        tracep->declQuad(c+961,"ysyx_22040750 cache_e dcache_e I_mem_rdata", false,-1, 63,0);
        tracep->declBit(c+968,"ysyx_22040750 cache_e dcache_e I_mem_arready", false,-1);
        tracep->declBit(c+964,"ysyx_22040750 cache_e dcache_e I_mem_rvalid", false,-1);
        tracep->declBit(c+966,"ysyx_22040750 cache_e dcache_e I_mem_rlast", false,-1);
        tracep->declBus(c+772,"ysyx_22040750 cache_e dcache_e O_mem_araddr", false,-1, 31,0);
        tracep->declBit(c+774,"ysyx_22040750 cache_e dcache_e O_mem_arvalid", false,-1);
        tracep->declBit(c+1093,"ysyx_22040750 cache_e dcache_e O_mem_rready", false,-1);
        tracep->declBus(c+775,"ysyx_22040750 cache_e dcache_e O_mem_arlen", false,-1, 7,0);
        tracep->declBus(c+1095,"ysyx_22040750 cache_e dcache_e O_mem_arsize", false,-1, 2,0);
        tracep->declBit(c+991,"ysyx_22040750 cache_e dcache_e I_mem_awready", false,-1);
        tracep->declBit(c+998,"ysyx_22040750 cache_e dcache_e I_mem_wready", false,-1);
        tracep->declBit(c+1005,"ysyx_22040750 cache_e dcache_e I_mem_bvalid", false,-1);
        tracep->declQuad(c+776,"ysyx_22040750 cache_e dcache_e O_mem_wdata", false,-1, 63,0);
        tracep->declBus(c+781,"ysyx_22040750 cache_e dcache_e O_mem_awaddr", false,-1, 31,0);
        tracep->declBit(c+782,"ysyx_22040750 cache_e dcache_e O_mem_awvalid", false,-1);
        tracep->declBit(c+778,"ysyx_22040750 cache_e dcache_e O_mem_wvalid", false,-1);
        tracep->declBit(c+1093,"ysyx_22040750 cache_e dcache_e O_mem_bready", false,-1);
        tracep->declBit(c+779,"ysyx_22040750 cache_e dcache_e O_mem_wlast", false,-1);
        tracep->declBus(c+775,"ysyx_22040750 cache_e dcache_e O_mem_awlen", false,-1, 7,0);
        tracep->declBus(c+1095,"ysyx_22040750 cache_e dcache_e O_mem_awsize", false,-1, 2,0);
        tracep->declBus(c+780,"ysyx_22040750 cache_e dcache_e O_mem_wstrb", false,-1, 7,0);
        tracep->declQuad(c+932,"ysyx_22040750 cache_e dcache_e O_cpu_data", false,-1, 63,0);
        tracep->declBit(c+934,"ysyx_22040750 cache_e dcache_e O_cpu_rvalid", false,-1);
        tracep->declBit(c+1053,"ysyx_22040750 cache_e dcache_e O_cpu_bvalid", false,-1);
        tracep->declBus(c+1063,"ysyx_22040750 cache_e dcache_e IDLE", false,-1, 14,0);
        tracep->declBus(c+1064,"ysyx_22040750 cache_e dcache_e RD_HIT", false,-1, 14,0);
        tracep->declBus(c+1065,"ysyx_22040750 cache_e dcache_e RD_MISS", false,-1, 14,0);
        tracep->declBus(c+1066,"ysyx_22040750 cache_e dcache_e RD_RELOAD", false,-1, 14,0);
        tracep->declBus(c+1067,"ysyx_22040750 cache_e dcache_e RD_WB", false,-1, 14,0);
        tracep->declBus(c+1068,"ysyx_22040750 cache_e dcache_e RD_ALLOCATE", false,-1, 14,0);
        tracep->declBus(c+1069,"ysyx_22040750 cache_e dcache_e WR_HIT", false,-1, 14,0);
        tracep->declBus(c+1070,"ysyx_22040750 cache_e dcache_e WR_MISS", false,-1, 14,0);
        tracep->declBus(c+1071,"ysyx_22040750 cache_e dcache_e WR_RELOAD", false,-1, 14,0);
        tracep->declBus(c+1072,"ysyx_22040750 cache_e dcache_e WR_WB", false,-1, 14,0);
        tracep->declBus(c+1073,"ysyx_22040750 cache_e dcache_e WR_ALLOCATE", false,-1, 14,0);
        tracep->declBus(c+1074,"ysyx_22040750 cache_e dcache_e MMIO_AR", false,-1, 14,0);
        tracep->declBus(c+1075,"ysyx_22040750 cache_e dcache_e MMIO_AW", false,-1, 14,0);
        tracep->declBus(c+1076,"ysyx_22040750 cache_e dcache_e MMIO_RD", false,-1, 14,0);
        tracep->declBus(c+1077,"ysyx_22040750 cache_e dcache_e MMIO_WR", false,-1, 14,0);
        tracep->declBus(c+828,"ysyx_22040750 cache_e dcache_e current_state", false,-1, 14,0);
        tracep->declBus(c+976,"ysyx_22040750 cache_e dcache_e next_state", false,-1, 14,0);
        tracep->declBit(c+829,"ysyx_22040750 cache_e dcache_e replace_dirty", false,-1);
        tracep->declBit(c+830,"ysyx_22040750 cache_e dcache_e rd_hit", false,-1);
        tracep->declBit(c+831,"ysyx_22040750 cache_e dcache_e rd_miss", false,-1);
        tracep->declBit(c+977,"ysyx_22040750 cache_e dcache_e rd_handshake", false,-1);
        tracep->declBit(c+832,"ysyx_22040750 cache_e dcache_e rd_reload", false,-1);
        tracep->declBit(c+833,"ysyx_22040750 cache_e dcache_e rd_wb", false,-1);
        tracep->declBit(c+834,"ysyx_22040750 cache_e dcache_e rd_allocate", false,-1);
        tracep->declBit(c+835,"ysyx_22040750 cache_e dcache_e wr_hit", false,-1);
        tracep->declBit(c+836,"ysyx_22040750 cache_e dcache_e wr_miss", false,-1);
        tracep->declBit(c+837,"ysyx_22040750 cache_e dcache_e wr_reload", false,-1);
        tracep->declBit(c+838,"ysyx_22040750 cache_e dcache_e wr_wb", false,-1);
        tracep->declBit(c+839,"ysyx_22040750 cache_e dcache_e wr_allocate", false,-1);
        tracep->declBus(c+840,"ysyx_22040750 cache_e dcache_e offset", false,-1, 4,0);
        tracep->declBus(c+841,"ysyx_22040750 cache_e dcache_e mem_offset", false,-1, 4,0);
        tracep->declBus(c+842,"ysyx_22040750 cache_e dcache_e index", false,-1, 5,0);
        tracep->declBus(c+843,"ysyx_22040750 cache_e dcache_e mem_index", false,-1, 5,0);
        tracep->declBus(c+844,"ysyx_22040750 cache_e dcache_e tag", false,-1, 20,0);
        tracep->declBus(c+845,"ysyx_22040750 cache_e dcache_e mem_tag", false,-1, 20,0);
        tracep->declBus(c+846,"ysyx_22040750 cache_e dcache_e mem_addr", false,-1, 31,0);
        tracep->declBus(c+847,"ysyx_22040750 cache_e dcache_e sram_wmask", false,-1, 7,0);
        tracep->declBus(c+848,"ysyx_22040750 cache_e dcache_e sram_wmaskB", false,-1, 31,0);
        tracep->declBus(c+849,"ysyx_22040750 cache_e dcache_e hit_flag", false,-1, 1,0);
        tracep->declArray(c+850,"ysyx_22040750 cache_e dcache_e mem_rdata", false,-1, 255,0);
        tracep->declArray(c+858,"ysyx_22040750 cache_e dcache_e hit_rdata", false,-1, 255,0);
        tracep->declArray(c+755,"ysyx_22040750 cache_e dcache_e cacheline_reg", false,-1, 255,0);
        tracep->declQuad(c+866,"ysyx_22040750 cache_e dcache_e cpu_reg", false,-1, 63,0);
        tracep->declBus(c+868,"ysyx_22040750 cache_e dcache_e cpu_mask_reg", false,-1, 7,0);
        tracep->declBus(c+937,"ysyx_22040750 cache_e dcache_e cen_dcache", false,-1, 3,0);
        tracep->declBus(c+738,"ysyx_22040750 cache_e dcache_e wen_dcache", false,-1, 3,0);
        tracep->declBit(c+869,"ysyx_22040750 cache_e dcache_e sram_wflag", false,-1);
        tracep->declBit(c+940,"ysyx_22040750 cache_e dcache_e sram_rflag", false,-1);
        tracep->declArray(c+870,"ysyx_22040750 cache_e dcache_e valid_table", false,-1, 127,0);
        tracep->declArray(c+874,"ysyx_22040750 cache_e dcache_e dirty_table", false,-1, 127,0);
        tracep->declBus(c+878,"ysyx_22040750 cache_e dcache_e way0_tag", false,-1, 20,0);
        tracep->declBus(c+879,"ysyx_22040750 cache_e dcache_e way1_tag", false,-1, 20,0);
        tracep->declBit(c+880,"ysyx_22040750 cache_e dcache_e way0_valid", false,-1);
        tracep->declBit(c+881,"ysyx_22040750 cache_e dcache_e way1_valid", false,-1);
        tracep->declBit(c+882,"ysyx_22040750 cache_e dcache_e way0_hit", false,-1);
        tracep->declBit(c+883,"ysyx_22040750 cache_e dcache_e way1_hit", false,-1);
        tracep->declBit(c+884,"ysyx_22040750 cache_e dcache_e hit", false,-1);
        tracep->declBit(c+885,"ysyx_22040750 cache_e dcache_e way0_dirty", false,-1);
        tracep->declBit(c+886,"ysyx_22040750 cache_e dcache_e way1_dirty", false,-1);
        tracep->declBit(c+887,"ysyx_22040750 cache_e dcache_e way1_op", false,-1);
        tracep->declBit(c+888,"ysyx_22040750 cache_e dcache_e isway0_op", false,-1);
        tracep->declBus(c+1078,"ysyx_22040750 cache_e dcache_e WB_IDLE", false,-1, 2,0);
        tracep->declBus(c+1079,"ysyx_22040750 cache_e dcache_e WB_HANDSHAKE", false,-1, 2,0);
        tracep->declBus(c+1080,"ysyx_22040750 cache_e dcache_e WB_DATA", false,-1, 2,0);
        tracep->declBus(c+889,"ysyx_22040750 cache_e dcache_e wb_state", false,-1, 2,0);
        tracep->declBus(c+941,"ysyx_22040750 cache_e dcache_e wb_next_state", false,-1, 2,0);
        tracep->declBit(c+890,"ysyx_22040750 cache_e dcache_e mem_ar_req", false,-1);
        tracep->declBit(c+891,"ysyx_22040750 cache_e dcache_e mem_aw_req", false,-1);
        tracep->declBit(c+978,"ysyx_22040750 cache_e dcache_e aw_handshake", false,-1);
        tracep->declBit(c+979,"ysyx_22040750 cache_e dcache_e wr_handshake", false,-1);
        tracep->declBus(c+892,"ysyx_22040750 cache_e dcache_e wdata_cnt", false,-1, 1,0);
        tracep->declArray(c+893,"ysyx_22040750 cache_e dcache_e wdata", false,-1, 255,0);
        tracep->declQuad(c+901,"ysyx_22040750 cache_e dcache_e cache_wdata", false,-1, 63,0);
        tracep->declQuad(c+903,"ysyx_22040750 cache_e dcache_e cache_rdata", false,-1, 63,0);
        tracep->declBus(c+905,"ysyx_22040750 cache_e dcache_e cache_awaddr", false,-1, 31,0);
        tracep->declBit(c+906,"ysyx_22040750 cache_e dcache_e mmio_flag", false,-1);
        tracep->declBit(c+907,"ysyx_22040750 cache_e dcache_e mmio_process", false,-1);
        tracep->declQuad(c+866,"ysyx_22040750 cache_e dcache_e mmio_wdata", false,-1, 63,0);
        tracep->declQuad(c+961,"ysyx_22040750 cache_e dcache_e mmio_rdata", false,-1, 63,0);
        tracep->declBus(c+846,"ysyx_22040750 cache_e dcache_e mmio_awaddr", false,-1, 31,0);
        tracep->declBus(c+1103,"ysyx_22040750 sram0 Bits", false,-1, 31,0);
        tracep->declBus(c+1081,"ysyx_22040750 sram0 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1105,"ysyx_22040750 sram0 Add_Width", false,-1, 31,0);
        tracep->declBus(c+1103,"ysyx_22040750 sram0 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+10,"ysyx_22040750 sram0 Q", false,-1, 127,0);
        tracep->declBit(c+988,"ysyx_22040750 sram0 CLK", false,-1);
        tracep->declBit(c+943,"ysyx_22040750 sram0 CEN", false,-1);
        tracep->declBit(c+1,"ysyx_22040750 sram0 WEN", false,-1);
        tracep->declArray(c+2,"ysyx_22040750 sram0 BWEN", false,-1, 127,0);
        tracep->declBus(c+942,"ysyx_22040750 sram0 A", false,-1, 5,0);
        tracep->declArray(c+6,"ysyx_22040750 sram0 D", false,-1, 127,0);
        tracep->declBit(c+980,"ysyx_22040750 sram0 cen", false,-1);
        tracep->declBit(c+908,"ysyx_22040750 sram0 wen", false,-1);
        tracep->declArray(c+909,"ysyx_22040750 sram0 bwen", false,-1, 127,0);
        tracep->declBus(c+1103,"ysyx_22040750 sram1 Bits", false,-1, 31,0);
        tracep->declBus(c+1081,"ysyx_22040750 sram1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1105,"ysyx_22040750 sram1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+1103,"ysyx_22040750 sram1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+23,"ysyx_22040750 sram1 Q", false,-1, 127,0);
        tracep->declBit(c+988,"ysyx_22040750 sram1 CLK", false,-1);
        tracep->declBit(c+944,"ysyx_22040750 sram1 CEN", false,-1);
        tracep->declBit(c+14,"ysyx_22040750 sram1 WEN", false,-1);
        tracep->declArray(c+15,"ysyx_22040750 sram1 BWEN", false,-1, 127,0);
        tracep->declBus(c+942,"ysyx_22040750 sram1 A", false,-1, 5,0);
        tracep->declArray(c+19,"ysyx_22040750 sram1 D", false,-1, 127,0);
        tracep->declBit(c+981,"ysyx_22040750 sram1 cen", false,-1);
        tracep->declBit(c+913,"ysyx_22040750 sram1 wen", false,-1);
        tracep->declArray(c+914,"ysyx_22040750 sram1 bwen", false,-1, 127,0);
        tracep->declBus(c+1103,"ysyx_22040750 sram2 Bits", false,-1, 31,0);
        tracep->declBus(c+1081,"ysyx_22040750 sram2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1105,"ysyx_22040750 sram2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+1103,"ysyx_22040750 sram2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+28,"ysyx_22040750 sram2 Q", false,-1, 127,0);
        tracep->declBit(c+988,"ysyx_22040750 sram2 CLK", false,-1);
        tracep->declBit(c+945,"ysyx_22040750 sram2 CEN", false,-1);
        tracep->declBit(c+27,"ysyx_22040750 sram2 WEN", false,-1);
        tracep->declArray(c+2,"ysyx_22040750 sram2 BWEN", false,-1, 127,0);
        tracep->declBus(c+942,"ysyx_22040750 sram2 A", false,-1, 5,0);
        tracep->declArray(c+6,"ysyx_22040750 sram2 D", false,-1, 127,0);
        tracep->declBit(c+982,"ysyx_22040750 sram2 cen", false,-1);
        tracep->declBit(c+918,"ysyx_22040750 sram2 wen", false,-1);
        tracep->declArray(c+909,"ysyx_22040750 sram2 bwen", false,-1, 127,0);
        tracep->declBus(c+1103,"ysyx_22040750 sram3 Bits", false,-1, 31,0);
        tracep->declBus(c+1081,"ysyx_22040750 sram3 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1105,"ysyx_22040750 sram3 Add_Width", false,-1, 31,0);
        tracep->declBus(c+1103,"ysyx_22040750 sram3 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+33,"ysyx_22040750 sram3 Q", false,-1, 127,0);
        tracep->declBit(c+988,"ysyx_22040750 sram3 CLK", false,-1);
        tracep->declBit(c+946,"ysyx_22040750 sram3 CEN", false,-1);
        tracep->declBit(c+32,"ysyx_22040750 sram3 WEN", false,-1);
        tracep->declArray(c+15,"ysyx_22040750 sram3 BWEN", false,-1, 127,0);
        tracep->declBus(c+942,"ysyx_22040750 sram3 A", false,-1, 5,0);
        tracep->declArray(c+19,"ysyx_22040750 sram3 D", false,-1, 127,0);
        tracep->declBit(c+983,"ysyx_22040750 sram3 cen", false,-1);
        tracep->declBit(c+919,"ysyx_22040750 sram3 wen", false,-1);
        tracep->declArray(c+914,"ysyx_22040750 sram3 bwen", false,-1, 127,0);
        tracep->declBus(c+1103,"ysyx_22040750 sram4 Bits", false,-1, 31,0);
        tracep->declBus(c+1081,"ysyx_22040750 sram4 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1105,"ysyx_22040750 sram4 Add_Width", false,-1, 31,0);
        tracep->declBus(c+1103,"ysyx_22040750 sram4 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+47,"ysyx_22040750 sram4 Q", false,-1, 127,0);
        tracep->declBit(c+988,"ysyx_22040750 sram4 CLK", false,-1);
        tracep->declBit(c+947,"ysyx_22040750 sram4 CEN", false,-1);
        tracep->declBit(c+38,"ysyx_22040750 sram4 WEN", false,-1);
        tracep->declArray(c+39,"ysyx_22040750 sram4 BWEN", false,-1, 127,0);
        tracep->declBus(c+37,"ysyx_22040750 sram4 A", false,-1, 5,0);
        tracep->declArray(c+43,"ysyx_22040750 sram4 D", false,-1, 127,0);
        tracep->declBit(c+984,"ysyx_22040750 sram4 cen", false,-1);
        tracep->declBit(c+920,"ysyx_22040750 sram4 wen", false,-1);
        tracep->declArray(c+921,"ysyx_22040750 sram4 bwen", false,-1, 127,0);
        tracep->declBus(c+1103,"ysyx_22040750 sram5 Bits", false,-1, 31,0);
        tracep->declBus(c+1081,"ysyx_22040750 sram5 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1105,"ysyx_22040750 sram5 Add_Width", false,-1, 31,0);
        tracep->declBus(c+1103,"ysyx_22040750 sram5 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+60,"ysyx_22040750 sram5 Q", false,-1, 127,0);
        tracep->declBit(c+988,"ysyx_22040750 sram5 CLK", false,-1);
        tracep->declBit(c+948,"ysyx_22040750 sram5 CEN", false,-1);
        tracep->declBit(c+51,"ysyx_22040750 sram5 WEN", false,-1);
        tracep->declArray(c+52,"ysyx_22040750 sram5 BWEN", false,-1, 127,0);
        tracep->declBus(c+37,"ysyx_22040750 sram5 A", false,-1, 5,0);
        tracep->declArray(c+56,"ysyx_22040750 sram5 D", false,-1, 127,0);
        tracep->declBit(c+985,"ysyx_22040750 sram5 cen", false,-1);
        tracep->declBit(c+925,"ysyx_22040750 sram5 wen", false,-1);
        tracep->declArray(c+926,"ysyx_22040750 sram5 bwen", false,-1, 127,0);
        tracep->declBus(c+1103,"ysyx_22040750 sram6 Bits", false,-1, 31,0);
        tracep->declBus(c+1081,"ysyx_22040750 sram6 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1105,"ysyx_22040750 sram6 Add_Width", false,-1, 31,0);
        tracep->declBus(c+1103,"ysyx_22040750 sram6 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+65,"ysyx_22040750 sram6 Q", false,-1, 127,0);
        tracep->declBit(c+988,"ysyx_22040750 sram6 CLK", false,-1);
        tracep->declBit(c+949,"ysyx_22040750 sram6 CEN", false,-1);
        tracep->declBit(c+64,"ysyx_22040750 sram6 WEN", false,-1);
        tracep->declArray(c+39,"ysyx_22040750 sram6 BWEN", false,-1, 127,0);
        tracep->declBus(c+37,"ysyx_22040750 sram6 A", false,-1, 5,0);
        tracep->declArray(c+43,"ysyx_22040750 sram6 D", false,-1, 127,0);
        tracep->declBit(c+986,"ysyx_22040750 sram6 cen", false,-1);
        tracep->declBit(c+930,"ysyx_22040750 sram6 wen", false,-1);
        tracep->declArray(c+921,"ysyx_22040750 sram6 bwen", false,-1, 127,0);
        tracep->declBus(c+1103,"ysyx_22040750 sram7 Bits", false,-1, 31,0);
        tracep->declBus(c+1081,"ysyx_22040750 sram7 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1105,"ysyx_22040750 sram7 Add_Width", false,-1, 31,0);
        tracep->declBus(c+1103,"ysyx_22040750 sram7 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+70,"ysyx_22040750 sram7 Q", false,-1, 127,0);
        tracep->declBit(c+988,"ysyx_22040750 sram7 CLK", false,-1);
        tracep->declBit(c+950,"ysyx_22040750 sram7 CEN", false,-1);
        tracep->declBit(c+69,"ysyx_22040750 sram7 WEN", false,-1);
        tracep->declArray(c+52,"ysyx_22040750 sram7 BWEN", false,-1, 127,0);
        tracep->declBus(c+37,"ysyx_22040750 sram7 A", false,-1, 5,0);
        tracep->declArray(c+56,"ysyx_22040750 sram7 D", false,-1, 127,0);
        tracep->declBit(c+987,"ysyx_22040750 sram7 cen", false,-1);
        tracep->declBit(c+931,"ysyx_22040750 sram7 wen", false,-1);
        tracep->declArray(c+926,"ysyx_22040750 sram7 bwen", false,-1, 127,0);
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
    VlWide<4>/*127:0*/ __Vtemp403;
    VlWide<4>/*127:0*/ __Vtemp404;
    VlWide<4>/*127:0*/ __Vtemp407;
    VlWide<4>/*127:0*/ __Vtemp408;
    VlWide<4>/*127:0*/ __Vtemp409;
    VlWide<4>/*127:0*/ __Vtemp410;
    VlWide<4>/*127:0*/ __Vtemp411;
    VlWide<4>/*127:0*/ __Vtemp412;
    VlWide<3>/*95:0*/ __Vtemp414;
    VlWide<3>/*95:0*/ __Vtemp415;
    VlWide<3>/*95:0*/ __Vtemp416;
    VlWide<3>/*95:0*/ __Vtemp417;
    VlWide<3>/*95:0*/ __Vtemp418;
    VlWide<3>/*95:0*/ __Vtemp433;
    VlWide<3>/*95:0*/ __Vtemp434;
    VlWide<3>/*95:0*/ __Vtemp435;
    VlWide<3>/*95:0*/ __Vtemp436;
    VlWide<3>/*95:0*/ __Vtemp437;
    VlWide<4>/*127:0*/ __Vtemp439;
    VlWide<5>/*159:0*/ __Vtemp465;
    VlWide<5>/*159:0*/ __Vtemp467;
    VlWide<8>/*255:0*/ __Vtemp468;
    VlWide<8>/*255:0*/ __Vtemp469;
    VlWide<8>/*255:0*/ __Vtemp471;
    VlWide<8>/*255:0*/ __Vtemp472;
    VlWide<8>/*255:0*/ __Vtemp481;
    VlWide<8>/*255:0*/ __Vtemp488;
    VlWide<8>/*255:0*/ __Vtemp495;
    VlWide<8>/*255:0*/ __Vtemp500;
    VlWide<8>/*255:0*/ __Vtemp501;
    VlWide<8>/*255:0*/ __Vtemp502;
    VlWide<8>/*255:0*/ __Vtemp509;
    VlWide<4>/*127:0*/ __Vtemp513;
    VlWide<4>/*127:0*/ __Vtemp517;
    VlWide<4>/*127:0*/ __Vtemp519;
    VlWide<4>/*127:0*/ __Vtemp521;
    VlWide<8>/*255:0*/ __Vtemp528;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,((1U & (IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen))));
        if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
              ? 1U : 0U)) {
            __Vtemp403[0U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[0U];
            __Vtemp403[1U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[1U];
            __Vtemp403[2U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[2U];
            __Vtemp403[3U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[3U];
        } else {
            __Vtemp403[0U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[0U];
            __Vtemp403[1U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[1U];
            __Vtemp403[2U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[2U];
            __Vtemp403[3U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[3U];
        }
        tracep->fullWData(oldp+2,(__Vtemp403),128);
        __Vtemp404[0U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[0U];
        __Vtemp404[1U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[1U];
        __Vtemp404[2U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[2U];
        __Vtemp404[3U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[3U];
        tracep->fullWData(oldp+6,(__Vtemp404),128);
        tracep->fullWData(oldp+10,(vlSelf->ysyx_22040750__DOT__io_sram0_rdata),128);
        tracep->fullBit(oldp+14,((1U & ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen) 
                                        >> 1U))));
        if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
              ? 1U : 0U)) {
            __Vtemp407[0U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[4U];
            __Vtemp407[1U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[5U];
            __Vtemp407[2U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[6U];
            __Vtemp407[3U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[7U];
        } else {
            __Vtemp407[0U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[4U];
            __Vtemp407[1U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[5U];
            __Vtemp407[2U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[6U];
            __Vtemp407[3U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[7U];
        }
        tracep->fullWData(oldp+15,(__Vtemp407),128);
        __Vtemp408[0U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[4U];
        __Vtemp408[1U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[5U];
        __Vtemp408[2U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[6U];
        __Vtemp408[3U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[7U];
        tracep->fullWData(oldp+19,(__Vtemp408),128);
        tracep->fullWData(oldp+23,(vlSelf->ysyx_22040750__DOT__io_sram1_rdata),128);
        tracep->fullBit(oldp+27,((1U & ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen) 
                                        >> 2U))));
        tracep->fullWData(oldp+28,(vlSelf->ysyx_22040750__DOT__io_sram2_rdata),128);
        tracep->fullBit(oldp+32,((1U & ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen) 
                                        >> 3U))));
        tracep->fullWData(oldp+33,(vlSelf->ysyx_22040750__DOT__io_sram3_rdata),128);
        tracep->fullCData(oldp+37,(vlSelf->ysyx_22040750__DOT__daddr),6);
        tracep->fullBit(oldp+38,((1U & ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen) 
                                        >> 4U))));
        __Vtemp409[0U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[0U];
        __Vtemp409[1U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[1U];
        __Vtemp409[2U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[2U];
        __Vtemp409[3U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[3U];
        tracep->fullWData(oldp+39,(__Vtemp409),128);
        __Vtemp410[0U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[0U];
        __Vtemp410[1U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[1U];
        __Vtemp410[2U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[2U];
        __Vtemp410[3U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[3U];
        tracep->fullWData(oldp+43,(__Vtemp410),128);
        tracep->fullWData(oldp+47,(vlSelf->ysyx_22040750__DOT__io_sram4_rdata),128);
        tracep->fullBit(oldp+51,((1U & ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen) 
                                        >> 5U))));
        __Vtemp411[0U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[4U];
        __Vtemp411[1U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[5U];
        __Vtemp411[2U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[6U];
        __Vtemp411[3U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[7U];
        tracep->fullWData(oldp+52,(__Vtemp411),128);
        __Vtemp412[0U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[4U];
        __Vtemp412[1U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[5U];
        __Vtemp412[2U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[6U];
        __Vtemp412[3U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[7U];
        tracep->fullWData(oldp+56,(__Vtemp412),128);
        tracep->fullWData(oldp+60,(vlSelf->ysyx_22040750__DOT__io_sram5_rdata),128);
        tracep->fullBit(oldp+64,((1U & ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen) 
                                        >> 6U))));
        tracep->fullWData(oldp+65,(vlSelf->ysyx_22040750__DOT__io_sram6_rdata),128);
        tracep->fullBit(oldp+69,((1U & ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen) 
                                        >> 7U))));
        tracep->fullWData(oldp+70,(vlSelf->ysyx_22040750__DOT__io_sram7_rdata),128);
        tracep->fullIData(oldp+74,(vlSelf->ysyx_22040750__DOT__cpu_inst),32);
        tracep->fullIData(oldp+75,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc),32);
        tracep->fullBit(oldp+76,(vlSelf->ysyx_22040750__DOT__cpu_inst_valid));
        tracep->fullBit(oldp+77,(vlSelf->ysyx_22040750__DOT__cpu_pc_ready));
        tracep->fullIData(oldp+78,((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out)),32);
        tracep->fullBit(oldp+79,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_reg_e__DOT__mem_rd_en));
        tracep->fullBit(oldp+80,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_reg_e__DOT__mem_wr_en));
        tracep->fullQData(oldp+81,(vlSelf->ysyx_22040750__DOT__mem_wdata),64);
        tracep->fullBit(oldp+83,(vlSelf->ysyx_22040750__DOT__cpu_mem_ready));
        tracep->fullCData(oldp+84,((0xffU & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_wstrb) 
                                             << (7U 
                                                 & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out))))),8);
        tracep->fullIData(oldp+85,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__current_pc),32);
        tracep->fullIData(oldp+86,(((IData)(4U) + vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__current_pc)),32);
        tracep->fullIData(oldp+87,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__current_inst),32);
        tracep->fullQData(oldp+88,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__imm),64);
        tracep->fullQData(oldp+90,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__wr_data),64);
        tracep->fullQData(oldp+92,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr
                                   [(0x1fU & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                              >> 0xfU))]),64);
        tracep->fullQData(oldp+94,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr
                                   [(0x1fU & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                              >> 0x14U))]),64);
        tracep->fullQData(oldp+96,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op1),64);
        tracep->fullQData(oldp+98,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op2),64);
        tracep->fullQData(oldp+100,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_out),64);
        tracep->fullQData(oldp+102,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__mem_in),64);
        tracep->fullQData(oldp+104,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_rs2),64);
        tracep->fullQData(oldp+106,(((2U == (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_intr) 
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
        tracep->fullQData(oldp+108,((((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__csr_alu_e__DOT__op 
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
        tracep->fullCData(oldp+110,((0x1fU & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+111,((0x1fU & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                              >> 0x14U))),5);
        tracep->fullCData(oldp+112,((0x1fU & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                              >> 7U))),5);
        tracep->fullCData(oldp+113,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc_sel),5);
        tracep->fullCData(oldp+114,(((((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__reg_wen) 
                                       & (3U == (0x7fU 
                                                 & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))) 
                                      << 1U) | ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__reg_wen) 
                                                & (3U 
                                                   != 
                                                   (0x7fU 
                                                    & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))))),3);
        tracep->fullCData(oldp+115,((((1U & (- (IData)(
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
        tracep->fullCData(oldp+116,((((1U & (- (IData)((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__typeR)))) 
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
        tracep->fullSData(oldp+117,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op_sel),15);
        tracep->fullCData(oldp+118,((0xffU & ((((- (IData)((IData)(
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
        tracep->fullSData(oldp+119,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__mem_rstrb),9);
        tracep->fullBit(oldp+120,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__reg_wen));
        tracep->fullBit(oldp+121,((0x23U == (0x7fU 
                                             & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))));
        tracep->fullBit(oldp+122,(((0x1bU == (0x7fU 
                                              & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                   | (0x3bU == (0x7fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
        tracep->fullCData(oldp+123,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op_sext),2);
        tracep->fullSData(oldp+124,((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                     >> 0x14U)),12);
        tracep->fullBit(oldp+125,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_wen));
        tracep->fullBit(oldp+126,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_intr));
        tracep->fullBit(oldp+127,((0x30200073U == vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)));
        tracep->fullCData(oldp+128,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_op_sel),7);
        tracep->fullQData(oldp+129,(((0x73U == vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)
                                      ? 0xbULL : ((0x100073U 
                                                   == vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)
                                                   ? 4ULL
                                                   : 0ULL))),64);
        tracep->fullBit(oldp+131,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_valid));
        tracep->fullIData(oldp+132,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_pc),32);
        tracep->fullIData(oldp+133,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst),32);
        tracep->fullBit(oldp+134,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_valid));
        tracep->fullBit(oldp+135,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_stall));
        tracep->fullBit(oldp+136,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_bubble));
        tracep->fullBit(oldp+137,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_reg_e__DOT__input_valid));
        tracep->fullQData(oldp+138,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_imm),64);
        tracep->fullQData(oldp+140,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_rs1),64);
        tracep->fullQData(oldp+142,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_rs2),64);
        tracep->fullQData(oldp+144,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr),64);
        tracep->fullIData(oldp+146,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_pc),32);
        tracep->fullCData(oldp+147,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_rd_addr),5);
        tracep->fullCData(oldp+148,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_wstrb),8);
        tracep->fullSData(oldp+149,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_rstrb),9);
        tracep->fullCData(oldp+150,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_op2_sel),3);
        tracep->fullCData(oldp+151,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_op1_sel),3);
        tracep->fullCData(oldp+152,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_regin_sel),3);
        tracep->fullCData(oldp+153,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_sext),2);
        tracep->fullSData(oldp+154,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel),15);
        tracep->fullBit(oldp+155,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_reg_wen));
        tracep->fullBit(oldp+156,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_mem_wen));
        tracep->fullBit(oldp+157,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_word_op_mask));
        tracep->fullBit(oldp+158,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_valid));
        tracep->fullCData(oldp+159,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_stall),2);
        tracep->fullIData(oldp+160,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_inst),32);
        tracep->fullBit(oldp+161,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_bubble));
        tracep->fullBit(oldp+162,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_reg_e__DOT__input_valid));
        tracep->fullBit(oldp+163,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_multicycle));
        tracep->fullBit(oldp+164,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_out_valid));
        tracep->fullSData(oldp+165,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_addr),12);
        tracep->fullBit(oldp+166,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_wen));
        tracep->fullBit(oldp+167,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_intr));
        tracep->fullBit(oldp+168,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_mret));
        tracep->fullCData(oldp+169,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel),7);
        tracep->fullCData(oldp+170,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_uimm),5);
        tracep->fullQData(oldp+171,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_intr_no),64);
        tracep->fullSData(oldp+173,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_rstrb),9);
        tracep->fullCData(oldp+174,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_wstrb),8);
        tracep->fullQData(oldp+175,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out),64);
        tracep->fullQData(oldp+177,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr),64);
        tracep->fullBit(oldp+179,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_mem_wen));
        tracep->fullIData(oldp+180,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_pc),32);
        tracep->fullBit(oldp+181,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_reg_wen));
        tracep->fullCData(oldp+182,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_rd_addr),5);
        tracep->fullCData(oldp+183,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_regin_sel),3);
        tracep->fullCData(oldp+184,((7U & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out))),3);
        tracep->fullCData(oldp+185,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_stall),2);
        tracep->fullIData(oldp+186,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_inst),32);
        tracep->fullBit(oldp+187,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_bubble));
        tracep->fullBit(oldp+188,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_reg_e__DOT__input_valid));
        tracep->fullSData(oldp+189,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr_addr),12);
        tracep->fullBit(oldp+190,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr_wen));
        tracep->fullBit(oldp+191,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr_intr));
        tracep->fullBit(oldp+192,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr_mret));
        tracep->fullQData(oldp+193,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr_intr_no),64);
        tracep->fullIData(oldp+195,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_pc),32);
        tracep->fullBit(oldp+196,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_reg_e__DOT__input_valid));
        tracep->fullQData(oldp+197,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_mem_data),64);
        tracep->fullSData(oldp+199,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_mem_rstrb),9);
        tracep->fullQData(oldp+200,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_alu_out),64);
        tracep->fullQData(oldp+202,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr),64);
        tracep->fullBit(oldp+204,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_reg_wen));
        tracep->fullCData(oldp+205,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_rd_addr),5);
        tracep->fullCData(oldp+206,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_regin_sel),3);
        tracep->fullCData(oldp+207,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_shamt),3);
        tracep->fullBit(oldp+208,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_allowin));
        tracep->fullIData(oldp+209,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_inst),32);
        tracep->fullBit(oldp+210,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_bubble));
        tracep->fullCData(oldp+211,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_stall),2);
        tracep->fullSData(oldp+212,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr_addr),12);
        tracep->fullBit(oldp+213,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr_wen));
        tracep->fullBit(oldp+214,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr_intr));
        tracep->fullBit(oldp+215,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr_mret));
        tracep->fullQData(oldp+216,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr_intr_no),64);
        tracep->fullCData(oldp+218,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__stall_en),2);
        tracep->fullQData(oldp+219,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__rs1_forward_data),64);
        tracep->fullQData(oldp+221,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__rs2_forward_data),64);
        tracep->fullQData(oldp+223,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_forward_data),64);
        tracep->fullBit(oldp+225,((1U & (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_regin_sel) 
                                          >> 1U) | (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_mem_wen)))));
        tracep->fullBit(oldp+226,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_mem_op));
        tracep->fullIData(oldp+227,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_mem_addr),32);
        tracep->fullIData(oldp+228,((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__imm)),32);
        tracep->fullIData(oldp+229,(((8U & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc_sel))
                                      ? (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__rs1_forward_data)
                                      : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_pc)),32);
        tracep->fullIData(oldp+230,(((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__imm) 
                                     + ((8U & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc_sel))
                                         ? (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__rs1_forward_data)
                                         : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_pc))),32);
        tracep->fullIData(oldp+231,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__npc_e__DOT__dnpc),32);
        tracep->fullIData(oldp+232,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__npc_e__DOT__dnpc_reg),32);
        tracep->fullBit(oldp+233,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__npc_e__DOT__dnpc_reg_valid));
        tracep->fullBit(oldp+234,((1U & (~ ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc_sel) 
                                            | ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc_sel) 
                                               >> 4U))))));
        tracep->fullBit(oldp+235,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc_sel) 
                                         >> 4U))));
        tracep->fullWData(oldp+236,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__npc_e__DOT____Vcellinp__nextpc_64bit_3sel__I_sel_data),96);
        tracep->fullCData(oldp+239,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__npc_e__DOT____Vcellinp__nextpc_64bit_3sel__I_sel),3);
        tracep->fullIData(oldp+240,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__npc_e__DOT__nextpc_64bit_3sel__DOT__sel_data[0]),32);
        tracep->fullIData(oldp+241,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__npc_e__DOT__nextpc_64bit_3sel__DOT__sel_data[1]),32);
        tracep->fullIData(oldp+242,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__npc_e__DOT__nextpc_64bit_3sel__DOT__sel_data[2]),32);
        tracep->fullBit(oldp+243,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__pc_e__DOT__IF_ready_go));
        tracep->fullBit(oldp+244,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__pc_e__DOT__IF_valid));
        tracep->fullBit(oldp+245,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__pc_e__DOT__IF_en));
        tracep->fullIData(oldp+246,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__pc_e__DOT__inst_cache),32);
        tracep->fullBit(oldp+247,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__pc_e__DOT__cache_valid));
        tracep->fullBit(oldp+248,((1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc_sel)))));
        tracep->fullBit(oldp+249,((1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_stall)))));
        tracep->fullBit(oldp+250,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_regin_sel) 
                                         >> 1U))));
        tracep->fullBit(oldp+251,((0U != (0xfU & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                                  >> 0xaU)))));
        tracep->fullBit(oldp+252,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_regin_sel) 
                                         >> 1U))));
        tracep->fullCData(oldp+253,(((0xfffffffeU & 
                                      ((((0x1fU & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                   >> 0xfU)) 
                                         == (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_rd_addr)) 
                                        << 1U) & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__stall_en))) 
                                     | (((0x1fU & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                   >> 0x14U)) 
                                         == (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_rd_addr)) 
                                        & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__stall_en)))),2);
        tracep->fullCData(oldp+254,(((0xfffffffeU & 
                                      ((((0x1fU & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                   >> 0xfU)) 
                                         == (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_rd_addr)) 
                                        << 1U) & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__stall_en))) 
                                     | (((0x1fU & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                   >> 0x14U)) 
                                         == (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_rd_addr)) 
                                        & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__stall_en)))),2);
        tracep->fullCData(oldp+255,(((0xfffffffeU & 
                                      ((((0x1fU & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                   >> 0xfU)) 
                                         == (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_rd_addr)) 
                                        << 1U) & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__stall_en))) 
                                     | (((0x1fU & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                   >> 0x14U)) 
                                         == (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_rd_addr)) 
                                        & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__stall_en)))),2);
        tracep->fullBit(oldp+256,((((0U != (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_stall)) 
                                    & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_regin_sel) 
                                       >> 1U)) | ((0U 
                                                   != (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_stall)) 
                                                  & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_regin_sel) 
                                                     >> 1U)))));
        tracep->fullBit(oldp+257,(((0U != (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_stall)) 
                                   & (0U != (0xfU & 
                                             ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                              >> 0xaU))))));
        tracep->fullBit(oldp+258,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT____Vcellinp__forward_unit_e__I_WB_reg_wen));
        tracep->fullBit(oldp+259,((((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_wen) 
                                    & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_wen)) 
                                   & ((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                       >> 0x14U) == (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_addr)))));
        tracep->fullBit(oldp+260,((((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_wen) 
                                    & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr_wen)) 
                                   & ((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                       >> 0x14U) == (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr_addr)))));
        tracep->fullBit(oldp+261,((((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_wen) 
                                    & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr_wen)) 
                                   & ((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                       >> 0x14U) == (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr_addr)))));
        tracep->fullCData(oldp+262,((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                     >> 0x19U)),7);
        tracep->fullCData(oldp+263,((0x7fU & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)),7);
        tracep->fullCData(oldp+264,((7U & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                           >> 0xcU))),3);
        tracep->fullSData(oldp+265,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__immS),12);
        tracep->fullSData(oldp+266,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__immB),13);
        tracep->fullIData(oldp+267,((0xfffff000U & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)),32);
        tracep->fullIData(oldp+268,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__immJ),21);
        tracep->fullBit(oldp+269,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__typeI));
        tracep->fullBit(oldp+270,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__typeR));
        tracep->fullBit(oldp+271,((0x63U == (0x7fU 
                                             & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))));
        tracep->fullBit(oldp+272,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__typeU));
        tracep->fullBit(oldp+273,((0x6fU == (0x7fU 
                                             & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))));
        tracep->fullBit(oldp+274,((0x73U == (0x7fU 
                                             & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))));
        tracep->fullBit(oldp+275,((0x37U == (0x7fU 
                                             & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))));
        tracep->fullBit(oldp+276,((0x17U == (0x7fU 
                                             & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))));
        tracep->fullBit(oldp+277,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__JALR));
        tracep->fullBit(oldp+278,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__LD));
        tracep->fullBit(oldp+279,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__LW));
        tracep->fullBit(oldp+280,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__LWU));
        tracep->fullBit(oldp+281,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__LH));
        tracep->fullBit(oldp+282,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__LHU));
        tracep->fullBit(oldp+283,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__LB));
        tracep->fullBit(oldp+284,((IData)((0x4003U 
                                           == (0x707fU 
                                               & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+285,((IData)((0x13U == 
                                           (0x707fU 
                                            & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+286,((IData)((0x2013U 
                                           == (0x707fU 
                                               & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+287,((IData)((0x3013U 
                                           == (0x707fU 
                                               & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+288,((IData)((0x4013U 
                                           == (0x707fU 
                                               & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+289,((IData)((0x6013U 
                                           == (0x707fU 
                                               & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+290,((IData)((0x7013U 
                                           == (0x707fU 
                                               & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+291,((IData)(((0x1013U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                               >> 0x1aU))))));
        tracep->fullBit(oldp+292,((IData)(((0x5013U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                               >> 0x1aU))))));
        tracep->fullBit(oldp+293,((IData)(((0x5013U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                           & (0x10U 
                                              == (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x1aU))))));
        tracep->fullBit(oldp+294,((IData)((0x1bU == 
                                           (0x707fU 
                                            & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+295,((IData)(((0x101bU 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+296,((IData)(((0x501bU 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+297,((IData)(((0x501bU 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                           & (0x20U 
                                              == (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
        tracep->fullBit(oldp+298,((IData)(((0x33U == 
                                            (0x707fU 
                                             & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+299,((IData)(((0x33U == 
                                            (0x707fU 
                                             & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                           & (0x20U 
                                              == (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
        tracep->fullBit(oldp+300,((IData)(((0x1033U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+301,((IData)(((0x2033U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+302,((IData)(((0x3033U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+303,((IData)(((0x4033U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+304,((IData)(((0x5033U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+305,((IData)(((0x5033U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                           & (0x20U 
                                              == (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
        tracep->fullBit(oldp+306,((IData)(((0x6033U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+307,((IData)(((0x7033U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+308,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__MUL));
        tracep->fullBit(oldp+309,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__MULH));
        tracep->fullBit(oldp+310,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__MULHSU));
        tracep->fullBit(oldp+311,((IData)(((0x3033U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                           & (1U == 
                                              (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+312,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__DIV));
        tracep->fullBit(oldp+313,((IData)(((0x5033U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                           & (1U == 
                                              (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+314,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__REM));
        tracep->fullBit(oldp+315,((IData)(((0x7033U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                           & (1U == 
                                              (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+316,((IData)(((0x3bU == 
                                            (0x707fU 
                                             & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+317,((IData)(((0x3bU == 
                                            (0x707fU 
                                             & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                           & (0x20U 
                                              == (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
        tracep->fullBit(oldp+318,((IData)(((0x103bU 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+319,((IData)(((0x503bU 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+320,((IData)(((0x503bU 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                           & (0x20U 
                                              == (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
        tracep->fullBit(oldp+321,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__MULW));
        tracep->fullBit(oldp+322,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__DIVW));
        tracep->fullBit(oldp+323,((IData)(((0x503bU 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                           & (1U == 
                                              (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+324,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__REMW));
        tracep->fullBit(oldp+325,((IData)(((0x703bU 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                           & (1U == 
                                              (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+326,((IData)((0x3023U 
                                           == (0x707fU 
                                               & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+327,((IData)((0x2023U 
                                           == (0x707fU 
                                               & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+328,((IData)((0x1023U 
                                           == (0x707fU 
                                               & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+329,((IData)((0x23U == 
                                           (0x707fU 
                                            & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+330,((IData)((0x63U == 
                                           (0x707fU 
                                            & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+331,((IData)((0x1063U 
                                           == (0x707fU 
                                               & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+332,((IData)((0x4063U 
                                           == (0x707fU 
                                               & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+333,((IData)((0x5063U 
                                           == (0x707fU 
                                               & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+334,((IData)((0x6063U 
                                           == (0x707fU 
                                               & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+335,((IData)((0x7063U 
                                           == (0x707fU 
                                               & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+336,((0x73U == vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)));
        tracep->fullBit(oldp+337,((0x100073U == vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)));
        tracep->fullBit(oldp+338,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__CSRRW));
        tracep->fullBit(oldp+339,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__CSRRS));
        tracep->fullBit(oldp+340,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__CSRRC));
        tracep->fullBit(oldp+341,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__CSRRWI));
        tracep->fullBit(oldp+342,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__CSRRSI));
        tracep->fullBit(oldp+343,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__CSRRCI));
        tracep->fullBit(oldp+344,((((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__CSRRW) 
                                    | (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__CSRRS)) 
                                   | (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__CSRRC))));
        tracep->fullBit(oldp+345,((3U == (0x7fU & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))));
        tracep->fullBit(oldp+346,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__typeB_jr));
        tracep->fullBit(oldp+347,((((0x73U == vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst) 
                                    | (0x100073U == vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                   | (0x30200073U == vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))));
        tracep->fullBit(oldp+348,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__eq));
        tracep->fullBit(oldp+349,((1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__eq)))));
        tracep->fullBit(oldp+350,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__lt));
        tracep->fullBit(oldp+351,((1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__lt)))));
        tracep->fullBit(oldp+352,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__ltu));
        tracep->fullBit(oldp+353,((1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__ltu)))));
        tracep->fullBit(oldp+354,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__add_flag));
        tracep->fullBit(oldp+355,(((IData)(((0x33U 
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
        tracep->fullBit(oldp+356,(((IData)((0x2013U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))) 
                                   | (IData)(((0x2033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U)))))));
        tracep->fullBit(oldp+357,(((IData)((0x3013U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))) 
                                   | (IData)(((0x3033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U)))))));
        tracep->fullBit(oldp+358,(((IData)((0x4013U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))) 
                                   | (IData)(((0x4033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U)))))));
        tracep->fullBit(oldp+359,(((IData)((0x6013U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))) 
                                   | (IData)(((0x6033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U)))))));
        tracep->fullBit(oldp+360,(((IData)((0x7013U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))) 
                                   | (IData)(((0x7033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U)))))));
        tracep->fullBit(oldp+361,(((((IData)(((0x1013U 
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
        tracep->fullBit(oldp+362,(((((IData)(((0x5013U 
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
        tracep->fullBit(oldp+363,(((((IData)(((0x5013U 
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
        tracep->fullBit(oldp+364,(((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__MUL) 
                                   | (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__MULW))));
        tracep->fullBit(oldp+365,((((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__MULH) 
                                    | (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__MULHSU)) 
                                   | (IData)(((0x3033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (1U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U)))))));
        tracep->fullBit(oldp+366,(((((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__DIV) 
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
        tracep->fullBit(oldp+367,(((((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__REM) 
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
        tracep->fullBit(oldp+368,(((((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__typeR) 
                                     | ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__typeI) 
                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__JALR)))) 
                                    | (0x23U == (0x7fU 
                                                 & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))) 
                                   | (0x73U == (0x7fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+369,(((((0x63U == (0x7fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                     | (0x6fU == (0x7fU 
                                                  & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))) 
                                    | (0x17U == (0x7fU 
                                                 & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))) 
                                   | (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__JALR))));
        tracep->fullBit(oldp+370,((((((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__typeI) 
                                      & (~ (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__JALR))) 
                                     | (0x23U == (0x7fU 
                                                  & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))) 
                                    | (0x63U == (0x7fU 
                                                 & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))) 
                                   | (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__typeU))));
        tracep->fullBit(oldp+371,(((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__JALR) 
                                   | (0x6fU == (0x7fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
        tracep->fullWData(oldp+372,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT____Vcellinp__alu_op1_64bit_3sel__I_sel_data),192);
        tracep->fullQData(oldp+378,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op1_64bit_3sel__DOT__sel_data[0]),64);
        tracep->fullQData(oldp+380,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op1_64bit_3sel__DOT__sel_data[1]),64);
        tracep->fullQData(oldp+382,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op1_64bit_3sel__DOT__sel_data[2]),64);
        tracep->fullWData(oldp+384,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT____Vcellinp__alu_op2_64bit_3sel__I_sel_data),192);
        tracep->fullQData(oldp+390,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op2_64bit_3sel__DOT__sel_data[0]),64);
        tracep->fullQData(oldp+392,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op2_64bit_3sel__DOT__sel_data[1]),64);
        tracep->fullQData(oldp+394,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op2_64bit_3sel__DOT__sel_data[2]),64);
        tracep->fullBit(oldp+396,((1U & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel))));
        tracep->fullBit(oldp+397,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                         >> 1U))));
        tracep->fullBit(oldp+398,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                         >> 2U))));
        tracep->fullBit(oldp+399,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                         >> 3U))));
        tracep->fullBit(oldp+400,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                         >> 4U))));
        tracep->fullBit(oldp+401,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                         >> 5U))));
        tracep->fullBit(oldp+402,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                         >> 6U))));
        tracep->fullBit(oldp+403,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                         >> 7U))));
        tracep->fullBit(oldp+404,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                         >> 8U))));
        tracep->fullBit(oldp+405,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                         >> 9U))));
        tracep->fullBit(oldp+406,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                         >> 0xaU))));
        tracep->fullBit(oldp+407,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                         >> 0xbU))));
        tracep->fullBit(oldp+408,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                         >> 0xcU))));
        tracep->fullBit(oldp+409,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                         >> 0xdU))));
        tracep->fullBit(oldp+410,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                         >> 0xeU))));
        tracep->fullQData(oldp+411,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__result),64);
        tracep->fullQData(oldp+413,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__slt_result),64);
        VL_EXTEND_WQ(65,64, __Vtemp414, vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op1);
        VL_EXTEND_WQ(65,64, __Vtemp415, vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__adder2);
        VL_ADD_W(3, __Vtemp416, __Vtemp414, __Vtemp415);
        VL_EXTEND_WQ(65,64, __Vtemp417, vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__cin);
        VL_ADD_W(3, __Vtemp418, __Vtemp416, __Vtemp417);
        tracep->fullQData(oldp+415,((QData)((IData)(
                                                    (1U 
                                                     & (~ 
                                                        (1U 
                                                         & __Vtemp418[2U])))))),64);
        tracep->fullQData(oldp+417,((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op1 
                                     ^ vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op2)),64);
        tracep->fullQData(oldp+419,((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op1 
                                     | vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op2)),64);
        tracep->fullQData(oldp+421,((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op1 
                                     & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op2)),64);
        tracep->fullQData(oldp+423,(((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_word_op_mask)
                                      ? (((QData)((IData)(
                                                          (- (IData)(
                                                                     (1U 
                                                                      & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result)))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__slldw_result 
                                                            >> 0x20U))))
                                      : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__slldw_result)),64);
        tracep->fullQData(oldp+425,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result),64);
        tracep->fullQData(oldp+427,((((- (QData)((IData)(
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
        tracep->fullQData(oldp+429,((((QData)((IData)(
                                                      vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[0U])))),64);
        tracep->fullQData(oldp+431,((((QData)((IData)(
                                                      vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[2U])))),64);
        tracep->fullQData(oldp+433,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__div_result),64);
        tracep->fullQData(oldp+435,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__rem_result),64);
        tracep->fullWData(oldp+437,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__op1_sext),65);
        tracep->fullWData(oldp+440,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__op2_sext),65);
        tracep->fullBit(oldp+443,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_word_op_mask)
                                          ? (IData)(
                                                    (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op1 
                                                     >> 0x1fU))
                                          : (IData)(
                                                    (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op1 
                                                     >> 0x3fU))))));
        tracep->fullBit(oldp+444,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_word_op_mask)
                                          ? (IData)(
                                                    (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op2 
                                                     >> 0x1fU))
                                          : (IData)(
                                                    (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op2 
                                                     >> 0x3fU))))));
        tracep->fullBit(oldp+445,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__sext1));
        tracep->fullBit(oldp+446,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__sext2));
        tracep->fullBit(oldp+447,((IData)((0U != (0xc00U 
                                                  & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel))))));
        tracep->fullBit(oldp+448,((IData)((0U != (0x3000U 
                                                  & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel))))));
        tracep->fullBit(oldp+449,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_valid));
        tracep->fullBit(oldp+450,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__div_valid));
        tracep->fullBit(oldp+451,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_out_valid));
        tracep->fullBit(oldp+452,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__div_out_valid));
        tracep->fullQData(oldp+453,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mulh_reg),64);
        tracep->fullQData(oldp+455,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_reg),64);
        tracep->fullQData(oldp+457,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__div_reg),64);
        tracep->fullQData(oldp+459,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__rem_reg),64);
        tracep->fullBit(oldp+461,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_reg_valid));
        tracep->fullBit(oldp+462,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__div_reg_valid));
        tracep->fullQData(oldp+463,((((QData)((IData)(
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
        tracep->fullQData(oldp+465,((((QData)((IData)(
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
        tracep->fullQData(oldp+467,((((QData)((IData)(
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
        tracep->fullQData(oldp+469,((((QData)((IData)(
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
        tracep->fullQData(oldp+471,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__adder2),64);
        tracep->fullQData(oldp+473,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__cin),64);
        VL_EXTEND_WQ(65,64, __Vtemp433, vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op1);
        VL_EXTEND_WQ(65,64, __Vtemp434, vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__adder2);
        VL_ADD_W(3, __Vtemp435, __Vtemp433, __Vtemp434);
        VL_EXTEND_WQ(65,64, __Vtemp436, vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__cin);
        VL_ADD_W(3, __Vtemp437, __Vtemp435, __Vtemp436);
        tracep->fullBit(oldp+475,((1U & __Vtemp437[2U])));
        tracep->fullQData(oldp+476,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__reverse_op1),64);
        tracep->fullQData(oldp+478,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_op),64);
        tracep->fullCData(oldp+480,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__shamt),6);
        tracep->fullQData(oldp+481,(((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_word_op_mask)
                                      ? (~ (0xffffffffULL 
                                            >> (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__shamt)))
                                      : (~ (0xffffffffffffffffULL 
                                            >> (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__shamt))))),64);
        tracep->fullIData(oldp+483,(((0x80U & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel))
                                      ? (IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_op 
                                                 >> 0x20U))
                                      : (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_op))),32);
        tracep->fullQData(oldp+484,(((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_word_op_mask)
                                      ? (QData)((IData)(
                                                        ((0x80U 
                                                          & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel))
                                                          ? (IData)(
                                                                    (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_op 
                                                                     >> 0x20U))
                                                          : (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_op))))
                                      : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_op)),64);
        tracep->fullQData(oldp+486,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result)))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__slldw_result 
                                                                   >> 0x20U))))),64);
        tracep->fullQData(oldp+488,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__slldw_result),64);
        tracep->fullQData(oldp+490,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__dword_result),64);
        tracep->fullQData(oldp+492,((((QData)((IData)(
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
        tracep->fullBit(oldp+494,(((1U & ((IData)((0U 
                                                   != 
                                                   (0x3000U 
                                                    & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel)))) 
                                          & (~ (IData)(
                                                       (0U 
                                                        != (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_sext))))))
                                    ? 0U : (1U & (IData)(
                                                         (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__dword_result 
                                                          >> 0x1fU))))));
        tracep->fullQData(oldp+495,((((QData)((IData)(
                                                      vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__op1_sext[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__op1_sext[0U])))),64);
        tracep->fullQData(oldp+497,((((QData)((IData)(
                                                      vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__op2_sext[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__op2_sext[0U])))),64);
        __Vtemp439[0U] = vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[0U];
        __Vtemp439[1U] = vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[1U];
        __Vtemp439[2U] = vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[2U];
        __Vtemp439[3U] = vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[3U];
        tracep->fullWData(oldp+499,(__Vtemp439),128);
        tracep->fullBit(oldp+503,(((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__op1_sext[1U] 
                                    >> 0x1fU) & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__sext1))));
        tracep->fullBit(oldp+504,(((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__op2_sext[1U] 
                                    >> 0x1fU) & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__sext1))));
        tracep->fullWData(oldp+505,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1),67);
        tracep->fullWData(oldp+508,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2),132);
        __Vtemp465[0U] = ((((~ ((- (IData)((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_negative))) 
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
        __Vtemp465[1U] = ((((~ ((- (IData)((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_negative))) 
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
        __Vtemp465[2U] = ((((~ ((- (IData)((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_negative))) 
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
        __Vtemp465[3U] = ((((~ ((- (IData)((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_negative))) 
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
        __Vtemp465[4U] = ((((~ ((- (IData)((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_negative))) 
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
        __Vtemp467[0U] = (~ __Vtemp465[0U]);
        __Vtemp467[1U] = (~ __Vtemp465[1U]);
        __Vtemp467[2U] = (~ __Vtemp465[2U]);
        __Vtemp467[3U] = (~ __Vtemp465[3U]);
        __Vtemp467[4U] = (0xfU & (~ __Vtemp465[4U]));
        tracep->fullWData(oldp+513,(__Vtemp467),132);
        tracep->fullBit(oldp+518,(((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_double_negative) 
                                   | (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_negative))));
        tracep->fullWData(oldp+519,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__mid_result),132);
        tracep->fullCData(oldp+524,((7U & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])),3);
        tracep->fullWData(oldp+525,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S),132);
        tracep->fullBit(oldp+530,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__mul_process));
        tracep->fullCData(oldp+531,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__iter_cnt),6);
        tracep->fullBit(oldp+532,((1U & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                         >> 2U))));
        tracep->fullBit(oldp+533,((1U & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                         >> 1U))));
        tracep->fullBit(oldp+534,((1U & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])));
        tracep->fullBit(oldp+535,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_negative));
        tracep->fullBit(oldp+536,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_double_negative));
        tracep->fullBit(oldp+537,((1U & ((~ (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                             >> 2U)) 
                                         & (((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                              >> 1U) 
                                             & (~ vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])) 
                                            | ((~ (
                                                   vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                   >> 1U)) 
                                               & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U]))))));
        tracep->fullBit(oldp+538,((1U & (((~ (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                              >> 2U)) 
                                          & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                             >> 1U)) 
                                         & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U]))));
        tracep->fullWData(oldp+539,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__abs_dividend),128);
        tracep->fullWData(oldp+543,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__abs_divisor),128);
        tracep->fullWData(oldp+547,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__current_sub_result),128);
        tracep->fullBit(oldp+551,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__current_q));
        tracep->fullBit(oldp+552,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__dividend_flag));
        tracep->fullBit(oldp+553,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__divisor_flag));
        tracep->fullBit(oldp+554,(((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__dividend_flag) 
                                   ^ (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__divisor_flag))));
        tracep->fullQData(oldp+555,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__abs_quotient),64);
        tracep->fullBit(oldp+557,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__div_process));
        tracep->fullCData(oldp+558,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__iter_cnt),6);
        tracep->fullBit(oldp+559,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel) 
                                         >> 5U))));
        tracep->fullBit(oldp+560,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel) 
                                         >> 2U))));
        tracep->fullBit(oldp+561,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel) 
                                         >> 4U))));
        tracep->fullBit(oldp+562,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel) 
                                         >> 1U))));
        tracep->fullBit(oldp+563,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel) 
                                         >> 3U))));
        tracep->fullBit(oldp+564,((1U & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel))));
        tracep->fullBit(oldp+565,((IData)((0U != (0x24U 
                                                  & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel))))));
        tracep->fullBit(oldp+566,((IData)((0U != (0x12U 
                                                  & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel))))));
        tracep->fullBit(oldp+567,((IData)((0U != (9U 
                                                  & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel))))));
        tracep->fullBit(oldp+568,((0U != (7U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel) 
                                                >> 3U)))));
        tracep->fullBit(oldp+569,((0U != (7U & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel)))));
        tracep->fullQData(oldp+570,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__csr_alu_e__DOT__op),64);
        tracep->fullQData(oldp+572,((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr 
                                     | vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__csr_alu_e__DOT__op)),64);
        tracep->fullQData(oldp+574,((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr 
                                     & (~ vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__csr_alu_e__DOT__op))),64);
        tracep->fullBit(oldp+576,(((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_reg_e__DOT__mem_rd_en) 
                                   & (IData)(vlSelf->ysyx_22040750__DOT__cpu_mem_ready))));
        tracep->fullBit(oldp+577,(((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_reg_e__DOT__mem_wr_en) 
                                   & (IData)(vlSelf->ysyx_22040750__DOT__cpu_mem_ready))));
        tracep->fullBit(oldp+578,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_mem_rstrb) 
                                         >> 8U))));
        tracep->fullBit(oldp+579,((1U & (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_mem_rstrb) 
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
        tracep->fullCData(oldp+580,((0xffU & (~ (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_mem_rstrb)))),8);
        tracep->fullQData(oldp+581,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__mem_ld_e__DOT__ld_data),64);
        tracep->fullWData(oldp+583,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT____Vcellinp__regin_64bit_2sel__I_sel_data),128);
        tracep->fullCData(oldp+587,((3U & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_regin_sel))),2);
        tracep->fullQData(oldp+588,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__regin_64bit_2sel__DOT__sel_data[0]),64);
        tracep->fullQData(oldp+590,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__regin_64bit_2sel__DOT__sel_data[1]),64);
        tracep->fullBit(oldp+592,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT____Vcellinp__gpr_e__I_wen));
        tracep->fullQData(oldp+593,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[0]),64);
        tracep->fullQData(oldp+595,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[1]),64);
        tracep->fullQData(oldp+597,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[2]),64);
        tracep->fullQData(oldp+599,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[3]),64);
        tracep->fullQData(oldp+601,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[4]),64);
        tracep->fullQData(oldp+603,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[5]),64);
        tracep->fullQData(oldp+605,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[6]),64);
        tracep->fullQData(oldp+607,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[7]),64);
        tracep->fullQData(oldp+609,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[8]),64);
        tracep->fullQData(oldp+611,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[9]),64);
        tracep->fullQData(oldp+613,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[10]),64);
        tracep->fullQData(oldp+615,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[11]),64);
        tracep->fullQData(oldp+617,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[12]),64);
        tracep->fullQData(oldp+619,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[13]),64);
        tracep->fullQData(oldp+621,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[14]),64);
        tracep->fullQData(oldp+623,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[15]),64);
        tracep->fullQData(oldp+625,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[16]),64);
        tracep->fullQData(oldp+627,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[17]),64);
        tracep->fullQData(oldp+629,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[18]),64);
        tracep->fullQData(oldp+631,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[19]),64);
        tracep->fullQData(oldp+633,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[20]),64);
        tracep->fullQData(oldp+635,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[21]),64);
        tracep->fullQData(oldp+637,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[22]),64);
        tracep->fullQData(oldp+639,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[23]),64);
        tracep->fullQData(oldp+641,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[24]),64);
        tracep->fullQData(oldp+643,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[25]),64);
        tracep->fullQData(oldp+645,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[26]),64);
        tracep->fullQData(oldp+647,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[27]),64);
        tracep->fullQData(oldp+649,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[28]),64);
        tracep->fullQData(oldp+651,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[29]),64);
        tracep->fullQData(oldp+653,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[30]),64);
        tracep->fullQData(oldp+655,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[31]),64);
        tracep->fullBit(oldp+657,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[0]));
        tracep->fullBit(oldp+658,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[1]));
        tracep->fullBit(oldp+659,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[2]));
        tracep->fullBit(oldp+660,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[3]));
        tracep->fullBit(oldp+661,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[4]));
        tracep->fullBit(oldp+662,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[5]));
        tracep->fullBit(oldp+663,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[6]));
        tracep->fullBit(oldp+664,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[7]));
        tracep->fullBit(oldp+665,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[8]));
        tracep->fullBit(oldp+666,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[9]));
        tracep->fullBit(oldp+667,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[10]));
        tracep->fullBit(oldp+668,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[11]));
        tracep->fullBit(oldp+669,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[12]));
        tracep->fullBit(oldp+670,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[13]));
        tracep->fullBit(oldp+671,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[14]));
        tracep->fullBit(oldp+672,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[15]));
        tracep->fullBit(oldp+673,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[16]));
        tracep->fullBit(oldp+674,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[17]));
        tracep->fullBit(oldp+675,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[18]));
        tracep->fullBit(oldp+676,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[19]));
        tracep->fullBit(oldp+677,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[20]));
        tracep->fullBit(oldp+678,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[21]));
        tracep->fullBit(oldp+679,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[22]));
        tracep->fullBit(oldp+680,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[23]));
        tracep->fullBit(oldp+681,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[24]));
        tracep->fullBit(oldp+682,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[25]));
        tracep->fullBit(oldp+683,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[26]));
        tracep->fullBit(oldp+684,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[27]));
        tracep->fullBit(oldp+685,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[28]));
        tracep->fullBit(oldp+686,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[29]));
        tracep->fullBit(oldp+687,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[30]));
        tracep->fullBit(oldp+688,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[31]));
        tracep->fullQData(oldp+689,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mepc),64);
        tracep->fullQData(oldp+691,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mstatus),64);
        tracep->fullQData(oldp+693,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mtvec),64);
        tracep->fullQData(oldp+695,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mcause),64);
        tracep->fullQData(oldp+697,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mscratch),64);
        tracep->fullBit(oldp+699,((1U & (IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mstatus 
                                                 >> 3U)))));
        tracep->fullBit(oldp+700,((1U & (IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mstatus 
                                                 >> 7U)))));
        tracep->fullBit(oldp+701,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__csr_wen));
        tracep->fullBit(oldp+702,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__csr_intr_wr));
        tracep->fullBit(oldp+703,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__csr_mret_wr));
        tracep->fullCData(oldp+704,(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen),8);
        tracep->fullCData(oldp+705,((((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                                       ? 1U : 0U) ? 0U
                                      : 0xfU)),4);
        __Vtemp468[0U] = vlSelf->ysyx_22040750__DOT__io_sram0_rdata[0U];
        __Vtemp468[1U] = vlSelf->ysyx_22040750__DOT__io_sram0_rdata[1U];
        __Vtemp468[2U] = vlSelf->ysyx_22040750__DOT__io_sram0_rdata[2U];
        __Vtemp468[3U] = vlSelf->ysyx_22040750__DOT__io_sram0_rdata[3U];
        __Vtemp468[4U] = vlSelf->ysyx_22040750__DOT__io_sram1_rdata[0U];
        __Vtemp468[5U] = vlSelf->ysyx_22040750__DOT__io_sram1_rdata[1U];
        __Vtemp468[6U] = vlSelf->ysyx_22040750__DOT__io_sram1_rdata[2U];
        __Vtemp468[7U] = vlSelf->ysyx_22040750__DOT__io_sram1_rdata[3U];
        tracep->fullWData(oldp+706,(__Vtemp468),256);
        __Vtemp469[0U] = vlSelf->ysyx_22040750__DOT__io_sram2_rdata[0U];
        __Vtemp469[1U] = vlSelf->ysyx_22040750__DOT__io_sram2_rdata[1U];
        __Vtemp469[2U] = vlSelf->ysyx_22040750__DOT__io_sram2_rdata[2U];
        __Vtemp469[3U] = vlSelf->ysyx_22040750__DOT__io_sram2_rdata[3U];
        __Vtemp469[4U] = vlSelf->ysyx_22040750__DOT__io_sram3_rdata[0U];
        __Vtemp469[5U] = vlSelf->ysyx_22040750__DOT__io_sram3_rdata[1U];
        __Vtemp469[6U] = vlSelf->ysyx_22040750__DOT__io_sram3_rdata[2U];
        __Vtemp469[7U] = vlSelf->ysyx_22040750__DOT__io_sram3_rdata[3U];
        tracep->fullWData(oldp+714,(__Vtemp469),256);
        tracep->fullWData(oldp+722,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg),256);
        if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
              ? 1U : 0U)) {
            __Vtemp471[0U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[0U];
            __Vtemp471[1U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[1U];
            __Vtemp471[2U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[2U];
            __Vtemp471[3U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[3U];
            __Vtemp471[4U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[4U];
            __Vtemp471[5U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[5U];
            __Vtemp471[6U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[6U];
            __Vtemp471[7U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[7U];
        } else {
            __Vtemp471[0U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[0U];
            __Vtemp471[1U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[1U];
            __Vtemp471[2U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[2U];
            __Vtemp471[3U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[3U];
            __Vtemp471[4U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[4U];
            __Vtemp471[5U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[5U];
            __Vtemp471[6U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[6U];
            __Vtemp471[7U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[7U];
        }
        tracep->fullWData(oldp+730,(__Vtemp471),256);
        tracep->fullCData(oldp+738,(((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__sram_wflag)
                                      ? ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)
                                          ? 0xcU : 3U)
                                      : 0xfU)),4);
        tracep->fullWData(oldp+739,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata),256);
        tracep->fullWData(oldp+747,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata),256);
        tracep->fullWData(oldp+755,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg),256);
        tracep->fullWData(oldp+763,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask),256);
        tracep->fullIData(oldp+771,((0xffffffe0U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr)),32);
        tracep->fullIData(oldp+772,(((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_ar_req)
                                      ? ((0xffffffe0U 
                                          & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr) 
                                         | (0x1fU & 
                                            ((- (IData)((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mmio_process))) 
                                             & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr)))
                                      : 0U)),32);
        tracep->fullBit(oldp+773,(((2U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                                    ? 1U : 0U)));
        tracep->fullBit(oldp+774,(((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_ar_req)
                                    ? 1U : 0U)));
        tracep->fullCData(oldp+775,(((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mmio_process)
                                      ? 0U : 3U)),8);
        if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op) {
            __Vtemp472[0U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[0U];
            __Vtemp472[1U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[1U];
            __Vtemp472[2U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[2U];
            __Vtemp472[3U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[3U];
            __Vtemp472[4U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[4U];
            __Vtemp472[5U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[5U];
            __Vtemp472[6U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[6U];
            __Vtemp472[7U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[7U];
        } else {
            __Vtemp472[0U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[0U];
            __Vtemp472[1U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[1U];
            __Vtemp472[2U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[2U];
            __Vtemp472[3U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[3U];
            __Vtemp472[4U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[4U];
            __Vtemp472[5U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[5U];
            __Vtemp472[6U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[6U];
            __Vtemp472[7U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[7U];
        }
        tracep->fullQData(oldp+776,(((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mmio_process)
                                      ? vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cpu_reg
                                      : (((QData)((IData)(
                                                          __Vtemp472[
                                                          (((IData)(0x3fU) 
                                                            + 
                                                            ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wdata_cnt) 
                                                             << 6U)) 
                                                           >> 5U)])) 
                                          << ((0U == 
                                               (0x1fU 
                                                & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wdata_cnt) 
                                                   << 6U)))
                                               ? 0x20U
                                               : ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wdata_cnt) 
                                                      << 6U))))) 
                                         | (((0U == 
                                              (0x1fU 
                                               & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wdata_cnt) 
                                                  << 6U)))
                                              ? 0ULL
                                              : ((QData)((IData)(
                                                                 __Vtemp472[
                                                                 (((IData)(0x1fU) 
                                                                   + 
                                                                   ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wdata_cnt) 
                                                                    << 6U)) 
                                                                  >> 5U)])) 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wdata_cnt) 
                                                      << 6U))))) 
                                            | ((QData)((IData)(
                                                               __Vtemp472[
                                                               (0x7fffffeU 
                                                                & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wdata_cnt) 
                                                                   << 1U))])) 
                                               >> (0x1fU 
                                                   & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wdata_cnt) 
                                                      << 6U))))))),64);
        tracep->fullBit(oldp+778,(((4U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wb_state))
                                    ? 1U : 0U)));
        tracep->fullBit(oldp+779,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_wlast));
        tracep->fullCData(oldp+780,(((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mmio_process)
                                      ? (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cpu_mask_reg)
                                      : 0xffU)),8);
        tracep->fullIData(oldp+781,(((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_aw_req)
                                      ? ((((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
                                            [((0x7eU 
                                               & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                  >> 4U)) 
                                              | (1U 
                                                 & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))] 
                                            << 0xbU) 
                                           | (0x7e0U 
                                              & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr)) 
                                          & (- (IData)(
                                                       (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mmio_process)))))) 
                                         | (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                            & (- (IData)((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mmio_process)))))
                                      : 0U)),32);
        tracep->fullBit(oldp+782,(((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_aw_req)
                                    ? 1U : 0U)));
        tracep->fullBit(oldp+783,((1U & (((2U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                                           ? 1U : 0U) 
                                         & (~ ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_ar_req)
                                                ? 1U
                                                : 0U))))));
        tracep->fullBit(oldp+784,((1U & ((~ ((2U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                                              ? 1U : 0U)) 
                                         & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_ar_req)
                                             ? 1U : 0U)))));
        tracep->fullBit(oldp+785,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__crossbar_e__DOT__req_both));
        tracep->fullBit(oldp+786,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__crossbar_e__DOT__resp0));
        tracep->fullBit(oldp+787,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__crossbar_e__DOT__resp1));
        tracep->fullBit(oldp+788,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__crossbar_e__DOT__ch0_process));
        tracep->fullBit(oldp+789,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__crossbar_e__DOT__ch1_process));
        tracep->fullBit(oldp+790,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__crossbar_e__DOT__priority_flag));
        tracep->fullCData(oldp+791,((0x1fU & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc)),5);
        tracep->fullCData(oldp+792,((0x3fU & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc 
                                              >> 5U))),6);
        tracep->fullIData(oldp+793,((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc 
                                     >> 0xbU)),21);
        tracep->fullCData(oldp+794,((0x1fU & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr)),5);
        tracep->fullCData(oldp+795,((0x3fU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                              >> 5U))),6);
        tracep->fullIData(oldp+796,((vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                     >> 0xbU)),21);
        tracep->fullIData(oldp+797,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr),32);
        tracep->fullWData(oldp+798,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table),128);
        tracep->fullIData(oldp+802,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
                                    [(0x7eU & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc 
                                               >> 4U))]),21);
        tracep->fullIData(oldp+803,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
                                    [(1U | (0x7eU & 
                                            (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc 
                                             >> 4U)))]),21);
        tracep->fullBit(oldp+804,((1U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
                                         (3U & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc 
                                                >> 9U))] 
                                         >> (0x1eU 
                                             & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc 
                                                >> 4U))))));
        tracep->fullBit(oldp+805,((1U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
                                         (3U & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc 
                                                >> 9U))] 
                                         >> (0x1fU 
                                             & (1U 
                                                | (0x7eU 
                                                   & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc 
                                                      >> 4U))))))));
        tracep->fullBit(oldp+806,((1U & (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                                           ? 1U : 0U) 
                                         & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace))))));
        tracep->fullBit(oldp+807,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
        tracep->fullCData(oldp+808,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag),2);
        if ((1U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))) {
            __Vtemp481[0U] = ((vlSelf->ysyx_22040750__DOT__io_sram0_rdata[0U] 
                               & (- (IData)((1U & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag))))) 
                              | (vlSelf->ysyx_22040750__DOT__io_sram2_rdata[0U] 
                                 & (- (IData)((1U & 
                                               ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag) 
                                                >> 1U))))));
            __Vtemp481[1U] = ((vlSelf->ysyx_22040750__DOT__io_sram0_rdata[1U] 
                               & (- (IData)((1U & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag))))) 
                              | (vlSelf->ysyx_22040750__DOT__io_sram2_rdata[1U] 
                                 & (- (IData)((1U & 
                                               ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag) 
                                                >> 1U))))));
            __Vtemp481[2U] = ((vlSelf->ysyx_22040750__DOT__io_sram0_rdata[2U] 
                               & (- (IData)((1U & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag))))) 
                              | (vlSelf->ysyx_22040750__DOT__io_sram2_rdata[2U] 
                                 & (- (IData)((1U & 
                                               ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag) 
                                                >> 1U))))));
            __Vtemp481[3U] = ((vlSelf->ysyx_22040750__DOT__io_sram0_rdata[3U] 
                               & (- (IData)((1U & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag))))) 
                              | (vlSelf->ysyx_22040750__DOT__io_sram2_rdata[3U] 
                                 & (- (IData)((1U & 
                                               ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag) 
                                                >> 1U))))));
            __Vtemp481[4U] = ((vlSelf->ysyx_22040750__DOT__io_sram1_rdata[0U] 
                               & (- (IData)((1U & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag))))) 
                              | (vlSelf->ysyx_22040750__DOT__io_sram3_rdata[0U] 
                                 & (- (IData)((1U & 
                                               ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag) 
                                                >> 1U))))));
            __Vtemp481[5U] = ((vlSelf->ysyx_22040750__DOT__io_sram1_rdata[1U] 
                               & (- (IData)((1U & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag))))) 
                              | (vlSelf->ysyx_22040750__DOT__io_sram3_rdata[1U] 
                                 & (- (IData)((1U & 
                                               ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag) 
                                                >> 1U))))));
            __Vtemp481[6U] = ((vlSelf->ysyx_22040750__DOT__io_sram1_rdata[2U] 
                               & (- (IData)((1U & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag))))) 
                              | (vlSelf->ysyx_22040750__DOT__io_sram3_rdata[2U] 
                                 & (- (IData)((1U & 
                                               ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag) 
                                                >> 1U))))));
            __Vtemp481[7U] = ((vlSelf->ysyx_22040750__DOT__io_sram1_rdata[3U] 
                               & (- (IData)((1U & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag))))) 
                              | (vlSelf->ysyx_22040750__DOT__io_sram3_rdata[3U] 
                                 & (- (IData)((1U & 
                                               ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag) 
                                                >> 1U))))));
        } else {
            __Vtemp481[0U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[0U];
            __Vtemp481[1U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[1U];
            __Vtemp481[2U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[2U];
            __Vtemp481[3U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[3U];
            __Vtemp481[4U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[4U];
            __Vtemp481[5U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[5U];
            __Vtemp481[6U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[6U];
            __Vtemp481[7U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[7U];
        }
        tracep->fullWData(oldp+809,(__Vtemp481),256);
        __Vtemp488[0U] = ((vlSelf->ysyx_22040750__DOT__io_sram0_rdata[0U] 
                           & (- (IData)((1U & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag))))) 
                          | (vlSelf->ysyx_22040750__DOT__io_sram2_rdata[0U] 
                             & (- (IData)((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag) 
                                                 >> 1U))))));
        __Vtemp488[1U] = ((vlSelf->ysyx_22040750__DOT__io_sram0_rdata[1U] 
                           & (- (IData)((1U & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag))))) 
                          | (vlSelf->ysyx_22040750__DOT__io_sram2_rdata[1U] 
                             & (- (IData)((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag) 
                                                 >> 1U))))));
        __Vtemp488[2U] = ((vlSelf->ysyx_22040750__DOT__io_sram0_rdata[2U] 
                           & (- (IData)((1U & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag))))) 
                          | (vlSelf->ysyx_22040750__DOT__io_sram2_rdata[2U] 
                             & (- (IData)((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag) 
                                                 >> 1U))))));
        __Vtemp488[3U] = ((vlSelf->ysyx_22040750__DOT__io_sram0_rdata[3U] 
                           & (- (IData)((1U & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag))))) 
                          | (vlSelf->ysyx_22040750__DOT__io_sram2_rdata[3U] 
                             & (- (IData)((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag) 
                                                 >> 1U))))));
        __Vtemp488[4U] = ((vlSelf->ysyx_22040750__DOT__io_sram1_rdata[0U] 
                           & (- (IData)((1U & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag))))) 
                          | (vlSelf->ysyx_22040750__DOT__io_sram3_rdata[0U] 
                             & (- (IData)((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag) 
                                                 >> 1U))))));
        __Vtemp488[5U] = ((vlSelf->ysyx_22040750__DOT__io_sram1_rdata[1U] 
                           & (- (IData)((1U & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag))))) 
                          | (vlSelf->ysyx_22040750__DOT__io_sram3_rdata[1U] 
                             & (- (IData)((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag) 
                                                 >> 1U))))));
        __Vtemp488[6U] = ((vlSelf->ysyx_22040750__DOT__io_sram1_rdata[2U] 
                           & (- (IData)((1U & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag))))) 
                          | (vlSelf->ysyx_22040750__DOT__io_sram3_rdata[2U] 
                             & (- (IData)((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag) 
                                                 >> 1U))))));
        __Vtemp488[7U] = ((vlSelf->ysyx_22040750__DOT__io_sram1_rdata[3U] 
                           & (- (IData)((1U & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag))))) 
                          | (vlSelf->ysyx_22040750__DOT__io_sram3_rdata[3U] 
                             & (- (IData)((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag) 
                                                 >> 1U))))));
        tracep->fullWData(oldp+817,(__Vtemp488),256);
        tracep->fullBit(oldp+825,((4U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))));
        tracep->fullBit(oldp+826,(((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                                    ? 1U : 0U)));
        tracep->fullCData(oldp+827,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state),4);
        tracep->fullSData(oldp+828,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state),15);
        tracep->fullBit(oldp+829,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__replace_dirty));
        tracep->fullBit(oldp+830,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__rd_hit));
        tracep->fullBit(oldp+831,((((~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit)) 
                                    & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_reg_e__DOT__mem_rd_en)) 
                                   & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mmio_flag)))));
        tracep->fullBit(oldp+832,(((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                    ? 1U : 0U)));
        tracep->fullBit(oldp+833,(((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                    ? 1U : 0U)));
        tracep->fullBit(oldp+834,(((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                    ? 1U : 0U)));
        tracep->fullBit(oldp+835,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit));
        tracep->fullBit(oldp+836,((((~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit)) 
                                    & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_reg_e__DOT__mem_wr_en)) 
                                   & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mmio_flag)))));
        tracep->fullBit(oldp+837,(((0x100U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                    ? 1U : 0U)));
        tracep->fullBit(oldp+838,(((0x200U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                    ? 1U : 0U)));
        tracep->fullBit(oldp+839,(((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                    ? 1U : 0U)));
        tracep->fullCData(oldp+840,((0x1fU & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out))),5);
        tracep->fullCData(oldp+841,((0x1fU & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr)),5);
        tracep->fullCData(oldp+842,((0x3fU & (IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)))),6);
        tracep->fullCData(oldp+843,((0x3fU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                              >> 5U))),6);
        tracep->fullIData(oldp+844,((0x1fffffU & (IData)(
                                                         (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                          >> 0xbU)))),21);
        tracep->fullIData(oldp+845,((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                     >> 0xbU)),21);
        tracep->fullIData(oldp+846,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr),32);
        tracep->fullCData(oldp+847,((0xffU & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cpu_mask_reg)))),8);
        tracep->fullIData(oldp+848,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__sram_wmaskB),32);
        tracep->fullCData(oldp+849,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag),2);
        if ((2U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))) {
            __Vtemp495[0U] = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[0U] 
                               & (- (IData)((1U & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag))))) 
                              | (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[0U] 
                                 & (- (IData)((1U & 
                                               ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag) 
                                                >> 1U))))));
            __Vtemp495[1U] = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[1U] 
                               & (- (IData)((1U & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag))))) 
                              | (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[1U] 
                                 & (- (IData)((1U & 
                                               ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag) 
                                                >> 1U))))));
            __Vtemp495[2U] = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[2U] 
                               & (- (IData)((1U & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag))))) 
                              | (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[2U] 
                                 & (- (IData)((1U & 
                                               ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag) 
                                                >> 1U))))));
            __Vtemp495[3U] = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[3U] 
                               & (- (IData)((1U & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag))))) 
                              | (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[3U] 
                                 & (- (IData)((1U & 
                                               ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag) 
                                                >> 1U))))));
            __Vtemp495[4U] = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[4U] 
                               & (- (IData)((1U & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag))))) 
                              | (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[4U] 
                                 & (- (IData)((1U & 
                                               ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag) 
                                                >> 1U))))));
            __Vtemp495[5U] = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[5U] 
                               & (- (IData)((1U & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag))))) 
                              | (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[5U] 
                                 & (- (IData)((1U & 
                                               ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag) 
                                                >> 1U))))));
            __Vtemp495[6U] = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[6U] 
                               & (- (IData)((1U & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag))))) 
                              | (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[6U] 
                                 & (- (IData)((1U & 
                                               ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag) 
                                                >> 1U))))));
            __Vtemp495[7U] = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[7U] 
                               & (- (IData)((1U & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag))))) 
                              | (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[7U] 
                                 & (- (IData)((1U & 
                                               ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag) 
                                                >> 1U))))));
        } else {
            __Vtemp495[0U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[0U];
            __Vtemp495[1U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[1U];
            __Vtemp495[2U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[2U];
            __Vtemp495[3U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[3U];
            __Vtemp495[4U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[4U];
            __Vtemp495[5U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[5U];
            __Vtemp495[6U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[6U];
            __Vtemp495[7U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[7U];
        }
        tracep->fullWData(oldp+850,(__Vtemp495),256);
        __Vtemp500[0U] = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[0U] 
                           & (- (IData)((1U & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag))))) 
                          | (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[0U] 
                             & (- (IData)((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag) 
                                                 >> 1U))))));
        __Vtemp500[1U] = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[1U] 
                           & (- (IData)((1U & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag))))) 
                          | (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[1U] 
                             & (- (IData)((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag) 
                                                 >> 1U))))));
        __Vtemp500[2U] = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[2U] 
                           & (- (IData)((1U & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag))))) 
                          | (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[2U] 
                             & (- (IData)((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag) 
                                                 >> 1U))))));
        __Vtemp500[3U] = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[3U] 
                           & (- (IData)((1U & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag))))) 
                          | (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[3U] 
                             & (- (IData)((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag) 
                                                 >> 1U))))));
        __Vtemp500[4U] = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[4U] 
                           & (- (IData)((1U & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag))))) 
                          | (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[4U] 
                             & (- (IData)((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag) 
                                                 >> 1U))))));
        __Vtemp500[5U] = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[5U] 
                           & (- (IData)((1U & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag))))) 
                          | (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[5U] 
                             & (- (IData)((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag) 
                                                 >> 1U))))));
        __Vtemp500[6U] = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[6U] 
                           & (- (IData)((1U & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag))))) 
                          | (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[6U] 
                             & (- (IData)((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag) 
                                                 >> 1U))))));
        __Vtemp500[7U] = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[7U] 
                           & (- (IData)((1U & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag))))) 
                          | (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[7U] 
                             & (- (IData)((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag) 
                                                 >> 1U))))));
        tracep->fullWData(oldp+858,(__Vtemp500),256);
        tracep->fullQData(oldp+866,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cpu_reg),64);
        tracep->fullCData(oldp+868,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cpu_mask_reg),8);
        tracep->fullBit(oldp+869,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__sram_wflag));
        tracep->fullWData(oldp+870,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table),128);
        tracep->fullWData(oldp+874,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table),128);
        tracep->fullIData(oldp+878,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
                                    [(0x7eU & ((IData)(
                                                       (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                        >> 5U)) 
                                               << 1U))]),21);
        tracep->fullIData(oldp+879,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
                                    [(1U | (0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)))]),21);
        tracep->fullBit(oldp+880,((1U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
                                         (3U & ((IData)(
                                                        (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                         >> 5U)) 
                                                >> 4U))] 
                                         >> (0x1eU 
                                             & ((IData)(
                                                        (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                         >> 5U)) 
                                                << 1U))))));
        tracep->fullBit(oldp+881,((1U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
                                         (3U & ((IData)(
                                                        (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                         >> 5U)) 
                                                >> 4U))] 
                                         >> (0x1fU 
                                             & (1U 
                                                | (0x7eU 
                                                   & ((IData)(
                                                              (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                               >> 5U)) 
                                                      << 1U))))))));
        tracep->fullBit(oldp+882,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way0_hit));
        tracep->fullBit(oldp+883,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit));
        tracep->fullBit(oldp+884,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit));
        tracep->fullBit(oldp+885,((1U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
                                         (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 9U))] 
                                         >> (0x1eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U))))));
        tracep->fullBit(oldp+886,((1U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
                                         (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 9U))] 
                                         >> (0x1fU 
                                             & (1U 
                                                | (0x7eU 
                                                   & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                      >> 4U))))))));
        tracep->fullBit(oldp+887,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                         | (((~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit)) 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
                                                (3U 
                                                 & ((IData)(
                                                            (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                             >> 5U)) 
                                                    >> 4U))] 
                                                >> 
                                                (0x1eU 
                                                 & ((IData)(
                                                            (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                             >> 5U)) 
                                                    << 1U)))) 
                                            & (~ (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
                                                  (3U 
                                                   & ((IData)(
                                                              (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                               >> 5U)) 
                                                      >> 4U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & (1U 
                                                      | (0x7eU 
                                                         & ((IData)(
                                                                    (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                     >> 5U)) 
                                                            << 1U)))))))))));
        tracep->fullBit(oldp+888,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op));
        tracep->fullCData(oldp+889,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wb_state),3);
        tracep->fullBit(oldp+890,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_ar_req));
        tracep->fullBit(oldp+891,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_aw_req));
        tracep->fullCData(oldp+892,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wdata_cnt),2);
        if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op) {
            __Vtemp501[0U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[0U];
            __Vtemp501[1U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[1U];
            __Vtemp501[2U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[2U];
            __Vtemp501[3U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[3U];
            __Vtemp501[4U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[4U];
            __Vtemp501[5U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[5U];
            __Vtemp501[6U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[6U];
            __Vtemp501[7U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[7U];
        } else {
            __Vtemp501[0U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[0U];
            __Vtemp501[1U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[1U];
            __Vtemp501[2U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[2U];
            __Vtemp501[3U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[3U];
            __Vtemp501[4U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[4U];
            __Vtemp501[5U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[5U];
            __Vtemp501[6U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[6U];
            __Vtemp501[7U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[7U];
        }
        tracep->fullWData(oldp+893,(__Vtemp501),256);
        if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op) {
            __Vtemp502[0U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[0U];
            __Vtemp502[1U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[1U];
            __Vtemp502[2U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[2U];
            __Vtemp502[3U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[3U];
            __Vtemp502[4U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[4U];
            __Vtemp502[5U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[5U];
            __Vtemp502[6U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[6U];
            __Vtemp502[7U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[7U];
        } else {
            __Vtemp502[0U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[0U];
            __Vtemp502[1U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[1U];
            __Vtemp502[2U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[2U];
            __Vtemp502[3U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[3U];
            __Vtemp502[4U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[4U];
            __Vtemp502[5U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[5U];
            __Vtemp502[6U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[6U];
            __Vtemp502[7U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[7U];
        }
        tracep->fullQData(oldp+901,((((QData)((IData)(
                                                      __Vtemp502[
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
                                                          __Vtemp502[
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
                                                           __Vtemp502[
                                                           (0x7fffffeU 
                                                            & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wdata_cnt) 
                                                               << 1U))])) 
                                           >> (0x1fU 
                                               & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wdata_cnt) 
                                                  << 6U)))))),64);
        if ((2U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))) {
            __Vtemp509[0U] = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[0U] 
                               & (- (IData)((1U & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag))))) 
                              | (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[0U] 
                                 & (- (IData)((1U & 
                                               ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag) 
                                                >> 1U))))));
            __Vtemp509[1U] = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[1U] 
                               & (- (IData)((1U & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag))))) 
                              | (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[1U] 
                                 & (- (IData)((1U & 
                                               ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag) 
                                                >> 1U))))));
            __Vtemp509[2U] = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[2U] 
                               & (- (IData)((1U & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag))))) 
                              | (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[2U] 
                                 & (- (IData)((1U & 
                                               ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag) 
                                                >> 1U))))));
            __Vtemp509[3U] = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[3U] 
                               & (- (IData)((1U & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag))))) 
                              | (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[3U] 
                                 & (- (IData)((1U & 
                                               ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag) 
                                                >> 1U))))));
            __Vtemp509[4U] = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[4U] 
                               & (- (IData)((1U & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag))))) 
                              | (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[4U] 
                                 & (- (IData)((1U & 
                                               ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag) 
                                                >> 1U))))));
            __Vtemp509[5U] = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[5U] 
                               & (- (IData)((1U & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag))))) 
                              | (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[5U] 
                                 & (- (IData)((1U & 
                                               ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag) 
                                                >> 1U))))));
            __Vtemp509[6U] = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[6U] 
                               & (- (IData)((1U & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag))))) 
                              | (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[6U] 
                                 & (- (IData)((1U & 
                                               ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag) 
                                                >> 1U))))));
            __Vtemp509[7U] = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[7U] 
                               & (- (IData)((1U & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag))))) 
                              | (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[7U] 
                                 & (- (IData)((1U & 
                                               ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag) 
                                                >> 1U))))));
        } else {
            __Vtemp509[0U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[0U];
            __Vtemp509[1U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[1U];
            __Vtemp509[2U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[2U];
            __Vtemp509[3U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[3U];
            __Vtemp509[4U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[4U];
            __Vtemp509[5U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[5U];
            __Vtemp509[6U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[6U];
            __Vtemp509[7U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[7U];
        }
        tracep->fullQData(oldp+903,((((QData)((IData)(
                                                      __Vtemp509[
                                                      (((IData)(0x3fU) 
                                                        + 
                                                        (0xc0U 
                                                         & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                            << 3U))) 
                                                       >> 5U)])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vtemp509[
                                                                  (6U 
                                                                   & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                      >> 2U))])))),64);
        tracep->fullIData(oldp+905,(((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
                                      [((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                  >> 4U)) 
                                        | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))] 
                                      << 0xbU) | (0x7e0U 
                                                  & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr))),32);
        tracep->fullBit(oldp+906,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mmio_flag));
        tracep->fullBit(oldp+907,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mmio_process));
        tracep->fullBit(oldp+908,((1U & (~ (IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen)))));
        __Vtemp513[0U] = (~ (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                               ? 1U : 0U) ? Vysyx_22040750__ConstPool__CONST_9e67c271_0[0U]
                              : Vysyx_22040750__ConstPool__CONST_5b979007_0[0U]));
        __Vtemp513[1U] = (~ (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                               ? 1U : 0U) ? Vysyx_22040750__ConstPool__CONST_9e67c271_0[1U]
                              : Vysyx_22040750__ConstPool__CONST_5b979007_0[1U]));
        __Vtemp513[2U] = (~ (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                               ? 1U : 0U) ? Vysyx_22040750__ConstPool__CONST_9e67c271_0[2U]
                              : Vysyx_22040750__ConstPool__CONST_5b979007_0[2U]));
        __Vtemp513[3U] = (~ (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                               ? 1U : 0U) ? Vysyx_22040750__ConstPool__CONST_9e67c271_0[3U]
                              : Vysyx_22040750__ConstPool__CONST_5b979007_0[3U]));
        tracep->fullWData(oldp+909,(__Vtemp513),128);
        tracep->fullBit(oldp+913,((1U & (~ ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen) 
                                            >> 1U)))));
        __Vtemp517[0U] = (~ (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                               ? 1U : 0U) ? Vysyx_22040750__ConstPool__CONST_9e67c271_0[4U]
                              : Vysyx_22040750__ConstPool__CONST_5b979007_0[4U]));
        __Vtemp517[1U] = (~ (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                               ? 1U : 0U) ? Vysyx_22040750__ConstPool__CONST_9e67c271_0[5U]
                              : Vysyx_22040750__ConstPool__CONST_5b979007_0[5U]));
        __Vtemp517[2U] = (~ (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                               ? 1U : 0U) ? Vysyx_22040750__ConstPool__CONST_9e67c271_0[6U]
                              : Vysyx_22040750__ConstPool__CONST_5b979007_0[6U]));
        __Vtemp517[3U] = (~ (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                               ? 1U : 0U) ? Vysyx_22040750__ConstPool__CONST_9e67c271_0[7U]
                              : Vysyx_22040750__ConstPool__CONST_5b979007_0[7U]));
        tracep->fullWData(oldp+914,(__Vtemp517),128);
        tracep->fullBit(oldp+918,((1U & (~ ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen) 
                                            >> 2U)))));
        tracep->fullBit(oldp+919,((1U & (~ ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen) 
                                            >> 3U)))));
        tracep->fullBit(oldp+920,((1U & (~ ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen) 
                                            >> 4U)))));
        __Vtemp519[0U] = (~ vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[0U]);
        __Vtemp519[1U] = (~ vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[1U]);
        __Vtemp519[2U] = (~ vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[2U]);
        __Vtemp519[3U] = (~ vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[3U]);
        tracep->fullWData(oldp+921,(__Vtemp519),128);
        tracep->fullBit(oldp+925,((1U & (~ ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen) 
                                            >> 5U)))));
        __Vtemp521[0U] = (~ vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[4U]);
        __Vtemp521[1U] = (~ vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[5U]);
        __Vtemp521[2U] = (~ vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[6U]);
        __Vtemp521[3U] = (~ vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[7U]);
        tracep->fullWData(oldp+926,(__Vtemp521),128);
        tracep->fullBit(oldp+930,((1U & (~ ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen) 
                                            >> 6U)))));
        tracep->fullBit(oldp+931,((1U & (~ ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen) 
                                            >> 7U)))));
        if ((2U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))) {
            __Vtemp528[0U] = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[0U] 
                               & (- (IData)((1U & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag))))) 
                              | (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[0U] 
                                 & (- (IData)((1U & 
                                               ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag) 
                                                >> 1U))))));
            __Vtemp528[1U] = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[1U] 
                               & (- (IData)((1U & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag))))) 
                              | (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[1U] 
                                 & (- (IData)((1U & 
                                               ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag) 
                                                >> 1U))))));
            __Vtemp528[2U] = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[2U] 
                               & (- (IData)((1U & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag))))) 
                              | (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[2U] 
                                 & (- (IData)((1U & 
                                               ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag) 
                                                >> 1U))))));
            __Vtemp528[3U] = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[3U] 
                               & (- (IData)((1U & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag))))) 
                              | (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[3U] 
                                 & (- (IData)((1U & 
                                               ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag) 
                                                >> 1U))))));
            __Vtemp528[4U] = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[4U] 
                               & (- (IData)((1U & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag))))) 
                              | (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[4U] 
                                 & (- (IData)((1U & 
                                               ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag) 
                                                >> 1U))))));
            __Vtemp528[5U] = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[5U] 
                               & (- (IData)((1U & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag))))) 
                              | (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[5U] 
                                 & (- (IData)((1U & 
                                               ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag) 
                                                >> 1U))))));
            __Vtemp528[6U] = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[6U] 
                               & (- (IData)((1U & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag))))) 
                              | (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[6U] 
                                 & (- (IData)((1U & 
                                               ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag) 
                                                >> 1U))))));
            __Vtemp528[7U] = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[7U] 
                               & (- (IData)((1U & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag))))) 
                              | (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[7U] 
                                 & (- (IData)((1U & 
                                               ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag) 
                                                >> 1U))))));
        } else {
            __Vtemp528[0U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[0U];
            __Vtemp528[1U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[1U];
            __Vtemp528[2U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[2U];
            __Vtemp528[3U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[3U];
            __Vtemp528[4U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[4U];
            __Vtemp528[5U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[5U];
            __Vtemp528[6U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[6U];
            __Vtemp528[7U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[7U];
        }
        tracep->fullQData(oldp+932,(((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mmio_process)
                                      ? vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_rdata
                                      : (((QData)((IData)(
                                                          __Vtemp528[
                                                          (((IData)(0x3fU) 
                                                            + 
                                                            (0xc0U 
                                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                << 3U))) 
                                                           >> 5U)])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           __Vtemp528[
                                                           (6U 
                                                            & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                               >> 2U))]))))),64);
        tracep->fullBit(oldp+934,((1U & (((2U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state)) 
                                          | ((0x20U 
                                              == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                              ? 1U : 0U)) 
                                         | ((0x2000U 
                                             == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state)) 
                                            & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_rvalid))))));
        tracep->fullBit(oldp+935,(((IData)(vlSelf->ysyx_22040750__DOT__cpu_pc_ready) 
                                   & (IData)(vlSelf->ysyx_22040750__DOT__cpu_pc_valid))));
        tracep->fullBit(oldp+936,((1U & ((~ (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__pc_e__DOT__IF_valid)) 
                                         | ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__pc_e__DOT__IF_ready_go) 
                                            & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_allowin))))));
        tracep->fullCData(oldp+937,(((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__rd_hit)
                                      ? ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way0_hit)
                                          ? 0xcU : 3U)
                                      : ((1U & (((((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_rlast) 
                                                   & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mmio_process))) 
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
        tracep->fullBit(oldp+938,(((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_icache_arready) 
                                   & ((2U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                                       ? 1U : 0U))));
        tracep->fullBit(oldp+939,(((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_arready) 
                                   & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_ar_req)
                                       ? 1U : 0U))));
        tracep->fullBit(oldp+940,((1U & ((((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_rlast) 
                                           & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mmio_process))) 
                                          | ((0x10U 
                                              == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                              ? 1U : 0U)) 
                                         | ((0x200U 
                                             == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                             ? 1U : 0U)))));
        tracep->fullCData(oldp+941,(((1U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wb_state))
                                      ? ((((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_rlast) 
                                           & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__replace_dirty)) 
                                          | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mmio_flag) 
                                             & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_reg_e__DOT__mem_wr_en)))
                                          ? 2U : (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wb_state))
                                      : ((2U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wb_state))
                                          ? ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__aw_handshake)
                                              ? 4U : (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wb_state))
                                          : ((4U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wb_state))
                                              ? (((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_handshake) 
                                                  & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_wlast))
                                                  ? 1U
                                                  : (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wb_state))
                                              : (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wb_state))))),3);
        tracep->fullCData(oldp+942,(vlSelf->ysyx_22040750__DOT__iaddr),6);
        tracep->fullBit(oldp+943,((1U & (IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen))));
        tracep->fullBit(oldp+944,((1U & ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen) 
                                         >> 1U))));
        tracep->fullBit(oldp+945,((1U & ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen) 
                                         >> 2U))));
        tracep->fullBit(oldp+946,((1U & ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen) 
                                         >> 3U))));
        tracep->fullBit(oldp+947,((1U & ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen) 
                                         >> 4U))));
        tracep->fullBit(oldp+948,((1U & ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen) 
                                         >> 5U))));
        tracep->fullBit(oldp+949,((1U & ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen) 
                                         >> 6U))));
        tracep->fullBit(oldp+950,((1U & ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen) 
                                         >> 7U))));
        tracep->fullBit(oldp+951,(vlSelf->ysyx_22040750__DOT__cpu_pc_valid));
        tracep->fullBit(oldp+952,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_allowin));
        tracep->fullBit(oldp+953,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_allowin));
        tracep->fullBit(oldp+954,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_valid));
        tracep->fullBit(oldp+955,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_allowin));
        tracep->fullBit(oldp+956,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__npc_e__DOT__store_dnpc));
        tracep->fullBit(oldp+957,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__pc_e__DOT__IF_handshake));
        tracep->fullBit(oldp+958,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_reg_e__DOT__output_valid));
        tracep->fullCData(oldp+959,(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen),8);
        tracep->fullCData(oldp+960,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cen_icache),4);
        tracep->fullQData(oldp+961,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_rdata),64);
        tracep->fullBit(oldp+963,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_icache_rvalid));
        tracep->fullBit(oldp+964,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_rvalid));
        tracep->fullBit(oldp+965,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_icache_rlast));
        tracep->fullBit(oldp+966,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_rlast));
        tracep->fullBit(oldp+967,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_icache_arready));
        tracep->fullBit(oldp+968,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_arready));
        tracep->fullBit(oldp+969,(((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_icache_rvalid) 
                                   & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_icache_rlast))));
        tracep->fullBit(oldp+970,(((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_rvalid) 
                                   & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_rlast))));
        tracep->fullBit(oldp+971,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way0_hit));
        tracep->fullBit(oldp+972,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_hit));
        tracep->fullBit(oldp+973,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__rd_hit));
        tracep->fullBit(oldp+974,(((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__pc_e__DOT__IF_handshake) 
                                   & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__rd_hit)))));
        tracep->fullCData(oldp+975,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__next_state),4);
        tracep->fullSData(oldp+976,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__next_state),15);
        tracep->fullBit(oldp+977,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__rd_handshake));
        tracep->fullBit(oldp+978,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__aw_handshake));
        tracep->fullBit(oldp+979,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_handshake));
        tracep->fullBit(oldp+980,((1U & (~ (IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen)))));
        tracep->fullBit(oldp+981,((1U & (~ ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen) 
                                            >> 1U)))));
        tracep->fullBit(oldp+982,((1U & (~ ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen) 
                                            >> 2U)))));
        tracep->fullBit(oldp+983,((1U & (~ ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen) 
                                            >> 3U)))));
        tracep->fullBit(oldp+984,((1U & (~ ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen) 
                                            >> 4U)))));
        tracep->fullBit(oldp+985,((1U & (~ ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen) 
                                            >> 5U)))));
        tracep->fullBit(oldp+986,((1U & (~ ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen) 
                                            >> 6U)))));
        tracep->fullBit(oldp+987,((1U & (~ ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen) 
                                            >> 7U)))));
        tracep->fullBit(oldp+988,(vlSelf->clock));
        tracep->fullBit(oldp+989,(vlSelf->reset));
        tracep->fullBit(oldp+990,(vlSelf->io_interrupt));
        tracep->fullBit(oldp+991,(vlSelf->io_master_awready));
        tracep->fullBit(oldp+992,(vlSelf->io_master_awvalid));
        tracep->fullCData(oldp+993,(vlSelf->io_master_awid),4);
        tracep->fullIData(oldp+994,(vlSelf->io_master_awaddr),32);
        tracep->fullCData(oldp+995,(vlSelf->io_master_awlen),8);
        tracep->fullCData(oldp+996,(vlSelf->io_master_awsize),3);
        tracep->fullCData(oldp+997,(vlSelf->io_master_awburst),2);
        tracep->fullBit(oldp+998,(vlSelf->io_master_wready));
        tracep->fullBit(oldp+999,(vlSelf->io_master_wvalid));
        tracep->fullQData(oldp+1000,(vlSelf->io_master_wdata),64);
        tracep->fullCData(oldp+1002,(vlSelf->io_master_wstrb),8);
        tracep->fullBit(oldp+1003,(vlSelf->io_master_wlast));
        tracep->fullBit(oldp+1004,(vlSelf->io_master_bready));
        tracep->fullBit(oldp+1005,(vlSelf->io_master_bvalid));
        tracep->fullCData(oldp+1006,(vlSelf->io_master_bid),4);
        tracep->fullCData(oldp+1007,(vlSelf->io_master_bresp),2);
        tracep->fullBit(oldp+1008,(vlSelf->io_master_arready));
        tracep->fullBit(oldp+1009,(vlSelf->io_master_arvalid));
        tracep->fullCData(oldp+1010,(vlSelf->io_master_arid),4);
        tracep->fullIData(oldp+1011,(vlSelf->io_master_araddr),32);
        tracep->fullCData(oldp+1012,(vlSelf->io_master_arlen),8);
        tracep->fullCData(oldp+1013,(vlSelf->io_master_arsize),3);
        tracep->fullCData(oldp+1014,(vlSelf->io_master_arburst),2);
        tracep->fullBit(oldp+1015,(vlSelf->io_master_rready));
        tracep->fullBit(oldp+1016,(vlSelf->io_master_rvalid));
        tracep->fullCData(oldp+1017,(vlSelf->io_master_rid),4);
        tracep->fullCData(oldp+1018,(vlSelf->io_master_rresp),2);
        tracep->fullQData(oldp+1019,(vlSelf->io_master_rdata),64);
        tracep->fullBit(oldp+1021,(vlSelf->io_master_rlast));
        tracep->fullBit(oldp+1022,(vlSelf->io_slave_awready));
        tracep->fullBit(oldp+1023,(vlSelf->io_slave_awvalid));
        tracep->fullCData(oldp+1024,(vlSelf->io_slave_awid),4);
        tracep->fullIData(oldp+1025,(vlSelf->io_slave_awaddr),32);
        tracep->fullCData(oldp+1026,(vlSelf->io_slave_awlen),8);
        tracep->fullCData(oldp+1027,(vlSelf->io_slave_awsize),3);
        tracep->fullCData(oldp+1028,(vlSelf->io_slave_awburst),2);
        tracep->fullBit(oldp+1029,(vlSelf->io_slave_wready));
        tracep->fullBit(oldp+1030,(vlSelf->io_slave_wvalid));
        tracep->fullQData(oldp+1031,(vlSelf->io_slave_wdata),64);
        tracep->fullCData(oldp+1033,(vlSelf->io_slave_wstrb),8);
        tracep->fullBit(oldp+1034,(vlSelf->io_slave_wlast));
        tracep->fullBit(oldp+1035,(vlSelf->io_slave_bready));
        tracep->fullBit(oldp+1036,(vlSelf->io_slave_bvalid));
        tracep->fullCData(oldp+1037,(vlSelf->io_slave_bid),4);
        tracep->fullCData(oldp+1038,(vlSelf->io_slave_bresp),2);
        tracep->fullBit(oldp+1039,(vlSelf->io_slave_arready));
        tracep->fullBit(oldp+1040,(vlSelf->io_slave_arvalid));
        tracep->fullCData(oldp+1041,(vlSelf->io_slave_arid),4);
        tracep->fullIData(oldp+1042,(vlSelf->io_slave_araddr),32);
        tracep->fullCData(oldp+1043,(vlSelf->io_slave_arlen),8);
        tracep->fullCData(oldp+1044,(vlSelf->io_slave_arsize),3);
        tracep->fullCData(oldp+1045,(vlSelf->io_slave_arburst),2);
        tracep->fullBit(oldp+1046,(vlSelf->io_slave_rready));
        tracep->fullBit(oldp+1047,(vlSelf->io_slave_rvalid));
        tracep->fullCData(oldp+1048,(vlSelf->io_slave_rid),4);
        tracep->fullCData(oldp+1049,(vlSelf->io_slave_rresp),2);
        tracep->fullQData(oldp+1050,(vlSelf->io_slave_rdata),64);
        tracep->fullBit(oldp+1052,(vlSelf->io_slave_rlast));
        tracep->fullBit(oldp+1053,(((0x40U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state)) 
                                    | ((0x4000U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state)) 
                                       & (IData)(vlSelf->io_master_bvalid)))));
        tracep->fullQData(oldp+1054,(((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__crossbar_e__DOT__ch0_process)
                                       ? vlSelf->io_master_rdata
                                       : 0ULL)),64);
        tracep->fullIData(oldp+1056,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__mem_addr),32);
        tracep->fullQData(oldp+1057,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_mem_data),64);
        tracep->fullIData(oldp+1059,(0x20U),32);
        tracep->fullIData(oldp+1060,(3U),32);
        tracep->fullIData(oldp+1061,(3U),32);
        tracep->fullIData(oldp+1062,(0x7ffffffcU),32);
        tracep->fullSData(oldp+1063,(1U),15);
        tracep->fullSData(oldp+1064,(2U),15);
        tracep->fullSData(oldp+1065,(4U),15);
        tracep->fullSData(oldp+1066,(8U),15);
        tracep->fullSData(oldp+1067,(0x10U),15);
        tracep->fullSData(oldp+1068,(0x20U),15);
        tracep->fullSData(oldp+1069,(0x40U),15);
        tracep->fullSData(oldp+1070,(0x80U),15);
        tracep->fullSData(oldp+1071,(0x100U),15);
        tracep->fullSData(oldp+1072,(0x200U),15);
        tracep->fullSData(oldp+1073,(0x400U),15);
        tracep->fullSData(oldp+1074,(0x800U),15);
        tracep->fullSData(oldp+1075,(0x1000U),15);
        tracep->fullSData(oldp+1076,(0x2000U),15);
        tracep->fullSData(oldp+1077,(0x4000U),15);
        tracep->fullCData(oldp+1078,(1U),3);
        tracep->fullCData(oldp+1079,(2U),3);
        tracep->fullCData(oldp+1080,(4U),3);
        tracep->fullIData(oldp+1081,(0x40U),32);
        tracep->fullBit(oldp+1082,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_valid_d));
        tracep->fullBit(oldp+1083,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__div_valid_d));
        tracep->fullBit(oldp+1084,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__end_flag));
        tracep->fullIData(oldp+1085,(2U),32);
        tracep->fullIData(oldp+1086,(2U),32);
        tracep->fullIData(oldp+1087,(0x1000U),32);
        tracep->fullSData(oldp+1088,(0x341U),12);
        tracep->fullSData(oldp+1089,(0x300U),12);
        tracep->fullSData(oldp+1090,(0x305U),12);
        tracep->fullSData(oldp+1091,(0x342U),12);
        tracep->fullSData(oldp+1092,(0x340U),12);
        tracep->fullBit(oldp+1093,(1U));
        tracep->fullCData(oldp+1094,(3U),8);
        tracep->fullCData(oldp+1095,(3U),3);
        tracep->fullBit(oldp+1096,(0U));
        tracep->fullBit(oldp+1097,(1U));
        tracep->fullCData(oldp+1098,(0U),2);
        tracep->fullCData(oldp+1099,(1U),2);
        tracep->fullCData(oldp+1100,(2U),2);
        tracep->fullCData(oldp+1101,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__crossbar_e__DOT__current_state),2);
        tracep->fullCData(oldp+1102,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__crossbar_e__DOT__next_state),2);
        tracep->fullIData(oldp+1103,(0x80U),32);
        tracep->fullIData(oldp+1104,(5U),32);
        tracep->fullIData(oldp+1105,(6U),32);
        tracep->fullIData(oldp+1106,(0x15U),32);
        tracep->fullCData(oldp+1107,(0U),4);
        tracep->fullCData(oldp+1108,(1U),4);
        tracep->fullCData(oldp+1109,(2U),4);
        tracep->fullCData(oldp+1110,(4U),4);
        tracep->fullCData(oldp+1111,(8U),4);
    }
}

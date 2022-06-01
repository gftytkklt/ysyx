// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcpu_top__Syms.h"


void Vcpu_top___024root__traceInitSub0(Vcpu_top___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vcpu_top___024root__traceInitTop(Vcpu_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vcpu_top___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vcpu_top___024root__traceInitSub0(Vcpu_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+99,"I_sys_clk", false,-1);
        tracep->declBit(c+100,"I_rst", false,-1);
        tracep->declBus(c+101,"I_inst", false,-1, 31,0);
        tracep->declQuad(c+102,"O_pc", false,-1, 63,0);
        tracep->declBit(c+99,"cpu_top I_sys_clk", false,-1);
        tracep->declBit(c+100,"cpu_top I_rst", false,-1);
        tracep->declBus(c+101,"cpu_top I_inst", false,-1, 31,0);
        tracep->declQuad(c+102,"cpu_top O_pc", false,-1, 63,0);
        tracep->declQuad(c+104,"cpu_top imm", false,-1, 63,0);
        tracep->declQuad(c+65,"cpu_top wr_data", false,-1, 63,0);
        tracep->declQuad(c+106,"cpu_top rs1_data", false,-1, 63,0);
        tracep->declBus(c+108,"cpu_top rs1_addr", false,-1, 4,0);
        tracep->declBus(c+109,"cpu_top rd_addr", false,-1, 4,0);
        tracep->declBus(c+110,"cpu_top funct3", false,-1, 2,0);
        tracep->declBit(c+99,"cpu_top pc_e I_sys_clk", false,-1);
        tracep->declBit(c+100,"cpu_top pc_e I_rst", false,-1);
        tracep->declQuad(c+102,"cpu_top pc_e O_pc", false,-1, 63,0);
        tracep->declQuad(c+112,"cpu_top pc_e PC_RESET", false,-1, 63,0);
        tracep->declBit(c+99,"cpu_top gpr_e I_sys_clk", false,-1);
        tracep->declBit(c+100,"cpu_top gpr_e I_rst", false,-1);
        tracep->declQuad(c+65,"cpu_top gpr_e I_wr_data", false,-1, 63,0);
        tracep->declBus(c+108,"cpu_top gpr_e I_rs1_addr", false,-1, 4,0);
        tracep->declBus(c+109,"cpu_top gpr_e I_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+106,"cpu_top gpr_e O_rs1_data", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+1+i*2,"cpu_top gpr_e gpr", true,(i+0), 63,0);}}
        {int i; for (i=0; i<32; i++) {
                tracep->declBit(c+67+i*1,"cpu_top gpr_e wen", true,(i+0));}}
        tracep->declBit(c+99,"cpu_top decoder_e I_sys_clk", false,-1);
        tracep->declBit(c+100,"cpu_top decoder_e I_rst", false,-1);
        tracep->declBus(c+101,"cpu_top decoder_e I_inst", false,-1, 31,0);
        tracep->declBus(c+111,"cpu_top decoder_e O_imm", false,-1, 31,0);
        tracep->declBus(c+108,"cpu_top decoder_e O_rs1", false,-1, 4,0);
        tracep->declBus(c+109,"cpu_top decoder_e O_rd", false,-1, 4,0);
        tracep->declBus(c+110,"cpu_top decoder_e O_funct3", false,-1, 2,0);
        tracep->declQuad(c+106,"cpu_top alu_e I_op1", false,-1, 63,0);
        tracep->declQuad(c+104,"cpu_top alu_e I_op2", false,-1, 63,0);
        tracep->declBus(c+110,"cpu_top alu_e I_funct3", false,-1, 2,0);
        tracep->declQuad(c+65,"cpu_top alu_e O_result", false,-1, 63,0);
    }
}

void Vcpu_top___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vcpu_top___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vcpu_top___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vcpu_top___024root__traceRegister(Vcpu_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vcpu_top___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vcpu_top___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vcpu_top___024root__traceCleanup, vlSelf);
    }
}

void Vcpu_top___024root__traceFullSub0(Vcpu_top___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vcpu_top___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vcpu_top___024root* const __restrict vlSelf = static_cast<Vcpu_top___024root*>(voidSelf);
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vcpu_top___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vcpu_top___024root__traceFullSub0(Vcpu_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullQData(oldp+1,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[0]),64);
        tracep->fullQData(oldp+3,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[1]),64);
        tracep->fullQData(oldp+5,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[2]),64);
        tracep->fullQData(oldp+7,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[3]),64);
        tracep->fullQData(oldp+9,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[4]),64);
        tracep->fullQData(oldp+11,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[5]),64);
        tracep->fullQData(oldp+13,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[6]),64);
        tracep->fullQData(oldp+15,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[7]),64);
        tracep->fullQData(oldp+17,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[8]),64);
        tracep->fullQData(oldp+19,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[9]),64);
        tracep->fullQData(oldp+21,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[10]),64);
        tracep->fullQData(oldp+23,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[11]),64);
        tracep->fullQData(oldp+25,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[12]),64);
        tracep->fullQData(oldp+27,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[13]),64);
        tracep->fullQData(oldp+29,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[14]),64);
        tracep->fullQData(oldp+31,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[15]),64);
        tracep->fullQData(oldp+33,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[16]),64);
        tracep->fullQData(oldp+35,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[17]),64);
        tracep->fullQData(oldp+37,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[18]),64);
        tracep->fullQData(oldp+39,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[19]),64);
        tracep->fullQData(oldp+41,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[20]),64);
        tracep->fullQData(oldp+43,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[21]),64);
        tracep->fullQData(oldp+45,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[22]),64);
        tracep->fullQData(oldp+47,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[23]),64);
        tracep->fullQData(oldp+49,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[24]),64);
        tracep->fullQData(oldp+51,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[25]),64);
        tracep->fullQData(oldp+53,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[26]),64);
        tracep->fullQData(oldp+55,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[27]),64);
        tracep->fullQData(oldp+57,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[28]),64);
        tracep->fullQData(oldp+59,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[29]),64);
        tracep->fullQData(oldp+61,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[30]),64);
        tracep->fullQData(oldp+63,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[31]),64);
        tracep->fullQData(oldp+65,(vlSelf->cpu_top__DOT__wr_data),64);
        tracep->fullBit(oldp+67,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[0]));
        tracep->fullBit(oldp+68,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[1]));
        tracep->fullBit(oldp+69,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[2]));
        tracep->fullBit(oldp+70,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[3]));
        tracep->fullBit(oldp+71,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[4]));
        tracep->fullBit(oldp+72,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[5]));
        tracep->fullBit(oldp+73,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[6]));
        tracep->fullBit(oldp+74,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[7]));
        tracep->fullBit(oldp+75,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[8]));
        tracep->fullBit(oldp+76,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[9]));
        tracep->fullBit(oldp+77,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[10]));
        tracep->fullBit(oldp+78,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[11]));
        tracep->fullBit(oldp+79,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[12]));
        tracep->fullBit(oldp+80,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[13]));
        tracep->fullBit(oldp+81,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[14]));
        tracep->fullBit(oldp+82,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[15]));
        tracep->fullBit(oldp+83,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[16]));
        tracep->fullBit(oldp+84,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[17]));
        tracep->fullBit(oldp+85,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[18]));
        tracep->fullBit(oldp+86,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[19]));
        tracep->fullBit(oldp+87,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[20]));
        tracep->fullBit(oldp+88,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[21]));
        tracep->fullBit(oldp+89,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[22]));
        tracep->fullBit(oldp+90,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[23]));
        tracep->fullBit(oldp+91,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[24]));
        tracep->fullBit(oldp+92,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[25]));
        tracep->fullBit(oldp+93,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[26]));
        tracep->fullBit(oldp+94,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[27]));
        tracep->fullBit(oldp+95,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[28]));
        tracep->fullBit(oldp+96,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[29]));
        tracep->fullBit(oldp+97,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[30]));
        tracep->fullBit(oldp+98,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[31]));
        tracep->fullBit(oldp+99,(vlSelf->I_sys_clk));
        tracep->fullBit(oldp+100,(vlSelf->I_rst));
        tracep->fullIData(oldp+101,(vlSelf->I_inst),32);
        tracep->fullQData(oldp+102,(vlSelf->O_pc),64);
        tracep->fullQData(oldp+104,((QData)((IData)(
                                                    (vlSelf->I_inst 
                                                     >> 0x14U)))),64);
        tracep->fullQData(oldp+106,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr
                                    [(0x1fU & (vlSelf->I_inst 
                                               >> 0xfU))]),64);
        tracep->fullCData(oldp+108,((0x1fU & (vlSelf->I_inst 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+109,((0x1fU & (vlSelf->I_inst 
                                              >> 7U))),5);
        tracep->fullCData(oldp+110,((7U & (vlSelf->I_inst 
                                           >> 0xcU))),3);
        tracep->fullIData(oldp+111,((vlSelf->I_inst 
                                     >> 0x14U)),32);
        tracep->fullQData(oldp+112,(0x80000000ULL),64);
    }
}

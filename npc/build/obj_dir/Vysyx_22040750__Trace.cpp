// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_22040750__Syms.h"


void Vysyx_22040750___024root__traceChgSub0(Vysyx_22040750___024root* vlSelf, VerilatedVcd* tracep);

void Vysyx_22040750___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vysyx_22040750___024root* const __restrict vlSelf = static_cast<Vysyx_22040750___024root*>(voidSelf);
    Vysyx_22040750__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vysyx_22040750___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

extern const VlWide<8>/*255:0*/ Vysyx_22040750__ConstPool__CONST_9e67c271_0;
extern const VlWide<8>/*255:0*/ Vysyx_22040750__ConstPool__CONST_5b979007_0;

void Vysyx_22040750___024root__traceChgSub0(Vysyx_22040750___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040750__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<4>/*127:0*/ __Vtemp521;
    VlWide<4>/*127:0*/ __Vtemp522;
    VlWide<4>/*127:0*/ __Vtemp525;
    VlWide<4>/*127:0*/ __Vtemp526;
    VlWide<4>/*127:0*/ __Vtemp527;
    VlWide<4>/*127:0*/ __Vtemp528;
    VlWide<4>/*127:0*/ __Vtemp529;
    VlWide<4>/*127:0*/ __Vtemp530;
    VlWide<3>/*95:0*/ __Vtemp532;
    VlWide<3>/*95:0*/ __Vtemp533;
    VlWide<3>/*95:0*/ __Vtemp534;
    VlWide<3>/*95:0*/ __Vtemp535;
    VlWide<3>/*95:0*/ __Vtemp536;
    VlWide<3>/*95:0*/ __Vtemp551;
    VlWide<3>/*95:0*/ __Vtemp552;
    VlWide<3>/*95:0*/ __Vtemp553;
    VlWide<3>/*95:0*/ __Vtemp554;
    VlWide<3>/*95:0*/ __Vtemp555;
    VlWide<4>/*127:0*/ __Vtemp557;
    VlWide<5>/*159:0*/ __Vtemp583;
    VlWide<5>/*159:0*/ __Vtemp585;
    VlWide<8>/*255:0*/ __Vtemp586;
    VlWide<8>/*255:0*/ __Vtemp587;
    VlWide<8>/*255:0*/ __Vtemp589;
    VlWide<8>/*255:0*/ __Vtemp590;
    VlWide<8>/*255:0*/ __Vtemp599;
    VlWide<8>/*255:0*/ __Vtemp606;
    VlWide<8>/*255:0*/ __Vtemp613;
    VlWide<8>/*255:0*/ __Vtemp618;
    VlWide<8>/*255:0*/ __Vtemp619;
    VlWide<8>/*255:0*/ __Vtemp620;
    VlWide<8>/*255:0*/ __Vtemp627;
    VlWide<4>/*127:0*/ __Vtemp631;
    VlWide<4>/*127:0*/ __Vtemp635;
    VlWide<4>/*127:0*/ __Vtemp637;
    VlWide<4>/*127:0*/ __Vtemp639;
    VlWide<8>/*255:0*/ __Vtemp646;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,((1U & (IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen))));
            if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                  ? 1U : 0U)) {
                __Vtemp521[0U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[0U];
                __Vtemp521[1U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[1U];
                __Vtemp521[2U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[2U];
                __Vtemp521[3U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[3U];
            } else {
                __Vtemp521[0U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[0U];
                __Vtemp521[1U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[1U];
                __Vtemp521[2U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[2U];
                __Vtemp521[3U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[3U];
            }
            tracep->chgWData(oldp+1,(__Vtemp521),128);
            __Vtemp522[0U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[0U];
            __Vtemp522[1U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[1U];
            __Vtemp522[2U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[2U];
            __Vtemp522[3U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[3U];
            tracep->chgWData(oldp+5,(__Vtemp522),128);
            tracep->chgWData(oldp+9,(vlSelf->ysyx_22040750__DOT__io_sram0_rdata),128);
            tracep->chgBit(oldp+13,((1U & ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen) 
                                           >> 1U))));
            if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                  ? 1U : 0U)) {
                __Vtemp525[0U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[4U];
                __Vtemp525[1U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[5U];
                __Vtemp525[2U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[6U];
                __Vtemp525[3U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[7U];
            } else {
                __Vtemp525[0U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[4U];
                __Vtemp525[1U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[5U];
                __Vtemp525[2U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[6U];
                __Vtemp525[3U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[7U];
            }
            tracep->chgWData(oldp+14,(__Vtemp525),128);
            __Vtemp526[0U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[4U];
            __Vtemp526[1U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[5U];
            __Vtemp526[2U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[6U];
            __Vtemp526[3U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[7U];
            tracep->chgWData(oldp+18,(__Vtemp526),128);
            tracep->chgWData(oldp+22,(vlSelf->ysyx_22040750__DOT__io_sram1_rdata),128);
            tracep->chgBit(oldp+26,((1U & ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen) 
                                           >> 2U))));
            tracep->chgWData(oldp+27,(vlSelf->ysyx_22040750__DOT__io_sram2_rdata),128);
            tracep->chgBit(oldp+31,((1U & ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen) 
                                           >> 3U))));
            tracep->chgWData(oldp+32,(vlSelf->ysyx_22040750__DOT__io_sram3_rdata),128);
            tracep->chgCData(oldp+36,(vlSelf->ysyx_22040750__DOT__daddr),6);
            tracep->chgBit(oldp+37,((1U & ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen) 
                                           >> 4U))));
            __Vtemp527[0U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[0U];
            __Vtemp527[1U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[1U];
            __Vtemp527[2U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[2U];
            __Vtemp527[3U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[3U];
            tracep->chgWData(oldp+38,(__Vtemp527),128);
            __Vtemp528[0U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[0U];
            __Vtemp528[1U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[1U];
            __Vtemp528[2U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[2U];
            __Vtemp528[3U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[3U];
            tracep->chgWData(oldp+42,(__Vtemp528),128);
            tracep->chgWData(oldp+46,(vlSelf->ysyx_22040750__DOT__io_sram4_rdata),128);
            tracep->chgBit(oldp+50,((1U & ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen) 
                                           >> 5U))));
            __Vtemp529[0U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[4U];
            __Vtemp529[1U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[5U];
            __Vtemp529[2U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[6U];
            __Vtemp529[3U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[7U];
            tracep->chgWData(oldp+51,(__Vtemp529),128);
            __Vtemp530[0U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[4U];
            __Vtemp530[1U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[5U];
            __Vtemp530[2U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[6U];
            __Vtemp530[3U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[7U];
            tracep->chgWData(oldp+55,(__Vtemp530),128);
            tracep->chgWData(oldp+59,(vlSelf->ysyx_22040750__DOT__io_sram5_rdata),128);
            tracep->chgBit(oldp+63,((1U & ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen) 
                                           >> 6U))));
            tracep->chgWData(oldp+64,(vlSelf->ysyx_22040750__DOT__io_sram6_rdata),128);
            tracep->chgBit(oldp+68,((1U & ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen) 
                                           >> 7U))));
            tracep->chgWData(oldp+69,(vlSelf->ysyx_22040750__DOT__io_sram7_rdata),128);
            tracep->chgIData(oldp+73,(vlSelf->ysyx_22040750__DOT__cpu_inst),32);
            tracep->chgIData(oldp+74,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc),32);
            tracep->chgBit(oldp+75,(vlSelf->ysyx_22040750__DOT__cpu_inst_valid));
            tracep->chgBit(oldp+76,(vlSelf->ysyx_22040750__DOT__cpu_pc_ready));
            tracep->chgIData(oldp+77,((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out)),32);
            tracep->chgBit(oldp+78,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_reg_e__DOT__mem_rd_en));
            tracep->chgBit(oldp+79,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_reg_e__DOT__mem_wr_en));
            tracep->chgQData(oldp+80,(vlSelf->ysyx_22040750__DOT__mem_wdata),64);
            tracep->chgBit(oldp+82,((0x40U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))));
            tracep->chgBit(oldp+83,(vlSelf->ysyx_22040750__DOT__cpu_mem_ready));
            tracep->chgCData(oldp+84,((0xffU & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_wstrb) 
                                                << 
                                                (7U 
                                                 & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out))))),8);
            tracep->chgIData(oldp+85,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__current_pc),32);
            tracep->chgIData(oldp+86,(((IData)(4U) 
                                       + vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__current_pc)),32);
            tracep->chgIData(oldp+87,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__current_inst),32);
            tracep->chgQData(oldp+88,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__imm),64);
            tracep->chgQData(oldp+90,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__wr_data),64);
            tracep->chgQData(oldp+92,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr
                                      [(0x1fU & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                 >> 0xfU))]),64);
            tracep->chgQData(oldp+94,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr
                                      [(0x1fU & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                 >> 0x14U))]),64);
            tracep->chgQData(oldp+96,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op1),64);
            tracep->chgQData(oldp+98,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op2),64);
            tracep->chgQData(oldp+100,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_out),64);
            tracep->chgQData(oldp+102,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__mem_in),64);
            tracep->chgQData(oldp+104,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_rs2),64);
            tracep->chgQData(oldp+106,(((2U == (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_intr) 
                                                 << 1U) 
                                                | (0x30200073U 
                                                   == vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))
                                         ? vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mtvec
                                         : ((1U == 
                                             (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_intr) 
                                               << 1U) 
                                              | (0x30200073U 
                                                 == vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))
                                             ? vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mepc
                                             : ((0U 
                                                 == 
                                                 (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_intr) 
                                                   << 1U) 
                                                  | (0x30200073U 
                                                     == vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))
                                                 ? 
                                                ((0x341U 
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
            tracep->chgQData(oldp+108,((((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__csr_alu_e__DOT__op 
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
            tracep->chgCData(oldp+110,((0x1fU & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                 >> 0xfU))),5);
            tracep->chgCData(oldp+111,((0x1fU & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                 >> 0x14U))),5);
            tracep->chgCData(oldp+112,((0x1fU & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                 >> 7U))),5);
            tracep->chgCData(oldp+113,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc_sel),5);
            tracep->chgCData(oldp+114,(((((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__reg_wen) 
                                          & (3U == 
                                             (0x7fU 
                                              & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))) 
                                         << 1U) | ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__reg_wen) 
                                                   & (3U 
                                                      != 
                                                      (0x7fU 
                                                       & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))))),3);
            tracep->chgCData(oldp+115,((((1U & (- (IData)(
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
            tracep->chgCData(oldp+116,((((1U & (- (IData)((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__typeR)))) 
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
            tracep->chgSData(oldp+117,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op_sel),15);
            tracep->chgCData(oldp+118,((0xffU & (((
                                                   (- (IData)((IData)(
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
            tracep->chgSData(oldp+119,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__mem_rstrb),9);
            tracep->chgBit(oldp+120,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__reg_wen));
            tracep->chgBit(oldp+121,((0x23U == (0x7fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))));
            tracep->chgBit(oldp+122,(((0x1bU == (0x7fU 
                                                 & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                      | (0x3bU == (0x7fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
            tracep->chgCData(oldp+123,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op_sext),2);
            tracep->chgSData(oldp+124,((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                        >> 0x14U)),12);
            tracep->chgBit(oldp+125,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_wen));
            tracep->chgBit(oldp+126,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_intr));
            tracep->chgBit(oldp+127,((0x30200073U == vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)));
            tracep->chgCData(oldp+128,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_op_sel),7);
            tracep->chgQData(oldp+129,(((0x73U == vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)
                                         ? 0xbULL : 
                                        ((0x100073U 
                                          == vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)
                                          ? 4ULL : 0ULL))),64);
            tracep->chgBit(oldp+131,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_valid));
            tracep->chgIData(oldp+132,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_pc),32);
            tracep->chgIData(oldp+133,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst),32);
            tracep->chgBit(oldp+134,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_valid));
            tracep->chgBit(oldp+135,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_stall));
            tracep->chgBit(oldp+136,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_bubble));
            tracep->chgBit(oldp+137,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_reg_e__DOT__input_valid));
            tracep->chgQData(oldp+138,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_imm),64);
            tracep->chgQData(oldp+140,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_rs1),64);
            tracep->chgQData(oldp+142,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_rs2),64);
            tracep->chgQData(oldp+144,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr),64);
            tracep->chgIData(oldp+146,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_pc),32);
            tracep->chgCData(oldp+147,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_rd_addr),5);
            tracep->chgCData(oldp+148,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_wstrb),8);
            tracep->chgSData(oldp+149,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_rstrb),9);
            tracep->chgCData(oldp+150,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_op2_sel),3);
            tracep->chgCData(oldp+151,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_op1_sel),3);
            tracep->chgCData(oldp+152,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_regin_sel),3);
            tracep->chgCData(oldp+153,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_sext),2);
            tracep->chgSData(oldp+154,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel),15);
            tracep->chgBit(oldp+155,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_reg_wen));
            tracep->chgBit(oldp+156,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_mem_wen));
            tracep->chgBit(oldp+157,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_word_op_mask));
            tracep->chgBit(oldp+158,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_valid));
            tracep->chgCData(oldp+159,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_stall),2);
            tracep->chgIData(oldp+160,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_inst),32);
            tracep->chgBit(oldp+161,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_bubble));
            tracep->chgBit(oldp+162,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_reg_e__DOT__input_valid));
            tracep->chgBit(oldp+163,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_multicycle));
            tracep->chgBit(oldp+164,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_out_valid));
            tracep->chgSData(oldp+165,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_addr),12);
            tracep->chgBit(oldp+166,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_wen));
            tracep->chgBit(oldp+167,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_intr));
            tracep->chgBit(oldp+168,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_mret));
            tracep->chgCData(oldp+169,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel),7);
            tracep->chgCData(oldp+170,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_uimm),5);
            tracep->chgQData(oldp+171,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_intr_no),64);
            tracep->chgSData(oldp+173,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_rstrb),9);
            tracep->chgCData(oldp+174,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_wstrb),8);
            tracep->chgQData(oldp+175,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out),64);
            tracep->chgQData(oldp+177,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr),64);
            tracep->chgBit(oldp+179,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_mem_wen));
            tracep->chgIData(oldp+180,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_pc),32);
            tracep->chgBit(oldp+181,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_reg_wen));
            tracep->chgCData(oldp+182,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_rd_addr),5);
            tracep->chgCData(oldp+183,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_regin_sel),3);
            tracep->chgCData(oldp+184,((7U & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out))),3);
            tracep->chgCData(oldp+185,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_stall),2);
            tracep->chgIData(oldp+186,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_inst),32);
            tracep->chgBit(oldp+187,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_bubble));
            tracep->chgBit(oldp+188,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_reg_e__DOT__input_valid));
            tracep->chgSData(oldp+189,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr_addr),12);
            tracep->chgBit(oldp+190,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr_wen));
            tracep->chgBit(oldp+191,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr_intr));
            tracep->chgBit(oldp+192,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr_mret));
            tracep->chgQData(oldp+193,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr_intr_no),64);
            tracep->chgIData(oldp+195,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_pc),32);
            tracep->chgBit(oldp+196,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_reg_e__DOT__input_valid));
            tracep->chgQData(oldp+197,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_mem_data),64);
            tracep->chgSData(oldp+199,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_mem_rstrb),9);
            tracep->chgQData(oldp+200,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_alu_out),64);
            tracep->chgQData(oldp+202,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr),64);
            tracep->chgBit(oldp+204,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_reg_wen));
            tracep->chgCData(oldp+205,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_rd_addr),5);
            tracep->chgCData(oldp+206,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_regin_sel),3);
            tracep->chgCData(oldp+207,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_shamt),3);
            tracep->chgBit(oldp+208,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_allowin));
            tracep->chgIData(oldp+209,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_inst),32);
            tracep->chgBit(oldp+210,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_bubble));
            tracep->chgCData(oldp+211,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_stall),2);
            tracep->chgSData(oldp+212,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr_addr),12);
            tracep->chgBit(oldp+213,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr_wen));
            tracep->chgBit(oldp+214,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr_intr));
            tracep->chgBit(oldp+215,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr_mret));
            tracep->chgQData(oldp+216,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr_intr_no),64);
            tracep->chgCData(oldp+218,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__stall_en),2);
            tracep->chgQData(oldp+219,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__rs1_forward_data),64);
            tracep->chgQData(oldp+221,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__rs2_forward_data),64);
            tracep->chgQData(oldp+223,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_forward_data),64);
            tracep->chgBit(oldp+225,((1U & (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_regin_sel) 
                                             >> 1U) 
                                            | (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_mem_wen)))));
            tracep->chgBit(oldp+226,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_mem_op));
            tracep->chgIData(oldp+227,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_mem_addr),32);
            tracep->chgIData(oldp+228,((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__imm)),32);
            tracep->chgIData(oldp+229,(((8U & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc_sel))
                                         ? (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__rs1_forward_data)
                                         : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_pc)),32);
            tracep->chgIData(oldp+230,(((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__imm) 
                                        + ((8U & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc_sel))
                                            ? (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__rs1_forward_data)
                                            : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_pc))),32);
            tracep->chgIData(oldp+231,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__npc_e__DOT__dnpc),32);
            tracep->chgIData(oldp+232,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__npc_e__DOT__dnpc_reg),32);
            tracep->chgBit(oldp+233,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__npc_e__DOT__dnpc_reg_valid));
            tracep->chgBit(oldp+234,((1U & (~ ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc_sel) 
                                               | ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc_sel) 
                                                  >> 4U))))));
            tracep->chgBit(oldp+235,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc_sel) 
                                            >> 4U))));
            tracep->chgWData(oldp+236,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__npc_e__DOT____Vcellinp__nextpc_64bit_3sel__I_sel_data),96);
            tracep->chgCData(oldp+239,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__npc_e__DOT____Vcellinp__nextpc_64bit_3sel__I_sel),3);
            tracep->chgIData(oldp+240,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__npc_e__DOT__nextpc_64bit_3sel__DOT__sel_data[0]),32);
            tracep->chgIData(oldp+241,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__npc_e__DOT__nextpc_64bit_3sel__DOT__sel_data[1]),32);
            tracep->chgIData(oldp+242,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__npc_e__DOT__nextpc_64bit_3sel__DOT__sel_data[2]),32);
            tracep->chgBit(oldp+243,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__pc_e__DOT__IF_ready_go));
            tracep->chgBit(oldp+244,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__pc_e__DOT__IF_valid));
            tracep->chgBit(oldp+245,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__pc_e__DOT__IF_en));
            tracep->chgIData(oldp+246,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__pc_e__DOT__inst_cache),32);
            tracep->chgBit(oldp+247,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__pc_e__DOT__cache_valid));
            tracep->chgBit(oldp+248,((1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc_sel)))));
            tracep->chgBit(oldp+249,((1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_stall)))));
            tracep->chgBit(oldp+250,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_regin_sel) 
                                            >> 1U))));
            tracep->chgBit(oldp+251,((0U != (0xfU & 
                                             ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                              >> 0xaU)))));
            tracep->chgBit(oldp+252,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_regin_sel) 
                                            >> 1U))));
            tracep->chgCData(oldp+253,(((0xfffffffeU 
                                         & ((((0x1fU 
                                               & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0xfU)) 
                                              == (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_rd_addr)) 
                                             << 1U) 
                                            & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__stall_en))) 
                                        | (((0x1fU 
                                             & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                >> 0x14U)) 
                                            == (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_rd_addr)) 
                                           & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__stall_en)))),2);
            tracep->chgCData(oldp+254,(((0xfffffffeU 
                                         & ((((0x1fU 
                                               & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0xfU)) 
                                              == (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_rd_addr)) 
                                             << 1U) 
                                            & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__stall_en))) 
                                        | (((0x1fU 
                                             & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                >> 0x14U)) 
                                            == (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_rd_addr)) 
                                           & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__stall_en)))),2);
            tracep->chgCData(oldp+255,(((0xfffffffeU 
                                         & ((((0x1fU 
                                               & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0xfU)) 
                                              == (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_rd_addr)) 
                                             << 1U) 
                                            & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__stall_en))) 
                                        | (((0x1fU 
                                             & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                >> 0x14U)) 
                                            == (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_rd_addr)) 
                                           & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__stall_en)))),2);
            tracep->chgBit(oldp+256,((((0U != (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_stall)) 
                                       & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_regin_sel) 
                                          >> 1U)) | 
                                      ((0U != (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_stall)) 
                                       & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_regin_sel) 
                                          >> 1U)))));
            tracep->chgBit(oldp+257,(((0U != (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_stall)) 
                                      & (0U != (0xfU 
                                                & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                                   >> 0xaU))))));
            tracep->chgBit(oldp+258,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT____Vcellinp__forward_unit_e__I_WB_reg_wen));
            tracep->chgBit(oldp+259,((((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_wen) 
                                       & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_wen)) 
                                      & ((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                          >> 0x14U) 
                                         == (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_addr)))));
            tracep->chgBit(oldp+260,((((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_wen) 
                                       & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr_wen)) 
                                      & ((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                          >> 0x14U) 
                                         == (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr_addr)))));
            tracep->chgBit(oldp+261,((((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_wen) 
                                       & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr_wen)) 
                                      & ((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                          >> 0x14U) 
                                         == (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr_addr)))));
            tracep->chgCData(oldp+262,((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                        >> 0x19U)),7);
            tracep->chgCData(oldp+263,((0x7fU & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)),7);
            tracep->chgCData(oldp+264,((7U & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                              >> 0xcU))),3);
            tracep->chgSData(oldp+265,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__immS),12);
            tracep->chgSData(oldp+266,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__immB),13);
            tracep->chgIData(oldp+267,((0xfffff000U 
                                        & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)),32);
            tracep->chgIData(oldp+268,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__immJ),21);
            tracep->chgBit(oldp+269,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__typeI));
            tracep->chgBit(oldp+270,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__typeR));
            tracep->chgBit(oldp+271,((0x63U == (0x7fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))));
            tracep->chgBit(oldp+272,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__typeU));
            tracep->chgBit(oldp+273,((0x6fU == (0x7fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))));
            tracep->chgBit(oldp+274,((0x73U == (0x7fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))));
            tracep->chgBit(oldp+275,((0x37U == (0x7fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))));
            tracep->chgBit(oldp+276,((0x17U == (0x7fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))));
            tracep->chgBit(oldp+277,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__JALR));
            tracep->chgBit(oldp+278,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__LD));
            tracep->chgBit(oldp+279,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__LW));
            tracep->chgBit(oldp+280,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__LWU));
            tracep->chgBit(oldp+281,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__LH));
            tracep->chgBit(oldp+282,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__LHU));
            tracep->chgBit(oldp+283,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__LB));
            tracep->chgBit(oldp+284,((IData)((0x4003U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+285,((IData)((0x13U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+286,((IData)((0x2013U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+287,((IData)((0x3013U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+288,((IData)((0x4013U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+289,((IData)((0x6013U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+290,((IData)((0x7013U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+291,((IData)(((0x1013U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x1aU))))));
            tracep->chgBit(oldp+292,((IData)(((0x5013U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x1aU))))));
            tracep->chgBit(oldp+293,((IData)(((0x5013U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0x10U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x1aU))))));
            tracep->chgBit(oldp+294,((IData)((0x1bU 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+295,((IData)(((0x101bU 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+296,((IData)(((0x501bU 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+297,((IData)(((0x501bU 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0x20U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+298,((IData)(((0x33U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+299,((IData)(((0x33U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0x20U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+300,((IData)(((0x1033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+301,((IData)(((0x2033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+302,((IData)(((0x3033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+303,((IData)(((0x4033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+304,((IData)(((0x5033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+305,((IData)(((0x5033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0x20U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+306,((IData)(((0x6033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+307,((IData)(((0x7033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+308,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__MUL));
            tracep->chgBit(oldp+309,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__MULH));
            tracep->chgBit(oldp+310,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__MULHSU));
            tracep->chgBit(oldp+311,((IData)(((0x3033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (1U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+312,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__DIV));
            tracep->chgBit(oldp+313,((IData)(((0x5033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (1U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+314,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__REM));
            tracep->chgBit(oldp+315,((IData)(((0x7033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (1U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+316,((IData)(((0x3bU 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+317,((IData)(((0x3bU 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0x20U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+318,((IData)(((0x103bU 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+319,((IData)(((0x503bU 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+320,((IData)(((0x503bU 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0x20U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+321,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__MULW));
            tracep->chgBit(oldp+322,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__DIVW));
            tracep->chgBit(oldp+323,((IData)(((0x503bU 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (1U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+324,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__REMW));
            tracep->chgBit(oldp+325,((IData)(((0x703bU 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (1U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+326,((IData)((0x3023U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+327,((IData)((0x2023U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+328,((IData)((0x1023U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+329,((IData)((0x23U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+330,((IData)((0x63U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+331,((IData)((0x1063U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+332,((IData)((0x4063U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+333,((IData)((0x5063U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+334,((IData)((0x6063U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+335,((IData)((0x7063U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+336,((0x73U == vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)));
            tracep->chgBit(oldp+337,((0x100073U == vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)));
            tracep->chgBit(oldp+338,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__CSRRW));
            tracep->chgBit(oldp+339,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__CSRRS));
            tracep->chgBit(oldp+340,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__CSRRC));
            tracep->chgBit(oldp+341,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__CSRRWI));
            tracep->chgBit(oldp+342,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__CSRRSI));
            tracep->chgBit(oldp+343,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__CSRRCI));
            tracep->chgBit(oldp+344,((((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__CSRRW) 
                                       | (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__CSRRS)) 
                                      | (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__CSRRC))));
            tracep->chgBit(oldp+345,((3U == (0x7fU 
                                             & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))));
            tracep->chgBit(oldp+346,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__typeB_jr));
            tracep->chgBit(oldp+347,((((0x73U == vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst) 
                                       | (0x100073U 
                                          == vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                      | (0x30200073U 
                                         == vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))));
            tracep->chgBit(oldp+348,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__eq));
            tracep->chgBit(oldp+349,((1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__eq)))));
            tracep->chgBit(oldp+350,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__lt));
            tracep->chgBit(oldp+351,((1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__lt)))));
            tracep->chgBit(oldp+352,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__ltu));
            tracep->chgBit(oldp+353,((1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__ltu)))));
            tracep->chgBit(oldp+354,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__add_flag));
            tracep->chgBit(oldp+355,(((IData)(((0x33U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                               & (0x20U 
                                                  == 
                                                  (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                   >> 0x19U)))) 
                                      | (IData)(((0x3bU 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                                 & (0x20U 
                                                    == 
                                                    (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                     >> 0x19U)))))));
            tracep->chgBit(oldp+356,(((IData)((0x2013U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))) 
                                      | (IData)(((0x2033U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                                 & (0U 
                                                    == 
                                                    (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                     >> 0x19U)))))));
            tracep->chgBit(oldp+357,(((IData)((0x3013U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))) 
                                      | (IData)(((0x3033U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                                 & (0U 
                                                    == 
                                                    (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                     >> 0x19U)))))));
            tracep->chgBit(oldp+358,(((IData)((0x4013U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))) 
                                      | (IData)(((0x4033U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                                 & (0U 
                                                    == 
                                                    (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                     >> 0x19U)))))));
            tracep->chgBit(oldp+359,(((IData)((0x6013U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))) 
                                      | (IData)(((0x6033U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                                 & (0U 
                                                    == 
                                                    (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                     >> 0x19U)))))));
            tracep->chgBit(oldp+360,(((IData)((0x7013U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))) 
                                      | (IData)(((0x7033U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                                 & (0U 
                                                    == 
                                                    (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                     >> 0x19U)))))));
            tracep->chgBit(oldp+361,(((((IData)(((0x1013U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                                 & (0U 
                                                    == 
                                                    (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                     >> 0x1aU)))) 
                                        | (IData)((
                                                   (0x1033U 
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
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                                 & (0U 
                                                    == 
                                                    (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                     >> 0x19U)))))));
            tracep->chgBit(oldp+362,(((((IData)(((0x5013U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                                 & (0U 
                                                    == 
                                                    (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                     >> 0x1aU)))) 
                                        | (IData)((
                                                   (0x5033U 
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
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                                 & (0U 
                                                    == 
                                                    (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                     >> 0x19U)))))));
            tracep->chgBit(oldp+363,(((((IData)(((0x5013U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                                 & (0x10U 
                                                    == 
                                                    (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                     >> 0x1aU)))) 
                                        | (IData)((
                                                   (0x5033U 
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
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                                 & (0x20U 
                                                    == 
                                                    (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                     >> 0x19U)))))));
            tracep->chgBit(oldp+364,(((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__MUL) 
                                      | (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__MULW))));
            tracep->chgBit(oldp+365,((((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__MULH) 
                                       | (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__MULHSU)) 
                                      | (IData)(((0x3033U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                                 & (1U 
                                                    == 
                                                    (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                     >> 0x19U)))))));
            tracep->chgBit(oldp+366,(((((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__DIV) 
                                        | (IData)((
                                                   (0x5033U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                                   & (1U 
                                                      == 
                                                      (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                       >> 0x19U))))) 
                                       | (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__DIVW)) 
                                      | (IData)(((0x503bU 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                                 & (1U 
                                                    == 
                                                    (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                     >> 0x19U)))))));
            tracep->chgBit(oldp+367,(((((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__REM) 
                                        | (IData)((
                                                   (0x7033U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                                   & (1U 
                                                      == 
                                                      (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                       >> 0x19U))))) 
                                       | (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__REMW)) 
                                      | (IData)(((0x703bU 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                                 & (1U 
                                                    == 
                                                    (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                     >> 0x19U)))))));
            tracep->chgBit(oldp+368,(((((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__typeR) 
                                        | ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__typeI) 
                                           & (~ (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__JALR)))) 
                                       | (0x23U == 
                                          (0x7fU & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))) 
                                      | (0x73U == (0x7fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+369,(((((0x63U == (0x7fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                        | (0x6fU == 
                                           (0x7fU & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))) 
                                       | (0x17U == 
                                          (0x7fU & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))) 
                                      | (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__JALR))));
            tracep->chgBit(oldp+370,((((((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__typeI) 
                                         & (~ (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__JALR))) 
                                        | (0x23U == 
                                           (0x7fU & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))) 
                                       | (0x63U == 
                                          (0x7fU & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))) 
                                      | (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__typeU))));
            tracep->chgBit(oldp+371,(((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__JALR) 
                                      | (0x6fU == (0x7fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
            tracep->chgWData(oldp+372,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT____Vcellinp__alu_op1_64bit_3sel__I_sel_data),192);
            tracep->chgQData(oldp+378,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op1_64bit_3sel__DOT__sel_data[0]),64);
            tracep->chgQData(oldp+380,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op1_64bit_3sel__DOT__sel_data[1]),64);
            tracep->chgQData(oldp+382,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op1_64bit_3sel__DOT__sel_data[2]),64);
            tracep->chgWData(oldp+384,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT____Vcellinp__alu_op2_64bit_3sel__I_sel_data),192);
            tracep->chgQData(oldp+390,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op2_64bit_3sel__DOT__sel_data[0]),64);
            tracep->chgQData(oldp+392,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op2_64bit_3sel__DOT__sel_data[1]),64);
            tracep->chgQData(oldp+394,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op2_64bit_3sel__DOT__sel_data[2]),64);
            tracep->chgBit(oldp+396,((1U & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel))));
            tracep->chgBit(oldp+397,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                            >> 1U))));
            tracep->chgBit(oldp+398,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                            >> 2U))));
            tracep->chgBit(oldp+399,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                            >> 3U))));
            tracep->chgBit(oldp+400,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                            >> 4U))));
            tracep->chgBit(oldp+401,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                            >> 5U))));
            tracep->chgBit(oldp+402,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                            >> 6U))));
            tracep->chgBit(oldp+403,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                            >> 7U))));
            tracep->chgBit(oldp+404,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                            >> 8U))));
            tracep->chgBit(oldp+405,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                            >> 9U))));
            tracep->chgBit(oldp+406,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+407,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+408,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+409,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+410,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                            >> 0xeU))));
            tracep->chgQData(oldp+411,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__result),64);
            tracep->chgQData(oldp+413,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__slt_result),64);
            VL_EXTEND_WQ(65,64, __Vtemp532, vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op1);
            VL_EXTEND_WQ(65,64, __Vtemp533, vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__adder2);
            VL_ADD_W(3, __Vtemp534, __Vtemp532, __Vtemp533);
            VL_EXTEND_WQ(65,64, __Vtemp535, vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__cin);
            VL_ADD_W(3, __Vtemp536, __Vtemp534, __Vtemp535);
            tracep->chgQData(oldp+415,((QData)((IData)(
                                                       (1U 
                                                        & (~ 
                                                           (1U 
                                                            & __Vtemp536[2U])))))),64);
            tracep->chgQData(oldp+417,((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op1 
                                        ^ vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op2)),64);
            tracep->chgQData(oldp+419,((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op1 
                                        | vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op2)),64);
            tracep->chgQData(oldp+421,((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op1 
                                        & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op2)),64);
            tracep->chgQData(oldp+423,(((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_word_op_mask)
                                         ? (((QData)((IData)(
                                                             (- (IData)(
                                                                        (1U 
                                                                         & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result)))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__slldw_result 
                                                               >> 0x20U))))
                                         : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__slldw_result)),64);
            tracep->chgQData(oldp+425,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result),64);
            tracep->chgQData(oldp+427,((((- (QData)((IData)(
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
            tracep->chgQData(oldp+429,((((QData)((IData)(
                                                         vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[0U])))),64);
            tracep->chgQData(oldp+431,((((QData)((IData)(
                                                         vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[2U])))),64);
            tracep->chgQData(oldp+433,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__div_result),64);
            tracep->chgQData(oldp+435,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__rem_result),64);
            tracep->chgWData(oldp+437,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__op1_sext),65);
            tracep->chgWData(oldp+440,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__op2_sext),65);
            tracep->chgBit(oldp+443,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_word_op_mask)
                                             ? (IData)(
                                                       (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op1 
                                                        >> 0x1fU))
                                             : (IData)(
                                                       (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op1 
                                                        >> 0x3fU))))));
            tracep->chgBit(oldp+444,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_word_op_mask)
                                             ? (IData)(
                                                       (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op2 
                                                        >> 0x1fU))
                                             : (IData)(
                                                       (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op2 
                                                        >> 0x3fU))))));
            tracep->chgBit(oldp+445,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__sext1));
            tracep->chgBit(oldp+446,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__sext2));
            tracep->chgBit(oldp+447,((IData)((0U != 
                                              (0xc00U 
                                               & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel))))));
            tracep->chgBit(oldp+448,((IData)((0U != 
                                              (0x3000U 
                                               & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel))))));
            tracep->chgBit(oldp+449,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_valid));
            tracep->chgBit(oldp+450,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__div_valid));
            tracep->chgBit(oldp+451,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_out_valid));
            tracep->chgBit(oldp+452,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__div_out_valid));
            tracep->chgQData(oldp+453,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mulh_reg),64);
            tracep->chgQData(oldp+455,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_reg),64);
            tracep->chgQData(oldp+457,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__div_reg),64);
            tracep->chgQData(oldp+459,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__rem_reg),64);
            tracep->chgBit(oldp+461,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_reg_valid));
            tracep->chgBit(oldp+462,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__div_reg_valid));
            tracep->chgQData(oldp+463,((((QData)((IData)(
                                                         ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_reg_valid)
                                                           ? (IData)(
                                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mulh_reg 
                                                                      >> 0x20U))
                                                           : 
                                                          vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[3U]))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_reg_valid)
                                                            ? (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mulh_reg)
                                                            : 
                                                           vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[2U]))))),64);
            tracep->chgQData(oldp+465,((((QData)((IData)(
                                                         ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_reg_valid)
                                                           ? (IData)(
                                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_reg 
                                                                      >> 0x20U))
                                                           : 
                                                          vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[1U]))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_reg_valid)
                                                            ? (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_reg)
                                                            : 
                                                           vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[0U]))))),64);
            tracep->chgQData(oldp+467,((((QData)((IData)(
                                                         ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__div_reg_valid)
                                                           ? (IData)(
                                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__div_reg 
                                                                      >> 0x20U))
                                                           : (IData)(
                                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__div_result 
                                                                      >> 0x20U))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__div_reg_valid)
                                                            ? (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__div_reg)
                                                            : (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__div_result)))))),64);
            tracep->chgQData(oldp+469,((((QData)((IData)(
                                                         ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__div_reg_valid)
                                                           ? (IData)(
                                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__rem_reg 
                                                                      >> 0x20U))
                                                           : (IData)(
                                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__rem_result 
                                                                      >> 0x20U))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__div_reg_valid)
                                                            ? (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__rem_reg)
                                                            : (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__rem_result)))))),64);
            tracep->chgQData(oldp+471,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__adder2),64);
            tracep->chgQData(oldp+473,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__cin),64);
            VL_EXTEND_WQ(65,64, __Vtemp551, vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op1);
            VL_EXTEND_WQ(65,64, __Vtemp552, vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__adder2);
            VL_ADD_W(3, __Vtemp553, __Vtemp551, __Vtemp552);
            VL_EXTEND_WQ(65,64, __Vtemp554, vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__cin);
            VL_ADD_W(3, __Vtemp555, __Vtemp553, __Vtemp554);
            tracep->chgBit(oldp+475,((1U & __Vtemp555[2U])));
            tracep->chgQData(oldp+476,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__reverse_op1),64);
            tracep->chgQData(oldp+478,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_op),64);
            tracep->chgCData(oldp+480,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__shamt),6);
            tracep->chgQData(oldp+481,(((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_word_op_mask)
                                         ? (~ (0xffffffffULL 
                                               >> (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__shamt)))
                                         : (~ (0xffffffffffffffffULL 
                                               >> (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__shamt))))),64);
            tracep->chgIData(oldp+483,(((0x80U & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel))
                                         ? (IData)(
                                                   (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_op 
                                                    >> 0x20U))
                                         : (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_op))),32);
            tracep->chgQData(oldp+484,(((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_word_op_mask)
                                         ? (QData)((IData)(
                                                           ((0x80U 
                                                             & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel))
                                                             ? (IData)(
                                                                       (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_op 
                                                                        >> 0x20U))
                                                             : (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_op))))
                                         : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_op)),64);
            tracep->chgQData(oldp+486,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result)))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__slldw_result 
                                                           >> 0x20U))))),64);
            tracep->chgQData(oldp+488,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__slldw_result),64);
            tracep->chgQData(oldp+490,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__dword_result),64);
            tracep->chgQData(oldp+492,((((QData)((IData)(
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
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__dword_result)))),64);
            tracep->chgBit(oldp+494,(((1U & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x3000U 
                                                       & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel)))) 
                                             & (~ (IData)(
                                                          (0U 
                                                           != (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_sext))))))
                                       ? 0U : (1U & (IData)(
                                                            (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__dword_result 
                                                             >> 0x1fU))))));
            tracep->chgQData(oldp+495,((((QData)((IData)(
                                                         vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__op1_sext[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__op1_sext[0U])))),64);
            tracep->chgQData(oldp+497,((((QData)((IData)(
                                                         vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__op2_sext[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__op2_sext[0U])))),64);
            __Vtemp557[0U] = vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[0U];
            __Vtemp557[1U] = vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[1U];
            __Vtemp557[2U] = vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[2U];
            __Vtemp557[3U] = vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[3U];
            tracep->chgWData(oldp+499,(__Vtemp557),128);
            tracep->chgBit(oldp+503,(((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__op1_sext[1U] 
                                       >> 0x1fU) & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__sext1))));
            tracep->chgBit(oldp+504,(((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__op2_sext[1U] 
                                       >> 0x1fU) & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__sext1))));
            tracep->chgWData(oldp+505,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1),67);
            tracep->chgWData(oldp+508,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2),132);
            __Vtemp583[0U] = ((((~ ((- (IData)((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_negative))) 
                                    & (~ vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[0U]))) 
                                & (~ ((- (IData)((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_double_negative))) 
                                      & (1U | ((~ vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[0U]) 
                                               << 1U))))) 
                               & (~ ((- (IData)((1U 
                                                 & ((~ 
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
                              & (~ ((- (IData)((1U 
                                                & (((~ 
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                      >> 2U)) 
                                                    & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                       >> 1U)) 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])))) 
                                    & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[0U] 
                                       << 1U))));
            __Vtemp583[1U] = ((((~ ((- (IData)((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_negative))) 
                                    & (~ vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[1U]))) 
                                & (~ ((- (IData)((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_double_negative))) 
                                      & (((~ vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[0U]) 
                                          >> 0x1fU) 
                                         | ((~ vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[1U]) 
                                            << 1U))))) 
                               & (~ ((- (IData)((1U 
                                                 & ((~ 
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
                              & (~ ((- (IData)((1U 
                                                & (((~ 
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                      >> 2U)) 
                                                    & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                       >> 1U)) 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])))) 
                                    & ((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[0U] 
                                        >> 0x1fU) | 
                                       (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[1U] 
                                        << 1U)))));
            __Vtemp583[2U] = ((((~ ((- (IData)((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_negative))) 
                                    & (~ vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[2U]))) 
                                & (~ ((- (IData)((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_double_negative))) 
                                      & (((~ vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[1U]) 
                                          >> 0x1fU) 
                                         | ((~ vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[2U]) 
                                            << 1U))))) 
                               & (~ ((- (IData)((1U 
                                                 & ((~ 
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
                              & (~ ((- (IData)((1U 
                                                & (((~ 
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                      >> 2U)) 
                                                    & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                       >> 1U)) 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])))) 
                                    & ((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[1U] 
                                        >> 0x1fU) | 
                                       (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[2U] 
                                        << 1U)))));
            __Vtemp583[3U] = ((((~ ((- (IData)((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_negative))) 
                                    & (~ vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[3U]))) 
                                & (~ ((- (IData)((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_double_negative))) 
                                      & (((~ vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[2U]) 
                                          >> 0x1fU) 
                                         | ((~ vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[3U]) 
                                            << 1U))))) 
                               & (~ ((- (IData)((1U 
                                                 & ((~ 
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
                              & (~ ((- (IData)((1U 
                                                & (((~ 
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                      >> 2U)) 
                                                    & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                       >> 1U)) 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])))) 
                                    & ((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[2U] 
                                        >> 0x1fU) | 
                                       (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[3U] 
                                        << 1U)))));
            __Vtemp583[4U] = ((((~ ((- (IData)((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_negative))) 
                                    & (~ vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[4U]))) 
                                & (~ ((- (IData)((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_double_negative))) 
                                      & (((~ vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[3U]) 
                                          >> 0x1fU) 
                                         | (0xeU & 
                                            ((~ vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[4U]) 
                                             << 1U)))))) 
                               & (~ ((- (IData)((1U 
                                                 & ((~ 
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
                              & (~ ((- (IData)((1U 
                                                & (((~ 
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                      >> 2U)) 
                                                    & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                       >> 1U)) 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])))) 
                                    & ((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[3U] 
                                        >> 0x1fU) | 
                                       (0xeU & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[4U] 
                                                << 1U))))));
            __Vtemp585[0U] = (~ __Vtemp583[0U]);
            __Vtemp585[1U] = (~ __Vtemp583[1U]);
            __Vtemp585[2U] = (~ __Vtemp583[2U]);
            __Vtemp585[3U] = (~ __Vtemp583[3U]);
            __Vtemp585[4U] = (0xfU & (~ __Vtemp583[4U]));
            tracep->chgWData(oldp+513,(__Vtemp585),132);
            tracep->chgBit(oldp+518,(((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_double_negative) 
                                      | (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_negative))));
            tracep->chgWData(oldp+519,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__mid_result),132);
            tracep->chgCData(oldp+524,((7U & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])),3);
            tracep->chgWData(oldp+525,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S),132);
            tracep->chgBit(oldp+530,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__mul_process));
            tracep->chgCData(oldp+531,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__iter_cnt),6);
            tracep->chgBit(oldp+532,((1U & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                            >> 2U))));
            tracep->chgBit(oldp+533,((1U & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                            >> 1U))));
            tracep->chgBit(oldp+534,((1U & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])));
            tracep->chgBit(oldp+535,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_negative));
            tracep->chgBit(oldp+536,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_double_negative));
            tracep->chgBit(oldp+537,((1U & ((~ (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                >> 2U)) 
                                            & (((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                 >> 1U) 
                                                & (~ 
                                                   vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])) 
                                               | ((~ 
                                                   (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                    >> 1U)) 
                                                  & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U]))))));
            tracep->chgBit(oldp+538,((1U & (((~ (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                 >> 2U)) 
                                             & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                >> 1U)) 
                                            & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U]))));
            tracep->chgWData(oldp+539,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__abs_dividend),128);
            tracep->chgWData(oldp+543,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__abs_divisor),128);
            tracep->chgWData(oldp+547,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__current_sub_result),128);
            tracep->chgBit(oldp+551,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__current_q));
            tracep->chgBit(oldp+552,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__dividend_flag));
            tracep->chgBit(oldp+553,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__divisor_flag));
            tracep->chgBit(oldp+554,(((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__dividend_flag) 
                                      ^ (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__divisor_flag))));
            tracep->chgQData(oldp+555,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__abs_quotient),64);
            tracep->chgBit(oldp+557,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__div_process));
            tracep->chgCData(oldp+558,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__iter_cnt),6);
            tracep->chgBit(oldp+559,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel) 
                                            >> 5U))));
            tracep->chgBit(oldp+560,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel) 
                                            >> 2U))));
            tracep->chgBit(oldp+561,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel) 
                                            >> 4U))));
            tracep->chgBit(oldp+562,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel) 
                                            >> 1U))));
            tracep->chgBit(oldp+563,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel) 
                                            >> 3U))));
            tracep->chgBit(oldp+564,((1U & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel))));
            tracep->chgBit(oldp+565,((IData)((0U != 
                                              (0x24U 
                                               & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel))))));
            tracep->chgBit(oldp+566,((IData)((0U != 
                                              (0x12U 
                                               & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel))))));
            tracep->chgBit(oldp+567,((IData)((0U != 
                                              (9U & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel))))));
            tracep->chgBit(oldp+568,((0U != (7U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel) 
                                                   >> 3U)))));
            tracep->chgBit(oldp+569,((0U != (7U & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel)))));
            tracep->chgQData(oldp+570,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__csr_alu_e__DOT__op),64);
            tracep->chgQData(oldp+572,((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr 
                                        | vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__csr_alu_e__DOT__op)),64);
            tracep->chgQData(oldp+574,((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr 
                                        & (~ vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__csr_alu_e__DOT__op))),64);
            tracep->chgBit(oldp+576,(((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_reg_e__DOT__mem_rd_en) 
                                      & (IData)(vlSelf->ysyx_22040750__DOT__cpu_mem_ready))));
            tracep->chgBit(oldp+577,(((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_reg_e__DOT__mem_wr_en) 
                                      & (IData)(vlSelf->ysyx_22040750__DOT__cpu_mem_ready))));
            tracep->chgBit(oldp+578,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_mem_rstrb) 
                                            >> 8U))));
            tracep->chgBit(oldp+579,((1U & (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_mem_rstrb) 
                                             >> 8U) 
                                            & ((0xfU 
                                                == 
                                                (0xffU 
                                                 & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_mem_rstrb)))
                                                ? (IData)(
                                                          (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__mem_ld_e__DOT__ld_data 
                                                           >> 0x1fU))
                                                : (
                                                   (3U 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_mem_rstrb)))
                                                    ? (IData)(
                                                              (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__mem_ld_e__DOT__ld_data 
                                                               >> 0xfU))
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_mem_rstrb))) 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__mem_ld_e__DOT__ld_data 
                                                               >> 7U)))))))));
            tracep->chgCData(oldp+580,((0xffU & (~ (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_mem_rstrb)))),8);
            tracep->chgQData(oldp+581,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__mem_ld_e__DOT__ld_data),64);
            tracep->chgWData(oldp+583,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT____Vcellinp__regin_64bit_2sel__I_sel_data),128);
            tracep->chgCData(oldp+587,((3U & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_regin_sel))),2);
            tracep->chgQData(oldp+588,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__regin_64bit_2sel__DOT__sel_data[0]),64);
            tracep->chgQData(oldp+590,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__regin_64bit_2sel__DOT__sel_data[1]),64);
            tracep->chgBit(oldp+592,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT____Vcellinp__gpr_e__I_wen));
            tracep->chgQData(oldp+593,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[0]),64);
            tracep->chgQData(oldp+595,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[1]),64);
            tracep->chgQData(oldp+597,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[2]),64);
            tracep->chgQData(oldp+599,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[3]),64);
            tracep->chgQData(oldp+601,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[4]),64);
            tracep->chgQData(oldp+603,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[5]),64);
            tracep->chgQData(oldp+605,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[6]),64);
            tracep->chgQData(oldp+607,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[7]),64);
            tracep->chgQData(oldp+609,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[8]),64);
            tracep->chgQData(oldp+611,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[9]),64);
            tracep->chgQData(oldp+613,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[10]),64);
            tracep->chgQData(oldp+615,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[11]),64);
            tracep->chgQData(oldp+617,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[12]),64);
            tracep->chgQData(oldp+619,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[13]),64);
            tracep->chgQData(oldp+621,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[14]),64);
            tracep->chgQData(oldp+623,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[15]),64);
            tracep->chgQData(oldp+625,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[16]),64);
            tracep->chgQData(oldp+627,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[17]),64);
            tracep->chgQData(oldp+629,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[18]),64);
            tracep->chgQData(oldp+631,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[19]),64);
            tracep->chgQData(oldp+633,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[20]),64);
            tracep->chgQData(oldp+635,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[21]),64);
            tracep->chgQData(oldp+637,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[22]),64);
            tracep->chgQData(oldp+639,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[23]),64);
            tracep->chgQData(oldp+641,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[24]),64);
            tracep->chgQData(oldp+643,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[25]),64);
            tracep->chgQData(oldp+645,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[26]),64);
            tracep->chgQData(oldp+647,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[27]),64);
            tracep->chgQData(oldp+649,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[28]),64);
            tracep->chgQData(oldp+651,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[29]),64);
            tracep->chgQData(oldp+653,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[30]),64);
            tracep->chgQData(oldp+655,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[31]),64);
            tracep->chgBit(oldp+657,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[0]));
            tracep->chgBit(oldp+658,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[1]));
            tracep->chgBit(oldp+659,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[2]));
            tracep->chgBit(oldp+660,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[3]));
            tracep->chgBit(oldp+661,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[4]));
            tracep->chgBit(oldp+662,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[5]));
            tracep->chgBit(oldp+663,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[6]));
            tracep->chgBit(oldp+664,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[7]));
            tracep->chgBit(oldp+665,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[8]));
            tracep->chgBit(oldp+666,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[9]));
            tracep->chgBit(oldp+667,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[10]));
            tracep->chgBit(oldp+668,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[11]));
            tracep->chgBit(oldp+669,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[12]));
            tracep->chgBit(oldp+670,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[13]));
            tracep->chgBit(oldp+671,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[14]));
            tracep->chgBit(oldp+672,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[15]));
            tracep->chgBit(oldp+673,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[16]));
            tracep->chgBit(oldp+674,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[17]));
            tracep->chgBit(oldp+675,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[18]));
            tracep->chgBit(oldp+676,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[19]));
            tracep->chgBit(oldp+677,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[20]));
            tracep->chgBit(oldp+678,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[21]));
            tracep->chgBit(oldp+679,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[22]));
            tracep->chgBit(oldp+680,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[23]));
            tracep->chgBit(oldp+681,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[24]));
            tracep->chgBit(oldp+682,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[25]));
            tracep->chgBit(oldp+683,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[26]));
            tracep->chgBit(oldp+684,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[27]));
            tracep->chgBit(oldp+685,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[28]));
            tracep->chgBit(oldp+686,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[29]));
            tracep->chgBit(oldp+687,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[30]));
            tracep->chgBit(oldp+688,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[31]));
            tracep->chgQData(oldp+689,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mepc),64);
            tracep->chgQData(oldp+691,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mstatus),64);
            tracep->chgQData(oldp+693,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mtvec),64);
            tracep->chgQData(oldp+695,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mcause),64);
            tracep->chgQData(oldp+697,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mscratch),64);
            tracep->chgBit(oldp+699,((1U & (IData)(
                                                   (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mstatus 
                                                    >> 3U)))));
            tracep->chgBit(oldp+700,((1U & (IData)(
                                                   (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mstatus 
                                                    >> 7U)))));
            tracep->chgCData(oldp+701,(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen),8);
            tracep->chgCData(oldp+702,((((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                                          ? 1U : 0U)
                                         ? 0U : 0xfU)),4);
            __Vtemp586[0U] = vlSelf->ysyx_22040750__DOT__io_sram0_rdata[0U];
            __Vtemp586[1U] = vlSelf->ysyx_22040750__DOT__io_sram0_rdata[1U];
            __Vtemp586[2U] = vlSelf->ysyx_22040750__DOT__io_sram0_rdata[2U];
            __Vtemp586[3U] = vlSelf->ysyx_22040750__DOT__io_sram0_rdata[3U];
            __Vtemp586[4U] = vlSelf->ysyx_22040750__DOT__io_sram1_rdata[0U];
            __Vtemp586[5U] = vlSelf->ysyx_22040750__DOT__io_sram1_rdata[1U];
            __Vtemp586[6U] = vlSelf->ysyx_22040750__DOT__io_sram1_rdata[2U];
            __Vtemp586[7U] = vlSelf->ysyx_22040750__DOT__io_sram1_rdata[3U];
            tracep->chgWData(oldp+703,(__Vtemp586),256);
            __Vtemp587[0U] = vlSelf->ysyx_22040750__DOT__io_sram2_rdata[0U];
            __Vtemp587[1U] = vlSelf->ysyx_22040750__DOT__io_sram2_rdata[1U];
            __Vtemp587[2U] = vlSelf->ysyx_22040750__DOT__io_sram2_rdata[2U];
            __Vtemp587[3U] = vlSelf->ysyx_22040750__DOT__io_sram2_rdata[3U];
            __Vtemp587[4U] = vlSelf->ysyx_22040750__DOT__io_sram3_rdata[0U];
            __Vtemp587[5U] = vlSelf->ysyx_22040750__DOT__io_sram3_rdata[1U];
            __Vtemp587[6U] = vlSelf->ysyx_22040750__DOT__io_sram3_rdata[2U];
            __Vtemp587[7U] = vlSelf->ysyx_22040750__DOT__io_sram3_rdata[3U];
            tracep->chgWData(oldp+711,(__Vtemp587),256);
            tracep->chgWData(oldp+719,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg),256);
            if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                  ? 1U : 0U)) {
                __Vtemp589[0U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[0U];
                __Vtemp589[1U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[1U];
                __Vtemp589[2U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[2U];
                __Vtemp589[3U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[3U];
                __Vtemp589[4U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[4U];
                __Vtemp589[5U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[5U];
                __Vtemp589[6U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[6U];
                __Vtemp589[7U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[7U];
            } else {
                __Vtemp589[0U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[0U];
                __Vtemp589[1U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[1U];
                __Vtemp589[2U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[2U];
                __Vtemp589[3U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[3U];
                __Vtemp589[4U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[4U];
                __Vtemp589[5U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[5U];
                __Vtemp589[6U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[6U];
                __Vtemp589[7U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[7U];
            }
            tracep->chgWData(oldp+727,(__Vtemp589),256);
            tracep->chgCData(oldp+735,(((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__sram_wflag)
                                         ? ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)
                                             ? 0xcU
                                             : 3U) : 0xfU)),4);
            tracep->chgWData(oldp+736,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata),256);
            tracep->chgWData(oldp+744,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata),256);
            tracep->chgWData(oldp+752,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg),256);
            tracep->chgWData(oldp+760,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask),256);
            tracep->chgIData(oldp+768,((0xffffffe0U 
                                        & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr)),32);
            tracep->chgIData(oldp+769,(((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_ar_req)
                                         ? (0xffffffe0U 
                                            & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr)
                                         : 0U)),32);
            tracep->chgBit(oldp+770,(((2U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                                       ? 1U : 0U)));
            tracep->chgBit(oldp+771,(((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_ar_req)
                                       ? 1U : 0U)));
            tracep->chgCData(oldp+772,(((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mmio_process)
                                         ? 0U : 3U)),8);
            if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op) {
                __Vtemp590[0U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[0U];
                __Vtemp590[1U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[1U];
                __Vtemp590[2U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[2U];
                __Vtemp590[3U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[3U];
                __Vtemp590[4U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[4U];
                __Vtemp590[5U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[5U];
                __Vtemp590[6U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[6U];
                __Vtemp590[7U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[7U];
            } else {
                __Vtemp590[0U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[0U];
                __Vtemp590[1U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[1U];
                __Vtemp590[2U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[2U];
                __Vtemp590[3U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[3U];
                __Vtemp590[4U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[4U];
                __Vtemp590[5U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[5U];
                __Vtemp590[6U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[6U];
                __Vtemp590[7U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[7U];
            }
            tracep->chgQData(oldp+773,(((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mmio_process)
                                         ? vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cpu_reg
                                         : (((QData)((IData)(
                                                             __Vtemp590[
                                                             (((IData)(0x3fU) 
                                                               + 
                                                               ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wdata_cnt) 
                                                                << 6U)) 
                                                              >> 5U)])) 
                                             << ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wdata_cnt) 
                                                      << 6U)))
                                                  ? 0x20U
                                                  : 
                                                 ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wdata_cnt) 
                                                      << 6U))))) 
                                            | (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wdata_cnt) 
                                                     << 6U)))
                                                 ? 0ULL
                                                 : 
                                                ((QData)((IData)(
                                                                 __Vtemp590[
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
                                                                  __Vtemp590[
                                                                  (0x7fffffeU 
                                                                   & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wdata_cnt) 
                                                                      << 1U))])) 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wdata_cnt) 
                                                      << 6U))))))),64);
            tracep->chgBit(oldp+775,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_wvalid));
            tracep->chgBit(oldp+776,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_wlast));
            tracep->chgCData(oldp+777,(((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mmio_process)
                                         ? (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cpu_mask_reg)
                                         : 0xffU)),8);
            tracep->chgIData(oldp+778,(((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_aw_req)
                                         ? (0xffffffe0U 
                                            & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr)
                                         : 0U)),32);
            tracep->chgBit(oldp+779,(((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_aw_req)
                                       ? 1U : 0U)));
            tracep->chgBit(oldp+780,((1U & (((2U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                                              ? 1U : 0U) 
                                            & (~ ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_ar_req)
                                                   ? 1U
                                                   : 0U))))));
            tracep->chgBit(oldp+781,((1U & ((~ ((2U 
                                                 == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                                                 ? 1U
                                                 : 0U)) 
                                            & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_ar_req)
                                                ? 1U
                                                : 0U)))));
            tracep->chgBit(oldp+782,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__crossbar_e__DOT__req_both));
            tracep->chgBit(oldp+783,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__crossbar_e__DOT__resp0));
            tracep->chgBit(oldp+784,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__crossbar_e__DOT__resp1));
            tracep->chgBit(oldp+785,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__crossbar_e__DOT__ch0_process));
            tracep->chgBit(oldp+786,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__crossbar_e__DOT__ch1_process));
            tracep->chgBit(oldp+787,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__crossbar_e__DOT__priority_flag));
            tracep->chgCData(oldp+788,((0x1fU & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc)),5);
            tracep->chgCData(oldp+789,((0x3fU & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc 
                                                 >> 5U))),6);
            tracep->chgIData(oldp+790,((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc 
                                        >> 0xbU)),21);
            tracep->chgCData(oldp+791,((0x1fU & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr)),5);
            tracep->chgCData(oldp+792,((0x3fU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                 >> 5U))),6);
            tracep->chgIData(oldp+793,((vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                        >> 0xbU)),21);
            tracep->chgIData(oldp+794,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr),32);
            tracep->chgWData(oldp+795,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table),128);
            tracep->chgIData(oldp+799,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
                                       [(0x7eU & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc 
                                                  >> 4U))]),21);
            tracep->chgIData(oldp+800,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
                                       [(1U | (0x7eU 
                                               & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc 
                                                  >> 4U)))]),21);
            tracep->chgBit(oldp+801,((1U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
                                            (3U & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc 
                                                   >> 9U))] 
                                            >> (0x1eU 
                                                & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc 
                                                   >> 4U))))));
            tracep->chgBit(oldp+802,((1U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
                                            (3U & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc 
                                                   >> 9U))] 
                                            >> (0x1fU 
                                                & (1U 
                                                   | (0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc 
                                                         >> 4U))))))));
            tracep->chgBit(oldp+803,((1U & (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                                              ? 1U : 0U) 
                                            & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace))))));
            tracep->chgBit(oldp+804,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
            tracep->chgCData(oldp+805,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag),2);
            if ((1U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))) {
                __Vtemp599[0U] = ((vlSelf->ysyx_22040750__DOT__io_sram0_rdata[0U] 
                                   & (- (IData)((1U 
                                                 & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag))))) 
                                  | (vlSelf->ysyx_22040750__DOT__io_sram2_rdata[0U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag) 
                                                      >> 1U))))));
                __Vtemp599[1U] = ((vlSelf->ysyx_22040750__DOT__io_sram0_rdata[1U] 
                                   & (- (IData)((1U 
                                                 & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag))))) 
                                  | (vlSelf->ysyx_22040750__DOT__io_sram2_rdata[1U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag) 
                                                      >> 1U))))));
                __Vtemp599[2U] = ((vlSelf->ysyx_22040750__DOT__io_sram0_rdata[2U] 
                                   & (- (IData)((1U 
                                                 & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag))))) 
                                  | (vlSelf->ysyx_22040750__DOT__io_sram2_rdata[2U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag) 
                                                      >> 1U))))));
                __Vtemp599[3U] = ((vlSelf->ysyx_22040750__DOT__io_sram0_rdata[3U] 
                                   & (- (IData)((1U 
                                                 & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag))))) 
                                  | (vlSelf->ysyx_22040750__DOT__io_sram2_rdata[3U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag) 
                                                      >> 1U))))));
                __Vtemp599[4U] = ((vlSelf->ysyx_22040750__DOT__io_sram1_rdata[0U] 
                                   & (- (IData)((1U 
                                                 & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag))))) 
                                  | (vlSelf->ysyx_22040750__DOT__io_sram3_rdata[0U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag) 
                                                      >> 1U))))));
                __Vtemp599[5U] = ((vlSelf->ysyx_22040750__DOT__io_sram1_rdata[1U] 
                                   & (- (IData)((1U 
                                                 & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag))))) 
                                  | (vlSelf->ysyx_22040750__DOT__io_sram3_rdata[1U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag) 
                                                      >> 1U))))));
                __Vtemp599[6U] = ((vlSelf->ysyx_22040750__DOT__io_sram1_rdata[2U] 
                                   & (- (IData)((1U 
                                                 & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag))))) 
                                  | (vlSelf->ysyx_22040750__DOT__io_sram3_rdata[2U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag) 
                                                      >> 1U))))));
                __Vtemp599[7U] = ((vlSelf->ysyx_22040750__DOT__io_sram1_rdata[3U] 
                                   & (- (IData)((1U 
                                                 & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag))))) 
                                  | (vlSelf->ysyx_22040750__DOT__io_sram3_rdata[3U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag) 
                                                      >> 1U))))));
            } else {
                __Vtemp599[0U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[0U];
                __Vtemp599[1U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[1U];
                __Vtemp599[2U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[2U];
                __Vtemp599[3U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[3U];
                __Vtemp599[4U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[4U];
                __Vtemp599[5U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[5U];
                __Vtemp599[6U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[6U];
                __Vtemp599[7U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[7U];
            }
            tracep->chgWData(oldp+806,(__Vtemp599),256);
            __Vtemp606[0U] = ((vlSelf->ysyx_22040750__DOT__io_sram0_rdata[0U] 
                               & (- (IData)((1U & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag))))) 
                              | (vlSelf->ysyx_22040750__DOT__io_sram2_rdata[0U] 
                                 & (- (IData)((1U & 
                                               ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag) 
                                                >> 1U))))));
            __Vtemp606[1U] = ((vlSelf->ysyx_22040750__DOT__io_sram0_rdata[1U] 
                               & (- (IData)((1U & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag))))) 
                              | (vlSelf->ysyx_22040750__DOT__io_sram2_rdata[1U] 
                                 & (- (IData)((1U & 
                                               ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag) 
                                                >> 1U))))));
            __Vtemp606[2U] = ((vlSelf->ysyx_22040750__DOT__io_sram0_rdata[2U] 
                               & (- (IData)((1U & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag))))) 
                              | (vlSelf->ysyx_22040750__DOT__io_sram2_rdata[2U] 
                                 & (- (IData)((1U & 
                                               ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag) 
                                                >> 1U))))));
            __Vtemp606[3U] = ((vlSelf->ysyx_22040750__DOT__io_sram0_rdata[3U] 
                               & (- (IData)((1U & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag))))) 
                              | (vlSelf->ysyx_22040750__DOT__io_sram2_rdata[3U] 
                                 & (- (IData)((1U & 
                                               ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag) 
                                                >> 1U))))));
            __Vtemp606[4U] = ((vlSelf->ysyx_22040750__DOT__io_sram1_rdata[0U] 
                               & (- (IData)((1U & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag))))) 
                              | (vlSelf->ysyx_22040750__DOT__io_sram3_rdata[0U] 
                                 & (- (IData)((1U & 
                                               ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag) 
                                                >> 1U))))));
            __Vtemp606[5U] = ((vlSelf->ysyx_22040750__DOT__io_sram1_rdata[1U] 
                               & (- (IData)((1U & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag))))) 
                              | (vlSelf->ysyx_22040750__DOT__io_sram3_rdata[1U] 
                                 & (- (IData)((1U & 
                                               ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag) 
                                                >> 1U))))));
            __Vtemp606[6U] = ((vlSelf->ysyx_22040750__DOT__io_sram1_rdata[2U] 
                               & (- (IData)((1U & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag))))) 
                              | (vlSelf->ysyx_22040750__DOT__io_sram3_rdata[2U] 
                                 & (- (IData)((1U & 
                                               ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag) 
                                                >> 1U))))));
            __Vtemp606[7U] = ((vlSelf->ysyx_22040750__DOT__io_sram1_rdata[3U] 
                               & (- (IData)((1U & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag))))) 
                              | (vlSelf->ysyx_22040750__DOT__io_sram3_rdata[3U] 
                                 & (- (IData)((1U & 
                                               ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag) 
                                                >> 1U))))));
            tracep->chgWData(oldp+814,(__Vtemp606),256);
            tracep->chgBit(oldp+822,((4U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))));
            tracep->chgBit(oldp+823,(((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                                       ? 1U : 0U)));
            tracep->chgCData(oldp+824,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state),4);
            tracep->chgSData(oldp+825,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state),15);
            tracep->chgBit(oldp+826,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__replace_dirty));
            tracep->chgBit(oldp+827,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__rd_hit));
            tracep->chgBit(oldp+828,((((~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit)) 
                                       & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_reg_e__DOT__mem_rd_en)) 
                                      & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mmio_flag)))));
            tracep->chgBit(oldp+829,(((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)));
            tracep->chgBit(oldp+830,(((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)));
            tracep->chgBit(oldp+831,(((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)));
            tracep->chgBit(oldp+832,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit));
            tracep->chgBit(oldp+833,((((~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit)) 
                                       & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_reg_e__DOT__mem_wr_en)) 
                                      & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mmio_flag)))));
            tracep->chgBit(oldp+834,(((0x100U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)));
            tracep->chgBit(oldp+835,(((0x200U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)));
            tracep->chgBit(oldp+836,(((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)));
            tracep->chgCData(oldp+837,((0x1fU & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out))),5);
            tracep->chgCData(oldp+838,((0x1fU & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr)),5);
            tracep->chgCData(oldp+839,((0x3fU & (IData)(
                                                        (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                         >> 5U)))),6);
            tracep->chgCData(oldp+840,((0x3fU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                 >> 5U))),6);
            tracep->chgIData(oldp+841,((0x1fffffU & (IData)(
                                                            (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                             >> 0xbU)))),21);
            tracep->chgIData(oldp+842,((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                        >> 0xbU)),21);
            tracep->chgIData(oldp+843,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr),32);
            tracep->chgCData(oldp+844,((0xffU & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cpu_mask_reg)))),8);
            tracep->chgIData(oldp+845,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__sram_wmaskB),32);
            tracep->chgCData(oldp+846,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag),2);
            if ((2U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))) {
                __Vtemp613[0U] = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[0U] 
                                   & (- (IData)((1U 
                                                 & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag))))) 
                                  | (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[0U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag) 
                                                      >> 1U))))));
                __Vtemp613[1U] = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[1U] 
                                   & (- (IData)((1U 
                                                 & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag))))) 
                                  | (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[1U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag) 
                                                      >> 1U))))));
                __Vtemp613[2U] = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[2U] 
                                   & (- (IData)((1U 
                                                 & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag))))) 
                                  | (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[2U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag) 
                                                      >> 1U))))));
                __Vtemp613[3U] = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[3U] 
                                   & (- (IData)((1U 
                                                 & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag))))) 
                                  | (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[3U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag) 
                                                      >> 1U))))));
                __Vtemp613[4U] = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[4U] 
                                   & (- (IData)((1U 
                                                 & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag))))) 
                                  | (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[4U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag) 
                                                      >> 1U))))));
                __Vtemp613[5U] = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[5U] 
                                   & (- (IData)((1U 
                                                 & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag))))) 
                                  | (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[5U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag) 
                                                      >> 1U))))));
                __Vtemp613[6U] = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[6U] 
                                   & (- (IData)((1U 
                                                 & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag))))) 
                                  | (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[6U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag) 
                                                      >> 1U))))));
                __Vtemp613[7U] = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[7U] 
                                   & (- (IData)((1U 
                                                 & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag))))) 
                                  | (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[7U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag) 
                                                      >> 1U))))));
            } else {
                __Vtemp613[0U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[0U];
                __Vtemp613[1U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[1U];
                __Vtemp613[2U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[2U];
                __Vtemp613[3U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[3U];
                __Vtemp613[4U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[4U];
                __Vtemp613[5U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[5U];
                __Vtemp613[6U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[6U];
                __Vtemp613[7U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[7U];
            }
            tracep->chgWData(oldp+847,(__Vtemp613),256);
            __Vtemp618[0U] = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[0U] 
                               & (- (IData)((1U & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag))))) 
                              | (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[0U] 
                                 & (- (IData)((1U & 
                                               ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag) 
                                                >> 1U))))));
            __Vtemp618[1U] = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[1U] 
                               & (- (IData)((1U & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag))))) 
                              | (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[1U] 
                                 & (- (IData)((1U & 
                                               ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag) 
                                                >> 1U))))));
            __Vtemp618[2U] = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[2U] 
                               & (- (IData)((1U & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag))))) 
                              | (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[2U] 
                                 & (- (IData)((1U & 
                                               ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag) 
                                                >> 1U))))));
            __Vtemp618[3U] = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[3U] 
                               & (- (IData)((1U & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag))))) 
                              | (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[3U] 
                                 & (- (IData)((1U & 
                                               ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag) 
                                                >> 1U))))));
            __Vtemp618[4U] = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[4U] 
                               & (- (IData)((1U & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag))))) 
                              | (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[4U] 
                                 & (- (IData)((1U & 
                                               ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag) 
                                                >> 1U))))));
            __Vtemp618[5U] = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[5U] 
                               & (- (IData)((1U & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag))))) 
                              | (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[5U] 
                                 & (- (IData)((1U & 
                                               ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag) 
                                                >> 1U))))));
            __Vtemp618[6U] = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[6U] 
                               & (- (IData)((1U & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag))))) 
                              | (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[6U] 
                                 & (- (IData)((1U & 
                                               ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag) 
                                                >> 1U))))));
            __Vtemp618[7U] = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[7U] 
                               & (- (IData)((1U & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag))))) 
                              | (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[7U] 
                                 & (- (IData)((1U & 
                                               ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag) 
                                                >> 1U))))));
            tracep->chgWData(oldp+855,(__Vtemp618),256);
            tracep->chgQData(oldp+863,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cpu_reg),64);
            tracep->chgCData(oldp+865,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cpu_mask_reg),8);
            tracep->chgBit(oldp+866,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__sram_wflag));
            tracep->chgWData(oldp+867,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table),128);
            tracep->chgWData(oldp+871,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table),128);
            tracep->chgIData(oldp+875,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
                                       [(0x7eU & ((IData)(
                                                          (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                           >> 5U)) 
                                                  << 1U))]),21);
            tracep->chgIData(oldp+876,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
                                       [(1U | (0x7eU 
                                               & ((IData)(
                                                          (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                           >> 5U)) 
                                                  << 1U)))]),21);
            tracep->chgBit(oldp+877,((1U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
                                            (3U & ((IData)(
                                                           (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                            >> 5U)) 
                                                   >> 4U))] 
                                            >> (0x1eU 
                                                & ((IData)(
                                                           (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                            >> 5U)) 
                                                   << 1U))))));
            tracep->chgBit(oldp+878,((1U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
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
            tracep->chgBit(oldp+879,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way0_hit));
            tracep->chgBit(oldp+880,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit));
            tracep->chgBit(oldp+881,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit));
            tracep->chgBit(oldp+882,((1U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
                                            (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                   >> 9U))] 
                                            >> (0x1eU 
                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                   >> 4U))))));
            tracep->chgBit(oldp+883,((1U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
                                            (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                   >> 9U))] 
                                            >> (0x1fU 
                                                & (1U 
                                                   | (0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U))))))));
            tracep->chgBit(oldp+884,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
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
                                               & (~ 
                                                  (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
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
            tracep->chgBit(oldp+885,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op));
            tracep->chgCData(oldp+886,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wb_state),3);
            tracep->chgBit(oldp+887,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_ar_req));
            tracep->chgBit(oldp+888,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_aw_req));
            tracep->chgCData(oldp+889,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wdata_cnt),2);
            if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op) {
                __Vtemp619[0U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[0U];
                __Vtemp619[1U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[1U];
                __Vtemp619[2U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[2U];
                __Vtemp619[3U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[3U];
                __Vtemp619[4U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[4U];
                __Vtemp619[5U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[5U];
                __Vtemp619[6U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[6U];
                __Vtemp619[7U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[7U];
            } else {
                __Vtemp619[0U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[0U];
                __Vtemp619[1U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[1U];
                __Vtemp619[2U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[2U];
                __Vtemp619[3U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[3U];
                __Vtemp619[4U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[4U];
                __Vtemp619[5U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[5U];
                __Vtemp619[6U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[6U];
                __Vtemp619[7U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[7U];
            }
            tracep->chgWData(oldp+890,(__Vtemp619),256);
            if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op) {
                __Vtemp620[0U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[0U];
                __Vtemp620[1U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[1U];
                __Vtemp620[2U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[2U];
                __Vtemp620[3U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[3U];
                __Vtemp620[4U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[4U];
                __Vtemp620[5U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[5U];
                __Vtemp620[6U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[6U];
                __Vtemp620[7U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[7U];
            } else {
                __Vtemp620[0U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[0U];
                __Vtemp620[1U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[1U];
                __Vtemp620[2U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[2U];
                __Vtemp620[3U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[3U];
                __Vtemp620[4U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[4U];
                __Vtemp620[5U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[5U];
                __Vtemp620[6U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[6U];
                __Vtemp620[7U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[7U];
            }
            tracep->chgQData(oldp+898,((((QData)((IData)(
                                                         __Vtemp620[
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
                                                                __Vtemp620[
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
                                                              __Vtemp620[
                                                              (0x7fffffeU 
                                                               & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wdata_cnt) 
                                                                  << 1U))])) 
                                              >> (0x1fU 
                                                  & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wdata_cnt) 
                                                     << 6U)))))),64);
            if ((2U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))) {
                __Vtemp627[0U] = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[0U] 
                                   & (- (IData)((1U 
                                                 & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag))))) 
                                  | (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[0U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag) 
                                                      >> 1U))))));
                __Vtemp627[1U] = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[1U] 
                                   & (- (IData)((1U 
                                                 & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag))))) 
                                  | (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[1U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag) 
                                                      >> 1U))))));
                __Vtemp627[2U] = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[2U] 
                                   & (- (IData)((1U 
                                                 & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag))))) 
                                  | (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[2U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag) 
                                                      >> 1U))))));
                __Vtemp627[3U] = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[3U] 
                                   & (- (IData)((1U 
                                                 & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag))))) 
                                  | (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[3U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag) 
                                                      >> 1U))))));
                __Vtemp627[4U] = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[4U] 
                                   & (- (IData)((1U 
                                                 & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag))))) 
                                  | (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[4U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag) 
                                                      >> 1U))))));
                __Vtemp627[5U] = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[5U] 
                                   & (- (IData)((1U 
                                                 & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag))))) 
                                  | (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[5U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag) 
                                                      >> 1U))))));
                __Vtemp627[6U] = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[6U] 
                                   & (- (IData)((1U 
                                                 & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag))))) 
                                  | (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[6U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag) 
                                                      >> 1U))))));
                __Vtemp627[7U] = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[7U] 
                                   & (- (IData)((1U 
                                                 & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag))))) 
                                  | (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[7U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag) 
                                                      >> 1U))))));
            } else {
                __Vtemp627[0U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[0U];
                __Vtemp627[1U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[1U];
                __Vtemp627[2U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[2U];
                __Vtemp627[3U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[3U];
                __Vtemp627[4U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[4U];
                __Vtemp627[5U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[5U];
                __Vtemp627[6U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[6U];
                __Vtemp627[7U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[7U];
            }
            tracep->chgQData(oldp+900,((((QData)((IData)(
                                                         __Vtemp627[
                                                         (((IData)(0x3fU) 
                                                           + 
                                                           (0xc0U 
                                                            & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                               << 3U))) 
                                                          >> 5U)])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          __Vtemp627[
                                                          (6U 
                                                           & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                              >> 2U))])))),64);
            tracep->chgBit(oldp+902,(((4U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wb_state))
                                       ? 1U : 0U)));
            tracep->chgBit(oldp+903,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mmio_flag));
            tracep->chgBit(oldp+904,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mmio_process));
            tracep->chgBit(oldp+905,(((0x4000U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)));
            tracep->chgBit(oldp+906,((1U & (~ (IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen)))));
            __Vtemp631[0U] = (~ (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                                   ? 1U : 0U) ? Vysyx_22040750__ConstPool__CONST_9e67c271_0[0U]
                                  : Vysyx_22040750__ConstPool__CONST_5b979007_0[0U]));
            __Vtemp631[1U] = (~ (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                                   ? 1U : 0U) ? Vysyx_22040750__ConstPool__CONST_9e67c271_0[1U]
                                  : Vysyx_22040750__ConstPool__CONST_5b979007_0[1U]));
            __Vtemp631[2U] = (~ (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                                   ? 1U : 0U) ? Vysyx_22040750__ConstPool__CONST_9e67c271_0[2U]
                                  : Vysyx_22040750__ConstPool__CONST_5b979007_0[2U]));
            __Vtemp631[3U] = (~ (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                                   ? 1U : 0U) ? Vysyx_22040750__ConstPool__CONST_9e67c271_0[3U]
                                  : Vysyx_22040750__ConstPool__CONST_5b979007_0[3U]));
            tracep->chgWData(oldp+907,(__Vtemp631),128);
            tracep->chgBit(oldp+911,((1U & (~ ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen) 
                                               >> 1U)))));
            __Vtemp635[0U] = (~ (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                                   ? 1U : 0U) ? Vysyx_22040750__ConstPool__CONST_9e67c271_0[4U]
                                  : Vysyx_22040750__ConstPool__CONST_5b979007_0[4U]));
            __Vtemp635[1U] = (~ (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                                   ? 1U : 0U) ? Vysyx_22040750__ConstPool__CONST_9e67c271_0[5U]
                                  : Vysyx_22040750__ConstPool__CONST_5b979007_0[5U]));
            __Vtemp635[2U] = (~ (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                                   ? 1U : 0U) ? Vysyx_22040750__ConstPool__CONST_9e67c271_0[6U]
                                  : Vysyx_22040750__ConstPool__CONST_5b979007_0[6U]));
            __Vtemp635[3U] = (~ (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                                   ? 1U : 0U) ? Vysyx_22040750__ConstPool__CONST_9e67c271_0[7U]
                                  : Vysyx_22040750__ConstPool__CONST_5b979007_0[7U]));
            tracep->chgWData(oldp+912,(__Vtemp635),128);
            tracep->chgBit(oldp+916,((1U & (~ ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen) 
                                               >> 2U)))));
            tracep->chgBit(oldp+917,((1U & (~ ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen) 
                                               >> 3U)))));
            tracep->chgBit(oldp+918,((1U & (~ ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen) 
                                               >> 4U)))));
            __Vtemp637[0U] = (~ vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[0U]);
            __Vtemp637[1U] = (~ vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[1U]);
            __Vtemp637[2U] = (~ vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[2U]);
            __Vtemp637[3U] = (~ vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[3U]);
            tracep->chgWData(oldp+919,(__Vtemp637),128);
            tracep->chgBit(oldp+923,((1U & (~ ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen) 
                                               >> 5U)))));
            __Vtemp639[0U] = (~ vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[4U]);
            __Vtemp639[1U] = (~ vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[5U]);
            __Vtemp639[2U] = (~ vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[6U]);
            __Vtemp639[3U] = (~ vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[7U]);
            tracep->chgWData(oldp+924,(__Vtemp639),128);
            tracep->chgBit(oldp+928,((1U & (~ ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen) 
                                               >> 6U)))));
            tracep->chgBit(oldp+929,((1U & (~ ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen) 
                                               >> 7U)))));
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [1U] | vlSelf->__Vm_traceActivity
                         [2U]))) {
            if ((2U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))) {
                __Vtemp646[0U] = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[0U] 
                                   & (- (IData)((1U 
                                                 & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag))))) 
                                  | (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[0U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag) 
                                                      >> 1U))))));
                __Vtemp646[1U] = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[1U] 
                                   & (- (IData)((1U 
                                                 & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag))))) 
                                  | (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[1U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag) 
                                                      >> 1U))))));
                __Vtemp646[2U] = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[2U] 
                                   & (- (IData)((1U 
                                                 & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag))))) 
                                  | (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[2U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag) 
                                                      >> 1U))))));
                __Vtemp646[3U] = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[3U] 
                                   & (- (IData)((1U 
                                                 & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag))))) 
                                  | (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[3U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag) 
                                                      >> 1U))))));
                __Vtemp646[4U] = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[4U] 
                                   & (- (IData)((1U 
                                                 & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag))))) 
                                  | (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[4U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag) 
                                                      >> 1U))))));
                __Vtemp646[5U] = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[5U] 
                                   & (- (IData)((1U 
                                                 & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag))))) 
                                  | (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[5U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag) 
                                                      >> 1U))))));
                __Vtemp646[6U] = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[6U] 
                                   & (- (IData)((1U 
                                                 & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag))))) 
                                  | (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[6U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag) 
                                                      >> 1U))))));
                __Vtemp646[7U] = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[7U] 
                                   & (- (IData)((1U 
                                                 & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag))))) 
                                  | (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[7U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag) 
                                                      >> 1U))))));
            } else {
                __Vtemp646[0U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[0U];
                __Vtemp646[1U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[1U];
                __Vtemp646[2U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[2U];
                __Vtemp646[3U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[3U];
                __Vtemp646[4U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[4U];
                __Vtemp646[5U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[5U];
                __Vtemp646[6U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[6U];
                __Vtemp646[7U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[7U];
            }
            tracep->chgQData(oldp+930,(((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mmio_process)
                                         ? vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_rdata
                                         : (((QData)((IData)(
                                                             __Vtemp646[
                                                             (((IData)(0x3fU) 
                                                               + 
                                                               (0xc0U 
                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                   << 3U))) 
                                                              >> 5U)])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              __Vtemp646[
                                                              (6U 
                                                               & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                  >> 2U))]))))),64);
            tracep->chgBit(oldp+932,((1U & (((2U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state)) 
                                             | ((0x20U 
                                                 == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                                 ? 1U
                                                 : 0U)) 
                                            | ((0x2000U 
                                                == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state)) 
                                               & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_rvalid))))));
            tracep->chgBit(oldp+933,(((IData)(vlSelf->ysyx_22040750__DOT__cpu_pc_ready) 
                                      & (IData)(vlSelf->ysyx_22040750__DOT__cpu_pc_valid))));
            tracep->chgBit(oldp+934,((1U & ((~ (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__pc_e__DOT__IF_valid)) 
                                            | ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__pc_e__DOT__IF_ready_go) 
                                               & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_allowin))))));
            tracep->chgCData(oldp+935,(((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__rd_hit)
                                         ? ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way0_hit)
                                             ? 0xcU
                                             : 3U) : 
                                        ((1U & (((((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_rlast) 
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
            tracep->chgBit(oldp+936,(((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_icache_arready) 
                                      & ((2U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                                          ? 1U : 0U))));
            tracep->chgBit(oldp+937,(((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_arready) 
                                      & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_ar_req)
                                          ? 1U : 0U))));
            tracep->chgBit(oldp+938,((1U & ((((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_rlast) 
                                              & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mmio_process))) 
                                             | ((0x10U 
                                                 == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                                 ? 1U
                                                 : 0U)) 
                                            | ((0x200U 
                                                == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                                ? 1U
                                                : 0U)))));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgCData(oldp+939,(vlSelf->ysyx_22040750__DOT__iaddr),6);
            tracep->chgBit(oldp+940,((1U & (IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen))));
            tracep->chgBit(oldp+941,((1U & ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen) 
                                            >> 1U))));
            tracep->chgBit(oldp+942,((1U & ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen) 
                                            >> 2U))));
            tracep->chgBit(oldp+943,((1U & ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen) 
                                            >> 3U))));
            tracep->chgBit(oldp+944,((1U & ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen) 
                                            >> 4U))));
            tracep->chgBit(oldp+945,((1U & ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen) 
                                            >> 5U))));
            tracep->chgBit(oldp+946,((1U & ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen) 
                                            >> 6U))));
            tracep->chgBit(oldp+947,((1U & ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen) 
                                            >> 7U))));
            tracep->chgBit(oldp+948,(vlSelf->ysyx_22040750__DOT__cpu_pc_valid));
            tracep->chgBit(oldp+949,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_allowin));
            tracep->chgBit(oldp+950,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_allowin));
            tracep->chgBit(oldp+951,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_valid));
            tracep->chgBit(oldp+952,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_allowin));
            tracep->chgBit(oldp+953,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__pc_e__DOT__IF_handshake));
            tracep->chgBit(oldp+954,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_reg_e__DOT__output_valid));
            tracep->chgCData(oldp+955,(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen),8);
            tracep->chgCData(oldp+956,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cen_icache),4);
            tracep->chgQData(oldp+957,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_rdata),64);
            tracep->chgBit(oldp+959,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_icache_rvalid));
            tracep->chgBit(oldp+960,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_rvalid));
            tracep->chgBit(oldp+961,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_icache_rlast));
            tracep->chgBit(oldp+962,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_rlast));
            tracep->chgBit(oldp+963,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_icache_arready));
            tracep->chgBit(oldp+964,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_arready));
            tracep->chgBit(oldp+965,(((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_icache_rvalid) 
                                      & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_icache_rlast))));
            tracep->chgBit(oldp+966,(((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_rvalid) 
                                      & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_rlast))));
            tracep->chgBit(oldp+967,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way0_hit));
            tracep->chgBit(oldp+968,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_hit));
            tracep->chgBit(oldp+969,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__rd_hit));
            tracep->chgBit(oldp+970,(((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__pc_e__DOT__IF_handshake) 
                                      & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__rd_hit)))));
            tracep->chgCData(oldp+971,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__next_state),4);
            tracep->chgSData(oldp+972,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__next_state),15);
            tracep->chgBit(oldp+973,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__rd_handshake));
            tracep->chgCData(oldp+974,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wb_next_state),3);
            tracep->chgBit(oldp+975,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__aw_handshake));
            tracep->chgBit(oldp+976,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_handshake));
            tracep->chgBit(oldp+977,((1U & (~ (IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen)))));
            tracep->chgBit(oldp+978,((1U & (~ ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen) 
                                               >> 1U)))));
            tracep->chgBit(oldp+979,((1U & (~ ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen) 
                                               >> 2U)))));
            tracep->chgBit(oldp+980,((1U & (~ ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen) 
                                               >> 3U)))));
            tracep->chgBit(oldp+981,((1U & (~ ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen) 
                                               >> 4U)))));
            tracep->chgBit(oldp+982,((1U & (~ ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen) 
                                               >> 5U)))));
            tracep->chgBit(oldp+983,((1U & (~ ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen) 
                                               >> 6U)))));
            tracep->chgBit(oldp+984,((1U & (~ ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen) 
                                               >> 7U)))));
        }
        tracep->chgBit(oldp+985,(vlSelf->clock));
        tracep->chgBit(oldp+986,(vlSelf->reset));
        tracep->chgBit(oldp+987,(vlSelf->io_interrupt));
        tracep->chgBit(oldp+988,(vlSelf->io_master_awready));
        tracep->chgBit(oldp+989,(vlSelf->io_master_awvalid));
        tracep->chgCData(oldp+990,(vlSelf->io_master_awid),4);
        tracep->chgIData(oldp+991,(vlSelf->io_master_awaddr),32);
        tracep->chgCData(oldp+992,(vlSelf->io_master_awlen),8);
        tracep->chgCData(oldp+993,(vlSelf->io_master_awsize),3);
        tracep->chgCData(oldp+994,(vlSelf->io_master_awburst),2);
        tracep->chgBit(oldp+995,(vlSelf->io_master_wready));
        tracep->chgBit(oldp+996,(vlSelf->io_master_wvalid));
        tracep->chgQData(oldp+997,(vlSelf->io_master_wdata),64);
        tracep->chgCData(oldp+999,(vlSelf->io_master_wstrb),8);
        tracep->chgBit(oldp+1000,(vlSelf->io_master_wlast));
        tracep->chgBit(oldp+1001,(vlSelf->io_master_bready));
        tracep->chgBit(oldp+1002,(vlSelf->io_master_bvalid));
        tracep->chgCData(oldp+1003,(vlSelf->io_master_bid),4);
        tracep->chgCData(oldp+1004,(vlSelf->io_master_bresp),2);
        tracep->chgBit(oldp+1005,(vlSelf->io_master_arready));
        tracep->chgBit(oldp+1006,(vlSelf->io_master_arvalid));
        tracep->chgCData(oldp+1007,(vlSelf->io_master_arid),4);
        tracep->chgIData(oldp+1008,(vlSelf->io_master_araddr),32);
        tracep->chgCData(oldp+1009,(vlSelf->io_master_arlen),8);
        tracep->chgCData(oldp+1010,(vlSelf->io_master_arsize),3);
        tracep->chgCData(oldp+1011,(vlSelf->io_master_arburst),2);
        tracep->chgBit(oldp+1012,(vlSelf->io_master_rready));
        tracep->chgBit(oldp+1013,(vlSelf->io_master_rvalid));
        tracep->chgCData(oldp+1014,(vlSelf->io_master_rid),4);
        tracep->chgCData(oldp+1015,(vlSelf->io_master_rresp),2);
        tracep->chgQData(oldp+1016,(vlSelf->io_master_rdata),64);
        tracep->chgBit(oldp+1018,(vlSelf->io_master_rlast));
        tracep->chgBit(oldp+1019,(vlSelf->io_slave_awready));
        tracep->chgBit(oldp+1020,(vlSelf->io_slave_awvalid));
        tracep->chgCData(oldp+1021,(vlSelf->io_slave_awid),4);
        tracep->chgIData(oldp+1022,(vlSelf->io_slave_awaddr),32);
        tracep->chgCData(oldp+1023,(vlSelf->io_slave_awlen),8);
        tracep->chgCData(oldp+1024,(vlSelf->io_slave_awsize),3);
        tracep->chgCData(oldp+1025,(vlSelf->io_slave_awburst),2);
        tracep->chgBit(oldp+1026,(vlSelf->io_slave_wready));
        tracep->chgBit(oldp+1027,(vlSelf->io_slave_wvalid));
        tracep->chgQData(oldp+1028,(vlSelf->io_slave_wdata),64);
        tracep->chgCData(oldp+1030,(vlSelf->io_slave_wstrb),8);
        tracep->chgBit(oldp+1031,(vlSelf->io_slave_wlast));
        tracep->chgBit(oldp+1032,(vlSelf->io_slave_bready));
        tracep->chgBit(oldp+1033,(vlSelf->io_slave_bvalid));
        tracep->chgCData(oldp+1034,(vlSelf->io_slave_bid),4);
        tracep->chgCData(oldp+1035,(vlSelf->io_slave_bresp),2);
        tracep->chgBit(oldp+1036,(vlSelf->io_slave_arready));
        tracep->chgBit(oldp+1037,(vlSelf->io_slave_arvalid));
        tracep->chgCData(oldp+1038,(vlSelf->io_slave_arid),4);
        tracep->chgIData(oldp+1039,(vlSelf->io_slave_araddr),32);
        tracep->chgCData(oldp+1040,(vlSelf->io_slave_arlen),8);
        tracep->chgCData(oldp+1041,(vlSelf->io_slave_arsize),3);
        tracep->chgCData(oldp+1042,(vlSelf->io_slave_arburst),2);
        tracep->chgBit(oldp+1043,(vlSelf->io_slave_rready));
        tracep->chgBit(oldp+1044,(vlSelf->io_slave_rvalid));
        tracep->chgCData(oldp+1045,(vlSelf->io_slave_rid),4);
        tracep->chgCData(oldp+1046,(vlSelf->io_slave_rresp),2);
        tracep->chgQData(oldp+1047,(vlSelf->io_slave_rdata),64);
        tracep->chgBit(oldp+1049,(vlSelf->io_slave_rlast));
        tracep->chgQData(oldp+1050,(((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__crossbar_e__DOT__ch0_process)
                                      ? vlSelf->io_master_rdata
                                      : 0ULL)),64);
    }
}

void Vysyx_22040750___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vysyx_22040750___024root* const __restrict vlSelf = static_cast<Vysyx_22040750___024root*>(voidSelf);
    Vysyx_22040750__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    }
}

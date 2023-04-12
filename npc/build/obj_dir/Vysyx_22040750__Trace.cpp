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
    VlWide<4>/*127:0*/ __Vtemp477;
    VlWide<4>/*127:0*/ __Vtemp478;
    VlWide<4>/*127:0*/ __Vtemp481;
    VlWide<4>/*127:0*/ __Vtemp482;
    VlWide<4>/*127:0*/ __Vtemp483;
    VlWide<4>/*127:0*/ __Vtemp484;
    VlWide<4>/*127:0*/ __Vtemp485;
    VlWide<4>/*127:0*/ __Vtemp486;
    VlWide<3>/*95:0*/ __Vtemp488;
    VlWide<3>/*95:0*/ __Vtemp489;
    VlWide<3>/*95:0*/ __Vtemp490;
    VlWide<3>/*95:0*/ __Vtemp491;
    VlWide<3>/*95:0*/ __Vtemp492;
    VlWide<3>/*95:0*/ __Vtemp507;
    VlWide<3>/*95:0*/ __Vtemp508;
    VlWide<3>/*95:0*/ __Vtemp509;
    VlWide<3>/*95:0*/ __Vtemp510;
    VlWide<3>/*95:0*/ __Vtemp511;
    VlWide<4>/*127:0*/ __Vtemp513;
    VlWide<5>/*159:0*/ __Vtemp539;
    VlWide<5>/*159:0*/ __Vtemp541;
    VlWide<8>/*255:0*/ __Vtemp542;
    VlWide<8>/*255:0*/ __Vtemp543;
    VlWide<8>/*255:0*/ __Vtemp545;
    VlWide<8>/*255:0*/ __Vtemp546;
    VlWide<8>/*255:0*/ __Vtemp551;
    VlWide<8>/*255:0*/ __Vtemp554;
    VlWide<8>/*255:0*/ __Vtemp555;
    VlWide<4>/*127:0*/ __Vtemp559;
    VlWide<4>/*127:0*/ __Vtemp563;
    VlWide<4>/*127:0*/ __Vtemp565;
    VlWide<4>/*127:0*/ __Vtemp567;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgCData(oldp+0,(vlSelf->ysyx_22040750__DOT__iaddr),6);
            tracep->chgBit(oldp+1,((1U & (IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen))));
            if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                  ? 1U : 0U)) {
                __Vtemp477[0U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[0U];
                __Vtemp477[1U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[1U];
                __Vtemp477[2U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[2U];
                __Vtemp477[3U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[3U];
            } else {
                __Vtemp477[0U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[0U];
                __Vtemp477[1U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[1U];
                __Vtemp477[2U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[2U];
                __Vtemp477[3U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[3U];
            }
            tracep->chgWData(oldp+2,(__Vtemp477),128);
            __Vtemp478[0U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[0U];
            __Vtemp478[1U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[1U];
            __Vtemp478[2U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[2U];
            __Vtemp478[3U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[3U];
            tracep->chgWData(oldp+6,(__Vtemp478),128);
            tracep->chgWData(oldp+10,(vlSelf->ysyx_22040750__DOT__io_sram0_rdata),128);
            tracep->chgBit(oldp+14,((1U & ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen) 
                                           >> 1U))));
            if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                  ? 1U : 0U)) {
                __Vtemp481[0U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[4U];
                __Vtemp481[1U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[5U];
                __Vtemp481[2U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[6U];
                __Vtemp481[3U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[7U];
            } else {
                __Vtemp481[0U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[4U];
                __Vtemp481[1U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[5U];
                __Vtemp481[2U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[6U];
                __Vtemp481[3U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[7U];
            }
            tracep->chgWData(oldp+15,(__Vtemp481),128);
            __Vtemp482[0U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[4U];
            __Vtemp482[1U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[5U];
            __Vtemp482[2U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[6U];
            __Vtemp482[3U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[7U];
            tracep->chgWData(oldp+19,(__Vtemp482),128);
            tracep->chgWData(oldp+23,(vlSelf->ysyx_22040750__DOT__io_sram1_rdata),128);
            tracep->chgBit(oldp+27,((1U & ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen) 
                                           >> 2U))));
            tracep->chgWData(oldp+28,(vlSelf->ysyx_22040750__DOT__io_sram2_rdata),128);
            tracep->chgBit(oldp+32,((1U & ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen) 
                                           >> 3U))));
            tracep->chgWData(oldp+33,(vlSelf->ysyx_22040750__DOT__io_sram3_rdata),128);
            tracep->chgCData(oldp+37,(vlSelf->ysyx_22040750__DOT__daddr),6);
            tracep->chgBit(oldp+38,((1U & ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen) 
                                           >> 4U))));
            __Vtemp483[0U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[0U];
            __Vtemp483[1U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[1U];
            __Vtemp483[2U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[2U];
            __Vtemp483[3U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[3U];
            tracep->chgWData(oldp+39,(__Vtemp483),128);
            __Vtemp484[0U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[0U];
            __Vtemp484[1U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[1U];
            __Vtemp484[2U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[2U];
            __Vtemp484[3U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[3U];
            tracep->chgWData(oldp+43,(__Vtemp484),128);
            tracep->chgWData(oldp+47,(vlSelf->ysyx_22040750__DOT__io_sram4_rdata),128);
            tracep->chgBit(oldp+51,((1U & ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen) 
                                           >> 5U))));
            __Vtemp485[0U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[4U];
            __Vtemp485[1U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[5U];
            __Vtemp485[2U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[6U];
            __Vtemp485[3U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[7U];
            tracep->chgWData(oldp+52,(__Vtemp485),128);
            __Vtemp486[0U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[4U];
            __Vtemp486[1U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[5U];
            __Vtemp486[2U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[6U];
            __Vtemp486[3U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[7U];
            tracep->chgWData(oldp+56,(__Vtemp486),128);
            tracep->chgWData(oldp+60,(vlSelf->ysyx_22040750__DOT__io_sram5_rdata),128);
            tracep->chgBit(oldp+64,((1U & ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen) 
                                           >> 6U))));
            tracep->chgWData(oldp+65,(vlSelf->ysyx_22040750__DOT__io_sram6_rdata),128);
            tracep->chgBit(oldp+69,((1U & ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen) 
                                           >> 7U))));
            tracep->chgWData(oldp+70,(vlSelf->ysyx_22040750__DOT__io_sram7_rdata),128);
            tracep->chgIData(oldp+74,(vlSelf->ysyx_22040750__DOT__cpu_inst),32);
            tracep->chgQData(oldp+75,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc),64);
            tracep->chgBit(oldp+77,((1U & ((1U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state)) 
                                           | ((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                                               ? 1U
                                               : 0U)))));
            tracep->chgBit(oldp+78,(vlSelf->ysyx_22040750__DOT__cpu_pc_valid));
            tracep->chgBit(oldp+79,(((0U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state)) 
                                     | (1U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state)))));
            tracep->chgQData(oldp+80,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_mem_addr),64);
            tracep->chgBit(oldp+82,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_reg_e__DOT__mem_rd_en));
            tracep->chgBit(oldp+83,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_reg_e__DOT__mem_wr_en));
            tracep->chgQData(oldp+84,((((QData)((IData)(
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
            tracep->chgQData(oldp+86,(vlSelf->ysyx_22040750__DOT__mem_wdata),64);
            tracep->chgBit(oldp+88,((1U & ((2U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state)) 
                                           | ((0x20U 
                                               == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                               ? 1U
                                               : 0U)))));
            tracep->chgBit(oldp+89,((0x40U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))));
            tracep->chgCData(oldp+90,((0xffU & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_wstrb) 
                                                << 
                                                (7U 
                                                 & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_mem_addr))))),8);
            tracep->chgQData(oldp+91,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__current_pc),64);
            tracep->chgQData(oldp+93,((4ULL + vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__current_pc)),64);
            tracep->chgIData(oldp+95,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__current_inst),32);
            tracep->chgQData(oldp+96,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__imm),64);
            tracep->chgQData(oldp+98,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__wr_data),64);
            tracep->chgQData(oldp+100,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr
                                       [(0x1fU & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0xfU))]),64);
            tracep->chgQData(oldp+102,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr
                                       [(0x1fU & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x14U))]),64);
            tracep->chgQData(oldp+104,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op1),64);
            tracep->chgQData(oldp+106,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op2),64);
            tracep->chgQData(oldp+108,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_out),64);
            tracep->chgQData(oldp+110,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__mem_in),64);
            tracep->chgQData(oldp+112,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_rs2),64);
            tracep->chgQData(oldp+114,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__result),64);
            tracep->chgQData(oldp+116,(((2U == (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_intr) 
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
            tracep->chgQData(oldp+118,((((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__csr_alu_e__DOT__op 
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
            tracep->chgCData(oldp+120,((0x1fU & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                 >> 0xfU))),5);
            tracep->chgCData(oldp+121,((0x1fU & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                 >> 0x14U))),5);
            tracep->chgCData(oldp+122,((0x1fU & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                 >> 7U))),5);
            tracep->chgCData(oldp+123,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc_sel),5);
            tracep->chgCData(oldp+124,(((((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__reg_wen) 
                                          & (3U == 
                                             (0x7fU 
                                              & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))) 
                                         << 1U) | ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__reg_wen) 
                                                   & (3U 
                                                      != 
                                                      (0x7fU 
                                                       & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))))),3);
            tracep->chgCData(oldp+125,((((1U & (- (IData)(
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
            tracep->chgCData(oldp+126,((((1U & (- (IData)((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__typeR)))) 
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
            tracep->chgSData(oldp+127,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op_sel),15);
            tracep->chgCData(oldp+128,((0xffU & (((
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
            tracep->chgSData(oldp+129,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__mem_rstrb),9);
            tracep->chgBit(oldp+130,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__reg_wen));
            tracep->chgBit(oldp+131,((0x23U == (0x7fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))));
            tracep->chgBit(oldp+132,(((0x1bU == (0x7fU 
                                                 & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                      | (0x3bU == (0x7fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
            tracep->chgCData(oldp+133,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op_sext),2);
            tracep->chgSData(oldp+134,((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                        >> 0x14U)),12);
            tracep->chgBit(oldp+135,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_wen));
            tracep->chgBit(oldp+136,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_intr));
            tracep->chgBit(oldp+137,((0x30200073U == vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)));
            tracep->chgCData(oldp+138,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_op_sel),7);
            tracep->chgQData(oldp+139,(((0x73U == vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)
                                         ? 0xbULL : 
                                        ((0x100073U 
                                          == vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)
                                          ? 4ULL : 0ULL))),64);
            tracep->chgBit(oldp+141,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_valid));
            tracep->chgQData(oldp+142,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_pc),64);
            tracep->chgIData(oldp+144,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst),32);
            tracep->chgBit(oldp+145,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_allowin));
            tracep->chgBit(oldp+146,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_valid));
            tracep->chgBit(oldp+147,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_stall));
            tracep->chgBit(oldp+148,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_bubble));
            tracep->chgBit(oldp+149,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_reg_e__DOT__input_valid));
            tracep->chgQData(oldp+150,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_imm),64);
            tracep->chgQData(oldp+152,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_pc),64);
            tracep->chgQData(oldp+154,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_rs1),64);
            tracep->chgQData(oldp+156,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_rs2),64);
            tracep->chgQData(oldp+158,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr),64);
            tracep->chgCData(oldp+160,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_rd_addr),5);
            tracep->chgCData(oldp+161,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_wstrb),8);
            tracep->chgSData(oldp+162,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_rstrb),9);
            tracep->chgCData(oldp+163,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_op2_sel),3);
            tracep->chgCData(oldp+164,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_op1_sel),3);
            tracep->chgCData(oldp+165,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_regin_sel),3);
            tracep->chgCData(oldp+166,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_sext),2);
            tracep->chgSData(oldp+167,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel),15);
            tracep->chgBit(oldp+168,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_reg_wen));
            tracep->chgBit(oldp+169,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_mem_wen));
            tracep->chgBit(oldp+170,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_word_op_mask));
            tracep->chgBit(oldp+171,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_valid));
            tracep->chgBit(oldp+172,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_allowin));
            tracep->chgCData(oldp+173,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_stall),2);
            tracep->chgIData(oldp+174,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_inst),32);
            tracep->chgBit(oldp+175,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_bubble));
            tracep->chgBit(oldp+176,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_reg_e__DOT__input_valid));
            tracep->chgBit(oldp+177,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_multicycle));
            tracep->chgBit(oldp+178,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_out_valid));
            tracep->chgSData(oldp+179,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_addr),12);
            tracep->chgBit(oldp+180,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_wen));
            tracep->chgBit(oldp+181,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_intr));
            tracep->chgBit(oldp+182,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_mret));
            tracep->chgCData(oldp+183,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel),7);
            tracep->chgCData(oldp+184,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_uimm),5);
            tracep->chgQData(oldp+185,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_intr_no),64);
            tracep->chgBit(oldp+187,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_valid));
            tracep->chgSData(oldp+188,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_rstrb),9);
            tracep->chgCData(oldp+189,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_wstrb),8);
            tracep->chgQData(oldp+190,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out),64);
            tracep->chgQData(oldp+192,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr),64);
            tracep->chgBit(oldp+194,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_mem_wen));
            tracep->chgQData(oldp+195,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_pc),64);
            tracep->chgBit(oldp+197,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_reg_wen));
            tracep->chgCData(oldp+198,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_rd_addr),5);
            tracep->chgCData(oldp+199,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_regin_sel),3);
            tracep->chgCData(oldp+200,((7U & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_mem_addr))),3);
            tracep->chgBit(oldp+201,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_allowin));
            tracep->chgCData(oldp+202,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_stall),2);
            tracep->chgIData(oldp+203,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_inst),32);
            tracep->chgBit(oldp+204,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_bubble));
            tracep->chgBit(oldp+205,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_reg_e__DOT__input_valid));
            tracep->chgSData(oldp+206,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr_addr),12);
            tracep->chgBit(oldp+207,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr_wen));
            tracep->chgBit(oldp+208,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr_intr));
            tracep->chgBit(oldp+209,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr_mret));
            tracep->chgQData(oldp+210,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr_intr_no),64);
            tracep->chgQData(oldp+212,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_pc),64);
            tracep->chgBit(oldp+214,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_reg_e__DOT__input_valid));
            tracep->chgQData(oldp+215,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_mem_data),64);
            tracep->chgSData(oldp+217,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_mem_rstrb),9);
            tracep->chgQData(oldp+218,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_alu_out),64);
            tracep->chgQData(oldp+220,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr),64);
            tracep->chgBit(oldp+222,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_reg_wen));
            tracep->chgCData(oldp+223,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_rd_addr),5);
            tracep->chgCData(oldp+224,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_regin_sel),3);
            tracep->chgCData(oldp+225,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_shamt),3);
            tracep->chgBit(oldp+226,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_allowin));
            tracep->chgIData(oldp+227,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_inst),32);
            tracep->chgBit(oldp+228,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_bubble));
            tracep->chgCData(oldp+229,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_stall),2);
            tracep->chgSData(oldp+230,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr_addr),12);
            tracep->chgBit(oldp+231,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr_wen));
            tracep->chgBit(oldp+232,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr_intr));
            tracep->chgBit(oldp+233,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr_mret));
            tracep->chgQData(oldp+234,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr_intr_no),64);
            tracep->chgCData(oldp+236,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__stall_en),2);
            tracep->chgQData(oldp+237,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__rs1_forward_data),64);
            tracep->chgQData(oldp+239,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__rs2_forward_data),64);
            tracep->chgQData(oldp+241,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_forward_data),64);
            tracep->chgBit(oldp+243,((1U & (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_regin_sel) 
                                             >> 1U) 
                                            | (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_mem_wen)))));
            tracep->chgBit(oldp+244,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_mem_op));
            tracep->chgQData(oldp+245,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_mem_addr),64);
            tracep->chgQData(oldp+247,(((8U & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc_sel))
                                         ? vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__rs1_forward_data
                                         : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_pc)),64);
            tracep->chgQData(oldp+249,((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__imm 
                                        + ((8U & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc_sel))
                                            ? vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__rs1_forward_data
                                            : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_pc))),64);
            tracep->chgQData(oldp+251,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__npc_e__DOT__dnpc),64);
            tracep->chgBit(oldp+253,((1U & (~ ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc_sel) 
                                               | ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc_sel) 
                                                  >> 4U))))));
            tracep->chgBit(oldp+254,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc_sel) 
                                            >> 4U))));
            tracep->chgWData(oldp+255,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__npc_e__DOT____Vcellinp__nextpc_64bit_3sel__I_sel_data),192);
            tracep->chgCData(oldp+261,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__npc_e__DOT____Vcellinp__nextpc_64bit_3sel__I_sel),3);
            tracep->chgQData(oldp+262,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__npc_e__DOT__nextpc_64bit_3sel__DOT__sel_data[0]),64);
            tracep->chgQData(oldp+264,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__npc_e__DOT__nextpc_64bit_3sel__DOT__sel_data[1]),64);
            tracep->chgQData(oldp+266,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__npc_e__DOT__nextpc_64bit_3sel__DOT__sel_data[2]),64);
            tracep->chgBit(oldp+268,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__pc_e__DOT__IF_ready_go));
            tracep->chgBit(oldp+269,((1U & ((~ (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__pc_e__DOT__IF_valid)) 
                                            | ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__pc_e__DOT__IF_ready_go) 
                                               & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_allowin))))));
            tracep->chgBit(oldp+270,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__pc_e__DOT__IF_handshake));
            tracep->chgBit(oldp+271,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__pc_e__DOT__IF_valid));
            tracep->chgBit(oldp+272,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__pc_e__DOT__IF_en));
            tracep->chgIData(oldp+273,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__pc_e__DOT__inst_cache),32);
            tracep->chgBit(oldp+274,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__pc_e__DOT__cache_valid));
            tracep->chgBit(oldp+275,((1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc_sel)))));
            tracep->chgBit(oldp+276,((1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_stall)))));
            tracep->chgBit(oldp+277,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_regin_sel) 
                                            >> 1U))));
            tracep->chgBit(oldp+278,((0U != (0xfU & 
                                             ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                              >> 0xaU)))));
            tracep->chgBit(oldp+279,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_regin_sel) 
                                            >> 1U))));
            tracep->chgCData(oldp+280,(((0xfffffffeU 
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
            tracep->chgCData(oldp+281,(((0xfffffffeU 
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
            tracep->chgCData(oldp+282,(((0xfffffffeU 
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
            tracep->chgBit(oldp+283,((((0U != (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_stall)) 
                                       & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_regin_sel) 
                                          >> 1U)) | 
                                      ((0U != (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_stall)) 
                                       & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_regin_sel) 
                                          >> 1U)))));
            tracep->chgBit(oldp+284,(((0U != (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_stall)) 
                                      & (0U != (0xfU 
                                                & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                                   >> 0xaU))))));
            tracep->chgBit(oldp+285,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT____Vcellinp__forward_unit_e__I_WB_reg_wen));
            tracep->chgBit(oldp+286,((((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_wen) 
                                       & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_wen)) 
                                      & ((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                          >> 0x14U) 
                                         == (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_addr)))));
            tracep->chgBit(oldp+287,((((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_wen) 
                                       & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr_wen)) 
                                      & ((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                          >> 0x14U) 
                                         == (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr_addr)))));
            tracep->chgBit(oldp+288,((((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_wen) 
                                       & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr_wen)) 
                                      & ((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                          >> 0x14U) 
                                         == (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr_addr)))));
            tracep->chgCData(oldp+289,((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                        >> 0x19U)),7);
            tracep->chgCData(oldp+290,((0x7fU & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)),7);
            tracep->chgCData(oldp+291,((7U & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                              >> 0xcU))),3);
            tracep->chgSData(oldp+292,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__immS),12);
            tracep->chgSData(oldp+293,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__immB),13);
            tracep->chgIData(oldp+294,((0xfffff000U 
                                        & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)),32);
            tracep->chgIData(oldp+295,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__immJ),21);
            tracep->chgBit(oldp+296,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__typeI));
            tracep->chgBit(oldp+297,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__typeR));
            tracep->chgBit(oldp+298,((0x63U == (0x7fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))));
            tracep->chgBit(oldp+299,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__typeU));
            tracep->chgBit(oldp+300,((0x6fU == (0x7fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))));
            tracep->chgBit(oldp+301,((0x73U == (0x7fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))));
            tracep->chgBit(oldp+302,((0x37U == (0x7fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))));
            tracep->chgBit(oldp+303,((0x17U == (0x7fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))));
            tracep->chgBit(oldp+304,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__JALR));
            tracep->chgBit(oldp+305,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__LD));
            tracep->chgBit(oldp+306,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__LW));
            tracep->chgBit(oldp+307,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__LWU));
            tracep->chgBit(oldp+308,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__LH));
            tracep->chgBit(oldp+309,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__LHU));
            tracep->chgBit(oldp+310,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__LB));
            tracep->chgBit(oldp+311,((IData)((0x4003U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+312,((IData)((0x13U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+313,((IData)((0x2013U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+314,((IData)((0x3013U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+315,((IData)((0x4013U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+316,((IData)((0x6013U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+317,((IData)((0x7013U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+318,((IData)(((0x1013U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x1aU))))));
            tracep->chgBit(oldp+319,((IData)(((0x5013U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x1aU))))));
            tracep->chgBit(oldp+320,((IData)(((0x5013U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0x10U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x1aU))))));
            tracep->chgBit(oldp+321,((IData)((0x1bU 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+322,((IData)(((0x101bU 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+323,((IData)(((0x501bU 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+324,((IData)(((0x501bU 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0x20U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+325,((IData)(((0x33U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+326,((IData)(((0x33U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0x20U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+327,((IData)(((0x1033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+328,((IData)(((0x2033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+329,((IData)(((0x3033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+330,((IData)(((0x4033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+331,((IData)(((0x5033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+332,((IData)(((0x5033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0x20U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+333,((IData)(((0x6033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+334,((IData)(((0x7033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+335,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__MUL));
            tracep->chgBit(oldp+336,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__MULH));
            tracep->chgBit(oldp+337,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__MULHSU));
            tracep->chgBit(oldp+338,((IData)(((0x3033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (1U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+339,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__DIV));
            tracep->chgBit(oldp+340,((IData)(((0x5033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (1U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+341,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__REM));
            tracep->chgBit(oldp+342,((IData)(((0x7033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (1U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+343,((IData)(((0x3bU 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+344,((IData)(((0x3bU 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0x20U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+345,((IData)(((0x103bU 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+346,((IData)(((0x503bU 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+347,((IData)(((0x503bU 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0x20U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+348,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__MULW));
            tracep->chgBit(oldp+349,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__DIVW));
            tracep->chgBit(oldp+350,((IData)(((0x503bU 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (1U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+351,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__REMW));
            tracep->chgBit(oldp+352,((IData)(((0x703bU 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (1U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+353,((IData)((0x3023U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+354,((IData)((0x2023U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+355,((IData)((0x1023U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+356,((IData)((0x23U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+357,((IData)((0x63U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+358,((IData)((0x1063U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+359,((IData)((0x4063U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+360,((IData)((0x5063U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+361,((IData)((0x6063U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+362,((IData)((0x7063U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+363,((0x73U == vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)));
            tracep->chgBit(oldp+364,((0x100073U == vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)));
            tracep->chgBit(oldp+365,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__CSRRW));
            tracep->chgBit(oldp+366,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__CSRRS));
            tracep->chgBit(oldp+367,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__CSRRC));
            tracep->chgBit(oldp+368,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__CSRRWI));
            tracep->chgBit(oldp+369,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__CSRRSI));
            tracep->chgBit(oldp+370,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__CSRRCI));
            tracep->chgBit(oldp+371,((((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__CSRRW) 
                                       | (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__CSRRS)) 
                                      | (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__CSRRC))));
            tracep->chgBit(oldp+372,((3U == (0x7fU 
                                             & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))));
            tracep->chgBit(oldp+373,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__typeB_jr));
            tracep->chgBit(oldp+374,((((0x73U == vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst) 
                                       | (0x100073U 
                                          == vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                      | (0x30200073U 
                                         == vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))));
            tracep->chgBit(oldp+375,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__eq));
            tracep->chgBit(oldp+376,((1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__eq)))));
            tracep->chgBit(oldp+377,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__lt));
            tracep->chgBit(oldp+378,((1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__lt)))));
            tracep->chgBit(oldp+379,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__ltu));
            tracep->chgBit(oldp+380,((1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__ltu)))));
            tracep->chgBit(oldp+381,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__add_flag));
            tracep->chgBit(oldp+382,(((IData)(((0x33U 
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
            tracep->chgBit(oldp+383,(((IData)((0x2013U 
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
            tracep->chgBit(oldp+384,(((IData)((0x3013U 
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
            tracep->chgBit(oldp+385,(((IData)((0x4013U 
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
            tracep->chgBit(oldp+386,(((IData)((0x6013U 
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
            tracep->chgBit(oldp+387,(((IData)((0x7013U 
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
            tracep->chgBit(oldp+388,(((((IData)(((0x1013U 
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
            tracep->chgBit(oldp+389,(((((IData)(((0x5013U 
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
            tracep->chgBit(oldp+390,(((((IData)(((0x5013U 
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
            tracep->chgBit(oldp+391,(((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__MUL) 
                                      | (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__MULW))));
            tracep->chgBit(oldp+392,((((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__MULH) 
                                       | (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__MULHSU)) 
                                      | (IData)(((0x3033U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                                 & (1U 
                                                    == 
                                                    (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                     >> 0x19U)))))));
            tracep->chgBit(oldp+393,(((((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__DIV) 
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
            tracep->chgBit(oldp+394,(((((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__REM) 
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
            tracep->chgBit(oldp+395,(((((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__typeR) 
                                        | ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__typeI) 
                                           & (~ (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__JALR)))) 
                                       | (0x23U == 
                                          (0x7fU & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))) 
                                      | (0x73U == (0x7fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+396,(((((0x63U == (0x7fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                        | (0x6fU == 
                                           (0x7fU & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))) 
                                       | (0x17U == 
                                          (0x7fU & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))) 
                                      | (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__JALR))));
            tracep->chgBit(oldp+397,((((((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__typeI) 
                                         & (~ (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__JALR))) 
                                        | (0x23U == 
                                           (0x7fU & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))) 
                                       | (0x63U == 
                                          (0x7fU & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))) 
                                      | (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__typeU))));
            tracep->chgBit(oldp+398,(((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__JALR) 
                                      | (0x6fU == (0x7fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
            tracep->chgWData(oldp+399,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT____Vcellinp__alu_op1_64bit_3sel__I_sel_data),192);
            tracep->chgQData(oldp+405,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op1_64bit_3sel__DOT__sel_data[0]),64);
            tracep->chgQData(oldp+407,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op1_64bit_3sel__DOT__sel_data[1]),64);
            tracep->chgQData(oldp+409,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op1_64bit_3sel__DOT__sel_data[2]),64);
            tracep->chgWData(oldp+411,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT____Vcellinp__alu_op2_64bit_3sel__I_sel_data),192);
            tracep->chgQData(oldp+417,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op2_64bit_3sel__DOT__sel_data[0]),64);
            tracep->chgQData(oldp+419,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op2_64bit_3sel__DOT__sel_data[1]),64);
            tracep->chgQData(oldp+421,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op2_64bit_3sel__DOT__sel_data[2]),64);
            tracep->chgBit(oldp+423,((1U & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel))));
            tracep->chgBit(oldp+424,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                            >> 1U))));
            tracep->chgBit(oldp+425,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                            >> 2U))));
            tracep->chgBit(oldp+426,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                            >> 3U))));
            tracep->chgBit(oldp+427,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                            >> 4U))));
            tracep->chgBit(oldp+428,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                            >> 5U))));
            tracep->chgBit(oldp+429,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                            >> 6U))));
            tracep->chgBit(oldp+430,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                            >> 7U))));
            tracep->chgBit(oldp+431,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                            >> 8U))));
            tracep->chgBit(oldp+432,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                            >> 9U))));
            tracep->chgBit(oldp+433,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+434,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+435,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+436,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+437,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                            >> 0xeU))));
            tracep->chgQData(oldp+438,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__slt_result),64);
            VL_EXTEND_WQ(65,64, __Vtemp488, vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op1);
            VL_EXTEND_WQ(65,64, __Vtemp489, vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__adder2);
            VL_ADD_W(3, __Vtemp490, __Vtemp488, __Vtemp489);
            VL_EXTEND_WQ(65,64, __Vtemp491, vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__cin);
            VL_ADD_W(3, __Vtemp492, __Vtemp490, __Vtemp491);
            tracep->chgQData(oldp+440,((QData)((IData)(
                                                       (1U 
                                                        & (~ 
                                                           (1U 
                                                            & __Vtemp492[2U])))))),64);
            tracep->chgQData(oldp+442,((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op1 
                                        ^ vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op2)),64);
            tracep->chgQData(oldp+444,((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op1 
                                        | vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op2)),64);
            tracep->chgQData(oldp+446,((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op1 
                                        & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op2)),64);
            tracep->chgQData(oldp+448,(((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_word_op_mask)
                                         ? (((QData)((IData)(
                                                             (- (IData)(
                                                                        (1U 
                                                                         & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result)))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__slldw_result 
                                                               >> 0x20U))))
                                         : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__slldw_result)),64);
            tracep->chgQData(oldp+450,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result),64);
            tracep->chgQData(oldp+452,((((- (QData)((IData)(
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
            tracep->chgQData(oldp+454,((((QData)((IData)(
                                                         vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[0U])))),64);
            tracep->chgQData(oldp+456,((((QData)((IData)(
                                                         vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[2U])))),64);
            tracep->chgQData(oldp+458,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__div_result),64);
            tracep->chgQData(oldp+460,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__rem_result),64);
            tracep->chgWData(oldp+462,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__op1_sext),65);
            tracep->chgWData(oldp+465,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__op2_sext),65);
            tracep->chgBit(oldp+468,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_word_op_mask)
                                             ? (IData)(
                                                       (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op1 
                                                        >> 0x1fU))
                                             : (IData)(
                                                       (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op1 
                                                        >> 0x3fU))))));
            tracep->chgBit(oldp+469,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_word_op_mask)
                                             ? (IData)(
                                                       (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op2 
                                                        >> 0x1fU))
                                             : (IData)(
                                                       (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op2 
                                                        >> 0x3fU))))));
            tracep->chgBit(oldp+470,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__sext1));
            tracep->chgBit(oldp+471,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__sext2));
            tracep->chgBit(oldp+472,((IData)((0U != 
                                              (0xc00U 
                                               & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel))))));
            tracep->chgBit(oldp+473,((IData)((0U != 
                                              (0x3000U 
                                               & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel))))));
            tracep->chgBit(oldp+474,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_valid));
            tracep->chgBit(oldp+475,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__div_valid));
            tracep->chgBit(oldp+476,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_out_valid));
            tracep->chgBit(oldp+477,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__div_out_valid));
            tracep->chgQData(oldp+478,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mulh_reg),64);
            tracep->chgQData(oldp+480,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_reg),64);
            tracep->chgQData(oldp+482,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__div_reg),64);
            tracep->chgQData(oldp+484,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__rem_reg),64);
            tracep->chgBit(oldp+486,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_reg_valid));
            tracep->chgBit(oldp+487,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__div_reg_valid));
            tracep->chgQData(oldp+488,((((QData)((IData)(
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
            tracep->chgQData(oldp+490,((((QData)((IData)(
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
            tracep->chgQData(oldp+492,((((QData)((IData)(
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
            tracep->chgQData(oldp+494,((((QData)((IData)(
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
            tracep->chgQData(oldp+496,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__adder2),64);
            tracep->chgQData(oldp+498,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__cin),64);
            VL_EXTEND_WQ(65,64, __Vtemp507, vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op1);
            VL_EXTEND_WQ(65,64, __Vtemp508, vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__adder2);
            VL_ADD_W(3, __Vtemp509, __Vtemp507, __Vtemp508);
            VL_EXTEND_WQ(65,64, __Vtemp510, vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__cin);
            VL_ADD_W(3, __Vtemp511, __Vtemp509, __Vtemp510);
            tracep->chgBit(oldp+500,((1U & __Vtemp511[2U])));
            tracep->chgQData(oldp+501,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__reverse_op1),64);
            tracep->chgQData(oldp+503,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_op),64);
            tracep->chgCData(oldp+505,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__shamt),6);
            tracep->chgQData(oldp+506,(((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_word_op_mask)
                                         ? (~ (0xffffffffULL 
                                               >> (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__shamt)))
                                         : (~ (0xffffffffffffffffULL 
                                               >> (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__shamt))))),64);
            tracep->chgIData(oldp+508,(((0x80U & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel))
                                         ? (IData)(
                                                   (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_op 
                                                    >> 0x20U))
                                         : (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_op))),32);
            tracep->chgQData(oldp+509,(((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_word_op_mask)
                                         ? (QData)((IData)(
                                                           ((0x80U 
                                                             & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel))
                                                             ? (IData)(
                                                                       (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_op 
                                                                        >> 0x20U))
                                                             : (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_op))))
                                         : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_op)),64);
            tracep->chgQData(oldp+511,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result)))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__slldw_result 
                                                           >> 0x20U))))),64);
            tracep->chgQData(oldp+513,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__slldw_result),64);
            tracep->chgQData(oldp+515,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__dword_result),64);
            tracep->chgQData(oldp+517,((((QData)((IData)(
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
            tracep->chgBit(oldp+519,(((1U & ((IData)(
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
            tracep->chgQData(oldp+520,((((QData)((IData)(
                                                         vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__op1_sext[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__op1_sext[0U])))),64);
            tracep->chgQData(oldp+522,((((QData)((IData)(
                                                         vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__op2_sext[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__op2_sext[0U])))),64);
            __Vtemp513[0U] = vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[0U];
            __Vtemp513[1U] = vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[1U];
            __Vtemp513[2U] = vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[2U];
            __Vtemp513[3U] = vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[3U];
            tracep->chgWData(oldp+524,(__Vtemp513),128);
            tracep->chgBit(oldp+528,(((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__op1_sext[1U] 
                                       >> 0x1fU) & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__sext1))));
            tracep->chgBit(oldp+529,(((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__op2_sext[1U] 
                                       >> 0x1fU) & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__sext1))));
            tracep->chgWData(oldp+530,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1),67);
            tracep->chgWData(oldp+533,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2),132);
            __Vtemp539[0U] = ((((~ ((- (IData)((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_negative))) 
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
            __Vtemp539[1U] = ((((~ ((- (IData)((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_negative))) 
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
            __Vtemp539[2U] = ((((~ ((- (IData)((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_negative))) 
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
            __Vtemp539[3U] = ((((~ ((- (IData)((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_negative))) 
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
            __Vtemp539[4U] = ((((~ ((- (IData)((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_negative))) 
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
            __Vtemp541[0U] = (~ __Vtemp539[0U]);
            __Vtemp541[1U] = (~ __Vtemp539[1U]);
            __Vtemp541[2U] = (~ __Vtemp539[2U]);
            __Vtemp541[3U] = (~ __Vtemp539[3U]);
            __Vtemp541[4U] = (0xfU & (~ __Vtemp539[4U]));
            tracep->chgWData(oldp+538,(__Vtemp541),132);
            tracep->chgBit(oldp+543,(((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_double_negative) 
                                      | (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_negative))));
            tracep->chgWData(oldp+544,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__mid_result),132);
            tracep->chgCData(oldp+549,((7U & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])),3);
            tracep->chgWData(oldp+550,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S),132);
            tracep->chgBit(oldp+555,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__mul_process));
            tracep->chgCData(oldp+556,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__iter_cnt),6);
            tracep->chgBit(oldp+557,((1U & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                            >> 2U))));
            tracep->chgBit(oldp+558,((1U & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                            >> 1U))));
            tracep->chgBit(oldp+559,((1U & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])));
            tracep->chgBit(oldp+560,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_negative));
            tracep->chgBit(oldp+561,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_double_negative));
            tracep->chgBit(oldp+562,((1U & ((~ (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                >> 2U)) 
                                            & (((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                 >> 1U) 
                                                & (~ 
                                                   vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])) 
                                               | ((~ 
                                                   (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                    >> 1U)) 
                                                  & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U]))))));
            tracep->chgBit(oldp+563,((1U & (((~ (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                 >> 2U)) 
                                             & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                >> 1U)) 
                                            & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U]))));
            tracep->chgWData(oldp+564,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__abs_dividend),128);
            tracep->chgWData(oldp+568,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__abs_divisor),128);
            tracep->chgWData(oldp+572,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__current_sub_result),128);
            tracep->chgBit(oldp+576,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__current_q));
            tracep->chgBit(oldp+577,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__dividend_flag));
            tracep->chgBit(oldp+578,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__divisor_flag));
            tracep->chgBit(oldp+579,(((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__dividend_flag) 
                                      ^ (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__divisor_flag))));
            tracep->chgQData(oldp+580,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__abs_quotient),64);
            tracep->chgBit(oldp+582,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__div_process));
            tracep->chgCData(oldp+583,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__iter_cnt),6);
            tracep->chgBit(oldp+584,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel) 
                                            >> 5U))));
            tracep->chgBit(oldp+585,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel) 
                                            >> 2U))));
            tracep->chgBit(oldp+586,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel) 
                                            >> 4U))));
            tracep->chgBit(oldp+587,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel) 
                                            >> 1U))));
            tracep->chgBit(oldp+588,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel) 
                                            >> 3U))));
            tracep->chgBit(oldp+589,((1U & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel))));
            tracep->chgBit(oldp+590,((IData)((0U != 
                                              (0x24U 
                                               & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel))))));
            tracep->chgBit(oldp+591,((IData)((0U != 
                                              (0x12U 
                                               & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel))))));
            tracep->chgBit(oldp+592,((IData)((0U != 
                                              (9U & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel))))));
            tracep->chgBit(oldp+593,((0U != (7U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel) 
                                                   >> 3U)))));
            tracep->chgBit(oldp+594,((0U != (7U & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel)))));
            tracep->chgQData(oldp+595,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__csr_alu_e__DOT__op),64);
            tracep->chgQData(oldp+597,((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr 
                                        | vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__csr_alu_e__DOT__op)),64);
            tracep->chgQData(oldp+599,((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr 
                                        & (~ vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__csr_alu_e__DOT__op))),64);
            tracep->chgBit(oldp+601,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_reg_e__DOT__output_valid));
            tracep->chgBit(oldp+602,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_mem_rstrb) 
                                            >> 8U))));
            tracep->chgBit(oldp+603,((1U & (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_mem_rstrb) 
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
            tracep->chgCData(oldp+604,((0xffU & (~ (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_mem_rstrb)))),8);
            tracep->chgQData(oldp+605,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__mem_ld_e__DOT__ld_data),64);
            tracep->chgWData(oldp+607,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT____Vcellinp__regin_64bit_2sel__I_sel_data),128);
            tracep->chgCData(oldp+611,((3U & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_regin_sel))),2);
            tracep->chgQData(oldp+612,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__regin_64bit_2sel__DOT__sel_data[0]),64);
            tracep->chgQData(oldp+614,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__regin_64bit_2sel__DOT__sel_data[1]),64);
            tracep->chgBit(oldp+616,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT____Vcellinp__gpr_e__I_wen));
            tracep->chgQData(oldp+617,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[0]),64);
            tracep->chgQData(oldp+619,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[1]),64);
            tracep->chgQData(oldp+621,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[2]),64);
            tracep->chgQData(oldp+623,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[3]),64);
            tracep->chgQData(oldp+625,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[4]),64);
            tracep->chgQData(oldp+627,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[5]),64);
            tracep->chgQData(oldp+629,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[6]),64);
            tracep->chgQData(oldp+631,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[7]),64);
            tracep->chgQData(oldp+633,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[8]),64);
            tracep->chgQData(oldp+635,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[9]),64);
            tracep->chgQData(oldp+637,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[10]),64);
            tracep->chgQData(oldp+639,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[11]),64);
            tracep->chgQData(oldp+641,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[12]),64);
            tracep->chgQData(oldp+643,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[13]),64);
            tracep->chgQData(oldp+645,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[14]),64);
            tracep->chgQData(oldp+647,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[15]),64);
            tracep->chgQData(oldp+649,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[16]),64);
            tracep->chgQData(oldp+651,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[17]),64);
            tracep->chgQData(oldp+653,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[18]),64);
            tracep->chgQData(oldp+655,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[19]),64);
            tracep->chgQData(oldp+657,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[20]),64);
            tracep->chgQData(oldp+659,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[21]),64);
            tracep->chgQData(oldp+661,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[22]),64);
            tracep->chgQData(oldp+663,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[23]),64);
            tracep->chgQData(oldp+665,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[24]),64);
            tracep->chgQData(oldp+667,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[25]),64);
            tracep->chgQData(oldp+669,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[26]),64);
            tracep->chgQData(oldp+671,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[27]),64);
            tracep->chgQData(oldp+673,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[28]),64);
            tracep->chgQData(oldp+675,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[29]),64);
            tracep->chgQData(oldp+677,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[30]),64);
            tracep->chgQData(oldp+679,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[31]),64);
            tracep->chgBit(oldp+681,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[0]));
            tracep->chgBit(oldp+682,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[1]));
            tracep->chgBit(oldp+683,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[2]));
            tracep->chgBit(oldp+684,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[3]));
            tracep->chgBit(oldp+685,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[4]));
            tracep->chgBit(oldp+686,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[5]));
            tracep->chgBit(oldp+687,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[6]));
            tracep->chgBit(oldp+688,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[7]));
            tracep->chgBit(oldp+689,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[8]));
            tracep->chgBit(oldp+690,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[9]));
            tracep->chgBit(oldp+691,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[10]));
            tracep->chgBit(oldp+692,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[11]));
            tracep->chgBit(oldp+693,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[12]));
            tracep->chgBit(oldp+694,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[13]));
            tracep->chgBit(oldp+695,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[14]));
            tracep->chgBit(oldp+696,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[15]));
            tracep->chgBit(oldp+697,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[16]));
            tracep->chgBit(oldp+698,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[17]));
            tracep->chgBit(oldp+699,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[18]));
            tracep->chgBit(oldp+700,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[19]));
            tracep->chgBit(oldp+701,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[20]));
            tracep->chgBit(oldp+702,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[21]));
            tracep->chgBit(oldp+703,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[22]));
            tracep->chgBit(oldp+704,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[23]));
            tracep->chgBit(oldp+705,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[24]));
            tracep->chgBit(oldp+706,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[25]));
            tracep->chgBit(oldp+707,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[26]));
            tracep->chgBit(oldp+708,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[27]));
            tracep->chgBit(oldp+709,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[28]));
            tracep->chgBit(oldp+710,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[29]));
            tracep->chgBit(oldp+711,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[30]));
            tracep->chgBit(oldp+712,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[31]));
            tracep->chgQData(oldp+713,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mepc),64);
            tracep->chgQData(oldp+715,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mstatus),64);
            tracep->chgQData(oldp+717,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mtvec),64);
            tracep->chgQData(oldp+719,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mcause),64);
            tracep->chgQData(oldp+721,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mscratch),64);
            tracep->chgBit(oldp+723,((1U & (IData)(
                                                   (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mstatus 
                                                    >> 3U)))));
            tracep->chgBit(oldp+724,((1U & (IData)(
                                                   (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mstatus 
                                                    >> 7U)))));
            tracep->chgIData(oldp+725,((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc)),32);
            tracep->chgIData(oldp+726,((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_mem_addr)),32);
            tracep->chgCData(oldp+727,(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen),8);
            tracep->chgCData(oldp+728,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cen_icache),4);
            tracep->chgCData(oldp+729,((((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                                          ? 1U : 0U)
                                         ? 0U : 0xfU)),4);
            __Vtemp542[0U] = vlSelf->ysyx_22040750__DOT__io_sram0_rdata[0U];
            __Vtemp542[1U] = vlSelf->ysyx_22040750__DOT__io_sram0_rdata[1U];
            __Vtemp542[2U] = vlSelf->ysyx_22040750__DOT__io_sram0_rdata[2U];
            __Vtemp542[3U] = vlSelf->ysyx_22040750__DOT__io_sram0_rdata[3U];
            __Vtemp542[4U] = vlSelf->ysyx_22040750__DOT__io_sram1_rdata[0U];
            __Vtemp542[5U] = vlSelf->ysyx_22040750__DOT__io_sram1_rdata[1U];
            __Vtemp542[6U] = vlSelf->ysyx_22040750__DOT__io_sram1_rdata[2U];
            __Vtemp542[7U] = vlSelf->ysyx_22040750__DOT__io_sram1_rdata[3U];
            tracep->chgWData(oldp+730,(__Vtemp542),256);
            __Vtemp543[0U] = vlSelf->ysyx_22040750__DOT__io_sram2_rdata[0U];
            __Vtemp543[1U] = vlSelf->ysyx_22040750__DOT__io_sram2_rdata[1U];
            __Vtemp543[2U] = vlSelf->ysyx_22040750__DOT__io_sram2_rdata[2U];
            __Vtemp543[3U] = vlSelf->ysyx_22040750__DOT__io_sram2_rdata[3U];
            __Vtemp543[4U] = vlSelf->ysyx_22040750__DOT__io_sram3_rdata[0U];
            __Vtemp543[5U] = vlSelf->ysyx_22040750__DOT__io_sram3_rdata[1U];
            __Vtemp543[6U] = vlSelf->ysyx_22040750__DOT__io_sram3_rdata[2U];
            __Vtemp543[7U] = vlSelf->ysyx_22040750__DOT__io_sram3_rdata[3U];
            tracep->chgWData(oldp+738,(__Vtemp543),256);
            tracep->chgWData(oldp+746,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg),256);
            if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                  ? 1U : 0U)) {
                __Vtemp545[0U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[0U];
                __Vtemp545[1U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[1U];
                __Vtemp545[2U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[2U];
                __Vtemp545[3U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[3U];
                __Vtemp545[4U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[4U];
                __Vtemp545[5U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[5U];
                __Vtemp545[6U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[6U];
                __Vtemp545[7U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[7U];
            } else {
                __Vtemp545[0U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[0U];
                __Vtemp545[1U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[1U];
                __Vtemp545[2U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[2U];
                __Vtemp545[3U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[3U];
                __Vtemp545[4U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[4U];
                __Vtemp545[5U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[5U];
                __Vtemp545[6U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[6U];
                __Vtemp545[7U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[7U];
            }
            tracep->chgWData(oldp+754,(__Vtemp545),256);
            tracep->chgCData(oldp+762,(((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__sram_wflag)
                                         ? ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)
                                             ? 0xcU
                                             : 3U) : 0xfU)),4);
            tracep->chgWData(oldp+763,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata),256);
            tracep->chgWData(oldp+771,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata),256);
            tracep->chgWData(oldp+779,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg),256);
            tracep->chgWData(oldp+787,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask),256);
            tracep->chgIData(oldp+795,((0xffffffe0U 
                                        & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr)),32);
            tracep->chgIData(oldp+796,((0xffffffe0U 
                                        & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr)),32);
            tracep->chgBit(oldp+797,(((2U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                                       ? 1U : 0U)));
            tracep->chgBit(oldp+798,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_arvalid));
            if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op) {
                __Vtemp546[0U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[0U];
                __Vtemp546[1U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[1U];
                __Vtemp546[2U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[2U];
                __Vtemp546[3U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[3U];
                __Vtemp546[4U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[4U];
                __Vtemp546[5U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[5U];
                __Vtemp546[6U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[6U];
                __Vtemp546[7U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[7U];
            } else {
                __Vtemp546[0U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[0U];
                __Vtemp546[1U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[1U];
                __Vtemp546[2U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[2U];
                __Vtemp546[3U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[3U];
                __Vtemp546[4U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[4U];
                __Vtemp546[5U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[5U];
                __Vtemp546[6U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[6U];
                __Vtemp546[7U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[7U];
            }
            tracep->chgQData(oldp+799,((((QData)((IData)(
                                                         __Vtemp546[
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
                                                                __Vtemp546[
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
                                                              __Vtemp546[
                                                              (0x7fffffeU 
                                                               & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wdata_cnt) 
                                                                  << 1U))])) 
                                              >> (0x1fU 
                                                  & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wdata_cnt) 
                                                     << 6U)))))),64);
            tracep->chgBit(oldp+801,(((4U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wb_state))
                                       ? 1U : 0U)));
            tracep->chgBit(oldp+802,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_wlast));
            tracep->chgIData(oldp+803,(((2U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wb_state))
                                         ? (0xffffffe0U 
                                            & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr)
                                         : 0U)),32);
            tracep->chgBit(oldp+804,(((2U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wb_state))
                                       ? 1U : 0U)));
            tracep->chgBit(oldp+805,((1U & (((2U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                                              ? 1U : 0U) 
                                            & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_arvalid))))));
            tracep->chgBit(oldp+806,(((~ ((2U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                                           ? 1U : 0U)) 
                                      & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_arvalid))));
            tracep->chgBit(oldp+807,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__crossbar_e__DOT__req_both));
            tracep->chgBit(oldp+808,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__crossbar_e__DOT__resp0));
            tracep->chgBit(oldp+809,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__crossbar_e__DOT__resp1));
            tracep->chgBit(oldp+810,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__crossbar_e__DOT__ch0_process));
            tracep->chgBit(oldp+811,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__crossbar_e__DOT__ch1_process));
            tracep->chgBit(oldp+812,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__crossbar_e__DOT__priority_flag));
            tracep->chgCData(oldp+813,((0x1fU & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc))),5);
            tracep->chgCData(oldp+814,((0x3fU & (IData)(
                                                        (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc 
                                                         >> 5U)))),6);
            tracep->chgIData(oldp+815,((0x1fffffU & (IData)(
                                                            (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc 
                                                             >> 0xbU)))),21);
            tracep->chgCData(oldp+816,((0x1fU & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr)),5);
            tracep->chgCData(oldp+817,((0x3fU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                 >> 5U))),6);
            tracep->chgIData(oldp+818,((vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                        >> 0xbU)),21);
            tracep->chgIData(oldp+819,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr),32);
            tracep->chgWData(oldp+820,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table),128);
            tracep->chgIData(oldp+824,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
                                       [(0x7eU & ((IData)(
                                                          (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc 
                                                           >> 5U)) 
                                                  << 1U))]),21);
            tracep->chgIData(oldp+825,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
                                       [(1U | (0x7eU 
                                               & ((IData)(
                                                          (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc 
                                                           >> 5U)) 
                                                  << 1U)))]),21);
            tracep->chgBit(oldp+826,((1U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
                                            (3U & ((IData)(
                                                           (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc 
                                                            >> 5U)) 
                                                   >> 4U))] 
                                            >> (0x1eU 
                                                & ((IData)(
                                                           (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc 
                                                            >> 5U)) 
                                                   << 1U))))));
            tracep->chgBit(oldp+827,((1U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
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
            tracep->chgBit(oldp+828,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way0_hit));
            tracep->chgBit(oldp+829,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_hit));
            tracep->chgBit(oldp+830,((1U & (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                                              ? 1U : 0U) 
                                            & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace))))));
            tracep->chgBit(oldp+831,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
            if ((1U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))) {
                __Vtemp551[0U] = ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way0_hit)
                                   ? vlSelf->ysyx_22040750__DOT__io_sram0_rdata[0U]
                                   : vlSelf->ysyx_22040750__DOT__io_sram2_rdata[0U]);
                __Vtemp551[1U] = ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way0_hit)
                                   ? vlSelf->ysyx_22040750__DOT__io_sram0_rdata[1U]
                                   : vlSelf->ysyx_22040750__DOT__io_sram2_rdata[1U]);
                __Vtemp551[2U] = ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way0_hit)
                                   ? vlSelf->ysyx_22040750__DOT__io_sram0_rdata[2U]
                                   : vlSelf->ysyx_22040750__DOT__io_sram2_rdata[2U]);
                __Vtemp551[3U] = ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way0_hit)
                                   ? vlSelf->ysyx_22040750__DOT__io_sram0_rdata[3U]
                                   : vlSelf->ysyx_22040750__DOT__io_sram2_rdata[3U]);
                __Vtemp551[4U] = ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way0_hit)
                                   ? vlSelf->ysyx_22040750__DOT__io_sram1_rdata[0U]
                                   : vlSelf->ysyx_22040750__DOT__io_sram3_rdata[0U]);
                __Vtemp551[5U] = ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way0_hit)
                                   ? vlSelf->ysyx_22040750__DOT__io_sram1_rdata[1U]
                                   : vlSelf->ysyx_22040750__DOT__io_sram3_rdata[1U]);
                __Vtemp551[6U] = ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way0_hit)
                                   ? vlSelf->ysyx_22040750__DOT__io_sram1_rdata[2U]
                                   : vlSelf->ysyx_22040750__DOT__io_sram3_rdata[2U]);
                __Vtemp551[7U] = ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way0_hit)
                                   ? vlSelf->ysyx_22040750__DOT__io_sram1_rdata[3U]
                                   : vlSelf->ysyx_22040750__DOT__io_sram3_rdata[3U]);
            } else {
                __Vtemp551[0U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[0U];
                __Vtemp551[1U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[1U];
                __Vtemp551[2U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[2U];
                __Vtemp551[3U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[3U];
                __Vtemp551[4U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[4U];
                __Vtemp551[5U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[5U];
                __Vtemp551[6U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[6U];
                __Vtemp551[7U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[7U];
            }
            tracep->chgWData(oldp+832,(__Vtemp551),256);
            if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way0_hit) {
                __Vtemp554[0U] = vlSelf->ysyx_22040750__DOT__io_sram0_rdata[0U];
                __Vtemp554[1U] = vlSelf->ysyx_22040750__DOT__io_sram0_rdata[1U];
                __Vtemp554[2U] = vlSelf->ysyx_22040750__DOT__io_sram0_rdata[2U];
                __Vtemp554[3U] = vlSelf->ysyx_22040750__DOT__io_sram0_rdata[3U];
                __Vtemp554[4U] = vlSelf->ysyx_22040750__DOT__io_sram1_rdata[0U];
                __Vtemp554[5U] = vlSelf->ysyx_22040750__DOT__io_sram1_rdata[1U];
                __Vtemp554[6U] = vlSelf->ysyx_22040750__DOT__io_sram1_rdata[2U];
                __Vtemp554[7U] = vlSelf->ysyx_22040750__DOT__io_sram1_rdata[3U];
            } else {
                __Vtemp554[0U] = vlSelf->ysyx_22040750__DOT__io_sram2_rdata[0U];
                __Vtemp554[1U] = vlSelf->ysyx_22040750__DOT__io_sram2_rdata[1U];
                __Vtemp554[2U] = vlSelf->ysyx_22040750__DOT__io_sram2_rdata[2U];
                __Vtemp554[3U] = vlSelf->ysyx_22040750__DOT__io_sram2_rdata[3U];
                __Vtemp554[4U] = vlSelf->ysyx_22040750__DOT__io_sram3_rdata[0U];
                __Vtemp554[5U] = vlSelf->ysyx_22040750__DOT__io_sram3_rdata[1U];
                __Vtemp554[6U] = vlSelf->ysyx_22040750__DOT__io_sram3_rdata[2U];
                __Vtemp554[7U] = vlSelf->ysyx_22040750__DOT__io_sram3_rdata[3U];
            }
            tracep->chgWData(oldp+840,(__Vtemp554),256);
            tracep->chgBit(oldp+848,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__rd_hit));
            tracep->chgBit(oldp+849,(((IData)(vlSelf->ysyx_22040750__DOT__cpu_pc_valid) 
                                      & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__rd_hit)))));
            tracep->chgBit(oldp+850,((4U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))));
            tracep->chgBit(oldp+851,(((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                                       ? 1U : 0U)));
            tracep->chgCData(oldp+852,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state),4);
            tracep->chgBit(oldp+853,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mmio_flag));
            tracep->chgSData(oldp+854,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state),13);
            tracep->chgBit(oldp+855,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__replace_dirty));
            tracep->chgBit(oldp+856,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__rd_hit));
            tracep->chgBit(oldp+857,((((~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit)) 
                                       & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_reg_e__DOT__mem_rd_en)) 
                                      & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mmio_flag)))));
            tracep->chgBit(oldp+858,(((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)));
            tracep->chgBit(oldp+859,(((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)));
            tracep->chgBit(oldp+860,(((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)));
            tracep->chgBit(oldp+861,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit));
            tracep->chgBit(oldp+862,((((~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit)) 
                                       & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_reg_e__DOT__mem_wr_en)) 
                                      & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mmio_flag)))));
            tracep->chgBit(oldp+863,(((0x100U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)));
            tracep->chgBit(oldp+864,(((0x200U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)));
            tracep->chgBit(oldp+865,(((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)));
            tracep->chgCData(oldp+866,((0x1fU & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_mem_addr))),5);
            tracep->chgCData(oldp+867,((0x1fU & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr)),5);
            tracep->chgCData(oldp+868,((0x3fU & (IData)(
                                                        (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_mem_addr 
                                                         >> 5U)))),6);
            tracep->chgCData(oldp+869,((0x3fU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                 >> 5U))),6);
            tracep->chgIData(oldp+870,((0x1fffffU & (IData)(
                                                            (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_mem_addr 
                                                             >> 0xbU)))),21);
            tracep->chgIData(oldp+871,((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                        >> 0xbU)),21);
            tracep->chgIData(oldp+872,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr),32);
            tracep->chgCData(oldp+873,((0xffU & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cpu_mask_reg)))),8);
            tracep->chgIData(oldp+874,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__sram_wmaskB),32);
            tracep->chgQData(oldp+875,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cpu_reg),64);
            tracep->chgCData(oldp+877,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cpu_mask_reg),8);
            tracep->chgBit(oldp+878,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__sram_wflag));
            tracep->chgWData(oldp+879,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table),128);
            tracep->chgWData(oldp+883,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table),128);
            tracep->chgIData(oldp+887,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
                                       [(0x7eU & ((IData)(
                                                          (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_mem_addr 
                                                           >> 5U)) 
                                                  << 1U))]),21);
            tracep->chgIData(oldp+888,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
                                       [(1U | (0x7eU 
                                               & ((IData)(
                                                          (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_mem_addr 
                                                           >> 5U)) 
                                                  << 1U)))]),21);
            tracep->chgBit(oldp+889,((1U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
                                            (3U & ((IData)(
                                                           (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_mem_addr 
                                                            >> 5U)) 
                                                   >> 4U))] 
                                            >> (0x1eU 
                                                & ((IData)(
                                                           (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_mem_addr 
                                                            >> 5U)) 
                                                   << 1U))))));
            tracep->chgBit(oldp+890,((1U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
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
            tracep->chgBit(oldp+891,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way0_hit));
            tracep->chgBit(oldp+892,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit));
            tracep->chgBit(oldp+893,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit));
            tracep->chgBit(oldp+894,((1U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
                                            (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                   >> 9U))] 
                                            >> (0x1eU 
                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                   >> 4U))))));
            tracep->chgBit(oldp+895,((1U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
                                            (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                   >> 9U))] 
                                            >> (0x1fU 
                                                & (1U 
                                                   | (0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U))))))));
            tracep->chgBit(oldp+896,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
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
                                               & (~ 
                                                  (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
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
            tracep->chgBit(oldp+897,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op));
            tracep->chgCData(oldp+898,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wb_state),3);
            tracep->chgCData(oldp+899,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wdata_cnt),2);
            if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op) {
                __Vtemp555[0U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[0U];
                __Vtemp555[1U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[1U];
                __Vtemp555[2U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[2U];
                __Vtemp555[3U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[3U];
                __Vtemp555[4U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[4U];
                __Vtemp555[5U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[5U];
                __Vtemp555[6U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[6U];
                __Vtemp555[7U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[7U];
            } else {
                __Vtemp555[0U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[0U];
                __Vtemp555[1U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[1U];
                __Vtemp555[2U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[2U];
                __Vtemp555[3U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[3U];
                __Vtemp555[4U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[4U];
                __Vtemp555[5U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[5U];
                __Vtemp555[6U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[6U];
                __Vtemp555[7U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[7U];
            }
            tracep->chgWData(oldp+900,(__Vtemp555),256);
            tracep->chgBit(oldp+908,((1U & (~ (IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen)))));
            __Vtemp559[0U] = (~ (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                                   ? 1U : 0U) ? Vysyx_22040750__ConstPool__CONST_9e67c271_0[0U]
                                  : Vysyx_22040750__ConstPool__CONST_5b979007_0[0U]));
            __Vtemp559[1U] = (~ (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                                   ? 1U : 0U) ? Vysyx_22040750__ConstPool__CONST_9e67c271_0[1U]
                                  : Vysyx_22040750__ConstPool__CONST_5b979007_0[1U]));
            __Vtemp559[2U] = (~ (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                                   ? 1U : 0U) ? Vysyx_22040750__ConstPool__CONST_9e67c271_0[2U]
                                  : Vysyx_22040750__ConstPool__CONST_5b979007_0[2U]));
            __Vtemp559[3U] = (~ (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                                   ? 1U : 0U) ? Vysyx_22040750__ConstPool__CONST_9e67c271_0[3U]
                                  : Vysyx_22040750__ConstPool__CONST_5b979007_0[3U]));
            tracep->chgWData(oldp+909,(__Vtemp559),128);
            tracep->chgBit(oldp+913,((1U & (~ ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen) 
                                               >> 1U)))));
            __Vtemp563[0U] = (~ (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                                   ? 1U : 0U) ? Vysyx_22040750__ConstPool__CONST_9e67c271_0[4U]
                                  : Vysyx_22040750__ConstPool__CONST_5b979007_0[4U]));
            __Vtemp563[1U] = (~ (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                                   ? 1U : 0U) ? Vysyx_22040750__ConstPool__CONST_9e67c271_0[5U]
                                  : Vysyx_22040750__ConstPool__CONST_5b979007_0[5U]));
            __Vtemp563[2U] = (~ (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                                   ? 1U : 0U) ? Vysyx_22040750__ConstPool__CONST_9e67c271_0[6U]
                                  : Vysyx_22040750__ConstPool__CONST_5b979007_0[6U]));
            __Vtemp563[3U] = (~ (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                                   ? 1U : 0U) ? Vysyx_22040750__ConstPool__CONST_9e67c271_0[7U]
                                  : Vysyx_22040750__ConstPool__CONST_5b979007_0[7U]));
            tracep->chgWData(oldp+914,(__Vtemp563),128);
            tracep->chgBit(oldp+918,((1U & (~ ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen) 
                                               >> 2U)))));
            tracep->chgBit(oldp+919,((1U & (~ ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen) 
                                               >> 3U)))));
            tracep->chgBit(oldp+920,((1U & (~ ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen) 
                                               >> 4U)))));
            __Vtemp565[0U] = (~ vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[0U]);
            __Vtemp565[1U] = (~ vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[1U]);
            __Vtemp565[2U] = (~ vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[2U]);
            __Vtemp565[3U] = (~ vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[3U]);
            tracep->chgWData(oldp+921,(__Vtemp565),128);
            tracep->chgBit(oldp+925,((1U & (~ ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen) 
                                               >> 5U)))));
            __Vtemp567[0U] = (~ vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[4U]);
            __Vtemp567[1U] = (~ vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[5U]);
            __Vtemp567[2U] = (~ vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[6U]);
            __Vtemp567[3U] = (~ vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[7U]);
            tracep->chgWData(oldp+926,(__Vtemp567),128);
            tracep->chgBit(oldp+930,((1U & (~ ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen) 
                                               >> 6U)))));
            tracep->chgBit(oldp+931,((1U & (~ ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen) 
                                               >> 7U)))));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+932,((1U & (IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen))));
            tracep->chgBit(oldp+933,((1U & ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen) 
                                            >> 1U))));
            tracep->chgBit(oldp+934,((1U & ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen) 
                                            >> 2U))));
            tracep->chgBit(oldp+935,((1U & ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen) 
                                            >> 3U))));
            tracep->chgBit(oldp+936,((1U & ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen) 
                                            >> 4U))));
            tracep->chgBit(oldp+937,((1U & ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen) 
                                            >> 5U))));
            tracep->chgBit(oldp+938,((1U & ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen) 
                                            >> 6U))));
            tracep->chgBit(oldp+939,((1U & ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen) 
                                            >> 7U))));
            tracep->chgCData(oldp+940,(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen),8);
            tracep->chgBit(oldp+941,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_icache_rvalid));
            tracep->chgBit(oldp+942,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_rvalid));
            tracep->chgBit(oldp+943,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_icache_rlast));
            tracep->chgBit(oldp+944,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_rlast));
            tracep->chgBit(oldp+945,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_icache_arready));
            tracep->chgBit(oldp+946,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_arready));
            tracep->chgBit(oldp+947,(((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_icache_rvalid) 
                                      & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_icache_rlast))));
            tracep->chgBit(oldp+948,(((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_rvalid) 
                                      & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_rlast))));
            tracep->chgCData(oldp+949,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__next_state),4);
            tracep->chgSData(oldp+950,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__next_state),13);
            tracep->chgBit(oldp+951,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__rd_handshake));
            tracep->chgCData(oldp+952,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wb_next_state),3);
            tracep->chgBit(oldp+953,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_handshake));
            tracep->chgBit(oldp+954,((1U & (~ (IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen)))));
            tracep->chgBit(oldp+955,((1U & (~ ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen) 
                                               >> 1U)))));
            tracep->chgBit(oldp+956,((1U & (~ ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen) 
                                               >> 2U)))));
            tracep->chgBit(oldp+957,((1U & (~ ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen) 
                                               >> 3U)))));
            tracep->chgBit(oldp+958,((1U & (~ ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen) 
                                               >> 4U)))));
            tracep->chgBit(oldp+959,((1U & (~ ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen) 
                                               >> 5U)))));
            tracep->chgBit(oldp+960,((1U & (~ ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen) 
                                               >> 6U)))));
            tracep->chgBit(oldp+961,((1U & (~ ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen) 
                                               >> 7U)))));
        }
        tracep->chgBit(oldp+962,(vlSelf->clock));
        tracep->chgBit(oldp+963,(vlSelf->reset));
        tracep->chgBit(oldp+964,(vlSelf->io_interrupt));
        tracep->chgBit(oldp+965,(vlSelf->io_master_awready));
        tracep->chgBit(oldp+966,(vlSelf->io_master_awvalid));
        tracep->chgCData(oldp+967,(vlSelf->io_master_awid),4);
        tracep->chgIData(oldp+968,(vlSelf->io_master_awaddr),32);
        tracep->chgCData(oldp+969,(vlSelf->io_master_awlen),8);
        tracep->chgCData(oldp+970,(vlSelf->io_master_awsize),3);
        tracep->chgCData(oldp+971,(vlSelf->io_master_awburst),2);
        tracep->chgBit(oldp+972,(vlSelf->io_master_wready));
        tracep->chgBit(oldp+973,(vlSelf->io_master_wvalid));
        tracep->chgQData(oldp+974,(vlSelf->io_master_wdata),64);
        tracep->chgCData(oldp+976,(vlSelf->io_master_wstrb),8);
        tracep->chgBit(oldp+977,(vlSelf->io_master_wlast));
        tracep->chgBit(oldp+978,(vlSelf->io_master_bready));
        tracep->chgBit(oldp+979,(vlSelf->io_master_bvalid));
        tracep->chgCData(oldp+980,(vlSelf->io_master_bid),4);
        tracep->chgCData(oldp+981,(vlSelf->io_master_bresp),2);
        tracep->chgBit(oldp+982,(vlSelf->io_master_arready));
        tracep->chgBit(oldp+983,(vlSelf->io_master_arvalid));
        tracep->chgCData(oldp+984,(vlSelf->io_master_arid),4);
        tracep->chgIData(oldp+985,(vlSelf->io_master_araddr),32);
        tracep->chgCData(oldp+986,(vlSelf->io_master_arlen),8);
        tracep->chgCData(oldp+987,(vlSelf->io_master_arsize),3);
        tracep->chgCData(oldp+988,(vlSelf->io_master_arburst),2);
        tracep->chgBit(oldp+989,(vlSelf->io_master_rready));
        tracep->chgBit(oldp+990,(vlSelf->io_master_rvalid));
        tracep->chgCData(oldp+991,(vlSelf->io_master_rid),4);
        tracep->chgCData(oldp+992,(vlSelf->io_master_rresp),2);
        tracep->chgQData(oldp+993,(vlSelf->io_master_rdata),64);
        tracep->chgBit(oldp+995,(vlSelf->io_master_rlast));
        tracep->chgBit(oldp+996,(vlSelf->io_slave_awready));
        tracep->chgBit(oldp+997,(vlSelf->io_slave_awvalid));
        tracep->chgCData(oldp+998,(vlSelf->io_slave_awid),4);
        tracep->chgIData(oldp+999,(vlSelf->io_slave_awaddr),32);
        tracep->chgCData(oldp+1000,(vlSelf->io_slave_awlen),8);
        tracep->chgCData(oldp+1001,(vlSelf->io_slave_awsize),3);
        tracep->chgCData(oldp+1002,(vlSelf->io_slave_awburst),2);
        tracep->chgBit(oldp+1003,(vlSelf->io_slave_wready));
        tracep->chgBit(oldp+1004,(vlSelf->io_slave_wvalid));
        tracep->chgQData(oldp+1005,(vlSelf->io_slave_wdata),64);
        tracep->chgCData(oldp+1007,(vlSelf->io_slave_wstrb),8);
        tracep->chgBit(oldp+1008,(vlSelf->io_slave_wlast));
        tracep->chgBit(oldp+1009,(vlSelf->io_slave_bready));
        tracep->chgBit(oldp+1010,(vlSelf->io_slave_bvalid));
        tracep->chgCData(oldp+1011,(vlSelf->io_slave_bid),4);
        tracep->chgCData(oldp+1012,(vlSelf->io_slave_bresp),2);
        tracep->chgBit(oldp+1013,(vlSelf->io_slave_arready));
        tracep->chgBit(oldp+1014,(vlSelf->io_slave_arvalid));
        tracep->chgCData(oldp+1015,(vlSelf->io_slave_arid),4);
        tracep->chgIData(oldp+1016,(vlSelf->io_slave_araddr),32);
        tracep->chgCData(oldp+1017,(vlSelf->io_slave_arlen),8);
        tracep->chgCData(oldp+1018,(vlSelf->io_slave_arsize),3);
        tracep->chgCData(oldp+1019,(vlSelf->io_slave_arburst),2);
        tracep->chgBit(oldp+1020,(vlSelf->io_slave_rready));
        tracep->chgBit(oldp+1021,(vlSelf->io_slave_rvalid));
        tracep->chgCData(oldp+1022,(vlSelf->io_slave_rid),4);
        tracep->chgCData(oldp+1023,(vlSelf->io_slave_rresp),2);
        tracep->chgQData(oldp+1024,(vlSelf->io_slave_rdata),64);
        tracep->chgBit(oldp+1026,(vlSelf->io_slave_rlast));
        tracep->chgCData(oldp+1027,(((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__rd_hit)
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
        tracep->chgQData(oldp+1028,(((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__crossbar_e__DOT__ch0_process)
                                      ? vlSelf->io_master_rdata
                                      : 0ULL)),64);
        tracep->chgQData(oldp+1030,(((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__crossbar_e__DOT__ch1_process)
                                      ? vlSelf->io_master_rdata
                                      : 0ULL)),64);
        tracep->chgBit(oldp+1032,(((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_icache_arready) 
                                   & ((2U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                                       ? 1U : 0U))));
        tracep->chgBit(oldp+1033,(((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_arready) 
                                   & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_arvalid))));
        tracep->chgBit(oldp+1034,((1U & (((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_rlast) 
                                          | ((0x10U 
                                              == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                              ? 1U : 0U)) 
                                         | ((0x200U 
                                             == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                             ? 1U : 0U)))));
        tracep->chgBit(oldp+1035,(((IData)(vlSelf->io_master_awready) 
                                   & ((2U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wb_state))
                                       ? 1U : 0U))));
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

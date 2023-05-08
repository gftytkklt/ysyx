// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040750.h for the primary calling header

#include "Vysyx_22040750___024root.h"
#include "Vysyx_22040750__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vysyx_22040750___024root___sequent__TOP__4(Vysyx_22040750___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040750__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040750___024root___sequent__TOP__4\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp245;
    VlWide<3>/*95:0*/ __Vtemp247;
    VlWide<4>/*127:0*/ __Vtemp250;
    VlWide<4>/*127:0*/ __Vtemp253;
    VlWide<4>/*127:0*/ __Vtemp255;
    VlWide<4>/*127:0*/ __Vtemp256;
    VlWide<8>/*255:0*/ __Vtemp277;
    VlWide<5>/*159:0*/ __Vtemp279;
    VlWide<3>/*95:0*/ __Vtemp296;
    VlWide<3>/*95:0*/ __Vtemp297;
    CData/*31:0*/ __Vtemp306;
    QData/*63:0*/ __Vtemp270;
    // Body
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v336 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v337 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v337 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v337 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v338 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x70U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v338 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v339 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v340 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v340 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v340 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v341 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x71U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v341 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v342 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v343 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v343 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v343 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v344 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x72U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v344 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v345 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v346 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v346 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v346 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v347 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x73U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v347 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v348 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v349 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v349 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v349 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v350 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x74U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v350 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v351 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v352 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v352 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v352 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v353 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x75U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v353 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v354 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v355 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v355 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v355 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v356 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x76U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v356 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v357 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v358 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v358 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v358 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v359 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x77U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v359 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v360 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v361 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v361 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v361 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v362 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x78U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v362 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v363 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v364 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v364 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v364 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v365 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x79U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v365 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v366 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v367 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v367 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v367 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v368 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x7aU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v368 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v369 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v370 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v370 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v370 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v371 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x7bU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v371 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v372 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v373 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v373 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v373 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v374 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x7cU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v374 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v375 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v376 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v376 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v376 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v377 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x7dU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v377 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v378 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v379 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v379 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v379 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v380 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x7eU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v380 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v381 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v382 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v382 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v382 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v383 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x7fU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v383 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out = 0ULL;
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_regin_sel = 0U;
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
            = (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_valid) 
                & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_allowin))
                ? vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_out
                : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out);
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_regin_sel 
            = (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_allowin) 
                & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_valid))
                ? (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_regin_sel)
                : (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_regin_sel));
    }
    vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_reg_e__DOT__input_valid 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_allowin)
                                          ? (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_valid)
                                          : (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_reg_e__DOT__input_valid)));
    vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_reg_e__DOT__input_valid 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_allowin)
                                          ? (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_valid)
                                          : (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_reg_e__DOT__input_valid)));
    vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_reg_wen 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_allowin) 
                                          & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_valid))
                                          ? (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_reg_wen)
                                          : (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_reg_wen)));
    if (vlSelf->reset) {
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_rd_addr = 0U;
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_rd_addr = 0U;
    } else {
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_rd_addr 
            = (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_allowin) 
                & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_valid))
                ? (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_rd_addr)
                : (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_rd_addr));
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_rd_addr 
            = (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_valid) 
                & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_allowin))
                ? (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_rd_addr)
                : (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_rd_addr));
    }
    vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_reg_valid 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_out_valid) 
                                          & (~ (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_allowin))) 
                                         | ((~ ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_reg_valid) 
                                                & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_allowin))) 
                                            & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_reg_valid))));
    vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__div_reg_valid 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__div_out_valid) 
                                          & (~ (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_allowin))) 
                                         | ((~ ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__div_reg_valid) 
                                                & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_allowin))) 
                                            & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__div_reg_valid))));
    vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_reg_e__DOT__input_valid 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_allowin)
                                          ? (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_valid)
                                          : (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_reg_e__DOT__input_valid)));
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v0 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v1 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v1 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v1 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v2 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v2 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v3 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v4 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v4 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v4 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v5 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [1U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v5 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v6 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v7 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v7 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v7 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v8 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [2U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v8 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v9 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v10 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v10 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v10 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v11 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [3U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v11 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v12 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v13 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v13 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v13 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v14 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [4U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v14 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v15 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v16 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v16 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v16 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v17 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [5U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v17 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v18 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v19 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v19 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v19 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v20 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [6U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v20 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v21 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v22 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v22 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v22 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v23 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [7U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v23 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v24 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v25 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v25 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v25 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v26 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [8U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v26 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v27 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v28 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v28 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v28 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v29 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [9U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v29 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v30 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v31 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v31 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v31 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v32 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0xaU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v32 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v33 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v34 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v34 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v34 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v35 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0xbU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v35 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v36 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v37 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v37 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v37 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v38 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0xcU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v38 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v39 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v40 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v40 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v40 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v41 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0xdU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v41 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v42 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v43 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v43 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v43 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v44 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0xeU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v44 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v45 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v46 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v46 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v46 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v47 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0xfU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v47 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v48 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v49 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v49 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v49 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v50 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x10U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v50 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v51 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v52 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v52 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v52 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v53 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x11U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v53 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v54 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v55 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v55 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v55 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v56 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x12U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v56 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v57 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v58 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v58 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v58 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v59 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x13U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v59 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v60 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v61 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v61 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v61 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v62 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x14U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v62 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v63 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v64 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v64 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v64 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v65 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x15U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v65 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v66 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v67 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v67 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v67 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v68 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x16U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v68 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v69 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v70 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v70 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v70 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v71 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x17U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v71 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v72 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v73 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v73 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v73 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v74 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x18U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v74 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v75 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v76 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v76 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v76 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v77 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x19U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v77 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v78 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v79 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v79 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v79 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v80 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x1aU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v80 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v81 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v82 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v82 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v82 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v83 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x1bU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v83 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v84 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v85 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v85 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v85 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v86 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x1cU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v86 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v87 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v88 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v88 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v88 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v89 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x1dU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v89 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v90 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v91 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v91 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v91 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v92 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x1eU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v92 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v93 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v94 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v94 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v94 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v95 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x1fU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v95 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v96 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v97 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v97 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v97 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v98 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x20U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v98 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v99 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v100 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v100 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v100 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v101 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x21U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v101 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v102 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v103 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v103 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v103 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v104 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x22U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v104 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v105 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v106 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v106 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v106 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v107 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x23U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v107 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v108 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v109 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v109 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v109 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v110 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x24U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v110 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v111 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v112 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v112 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v112 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v113 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x25U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v113 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v114 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v115 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v115 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v115 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v116 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x26U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v116 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v117 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v118 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v118 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v118 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v119 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x27U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v119 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v120 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v121 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v121 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v121 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v122 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x28U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v122 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v123 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v124 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v124 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v124 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v125 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x29U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v125 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v126 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v127 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v127 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v127 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v128 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x2aU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v128 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v129 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v130 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v130 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v130 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v131 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x2bU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v131 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v132 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v133 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v133 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v133 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v134 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x2cU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v134 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v135 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v136 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v136 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v136 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v137 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x2dU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v137 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v138 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v139 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v139 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v139 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v140 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x2eU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v140 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v141 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v142 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v142 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v142 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v143 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x2fU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v143 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v144 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v145 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v145 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v145 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v146 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x30U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v146 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v147 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v148 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v148 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v148 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v149 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x31U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v149 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v150 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v151 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v151 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v151 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v152 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x32U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v152 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v153 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v154 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v154 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v154 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v155 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x33U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v155 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v156 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v157 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v157 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v157 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v158 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x34U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v158 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v159 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v160 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v160 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v160 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v161 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x35U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v161 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v162 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v163 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v163 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v163 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v164 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x36U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v164 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v165 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v166 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v166 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v166 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v167 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x37U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v167 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v168 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v169 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v169 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v169 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v170 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x38U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v170 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v171 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v172 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v172 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v172 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v173 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x39U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v173 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v174 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v175 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v175 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v175 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v176 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x3aU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v176 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v177 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v178 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v178 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v178 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v179 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x3bU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v179 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v180 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v181 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v181 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v181 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v182 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x3cU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v182 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v183 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v184 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v184 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v184 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v185 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x3dU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v185 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v186 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v187 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v187 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v187 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v188 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x3eU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v188 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v189 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v190 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v190 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v190 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v191 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x3fU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v191 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v192 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v193 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v193 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v193 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v194 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x40U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v194 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v195 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v196 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v196 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v196 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v197 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x41U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v197 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v198 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v199 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v199 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v199 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v200 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x42U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v200 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v201 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v202 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v202 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v202 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v203 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x43U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v203 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v204 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v205 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v205 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v205 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v206 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x44U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v206 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v207 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v208 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v208 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v208 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v209 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x45U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v209 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v210 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v211 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v211 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v211 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v212 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x46U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v212 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v213 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v214 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v214 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v214 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v215 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x47U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v215 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v216 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v217 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v217 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v217 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v218 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x48U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v218 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v219 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v220 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v220 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v220 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v221 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x49U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v221 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v222 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v223 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v223 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v223 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v224 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x4aU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v224 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v225 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v226 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v226 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v226 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v227 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x4bU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v227 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v228 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v229 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v229 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v229 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v230 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x4cU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v230 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v231 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v232 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v232 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v232 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v233 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x4dU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v233 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v234 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v235 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v235 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v235 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v236 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x4eU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v236 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v237 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v238 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v238 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v238 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v239 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x4fU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v239 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v240 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v241 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v241 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v241 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v242 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x50U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v242 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v243 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v244 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v244 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v244 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v245 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x51U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v245 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v246 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v247 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v247 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v247 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v248 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x52U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v248 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v249 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v250 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v250 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v250 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v251 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x53U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v251 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v252 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v253 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v253 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v253 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v254 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x54U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v254 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v255 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v256 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v256 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v256 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v257 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x55U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v257 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v258 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v259 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v259 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v259 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v260 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x56U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v260 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v261 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v262 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v262 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v262 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v263 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x57U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v263 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v264 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v265 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v265 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v265 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v266 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x58U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v266 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v267 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v268 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v268 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v268 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v269 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x59U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v269 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v270 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v271 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v271 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v271 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v272 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x5aU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v272 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v273 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v274 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v274 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v274 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v275 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x5bU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v275 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v276 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v277 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v277 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v277 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v278 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x5cU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v278 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v279 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v280 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v280 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v280 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v281 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x5dU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v281 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v282 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v283 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v283 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v283 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v284 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x5eU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v284 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v285 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v286 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v286 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v286 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v287 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x5fU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v287 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v288 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v289 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v289 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v289 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v290 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x60U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v290 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v291 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v292 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v292 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v292 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v293 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x61U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v293 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v294 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v295 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v295 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v295 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v296 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x62U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v296 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v297 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v298 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v298 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v298 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v299 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x63U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v299 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v300 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v301 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v301 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v301 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v302 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x64U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v302 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v303 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v304 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v304 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v304 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v305 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x65U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v305 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v306 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v307 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v307 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v307 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v308 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x66U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v308 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v309 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v310 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v310 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v310 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v311 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x67U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v311 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v312 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v313 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v313 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v313 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v314 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x68U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v314 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v315 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v316 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v316 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v316 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v317 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x69U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v317 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v318 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v319 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v319 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v319 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v320 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x6aU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v320 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v321 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v322 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v322 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v322 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v323 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x6bU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v323 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v324 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v325 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v325 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v325 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v326 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x6cU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v326 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v327 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v328 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v328 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v328 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v329 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x6dU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v329 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v330 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v331 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v331 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v331 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v332 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x6eU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v332 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v333 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v334 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v334 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v334 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v335 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x6fU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v335 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v336 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v337 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v337 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v337 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v338 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x70U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v338 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v339 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v340 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v340 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v340 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v341 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x71U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v341 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v342 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v343 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v343 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v343 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v344 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x72U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v344 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v345 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v346 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v346 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v346 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v347 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x73U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v347 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v348 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v349 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v349 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v349 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v350 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x74U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v350 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v351 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v352 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v352 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v352 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v353 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x75U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v353 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v354 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v355 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v355 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v355 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v356 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x76U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v356 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v357 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v358 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v358 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v358 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v359 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x77U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v359 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v360 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v361 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v361 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v361 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v362 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x78U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v362 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v363 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v364 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v364 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v364 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v365 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x79U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v365 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v366 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v367 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v367 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v367 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v368 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x7aU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v368 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v369 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v370 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v370 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v370 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v371 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x7bU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v371 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v372 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v373 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v373 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v373 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v374 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x7cU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v374 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v375 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v376 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v376 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v376 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v377 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x7dU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v377 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v378 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v379 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v379 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v379 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v380 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x7eU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v380 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v381 = 1U;
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v382 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v382 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v382 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                         >> 4U)) | (1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v383 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
            [0x7fU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v383 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr = 0ULL;
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_reg = 0ULL;
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mulh_reg = 0ULL;
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__rem_reg = 0ULL;
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__div_reg = 0ULL;
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__abs_quotient = 0ULL;
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__mid_result[0U] = 0U;
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__mid_result[1U] = 0U;
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__mid_result[2U] = 0U;
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__mid_result[3U] = 0U;
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__mid_result[4U] = 0U;
    } else {
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr 
            = (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_valid) 
                & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_allowin))
                ? vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_forward_data
                : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr);
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_reg 
            = (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_out_valid) 
                & (~ (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_allowin)))
                ? (((QData)((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[0U])))
                : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_reg);
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mulh_reg 
            = (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_out_valid) 
                & (~ (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_allowin)))
                ? (((QData)((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[3U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[2U])))
                : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mulh_reg);
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__rem_reg 
            = (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__div_out_valid) 
                & (~ (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_allowin)))
                ? vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__rem_result
                : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__rem_reg);
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__div_reg 
            = (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__div_out_valid) 
                & (~ (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_allowin)))
                ? vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__div_result
                : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__div_reg);
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__abs_quotient 
            = ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__div_process)
                ? ((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__abs_quotient 
                    << 1U) | (QData)((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__current_q)))
                : 0ULL);
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__mid_result[0U] 
            = ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_valid)
                ? 0U : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[0U]);
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__mid_result[1U] 
            = ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_valid)
                ? 0U : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[1U]);
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__mid_result[2U] 
            = ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_valid)
                ? 0U : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[2U]);
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__mid_result[3U] 
            = ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_valid)
                ? 0U : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[3U]);
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__mid_result[4U] 
            = ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_valid)
                ? 0U : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[4U]);
    }
    VL_EXTEND_WQ(65,64, __Vtemp245, (- (((QData)((IData)(
                                                         vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__op2_sext[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__op2_sext[0U])))));
    VL_EXTEND_WQ(65,64, __Vtemp247, (((QData)((IData)(
                                                      vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__op2_sext[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__op2_sext[0U]))));
    VL_SHIFTR_WWI(128,128,32, __Vtemp250, vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__abs_divisor, 1U);
    if (vlSelf->reset) {
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__abs_divisor[0U] = 0U;
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__abs_divisor[1U] = 0U;
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__abs_divisor[2U] = 0U;
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__abs_divisor[3U] = 0U;
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_alu_out = 0ULL;
    } else {
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__abs_divisor[0U] 
            = ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__div_valid)
                ? 0U : __Vtemp250[0U]);
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__abs_divisor[1U] 
            = ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__div_valid)
                ? ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__divisor_flag)
                    ? (__Vtemp245[0U] << 0x1fU) : (
                                                   __Vtemp247[0U] 
                                                   << 0x1fU))
                : __Vtemp250[1U]);
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__abs_divisor[2U] 
            = ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__div_valid)
                ? ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__divisor_flag)
                    ? ((__Vtemp245[0U] >> 1U) | (__Vtemp245[1U] 
                                                 << 0x1fU))
                    : ((__Vtemp247[0U] >> 1U) | (__Vtemp247[1U] 
                                                 << 0x1fU)))
                : __Vtemp250[2U]);
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__abs_divisor[3U] 
            = ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__div_valid)
                ? ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__divisor_flag)
                    ? ((__Vtemp245[1U] >> 1U) | (__Vtemp245[2U] 
                                                 << 0x1fU))
                    : ((__Vtemp247[1U] >> 1U) | (__Vtemp247[2U] 
                                                 << 0x1fU)))
                : __Vtemp250[3U]);
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_alu_out 
            = (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_allowin) 
                & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_valid))
                ? vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out
                : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_alu_out);
    }
    VL_EXTEND_WQ(128,64, __Vtemp255, (- (((QData)((IData)(
                                                          vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__op1_sext[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__op1_sext[0U])))));
    VL_EXTEND_WQ(128,64, __Vtemp256, (((QData)((IData)(
                                                       vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__op1_sext[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__op1_sext[0U]))));
    if (vlSelf->reset) {
        __Vtemp253[1U] = 0U;
        __Vtemp253[2U] = 0U;
        __Vtemp253[3U] = 0U;
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__abs_dividend[0U] = 0U;
    } else {
        __Vtemp253[1U] = ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__div_valid)
                           ? ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__dividend_flag)
                               ? __Vtemp255[1U] : __Vtemp256[1U])
                           : ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__current_q)
                               ? vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__current_sub_result[1U]
                               : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__abs_dividend[1U]));
        __Vtemp253[2U] = ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__div_valid)
                           ? ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__dividend_flag)
                               ? __Vtemp255[2U] : __Vtemp256[2U])
                           : ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__current_q)
                               ? vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__current_sub_result[2U]
                               : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__abs_dividend[2U]));
        __Vtemp253[3U] = ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__div_valid)
                           ? ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__dividend_flag)
                               ? __Vtemp255[3U] : __Vtemp256[3U])
                           : ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__current_q)
                               ? vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__current_sub_result[3U]
                               : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__abs_dividend[3U]));
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__abs_dividend[0U] 
            = ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__div_valid)
                ? ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__dividend_flag)
                    ? __Vtemp255[0U] : __Vtemp256[0U])
                : ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__current_q)
                    ? vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__current_sub_result[0U]
                    : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__abs_dividend[0U]));
    }
    vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__abs_dividend[1U] 
        = __Vtemp253[1U];
    vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__abs_dividend[2U] 
        = __Vtemp253[2U];
    vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__abs_dividend[3U] 
        = __Vtemp253[3U];
    vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_mem_rstrb 
        = ((IData)(vlSelf->reset) ? 0U : (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_allowin) 
                                           & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_valid))
                                           ? (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_rstrb)
                                           : (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_mem_rstrb)));
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U] 
            = (0xfffffffeU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U] 
            = ((0xfffffffeU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]) 
               | (1U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U] 
            = (0xfffffffdU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U] 
            = ((0xfffffffdU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]) 
               | (2U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U] 
            = (0xfffffffbU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U] 
            = ((0xfffffffbU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]) 
               | (4U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U] 
            = (0xfffffff7U & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U] 
            = ((0xfffffff7U & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]) 
               | (8U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U] 
            = (0xffffffefU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U] 
            = ((0xffffffefU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]) 
               | (0x10U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U] 
            = (0xffffffdfU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U] 
            = ((0xffffffdfU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]) 
               | (0x20U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U] 
            = (0xffffffbfU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U] 
            = ((0xffffffbfU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]) 
               | (0x40U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U] 
            = (0xffffff7fU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U] 
            = ((0xffffff7fU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]) 
               | (0x80U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U] 
            = (0xfffffeffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U] 
            = ((0xfffffeffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]) 
               | (0x100U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U] 
            = (0xfffffdffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U] 
            = ((0xfffffdffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]) 
               | (0x200U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U] 
            = (0xfffffbffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U] 
            = ((0xfffffbffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]) 
               | (0x400U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U] 
            = (0xfffff7ffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U] 
            = ((0xfffff7ffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]) 
               | (0x800U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U] 
            = (0xffffefffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U] 
            = ((0xffffefffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]) 
               | (0x1000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U] 
            = (0xffffdfffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U] 
            = ((0xffffdfffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]) 
               | (0x2000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U] 
            = (0xffffbfffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U] 
            = ((0xffffbfffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]) 
               | (0x4000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U] 
            = (0xffff7fffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U] 
            = ((0xffff7fffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]) 
               | (0x8000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U] 
            = (0xfffeffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U] 
            = ((0xfffeffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]) 
               | (0x10000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U] 
            = (0xfffdffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U] 
            = ((0xfffdffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]) 
               | (0x20000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U] 
            = (0xfffbffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U] 
            = ((0xfffbffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]) 
               | (0x40000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U] 
            = (0xfff7ffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U] 
            = ((0xfff7ffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]) 
               | (0x80000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U] 
            = (0xffefffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U] 
            = ((0xffefffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]) 
               | (0x100000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U] 
            = (0xffdfffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U] 
            = ((0xffdfffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]) 
               | (0x200000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U] 
            = (0xffbfffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U] 
            = ((0xffbfffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]) 
               | (0x400000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U] 
            = (0xff7fffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U] 
            = ((0xff7fffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]) 
               | (0x800000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U] 
            = (0xfeffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U] 
            = ((0xfeffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]) 
               | (0x1000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U] 
            = (0xfdffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U] 
            = ((0xfdffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]) 
               | (0x2000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U] 
            = (0xfbffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U] 
            = ((0xfbffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]) 
               | (0x4000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U] 
            = (0xf7ffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U] 
            = ((0xf7ffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]) 
               | (0x8000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U] 
            = (0xefffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U] 
            = ((0xefffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]) 
               | (0x10000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U] 
            = (0xdfffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U] 
            = ((0xdfffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]) 
               | (0x20000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U] 
            = (0xbfffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U] 
            = ((0xbfffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]) 
               | (0x40000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U] 
            = (0x7fffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U] 
            = ((0x7fffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]) 
               | (0x80000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U] 
            = (0xfffffffeU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U] 
            = ((0xfffffffeU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]) 
               | (1U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U] 
            = (0xfffffffdU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U] 
            = ((0xfffffffdU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]) 
               | (2U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U] 
            = (0xfffffffbU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U] 
            = ((0xfffffffbU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]) 
               | (4U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U] 
            = (0xfffffff7U & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U] 
            = ((0xfffffff7U & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]) 
               | (8U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U] 
            = (0xffffffefU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U] 
            = ((0xffffffefU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]) 
               | (0x10U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U] 
            = (0xffffffdfU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U] 
            = ((0xffffffdfU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]) 
               | (0x20U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U] 
            = (0xffffffbfU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U] 
            = ((0xffffffbfU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]) 
               | (0x40U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U] 
            = (0xffffff7fU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U] 
            = ((0xffffff7fU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]) 
               | (0x80U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U] 
            = (0xfffffeffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U] 
            = ((0xfffffeffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]) 
               | (0x100U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U] 
            = (0xfffffdffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U] 
            = ((0xfffffdffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]) 
               | (0x200U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U] 
            = (0xfffffbffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U] 
            = ((0xfffffbffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]) 
               | (0x400U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U] 
            = (0xfffff7ffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U] 
            = ((0xfffff7ffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]) 
               | (0x800U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U] 
            = (0xffffefffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U] 
            = ((0xffffefffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]) 
               | (0x1000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U] 
            = (0xffffdfffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U] 
            = ((0xffffdfffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]) 
               | (0x2000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U] 
            = (0xffffbfffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U] 
            = ((0xffffbfffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]) 
               | (0x4000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U] 
            = (0xffff7fffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U] 
            = ((0xffff7fffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]) 
               | (0x8000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U] 
            = (0xfffeffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U] 
            = ((0xfffeffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]) 
               | (0x10000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U] 
            = (0xfffdffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U] 
            = ((0xfffdffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]) 
               | (0x20000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U] 
            = (0xfffbffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U] 
            = ((0xfffbffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]) 
               | (0x40000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U] 
            = (0xfff7ffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U] 
            = ((0xfff7ffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]) 
               | (0x80000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U] 
            = (0xffefffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U] 
            = ((0xffefffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]) 
               | (0x100000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U] 
            = (0xffdfffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U] 
            = ((0xffdfffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]) 
               | (0x200000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U] 
            = (0xffbfffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U] 
            = ((0xffbfffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]) 
               | (0x400000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U] 
            = (0xff7fffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U] 
            = ((0xff7fffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]) 
               | (0x800000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U] 
            = (0xfeffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U] 
            = ((0xfeffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]) 
               | (0x1000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U] 
            = (0xfdffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U] 
            = ((0xfdffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]) 
               | (0x2000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U] 
            = (0xfbffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U] 
            = ((0xfbffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]) 
               | (0x4000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U] 
            = (0xf7ffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U] 
            = ((0xf7ffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]) 
               | (0x8000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U] 
            = (0xefffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U] 
            = ((0xefffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]) 
               | (0x10000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U] 
            = (0xdfffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U] 
            = ((0xdfffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]) 
               | (0x20000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U] 
            = (0xbfffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U] 
            = ((0xbfffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]) 
               | (0x40000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U] 
            = (0x7fffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U] 
            = ((0x7fffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]) 
               | (0x80000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U] 
            = (0xfffffffeU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U] 
            = ((0xfffffffeU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]) 
               | (1U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U] 
            = (0xfffffffdU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U] 
            = ((0xfffffffdU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]) 
               | (2U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U] 
            = (0xfffffffbU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U] 
            = ((0xfffffffbU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]) 
               | (4U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U] 
            = (0xfffffff7U & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U] 
            = ((0xfffffff7U & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]) 
               | (8U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U] 
            = (0xffffffefU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U] 
            = ((0xffffffefU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]) 
               | (0x10U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U] 
            = (0xffffffdfU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U] 
            = ((0xffffffdfU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]) 
               | (0x20U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U] 
            = (0xffffffbfU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U] 
            = ((0xffffffbfU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]) 
               | (0x40U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U] 
            = (0xffffff7fU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U] 
            = ((0xffffff7fU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]) 
               | (0x80U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U] 
            = (0xfffffeffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U] 
            = ((0xfffffeffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]) 
               | (0x100U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U] 
            = (0xfffffdffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U] 
            = ((0xfffffdffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]) 
               | (0x200U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U] 
            = (0xfffffbffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U] 
            = ((0xfffffbffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]) 
               | (0x400U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U] 
            = (0xfffff7ffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U] 
            = ((0xfffff7ffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]) 
               | (0x800U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U] 
            = (0xffffefffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U] 
            = ((0xffffefffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]) 
               | (0x1000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U] 
            = (0xffffdfffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U] 
            = ((0xffffdfffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]) 
               | (0x2000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U] 
            = (0xffffbfffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U] 
            = ((0xffffbfffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]) 
               | (0x4000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U] 
            = (0xffff7fffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U] 
            = ((0xffff7fffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]) 
               | (0x8000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U] 
            = (0xfffeffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U] 
            = ((0xfffeffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]) 
               | (0x10000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U] 
            = (0xfffdffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U] 
            = ((0xfffdffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]) 
               | (0x20000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U] 
            = (0xfffbffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U] 
            = ((0xfffbffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]) 
               | (0x40000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U] 
            = (0xfff7ffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U] 
            = ((0xfff7ffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]) 
               | (0x80000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U] 
            = (0xffefffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U] 
            = ((0xffefffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]) 
               | (0x100000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U] 
            = (0xffdfffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U] 
            = ((0xffdfffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]) 
               | (0x200000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U] 
            = (0xffbfffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U] 
            = ((0xffbfffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]) 
               | (0x400000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U] 
            = (0xff7fffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U] 
            = ((0xff7fffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]) 
               | (0x800000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U] 
            = (0xfeffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U] 
            = ((0xfeffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]) 
               | (0x1000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U] 
            = (0xfdffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U] 
            = ((0xfdffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]) 
               | (0x2000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U] 
            = (0xfbffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U] 
            = ((0xfbffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]) 
               | (0x4000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U] 
            = (0xf7ffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U] 
            = ((0xf7ffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]) 
               | (0x8000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U] 
            = (0xefffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U] 
            = ((0xefffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]) 
               | (0x10000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U] 
            = (0xdfffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U] 
            = ((0xdfffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]) 
               | (0x20000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U] 
            = (0xbfffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U] 
            = ((0xbfffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]) 
               | (0x40000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U] 
            = (0x7fffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U] 
            = ((0x7fffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]) 
               | (0x80000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U] 
            = (0xfffffffeU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U] 
            = ((0xfffffffeU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]) 
               | (1U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U] 
            = (0xfffffffdU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U] 
            = ((0xfffffffdU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]) 
               | (2U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U] 
            = (0xfffffffbU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U] 
            = ((0xfffffffbU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]) 
               | (4U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U] 
            = (0xfffffff7U & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U] 
            = ((0xfffffff7U & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]) 
               | (8U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U] 
            = (0xffffffefU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U] 
            = ((0xffffffefU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]) 
               | (0x10U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U] 
            = (0xffffffdfU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U] 
            = ((0xffffffdfU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]) 
               | (0x20U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U] 
            = (0xffffffbfU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U] 
            = ((0xffffffbfU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]) 
               | (0x40U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U] 
            = (0xffffff7fU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U] 
            = ((0xffffff7fU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]) 
               | (0x80U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U] 
            = (0xfffffeffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U] 
            = ((0xfffffeffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]) 
               | (0x100U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U] 
            = (0xfffffdffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U] 
            = ((0xfffffdffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]) 
               | (0x200U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U] 
            = (0xfffffbffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U] 
            = ((0xfffffbffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]) 
               | (0x400U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U] 
            = (0xfffff7ffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U] 
            = ((0xfffff7ffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]) 
               | (0x800U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U] 
            = (0xffffefffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U] 
            = ((0xffffefffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]) 
               | (0x1000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U] 
            = (0xffffdfffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U] 
            = ((0xffffdfffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]) 
               | (0x2000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U] 
            = (0xffffbfffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U] 
            = ((0xffffbfffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]) 
               | (0x4000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U] 
            = (0xffff7fffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U] 
            = ((0xffff7fffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]) 
               | (0x8000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U] 
            = (0xfffeffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U] 
            = ((0xfffeffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]) 
               | (0x10000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U] 
            = (0xfffdffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U] 
            = ((0xfffdffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]) 
               | (0x20000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U] 
            = (0xfffbffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U] 
            = ((0xfffbffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]) 
               | (0x40000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U] 
            = (0xfff7ffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U] 
            = ((0xfff7ffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]) 
               | (0x80000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U] 
            = (0xffefffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U] 
            = ((0xffefffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]) 
               | (0x100000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U] 
            = (0xffdfffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U] 
            = ((0xffdfffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]) 
               | (0x200000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U] 
            = (0xffbfffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U] 
            = ((0xffbfffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]) 
               | (0x400000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U] 
            = (0xff7fffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U] 
            = ((0xff7fffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]) 
               | (0x800000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U] 
            = (0xfeffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U] 
            = ((0xfeffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]) 
               | (0x1000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U] 
            = (0xfdffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U] 
            = ((0xfdffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]) 
               | (0x2000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U] 
            = (0xfbffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U] 
            = ((0xfbffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]) 
               | (0x4000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U] 
            = (0xf7ffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U] 
            = ((0xf7ffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]) 
               | (0x8000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U] 
            = (0xefffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U] 
            = ((0xefffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]) 
               | (0x10000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U] 
            = (0xdfffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U] 
            = ((0xdfffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]) 
               | (0x20000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U] 
            = (0xbfffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U] 
            = ((0xbfffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]) 
               | (0x40000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U] 
            = (0x7fffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]);
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(
                                                                                (3U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               ((3U & ((IData)((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                >> 5U)) >> 4U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                   >> 5U))] 
               | ((IData)(1U) << (0x1fU & ((0x7eU & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                      >> 5U)) 
                                             << 1U)) 
                                           | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit)))));
    } else if ((((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                  ? 1U : 0U) & (IData)(vlSelf->io_master_bvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = ((~ ((IData)(1U) << (0x1fU & ((0x7eU 
                                             & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                >> 4U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))))))) 
               & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))]);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U] 
            = ((0x7fffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]) 
               | (0x80000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U]));
    }
    vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_mret 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_valid) 
                                          & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_allowin))
                                          ? (0x30200073U 
                                             == vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)
                                          : (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_mret)));
    if (vlSelf->reset) {
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_intr_no = 0ULL;
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_inst = 0U;
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_wstrb = 0U;
    } else {
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_intr_no 
            = (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_valid) 
                & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_allowin))
                ? ((0x73U == vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)
                    ? 0xbULL : ((0x100073U == vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)
                                 ? 4ULL : 0ULL)) : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_intr_no);
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_inst 
            = (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_valid) 
                & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_allowin))
                ? vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst
                : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_inst);
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_wstrb 
            = (0xffU & (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_valid) 
                         & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_allowin))
                         ? ((((- (IData)((IData)((0x3023U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))))) 
                              | (0xfU & (- (IData)((IData)(
                                                           (0x2023U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))))))) 
                             | (3U & (- (IData)((IData)(
                                                        (0x1023U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))))))) 
                            | (1U & (- (IData)((IData)(
                                                       (0x23U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))))))
                         : (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_wstrb)));
    }
    vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_mem_wen 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_valid) 
                                          & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_allowin))
                                          ? (0x23U 
                                             == (0x7fU 
                                                 & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))
                                          : (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_mem_wen)));
    if (vlSelf->reset) {
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_uimm = 0U;
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_regin_sel = 0U;
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_addr = 0U;
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_rd_addr = 0U;
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr__v0 = 0ULL;
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr__v1 = 0ULL;
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr__v2 = 0ULL;
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr__v3 = 0ULL;
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr__v4 = 0ULL;
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr__v5 = 0ULL;
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr__v6 = 0ULL;
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr__v7 = 0ULL;
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr__v8 = 0ULL;
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr__v9 = 0ULL;
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr__v10 = 0ULL;
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr__v11 = 0ULL;
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr__v12 = 0ULL;
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr__v13 = 0ULL;
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr__v14 = 0ULL;
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr__v15 = 0ULL;
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr__v16 = 0ULL;
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr__v17 = 0ULL;
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr__v18 = 0ULL;
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr__v19 = 0ULL;
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr__v20 = 0ULL;
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr__v21 = 0ULL;
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr__v22 = 0ULL;
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr__v23 = 0ULL;
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr__v24 = 0ULL;
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr__v25 = 0ULL;
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr__v26 = 0ULL;
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr__v27 = 0ULL;
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr__v28 = 0ULL;
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr__v29 = 0ULL;
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr__v30 = 0ULL;
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr__v31 = 0ULL;
    } else {
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_uimm 
            = (0x1fU & (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_valid) 
                         & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_allowin))
                         ? (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                            >> 0xfU) : (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_uimm)));
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_regin_sel 
            = (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_valid) 
                & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_allowin))
                ? ((((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__reg_wen) 
                     & (3U == (0x7fU & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))) 
                    << 1U) | ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__reg_wen) 
                              & (3U != (0x7fU & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))))
                : (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_regin_sel));
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_addr 
            = (0xfffU & (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_valid) 
                          & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_allowin))
                          ? (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                             >> 0x14U) : (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_addr)));
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_rd_addr 
            = (0x1fU & (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_valid) 
                         & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_allowin))
                         ? (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                            >> 7U) : (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_rd_addr)));
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr__v0 
            = (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen
               [0U] ? vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__wr_data
                : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr
               [0U]);
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr__v1 
            = (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen
               [1U] ? vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__wr_data
                : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr
               [1U]);
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr__v2 
            = (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen
               [2U] ? vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__wr_data
                : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr
               [2U]);
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr__v3 
            = (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen
               [3U] ? vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__wr_data
                : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr
               [3U]);
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr__v4 
            = (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen
               [4U] ? vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__wr_data
                : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr
               [4U]);
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr__v5 
            = (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen
               [5U] ? vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__wr_data
                : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr
               [5U]);
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr__v6 
            = (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen
               [6U] ? vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__wr_data
                : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr
               [6U]);
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr__v7 
            = (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen
               [7U] ? vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__wr_data
                : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr
               [7U]);
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr__v8 
            = (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen
               [8U] ? vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__wr_data
                : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr
               [8U]);
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr__v9 
            = (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen
               [9U] ? vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__wr_data
                : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr
               [9U]);
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr__v10 
            = (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen
               [0xaU] ? vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__wr_data
                : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr
               [0xaU]);
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr__v11 
            = (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen
               [0xbU] ? vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__wr_data
                : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr
               [0xbU]);
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr__v12 
            = (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen
               [0xcU] ? vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__wr_data
                : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr
               [0xcU]);
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr__v13 
            = (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen
               [0xdU] ? vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__wr_data
                : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr
               [0xdU]);
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr__v14 
            = (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen
               [0xeU] ? vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__wr_data
                : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr
               [0xeU]);
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr__v15 
            = (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen
               [0xfU] ? vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__wr_data
                : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr
               [0xfU]);
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr__v16 
            = (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen
               [0x10U] ? vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__wr_data
                : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr
               [0x10U]);
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr__v17 
            = (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen
               [0x11U] ? vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__wr_data
                : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr
               [0x11U]);
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr__v18 
            = (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen
               [0x12U] ? vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__wr_data
                : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr
               [0x12U]);
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr__v19 
            = (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen
               [0x13U] ? vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__wr_data
                : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr
               [0x13U]);
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr__v20 
            = (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen
               [0x14U] ? vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__wr_data
                : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr
               [0x14U]);
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr__v21 
            = (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen
               [0x15U] ? vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__wr_data
                : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr
               [0x15U]);
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr__v22 
            = (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen
               [0x16U] ? vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__wr_data
                : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr
               [0x16U]);
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr__v23 
            = (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen
               [0x17U] ? vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__wr_data
                : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr
               [0x17U]);
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr__v24 
            = (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen
               [0x18U] ? vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__wr_data
                : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr
               [0x18U]);
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr__v25 
            = (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen
               [0x19U] ? vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__wr_data
                : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr
               [0x19U]);
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr__v26 
            = (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen
               [0x1aU] ? vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__wr_data
                : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr
               [0x1aU]);
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr__v27 
            = (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen
               [0x1bU] ? vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__wr_data
                : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr
               [0x1bU]);
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr__v28 
            = (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen
               [0x1cU] ? vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__wr_data
                : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr
               [0x1cU]);
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr__v29 
            = (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen
               [0x1dU] ? vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__wr_data
                : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr
               [0x1dU]);
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr__v30 
            = (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen
               [0x1eU] ? vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__wr_data
                : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr
               [0x1eU]);
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr__v31 
            = (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen
               [0x1fU] ? vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__wr_data
                : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr
               [0x1fU]);
    }
    if ((2U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))) {
        __Vtemp277[0U] = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[0U] 
                           & (- (IData)((1U & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag))))) 
                          | (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[0U] 
                             & (- (IData)((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag) 
                                                 >> 1U))))));
        __Vtemp277[1U] = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[1U] 
                           & (- (IData)((1U & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag))))) 
                          | (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[1U] 
                             & (- (IData)((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag) 
                                                 >> 1U))))));
        __Vtemp277[2U] = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[2U] 
                           & (- (IData)((1U & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag))))) 
                          | (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[2U] 
                             & (- (IData)((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag) 
                                                 >> 1U))))));
        __Vtemp277[3U] = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[3U] 
                           & (- (IData)((1U & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag))))) 
                          | (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[3U] 
                             & (- (IData)((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag) 
                                                 >> 1U))))));
        __Vtemp277[4U] = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[4U] 
                           & (- (IData)((1U & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag))))) 
                          | (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[4U] 
                             & (- (IData)((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag) 
                                                 >> 1U))))));
        __Vtemp277[5U] = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[5U] 
                           & (- (IData)((1U & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag))))) 
                          | (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[5U] 
                             & (- (IData)((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag) 
                                                 >> 1U))))));
        __Vtemp277[6U] = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[6U] 
                           & (- (IData)((1U & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag))))) 
                          | (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[6U] 
                             & (- (IData)((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag) 
                                                 >> 1U))))));
        __Vtemp277[7U] = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[7U] 
                           & (- (IData)((1U & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag))))) 
                          | (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[7U] 
                             & (- (IData)((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit_flag) 
                                                 >> 1U))))));
    } else {
        __Vtemp277[0U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[0U];
        __Vtemp277[1U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[1U];
        __Vtemp277[2U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[2U];
        __Vtemp277[3U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[3U];
        __Vtemp277[4U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[4U];
        __Vtemp277[5U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[5U];
        __Vtemp277[6U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[6U];
        __Vtemp277[7U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[7U];
    }
    __Vtemp270 = ((IData)(vlSelf->reset) ? 0ULL : (
                                                   ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_allowin) 
                                                    & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_valid))
                                                    ? 
                                                   ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mmio_process)
                                                     ? vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_rdata
                                                     : 
                                                    (((QData)((IData)(
                                                                      __Vtemp277[
                                                                      (((IData)(0x3fU) 
                                                                        + 
                                                                        (0xc0U 
                                                                         & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                            << 3U))) 
                                                                       >> 5U)])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       __Vtemp277[
                                                                       (6U 
                                                                        & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                           >> 2U))]))))
                                                    : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_mem_data));
    vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_mem_data 
        = __Vtemp270;
    if (vlSelf->reset) {
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_shamt = 0U;
        __Vtemp279[1U] = 0U;
        __Vtemp279[2U] = 0U;
        __Vtemp279[3U] = 0U;
        __Vtemp279[4U] = 0U;
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[0U] = 0U;
    } else {
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_shamt 
            = (7U & (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_allowin) 
                      & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_valid))
                      ? (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out)
                      : (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_shamt)));
        __Vtemp279[1U] = ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_valid)
                           ? (IData)(((((QData)((IData)(
                                                        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__op2_sext[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__op2_sext[0U]))) 
                                      >> 0x20U)) : 
                          ((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[0U] 
                            >> 0x1eU) | (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[1U] 
                                         << 2U)));
        __Vtemp279[2U] = ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_valid)
                           ? (- (IData)(((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__op2_sext[1U] 
                                          >> 0x1fU) 
                                         & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__sext1))))
                           : ((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[1U] 
                               >> 0x1eU) | (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[2U] 
                                            << 2U)));
        __Vtemp279[3U] = ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_valid)
                           ? (- (IData)(((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__op2_sext[1U] 
                                          >> 0x1fU) 
                                         & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__sext1))))
                           : ((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[2U] 
                               >> 0x1eU) | (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[3U] 
                                            << 2U)));
        __Vtemp279[4U] = ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_valid)
                           ? (0xfU & (- (IData)(((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__op2_sext[1U] 
                                                  >> 0x1fU) 
                                                 & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__sext1)))))
                           : ((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[3U] 
                               >> 0x1eU) | (0xcU & 
                                            (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[4U] 
                                             << 2U))));
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[0U] 
            = ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_valid)
                ? (IData)((((QData)((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__op2_sext[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__op2_sext[0U]))))
                : (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[0U] 
                   << 2U));
    }
    vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[1U] 
        = __Vtemp279[1U];
    vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[2U] 
        = __Vtemp279[2U];
    vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[3U] 
        = __Vtemp279[3U];
    vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[4U] 
        = __Vtemp279[4U];
    __Vtemp296[0U] = ((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[1U] 
                       << 0x1eU) | (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                    >> 2U));
    __Vtemp296[1U] = ((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[2U] 
                       << 0x1eU) | (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[1U] 
                                    >> 2U));
    __Vtemp296[2U] = (1U & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[2U] 
                            >> 2U));
    VL_EXTEND_WW(67,65, __Vtemp297, __Vtemp296);
    if (vlSelf->reset) {
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] = 0U;
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[1U] = 0U;
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[2U] = 0U;
    } else {
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
            = ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_valid)
                ? ((IData)((((QData)((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__op1_sext[1U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__op1_sext[0U])))) 
                   << 1U) : __Vtemp297[0U]);
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[1U] 
            = ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_valid)
                ? (((IData)((((QData)((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__op1_sext[1U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__op1_sext[0U])))) 
                    >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                            vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__op1_sext[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__op1_sext[0U]))) 
                                          >> 0x20U)) 
                                 << 1U)) : __Vtemp297[1U]);
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[2U] 
            = ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_valid)
                ? ((6U & ((- (IData)(((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__op1_sext[1U] 
                                       >> 0x1fU) & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__sext1)))) 
                          << 1U)) | ((IData)(((((QData)((IData)(
                                                                vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__op1_sext[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__op1_sext[0U]))) 
                                              >> 0x20U)) 
                                     >> 0x1fU)) : __Vtemp297[2U]);
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_pc = 0U;
        vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst = 0U;
    } else if (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_valid) 
                & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_allowin))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_pc 
            = (IData)((((1U & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc_sel))
                         ? (((QData)((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__current_pc)) 
                             << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__current_inst)))
                         : (0x13ULL | ((QData)((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_pc)) 
                                       << 0x20U))) 
                       >> 0x20U));
        vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
            = (IData)(((1U & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc_sel))
                        ? (((QData)((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__current_pc)) 
                            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__current_inst)))
                        : (0x13ULL | ((QData)((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_pc)) 
                                      << 0x20U))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_pc 
            = vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_pc;
        vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
            = vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst;
    }
    if (vlSelf->reset) {
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_sext = 0U;
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel = 0U;
    } else {
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_sext 
            = (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_valid) 
                & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_allowin))
                ? (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op_sext)
                : (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_sext));
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel 
            = (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_valid) 
                & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_allowin))
                ? (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op_sel)
                : (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel));
    }
    vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_word_op_mask 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_valid) 
                                          & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_allowin))
                                          ? ((0x1bU 
                                              == (0x7fU 
                                                  & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                             | (0x3bU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))
                                          : (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_word_op_mask)));
    if (vlSelf->reset) {
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_op2_sel = 0U;
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_rs2 = 0ULL;
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_imm = 0ULL;
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_rs2 = 0ULL;
        __Vtemp306 = 0U;
    } else {
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_op2_sel 
            = (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_valid) 
                & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_allowin))
                ? (((1U & (- (IData)((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__typeR)))) 
                    | (2U & (- (IData)((((((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__typeI) 
                                           & (~ (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__JALR))) 
                                          | (0x23U 
                                             == (0x7fU 
                                                 & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))) 
                                         | (0x63U == 
                                            (0x7fU 
                                             & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))) 
                                        | (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__typeU)))))) 
                   | (4U & (- (IData)(((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__JALR) 
                                       | (0x6fU == 
                                          (0x7fU & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))))))
                : (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_op2_sel));
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_rs2 
            = (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_valid) 
                & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_allowin))
                ? vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_rs2
                : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_rs2);
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_imm 
            = (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_valid) 
                & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_allowin))
                ? vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__imm
                : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_imm);
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_rs2 
            = (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_valid) 
                & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_allowin))
                ? vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__rs2_forward_data
                : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_rs2);
        __Vtemp306 = (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_valid) 
                       & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_allowin))
                       ? (((1U & (- (IData)(((((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__typeR) 
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
                           | (2U & (- (IData)(((((0x63U 
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
                          | (4U & (- (IData)((0x37U 
                                              == (0x7fU 
                                                  & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))))))
                       : (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_op1_sel));
    }
    vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_op1_sel 
        = __Vtemp306;
    if (vlSelf->reset) {
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_pc = 0U;
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_pc = 0U;
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_rs1 = 0ULL;
    } else {
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_pc 
            = (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_valid) 
                & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_allowin))
                ? vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_pc
                : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_pc);
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_pc 
            = (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_valid) 
                & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_allowin))
                ? vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_pc
                : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_pc);
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_rs1 
            = (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_valid) 
                & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_allowin))
                ? vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__rs1_forward_data
                : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_rs1);
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__sram7__DOT__ram__v0) {
        vlSelf->ysyx_22040750__DOT__sram7__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__sram7__DOT__ram__v0][0U] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__sram7__DOT__ram__v0[0U];
        vlSelf->ysyx_22040750__DOT__sram7__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__sram7__DOT__ram__v0][1U] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__sram7__DOT__ram__v0[1U];
        vlSelf->ysyx_22040750__DOT__sram7__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__sram7__DOT__ram__v0][2U] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__sram7__DOT__ram__v0[2U];
        vlSelf->ysyx_22040750__DOT__sram7__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__sram7__DOT__ram__v0][3U] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__sram7__DOT__ram__v0[3U];
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__sram6__DOT__ram__v0) {
        vlSelf->ysyx_22040750__DOT__sram6__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__sram6__DOT__ram__v0][0U] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__sram6__DOT__ram__v0[0U];
        vlSelf->ysyx_22040750__DOT__sram6__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__sram6__DOT__ram__v0][1U] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__sram6__DOT__ram__v0[1U];
        vlSelf->ysyx_22040750__DOT__sram6__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__sram6__DOT__ram__v0][2U] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__sram6__DOT__ram__v0[2U];
        vlSelf->ysyx_22040750__DOT__sram6__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__sram6__DOT__ram__v0][3U] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__sram6__DOT__ram__v0[3U];
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__sram5__DOT__ram__v0) {
        vlSelf->ysyx_22040750__DOT__sram5__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__sram5__DOT__ram__v0][0U] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__sram5__DOT__ram__v0[0U];
        vlSelf->ysyx_22040750__DOT__sram5__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__sram5__DOT__ram__v0][1U] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__sram5__DOT__ram__v0[1U];
        vlSelf->ysyx_22040750__DOT__sram5__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__sram5__DOT__ram__v0][2U] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__sram5__DOT__ram__v0[2U];
        vlSelf->ysyx_22040750__DOT__sram5__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__sram5__DOT__ram__v0][3U] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__sram5__DOT__ram__v0[3U];
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__sram4__DOT__ram__v0) {
        vlSelf->ysyx_22040750__DOT__sram4__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__sram4__DOT__ram__v0][0U] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__sram4__DOT__ram__v0[0U];
        vlSelf->ysyx_22040750__DOT__sram4__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__sram4__DOT__ram__v0][1U] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__sram4__DOT__ram__v0[1U];
        vlSelf->ysyx_22040750__DOT__sram4__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__sram4__DOT__ram__v0][2U] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__sram4__DOT__ram__v0[2U];
        vlSelf->ysyx_22040750__DOT__sram4__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__sram4__DOT__ram__v0][3U] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__sram4__DOT__ram__v0[3U];
    }
    vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_rstrb 
        = vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_rstrb;
    vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_bubble 
        = vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_bubble;
    vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr_mret 
        = vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr_mret;
    vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr_intr_no 
        = vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr_intr_no;
    vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_bubble 
        = vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_bubble;
    vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr_intr 
        = vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr_intr;
    vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_inst 
        = vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_inst;
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__sram3__DOT__ram__v0) {
        vlSelf->ysyx_22040750__DOT__sram3__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__sram3__DOT__ram__v0][0U] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__sram3__DOT__ram__v0[0U];
        vlSelf->ysyx_22040750__DOT__sram3__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__sram3__DOT__ram__v0][1U] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__sram3__DOT__ram__v0[1U];
        vlSelf->ysyx_22040750__DOT__sram3__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__sram3__DOT__ram__v0][2U] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__sram3__DOT__ram__v0[2U];
        vlSelf->ysyx_22040750__DOT__sram3__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__sram3__DOT__ram__v0][3U] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__sram3__DOT__ram__v0[3U];
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__sram2__DOT__ram__v0) {
        vlSelf->ysyx_22040750__DOT__sram2__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__sram2__DOT__ram__v0][0U] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__sram2__DOT__ram__v0[0U];
        vlSelf->ysyx_22040750__DOT__sram2__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__sram2__DOT__ram__v0][1U] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__sram2__DOT__ram__v0[1U];
        vlSelf->ysyx_22040750__DOT__sram2__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__sram2__DOT__ram__v0][2U] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__sram2__DOT__ram__v0[2U];
        vlSelf->ysyx_22040750__DOT__sram2__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__sram2__DOT__ram__v0][3U] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__sram2__DOT__ram__v0[3U];
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__sram1__DOT__ram__v0) {
        vlSelf->ysyx_22040750__DOT__sram1__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__sram1__DOT__ram__v0][0U] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__sram1__DOT__ram__v0[0U];
        vlSelf->ysyx_22040750__DOT__sram1__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__sram1__DOT__ram__v0][1U] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__sram1__DOT__ram__v0[1U];
        vlSelf->ysyx_22040750__DOT__sram1__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__sram1__DOT__ram__v0][2U] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__sram1__DOT__ram__v0[2U];
        vlSelf->ysyx_22040750__DOT__sram1__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__sram1__DOT__ram__v0][3U] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__sram1__DOT__ram__v0[3U];
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__sram0__DOT__ram__v0) {
        vlSelf->ysyx_22040750__DOT__sram0__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__sram0__DOT__ram__v0][0U] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__sram0__DOT__ram__v0[0U];
        vlSelf->ysyx_22040750__DOT__sram0__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__sram0__DOT__ram__v0][1U] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__sram0__DOT__ram__v0[1U];
        vlSelf->ysyx_22040750__DOT__sram0__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__sram0__DOT__ram__v0][2U] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__sram0__DOT__ram__v0[2U];
        vlSelf->ysyx_22040750__DOT__sram0__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__sram0__DOT__ram__v0][3U] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__sram0__DOT__ram__v0[3U];
    }
    vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__mul_process 
        = vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__mul_process;
    vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr_addr 
        = vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr_addr;
    vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr_wen 
        = vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr_wen;
    vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mtvec 
        = vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mtvec;
    vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mscratch 
        = vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mscratch;
    vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr_intr_no 
        = vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr_intr_no;
    vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mcause 
        = vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mcause;
    vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_pc 
        = vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_pc;
    vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mepc 
        = vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mepc;
    vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr_mret 
        = vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr_mret;
    vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr_intr 
        = vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr_intr;
    vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr_wen 
        = vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr_wen;
    vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr_addr 
        = vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr_addr;
    vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr 
        = vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr;
    vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mstatus 
        = vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mstatus;
    vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_wstrb 
        = vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_wstrb;
    vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_reg_e__DOT__mem_wr_en 
        = vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_reg_e__DOT__mem_wr_en;
    vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_reg_e__DOT__mem_rd_en 
        = vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_reg_e__DOT__mem_rd_en;
    vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cpu_reg 
        = vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cpu_reg;
    vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U] 
        = vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U];
    vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U] 
        = vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U];
    vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U] 
        = vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U];
    vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U] 
        = vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U];
    vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel 
        = vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel;
    vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_reg_wen 
        = vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_reg_wen;
    vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U] 
        = vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U];
    vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U] 
        = vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U];
    vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U] 
        = vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U];
    vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U] 
        = vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U];
    vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
        = vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr;
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v0) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0U] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v1) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v1] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v1;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v2) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0U] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v2;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v3) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[1U] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v4) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v4] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v4;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v5) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[1U] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v5;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v6) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[2U] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v7) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v7] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v7;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v8) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[2U] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v8;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v9) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[3U] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v10) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v10] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v10;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v11) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[3U] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v11;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v12) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[4U] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v13) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v13] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v13;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v14) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[4U] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v14;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v15) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[5U] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v16) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v16] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v16;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v17) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[5U] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v17;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v18) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[6U] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v19) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v19] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v19;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v20) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[6U] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v20;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v21) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[7U] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v22) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v22] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v22;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v23) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[7U] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v23;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v24) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[8U] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v25) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v25] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v25;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v26) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[8U] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v26;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v27) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[9U] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v28) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v28] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v28;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v29) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[9U] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v29;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v30) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0xaU] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v31) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v31] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v31;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v32) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0xaU] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v32;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v33) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0xbU] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v34) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v34] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v34;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v35) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0xbU] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v35;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v36) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0xcU] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v37) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v37] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v37;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v38) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0xcU] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v38;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v39) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0xdU] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v40) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v40] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v40;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v41) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0xdU] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v41;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v42) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0xeU] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v43) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v43] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v43;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v44) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0xeU] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v44;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v45) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0xfU] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v46) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v46] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v46;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v47) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0xfU] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v47;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v48) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x10U] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v49) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v49] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v49;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v50) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x10U] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v50;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v51) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x11U] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v52) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v52] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v52;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v53) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x11U] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v53;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v54) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x12U] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v55) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v55] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v55;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v56) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x12U] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v56;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v57) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x13U] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v58) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v58] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v58;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v59) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x13U] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v59;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v60) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x14U] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v61) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v61] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v61;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v62) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x14U] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v62;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v63) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x15U] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v64) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v64] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v64;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v65) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x15U] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v65;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v66) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x16U] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v67) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v67] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v67;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v68) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x16U] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v68;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v69) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x17U] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v70) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v70] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v70;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v71) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x17U] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v71;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v72) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x18U] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v73) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v73] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v73;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v74) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x18U] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v74;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v75) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x19U] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v76) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v76] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v76;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v77) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x19U] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v77;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v78) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x1aU] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v79) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v79] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v79;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v80) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x1aU] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v80;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v81) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x1bU] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v82) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v82] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v82;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v83) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x1bU] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v83;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v84) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x1cU] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v85) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v85] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v85;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v86) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x1cU] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v86;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v87) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x1dU] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v88) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v88] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v88;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v89) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x1dU] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v89;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v90) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x1eU] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v91) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v91] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v91;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v92) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x1eU] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v92;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v93) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x1fU] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v94) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v94] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v94;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v95) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x1fU] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v95;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v96) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x20U] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v97) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v97] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v97;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v98) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x20U] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v98;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v99) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x21U] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v100) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v100] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v100;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v101) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x21U] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v101;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v102) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x22U] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v103) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v103] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v103;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v104) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x22U] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v104;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v105) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x23U] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v106) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v106] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v106;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v107) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x23U] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v107;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v108) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x24U] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v109) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v109] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v109;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v110) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x24U] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v110;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v111) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x25U] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v112) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v112] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v112;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v113) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x25U] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v113;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v114) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x26U] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v115) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v115] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v115;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v116) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x26U] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v116;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v117) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x27U] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v118) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v118] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v118;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v119) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x27U] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v119;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v120) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x28U] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v121) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v121] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v121;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v122) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x28U] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v122;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v123) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x29U] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v124) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v124] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v124;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v125) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x29U] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v125;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v126) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x2aU] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v127) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v127] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v127;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v128) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x2aU] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v128;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v129) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x2bU] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v130) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v130] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v130;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v131) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x2bU] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v131;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v132) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x2cU] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v133) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v133] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v133;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v134) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x2cU] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v134;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v135) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x2dU] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v136) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v136] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v136;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v137) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x2dU] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v137;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v138) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x2eU] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v139) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v139] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v139;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v140) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x2eU] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v140;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v141) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x2fU] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v142) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v142] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v142;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v143) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x2fU] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v143;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v144) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x30U] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v145) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v145] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v145;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v146) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x30U] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v146;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v147) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x31U] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v148) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v148] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v148;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v149) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x31U] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v149;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v150) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x32U] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v151) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v151] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v151;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v152) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x32U] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v152;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v153) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x33U] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v154) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v154] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v154;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v155) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x33U] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v155;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v156) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x34U] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v157) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v157] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v157;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v158) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x34U] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v158;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v159) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x35U] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v160) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v160] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v160;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v161) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x35U] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v161;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v162) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x36U] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v163) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v163] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v163;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v164) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x36U] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v164;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v165) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x37U] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v166) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v166] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v166;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v167) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x37U] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v167;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v168) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x38U] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v169) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v169] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v169;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v170) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x38U] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v170;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v171) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x39U] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v172) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v172] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v172;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v173) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x39U] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v173;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v174) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x3aU] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v175) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v175] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v175;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v176) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x3aU] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v176;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v177) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x3bU] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v178) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v178] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v178;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v179) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x3bU] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v179;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v180) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x3cU] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v181) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v181] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v181;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v182) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x3cU] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v182;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v183) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x3dU] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v184) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v184] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v184;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v185) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x3dU] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v185;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v186) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x3eU] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v187) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v187] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v187;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v188) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x3eU] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v188;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v189) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x3fU] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v190) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v190] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v190;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v191) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x3fU] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v191;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v192) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x40U] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v193) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v193] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v193;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v194) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x40U] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v194;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v195) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x41U] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v196) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v196] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v196;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v197) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x41U] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v197;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v198) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x42U] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v199) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v199] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v199;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v200) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x42U] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v200;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v201) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x43U] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v202) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v202] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v202;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v203) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x43U] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v203;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v204) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x44U] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v205) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v205] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v205;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v206) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x44U] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v206;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v207) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[0x45U] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v208) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table[vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v208] 
            = vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v208;
    }
}

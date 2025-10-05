// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_snake_map__Syms.h"


VL_ATTR_COLD void Vtb_snake_map___024root__trace_init_sub__TOP__0(Vtb_snake_map___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_snake_map___024root__trace_init_sub__TOP__0\n"); );
    Vtb_snake_map__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("tb_snake_map", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+46,0,"GRID_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,0,"GRID_H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"XW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"YW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+40,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"tick",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"eat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"head_xy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+5,0,"tail_xy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+6,0,"q_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+7,0,"q_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+41,0,"body_on",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"next_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+9,0,"next_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+10,0,"will_pop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"self_hit_now",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("occ_ref", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+11+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+17,0,"ref_clear__Vstatic__y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+18,0,"check_occ__Vstatic__x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+19,0,"check_occ__Vstatic__y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+20,0,"check_occ__Vstatic__err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+48,0,"XW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"YW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+46,0,"GRID_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,0,"GRID_H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+40,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"tick",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"eat",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"head_xy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+5,0,"tail_xy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+6,0,"q_x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+7,0,"q_y",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+41,0,"body_on",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"next_x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+9,0,"next_y",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+10,0,"will_pop",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"self_hit_now",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("occ", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+33+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+21,0,"head_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+22,0,"head_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+23,0,"tail_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+24,0,"tail_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+39,0,"r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+43,0,"row_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+44,0,"row_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+25,0,"moving_into_tail",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"occ_next_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+26,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+27,0,"hx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+28,0,"hy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+29,0,"nx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+30,0,"ny",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+31,0,"tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+32,0,"ty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_snake_map___024root__trace_init_top(Vtb_snake_map___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_snake_map___024root__trace_init_top\n"); );
    Vtb_snake_map__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_snake_map___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_snake_map___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_snake_map___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_snake_map___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_snake_map___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_snake_map___024root__trace_register(Vtb_snake_map___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_snake_map___024root__trace_register\n"); );
    Vtb_snake_map__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_snake_map___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_snake_map___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_snake_map___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_snake_map___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_snake_map___024root__trace_const_0_sub_0(Vtb_snake_map___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_snake_map___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_snake_map___024root__trace_const_0\n"); );
    // Init
    Vtb_snake_map___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_snake_map___024root*>(voidSelf);
    Vtb_snake_map__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_snake_map___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_snake_map___024root__trace_const_0_sub_0(Vtb_snake_map___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_snake_map___024root__trace_const_0_sub_0\n"); );
    Vtb_snake_map__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+46,(8U),32);
    bufp->fullIData(oldp+47,(6U),32);
    bufp->fullIData(oldp+48,(3U),32);
}

VL_ATTR_COLD void Vtb_snake_map___024root__trace_full_0_sub_0(Vtb_snake_map___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_snake_map___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_snake_map___024root__trace_full_0\n"); );
    // Init
    Vtb_snake_map___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_snake_map___024root*>(voidSelf);
    Vtb_snake_map__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_snake_map___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_snake_map___024root__trace_full_0_sub_0(Vtb_snake_map___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_snake_map___024root__trace_full_0_sub_0\n"); );
    Vtb_snake_map__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.tb_snake_map__DOT__reset));
    bufp->fullBit(oldp+2,(vlSelfRef.tb_snake_map__DOT__tick));
    bufp->fullBit(oldp+3,(vlSelfRef.tb_snake_map__DOT__eat));
    bufp->fullCData(oldp+4,(vlSelfRef.tb_snake_map__DOT__head_xy),6);
    bufp->fullCData(oldp+5,(vlSelfRef.tb_snake_map__DOT__tail_xy),6);
    bufp->fullCData(oldp+6,(vlSelfRef.tb_snake_map__DOT__q_x),3);
    bufp->fullCData(oldp+7,(vlSelfRef.tb_snake_map__DOT__q_y),3);
    bufp->fullCData(oldp+8,(vlSelfRef.tb_snake_map__DOT__next_x),3);
    bufp->fullCData(oldp+9,(vlSelfRef.tb_snake_map__DOT__next_y),3);
    bufp->fullBit(oldp+10,(vlSelfRef.tb_snake_map__DOT__will_pop));
    bufp->fullCData(oldp+11,(vlSelfRef.tb_snake_map__DOT__occ_ref[0]),8);
    bufp->fullCData(oldp+12,(vlSelfRef.tb_snake_map__DOT__occ_ref[1]),8);
    bufp->fullCData(oldp+13,(vlSelfRef.tb_snake_map__DOT__occ_ref[2]),8);
    bufp->fullCData(oldp+14,(vlSelfRef.tb_snake_map__DOT__occ_ref[3]),8);
    bufp->fullCData(oldp+15,(vlSelfRef.tb_snake_map__DOT__occ_ref[4]),8);
    bufp->fullCData(oldp+16,(vlSelfRef.tb_snake_map__DOT__occ_ref[5]),8);
    bufp->fullIData(oldp+17,(vlSelfRef.tb_snake_map__DOT__ref_clear__Vstatic__y),32);
    bufp->fullIData(oldp+18,(vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x),32);
    bufp->fullIData(oldp+19,(vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__y),32);
    bufp->fullIData(oldp+20,(vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err),32);
    bufp->fullCData(oldp+21,((7U & ((IData)(vlSelfRef.tb_snake_map__DOT__head_xy) 
                                    >> 3U))),3);
    bufp->fullCData(oldp+22,((7U & (IData)(vlSelfRef.tb_snake_map__DOT__head_xy))),3);
    bufp->fullCData(oldp+23,((7U & ((IData)(vlSelfRef.tb_snake_map__DOT__tail_xy) 
                                    >> 3U))),3);
    bufp->fullCData(oldp+24,((7U & (IData)(vlSelfRef.tb_snake_map__DOT__tail_xy))),3);
    bufp->fullBit(oldp+25,((((IData)(vlSelfRef.tb_snake_map__DOT__next_x) 
                             == (7U & ((IData)(vlSelfRef.tb_snake_map__DOT__tail_xy) 
                                       >> 3U))) & ((IData)(vlSelfRef.tb_snake_map__DOT__next_y) 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelfRef.tb_snake_map__DOT__tail_xy))))));
    bufp->fullIData(oldp+26,(vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__hit),32);
    bufp->fullIData(oldp+27,(vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__hx),32);
    bufp->fullIData(oldp+28,(vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__hy),32);
    bufp->fullIData(oldp+29,(vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__nx),32);
    bufp->fullIData(oldp+30,(vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__ny),32);
    bufp->fullIData(oldp+31,(vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__tx),32);
    bufp->fullIData(oldp+32,(vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__ty),32);
    bufp->fullCData(oldp+33,(vlSelfRef.tb_snake_map__DOT__dut__DOT__occ[0]),8);
    bufp->fullCData(oldp+34,(vlSelfRef.tb_snake_map__DOT__dut__DOT__occ[1]),8);
    bufp->fullCData(oldp+35,(vlSelfRef.tb_snake_map__DOT__dut__DOT__occ[2]),8);
    bufp->fullCData(oldp+36,(vlSelfRef.tb_snake_map__DOT__dut__DOT__occ[3]),8);
    bufp->fullCData(oldp+37,(vlSelfRef.tb_snake_map__DOT__dut__DOT__occ[4]),8);
    bufp->fullCData(oldp+38,(vlSelfRef.tb_snake_map__DOT__dut__DOT__occ[5]),8);
    bufp->fullIData(oldp+39,(vlSelfRef.tb_snake_map__DOT__dut__DOT__r),32);
    bufp->fullBit(oldp+40,(vlSelfRef.tb_snake_map__DOT__clk));
    bufp->fullBit(oldp+41,((1U & (((5U >= (IData)(vlSelfRef.tb_snake_map__DOT__q_y))
                                    ? vlSelfRef.tb_snake_map__DOT__dut__DOT__occ
                                   [vlSelfRef.tb_snake_map__DOT__q_y]
                                    : 0U) >> (IData)(vlSelfRef.tb_snake_map__DOT__q_x)))));
    bufp->fullBit(oldp+42,(((IData)(vlSelfRef.tb_snake_map__DOT__tick) 
                            & ((~ ((IData)(vlSelfRef.tb_snake_map__DOT__will_pop) 
                                   & (((IData)(vlSelfRef.tb_snake_map__DOT__next_x) 
                                       == (7U & ((IData)(vlSelfRef.tb_snake_map__DOT__tail_xy) 
                                                 >> 3U))) 
                                      & ((IData)(vlSelfRef.tb_snake_map__DOT__next_y) 
                                         == (7U & (IData)(vlSelfRef.tb_snake_map__DOT__tail_xy)))))) 
                               & (((5U >= (IData)(vlSelfRef.tb_snake_map__DOT__next_y))
                                    ? vlSelfRef.tb_snake_map__DOT__dut__DOT__occ
                                   [vlSelfRef.tb_snake_map__DOT__next_y]
                                    : 0U) >> (IData)(vlSelfRef.tb_snake_map__DOT__next_x))))));
    bufp->fullCData(oldp+43,(((5U >= (IData)(vlSelfRef.tb_snake_map__DOT__q_y))
                               ? vlSelfRef.tb_snake_map__DOT__dut__DOT__occ
                              [vlSelfRef.tb_snake_map__DOT__q_y]
                               : 0U)),8);
    bufp->fullCData(oldp+44,(((5U >= (IData)(vlSelfRef.tb_snake_map__DOT__next_y))
                               ? vlSelfRef.tb_snake_map__DOT__dut__DOT__occ
                              [vlSelfRef.tb_snake_map__DOT__next_y]
                               : 0U)),8);
    bufp->fullBit(oldp+45,((1U & (((5U >= (IData)(vlSelfRef.tb_snake_map__DOT__next_y))
                                    ? vlSelfRef.tb_snake_map__DOT__dut__DOT__occ
                                   [vlSelfRef.tb_snake_map__DOT__next_y]
                                    : 0U) >> (IData)(vlSelfRef.tb_snake_map__DOT__next_x)))));
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_top__Syms.h"


VL_ATTR_COLD void Vtb_top___024root__trace_init_sub__TOP__0(Vtb_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root__trace_init_sub__TOP__0\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("tb_top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+121,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"btnC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"btnU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"btnD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"btnL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"btnR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"hsync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"vsync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"vgaRed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+7,0,"vgaGreen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+8,0,"vgaBlue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+19,0,"game_tick",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+20,0,"head_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+21,0,"head_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+22,0,"apple_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+23,0,"apple_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+24,0,"snake_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+17,0,"video_on",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"game_over",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+127,0,"tick_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+131,0,"MAX_TICKS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+132,0,"TICKS_PER_SEC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+121,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"btnC",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"btnU",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"btnD",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"btnL",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"btnR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"hsync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"vsync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"vgaRed",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+7,0,"vgaGreen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+8,0,"vgaBlue",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+128,0,"div4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+129,0,"pix_clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+133,0,"CELL_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+134,0,"GRID_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+135,0,"GRID_H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"por",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+130,0,"reset_pix",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"hcount",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2,0,"vcount",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+17,0,"video_on",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"game_tick",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+113,0,"su",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+114,0,"sd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+115,0,"sl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+116,0,"sr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+117,0,"u",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"dir_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+3,0,"cell_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+4,0,"cell_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+25,0,"game_over",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"gated_tick",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+20,0,"head_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+21,0,"head_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+9,0,"head_on",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+28,0,"head_xy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+29,0,"tail_xy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+24,0,"snake_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+30,0,"tail_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"ate_pos",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"push_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"pop_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+33,0,"next_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+34,0,"next_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+22,0,"apple_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+23,0,"apple_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+10,0,"apple_on",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"body_on",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"self_hit_now",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"over_color",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+12,0,"rgb_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("ag", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+136,0,"XW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+137,0,"YW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+134,0,"GRID_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+135,0,"GRID_H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+138,0,"LFSR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+129,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"game_tick",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"ate",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+22,0,"apple_x",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+23,0,"apple_y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+36,0,"lfsr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+37,0,"feedback",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+38,0,"lfsr_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+39,0,"raw_x_cur",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+40,0,"raw_y_cur",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+41,0,"raw_x_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+42,0,"raw_y_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("sb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+136,0,"XW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+137,0,"YW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+139,0,"MAX_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+129,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"push",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"pop",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+28,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+29,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+24,0,"length",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+30,0,"tail_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+140,0,"W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+43,0,"tail_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+44,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("sh", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+136,0,"X_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+137,0,"Y_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+134,0,"GRID_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+135,0,"GRID_H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+129,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"tick",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"dir",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+20,0,"head_x",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+21,0,"head_y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+141,0,"INIT_X",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+142,0,"INIT_Y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("sm", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+136,0,"XW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+137,0,"YW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+134,0,"GRID_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+135,0,"GRID_H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+129,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"tick",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"eat",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+28,0,"head_xy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+29,0,"tail_xy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+3,0,"q_x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+4,0,"q_y",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+11,0,"body_on",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+33,0,"next_x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+34,0,"next_y",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+32,0,"will_pop",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"tail_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"self_hit_now",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("occ", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 30; ++i) {
        tracep->declQuad(c+45+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 39,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+20,0,"head_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+21,0,"head_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+105,0,"tail_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+106,0,"tail_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+107,0,"r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declQuad(c+13,0,"row_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+108,0,"row_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declBit(c+110,0,"moving_into_tail",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"occ_next_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("td", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+143,0,"CLK_FREQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+132,0,"TICKS_PER_SEC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+129,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"game_tick",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+144,0,"DIV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+112,0,"counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("vga", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+129,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"hcount",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2,0,"vcount",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+15,0,"hsync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"vsync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"video_on",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+145,0,"H_MAX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+146,0,"V_MAX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+147,0,"H_VISIBLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+148,0,"V_VISIBLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+149,0,"H_SYNC_START",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+150,0,"H_SYNC_END",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+151,0,"V_SYNC_START",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+152,0,"V_SYNC_END",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_top___024root__trace_init_top(Vtb_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root__trace_init_top\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_top___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_top___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_top___024root__trace_register(Vtb_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root__trace_register\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_top___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_top___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_top___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_top___024root__trace_const_0_sub_0(Vtb_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_top___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root__trace_const_0\n"); );
    // Init
    Vtb_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_top___024root*>(voidSelf);
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_top___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_top___024root__trace_const_0_sub_0(Vtb_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root__trace_const_0_sub_0\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+131,(0xc8U),32);
    bufp->fullIData(oldp+132,(0x3e8U),32);
    bufp->fullIData(oldp+133,(4U),32);
    bufp->fullIData(oldp+134,(0x28U),32);
    bufp->fullIData(oldp+135,(0x1eU),32);
    bufp->fullIData(oldp+136,(6U),32);
    bufp->fullIData(oldp+137,(5U),32);
    bufp->fullIData(oldp+138,(0x10U),32);
    bufp->fullIData(oldp+139,(0x80U),32);
    bufp->fullIData(oldp+140,(0xbU),32);
    bufp->fullIData(oldp+141,(0x14U),32);
    bufp->fullIData(oldp+142,(0xfU),32);
    bufp->fullIData(oldp+143,(0x17d7840U),32);
    bufp->fullIData(oldp+144,(0x61a8U),32);
    bufp->fullIData(oldp+145,(0x320U),32);
    bufp->fullIData(oldp+146,(0x20dU),32);
    bufp->fullIData(oldp+147,(0x280U),32);
    bufp->fullIData(oldp+148,(0x1e0U),32);
    bufp->fullIData(oldp+149,(0x290U),32);
    bufp->fullIData(oldp+150,(0x2f0U),32);
    bufp->fullIData(oldp+151,(0x1eaU),32);
    bufp->fullIData(oldp+152,(0x1ecU),32);
}

VL_ATTR_COLD void Vtb_top___024root__trace_full_0_sub_0(Vtb_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_top___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root__trace_full_0\n"); );
    // Init
    Vtb_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_top___024root*>(voidSelf);
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_top___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_top___024root__trace_full_0_sub_0(Vtb_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root__trace_full_0_sub_0\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullSData(oldp+1,(vlSelfRef.tb_top__DOT__dut__DOT__hcount),10);
    bufp->fullSData(oldp+2,(vlSelfRef.tb_top__DOT__dut__DOT__vcount),10);
    bufp->fullCData(oldp+3,((0x3fU & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__hcount) 
                                      >> 4U))),6);
    bufp->fullCData(oldp+4,((0x1fU & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__vcount) 
                                      >> 4U))),5);
    bufp->fullCData(oldp+5,(((0x10U & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__hcount) 
                                       ^ (IData)(vlSelfRef.tb_top__DOT__dut__DOT__vcount)))
                              ? 4U : 1U)),3);
    bufp->fullCData(oldp+6,((0xfU & (- (IData)((1U 
                                                & (((IData)(vlSelfRef.tb_top__DOT__dut__DOT__game_over)
                                                     ? 
                                                    ((0x10U 
                                                      & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__hcount) 
                                                         ^ (IData)(vlSelfRef.tb_top__DOT__dut__DOT__vcount)))
                                                      ? 4U
                                                      : 1U)
                                                     : 
                                                    ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__video_on)
                                                      ? 
                                                     (((0x27U 
                                                        >= 
                                                        (0x3fU 
                                                         & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__hcount) 
                                                            >> 4U))) 
                                                       & (IData)(
                                                                 (((0x1dU 
                                                                    >= 
                                                                    (0x1fU 
                                                                     & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__vcount) 
                                                                        >> 4U)))
                                                                    ? 
                                                                   vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ
                                                                   [
                                                                   (0x1fU 
                                                                    & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__vcount) 
                                                                       >> 4U))]
                                                                    : 0ULL) 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__hcount) 
                                                                      >> 4U)))))
                                                       ? 4U
                                                       : 
                                                      ((((0x3fU 
                                                          & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__hcount) 
                                                             >> 4U)) 
                                                         == (IData)(vlSelfRef.tb_top__DOT__dut__DOT__apple_x)) 
                                                        & ((0x1fU 
                                                            & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__vcount) 
                                                               >> 4U)) 
                                                           == (IData)(vlSelfRef.tb_top__DOT__dut__DOT__apple_y)))
                                                        ? 6U
                                                        : 
                                                       ((((0x3fU 
                                                           & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__hcount) 
                                                              >> 4U)) 
                                                          == (IData)(vlSelfRef.tb_top__DOT__dut__DOT__head_x)) 
                                                         & ((0x1fU 
                                                             & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__vcount) 
                                                                >> 4U)) 
                                                            == (IData)(vlSelfRef.tb_top__DOT__dut__DOT__head_y)))
                                                         ? 2U
                                                         : 1U)))
                                                      : 0U)) 
                                                   >> 2U)))))),4);
    bufp->fullCData(oldp+7,((0xfU & (- (IData)((1U 
                                                & (((IData)(vlSelfRef.tb_top__DOT__dut__DOT__game_over)
                                                     ? 
                                                    ((0x10U 
                                                      & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__hcount) 
                                                         ^ (IData)(vlSelfRef.tb_top__DOT__dut__DOT__vcount)))
                                                      ? 4U
                                                      : 1U)
                                                     : 
                                                    ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__video_on)
                                                      ? 
                                                     (((0x27U 
                                                        >= 
                                                        (0x3fU 
                                                         & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__hcount) 
                                                            >> 4U))) 
                                                       & (IData)(
                                                                 (((0x1dU 
                                                                    >= 
                                                                    (0x1fU 
                                                                     & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__vcount) 
                                                                        >> 4U)))
                                                                    ? 
                                                                   vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ
                                                                   [
                                                                   (0x1fU 
                                                                    & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__vcount) 
                                                                       >> 4U))]
                                                                    : 0ULL) 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__hcount) 
                                                                      >> 4U)))))
                                                       ? 4U
                                                       : 
                                                      ((((0x3fU 
                                                          & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__hcount) 
                                                             >> 4U)) 
                                                         == (IData)(vlSelfRef.tb_top__DOT__dut__DOT__apple_x)) 
                                                        & ((0x1fU 
                                                            & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__vcount) 
                                                               >> 4U)) 
                                                           == (IData)(vlSelfRef.tb_top__DOT__dut__DOT__apple_y)))
                                                        ? 6U
                                                        : 
                                                       ((((0x3fU 
                                                           & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__hcount) 
                                                              >> 4U)) 
                                                          == (IData)(vlSelfRef.tb_top__DOT__dut__DOT__head_x)) 
                                                         & ((0x1fU 
                                                             & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__vcount) 
                                                                >> 4U)) 
                                                            == (IData)(vlSelfRef.tb_top__DOT__dut__DOT__head_y)))
                                                         ? 2U
                                                         : 1U)))
                                                      : 0U)) 
                                                   >> 1U)))))),4);
    bufp->fullCData(oldp+8,((0xfU & (- (IData)((1U 
                                                & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__game_over)
                                                    ? 
                                                   ((0x10U 
                                                     & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__hcount) 
                                                        ^ (IData)(vlSelfRef.tb_top__DOT__dut__DOT__vcount)))
                                                     ? 4U
                                                     : 1U)
                                                    : 
                                                   ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__video_on)
                                                     ? 
                                                    (((0x27U 
                                                       >= 
                                                       (0x3fU 
                                                        & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__hcount) 
                                                           >> 4U))) 
                                                      & (IData)(
                                                                (((0x1dU 
                                                                   >= 
                                                                   (0x1fU 
                                                                    & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__vcount) 
                                                                       >> 4U)))
                                                                   ? 
                                                                  vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ
                                                                  [
                                                                  (0x1fU 
                                                                   & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__vcount) 
                                                                      >> 4U))]
                                                                   : 0ULL) 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__hcount) 
                                                                     >> 4U)))))
                                                      ? 4U
                                                      : 
                                                     ((((0x3fU 
                                                         & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__hcount) 
                                                            >> 4U)) 
                                                        == (IData)(vlSelfRef.tb_top__DOT__dut__DOT__apple_x)) 
                                                       & ((0x1fU 
                                                           & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__vcount) 
                                                              >> 4U)) 
                                                          == (IData)(vlSelfRef.tb_top__DOT__dut__DOT__apple_y)))
                                                       ? 6U
                                                       : 
                                                      ((((0x3fU 
                                                          & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__hcount) 
                                                             >> 4U)) 
                                                         == (IData)(vlSelfRef.tb_top__DOT__dut__DOT__head_x)) 
                                                        & ((0x1fU 
                                                            & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__vcount) 
                                                               >> 4U)) 
                                                           == (IData)(vlSelfRef.tb_top__DOT__dut__DOT__head_y)))
                                                        ? 2U
                                                        : 1U)))
                                                     : 0U))))))),4);
    bufp->fullBit(oldp+9,((((0x3fU & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__hcount) 
                                      >> 4U)) == (IData)(vlSelfRef.tb_top__DOT__dut__DOT__head_x)) 
                           & ((0x1fU & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__vcount) 
                                        >> 4U)) == (IData)(vlSelfRef.tb_top__DOT__dut__DOT__head_y)))));
    bufp->fullBit(oldp+10,((((0x3fU & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__hcount) 
                                       >> 4U)) == (IData)(vlSelfRef.tb_top__DOT__dut__DOT__apple_x)) 
                            & ((0x1fU & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__vcount) 
                                         >> 4U)) == (IData)(vlSelfRef.tb_top__DOT__dut__DOT__apple_y)))));
    bufp->fullBit(oldp+11,(((0x27U >= (0x3fU & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__hcount) 
                                                >> 4U))) 
                            & (IData)((((0x1dU >= (0x1fU 
                                                   & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__vcount) 
                                                      >> 4U)))
                                         ? vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ
                                        [(0x1fU & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__vcount) 
                                                   >> 4U))]
                                         : 0ULL) >> 
                                       (0x3fU & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__hcount) 
                                                 >> 4U)))))));
    bufp->fullCData(oldp+12,(((IData)(vlSelfRef.tb_top__DOT__dut__DOT__game_over)
                               ? ((0x10U & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__hcount) 
                                            ^ (IData)(vlSelfRef.tb_top__DOT__dut__DOT__vcount)))
                                   ? 4U : 1U) : ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__video_on)
                                                  ? 
                                                 (((0x27U 
                                                    >= 
                                                    (0x3fU 
                                                     & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__hcount) 
                                                        >> 4U))) 
                                                   & (IData)(
                                                             (((0x1dU 
                                                                >= 
                                                                (0x1fU 
                                                                 & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__vcount) 
                                                                    >> 4U)))
                                                                ? 
                                                               vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ
                                                               [
                                                               (0x1fU 
                                                                & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__vcount) 
                                                                   >> 4U))]
                                                                : 0ULL) 
                                                              >> 
                                                              (0x3fU 
                                                               & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__hcount) 
                                                                  >> 4U)))))
                                                   ? 4U
                                                   : 
                                                  ((((0x3fU 
                                                      & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__hcount) 
                                                         >> 4U)) 
                                                     == (IData)(vlSelfRef.tb_top__DOT__dut__DOT__apple_x)) 
                                                    & ((0x1fU 
                                                        & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__vcount) 
                                                           >> 4U)) 
                                                       == (IData)(vlSelfRef.tb_top__DOT__dut__DOT__apple_y)))
                                                    ? 6U
                                                    : 
                                                   ((((0x3fU 
                                                       & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__hcount) 
                                                          >> 4U)) 
                                                      == (IData)(vlSelfRef.tb_top__DOT__dut__DOT__head_x)) 
                                                     & ((0x1fU 
                                                         & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__vcount) 
                                                            >> 4U)) 
                                                        == (IData)(vlSelfRef.tb_top__DOT__dut__DOT__head_y)))
                                                     ? 2U
                                                     : 1U)))
                                                  : 0U))),3);
    bufp->fullQData(oldp+13,(((0x1dU >= (0x1fU & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__vcount) 
                                                  >> 4U)))
                               ? vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ
                              [(0x1fU & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__vcount) 
                                         >> 4U))] : 0ULL)),40);
    bufp->fullBit(oldp+15,(vlSelfRef.tb_top__DOT__hsync));
    bufp->fullBit(oldp+16,(vlSelfRef.tb_top__DOT__vsync));
    bufp->fullBit(oldp+17,(vlSelfRef.tb_top__DOT__dut__DOT__video_on));
    bufp->fullSData(oldp+18,(vlSelfRef.tb_top__DOT__dut__DOT__por),16);
    bufp->fullBit(oldp+19,(vlSelfRef.tb_top__DOT__dut__DOT__game_tick));
    bufp->fullCData(oldp+20,(vlSelfRef.tb_top__DOT__dut__DOT__head_x),6);
    bufp->fullCData(oldp+21,(vlSelfRef.tb_top__DOT__dut__DOT__head_y),5);
    bufp->fullCData(oldp+22,(vlSelfRef.tb_top__DOT__dut__DOT__apple_x),6);
    bufp->fullCData(oldp+23,(vlSelfRef.tb_top__DOT__dut__DOT__apple_y),5);
    bufp->fullCData(oldp+24,(vlSelfRef.tb_top__DOT__dut__DOT__snake_len),8);
    bufp->fullBit(oldp+25,(vlSelfRef.tb_top__DOT__dut__DOT__game_over));
    bufp->fullCData(oldp+26,(vlSelfRef.tb_top__DOT__dut__DOT__dir_reg),2);
    bufp->fullBit(oldp+27,(vlSelfRef.tb_top__DOT__dut__DOT__gated_tick));
    bufp->fullSData(oldp+28,((((IData)(vlSelfRef.tb_top__DOT__dut__DOT__head_x) 
                               << 5U) | (IData)(vlSelfRef.tb_top__DOT__dut__DOT__head_y))),11);
    bufp->fullSData(oldp+29,(vlSelfRef.tb_top__DOT__dut__DOT__tail_xy),11);
    bufp->fullBit(oldp+30,((0U != (IData)(vlSelfRef.tb_top__DOT__dut__DOT__snake_len))));
    bufp->fullBit(oldp+31,(vlSelfRef.tb_top__DOT__dut__DOT__ate_pos));
    bufp->fullBit(oldp+32,(vlSelfRef.tb_top__DOT__dut__DOT__pop_w));
    bufp->fullCData(oldp+33,(vlSelfRef.tb_top__DOT__dut__DOT__next_x),6);
    bufp->fullCData(oldp+34,(vlSelfRef.tb_top__DOT__dut__DOT__next_y),5);
    bufp->fullBit(oldp+35,(((IData)(vlSelfRef.tb_top__DOT__dut__DOT__gated_tick) 
                            & ((~ ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__pop_w) 
                                   & ((0U != (IData)(vlSelfRef.tb_top__DOT__dut__DOT__snake_len)) 
                                      & (((IData)(vlSelfRef.tb_top__DOT__dut__DOT__next_x) 
                                          == (0x3fU 
                                              & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__tail_xy) 
                                                 >> 5U))) 
                                         & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__next_y) 
                                            == (0x1fU 
                                                & (IData)(vlSelfRef.tb_top__DOT__dut__DOT__tail_xy))))))) 
                               & ((0x27U >= (IData)(vlSelfRef.tb_top__DOT__dut__DOT__next_x)) 
                                  & (IData)((((0x1dU 
                                               >= (IData)(vlSelfRef.tb_top__DOT__dut__DOT__next_y))
                                               ? vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ
                                              [vlSelfRef.tb_top__DOT__dut__DOT__next_y]
                                               : 0ULL) 
                                             >> (IData)(vlSelfRef.tb_top__DOT__dut__DOT__next_x))))))));
    bufp->fullSData(oldp+36,(vlSelfRef.tb_top__DOT__dut__DOT__ag__DOT__lfsr),16);
    bufp->fullBit(oldp+37,((1U & VL_REDXOR_16((0xb400U 
                                               & (IData)(vlSelfRef.tb_top__DOT__dut__DOT__ag__DOT__lfsr))))));
    bufp->fullSData(oldp+38,(vlSelfRef.tb_top__DOT__dut__DOT__ag__DOT__lfsr_next),16);
    bufp->fullCData(oldp+39,((0x3fU & (IData)(vlSelfRef.tb_top__DOT__dut__DOT__ag__DOT__lfsr))),6);
    bufp->fullCData(oldp+40,((0x1fU & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__ag__DOT__lfsr) 
                                       >> 6U))),5);
    bufp->fullCData(oldp+41,((0x3fU & (IData)(vlSelfRef.tb_top__DOT__dut__DOT__ag__DOT__lfsr_next))),6);
    bufp->fullCData(oldp+42,((0x1fU & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__ag__DOT__lfsr) 
                                       >> 5U))),5);
    bufp->fullSData(oldp+43,(((0U != (IData)(vlSelfRef.tb_top__DOT__dut__DOT__snake_len))
                               ? vlSelfRef.tb_top__DOT__dut__DOT__sb__DOT__mem
                              [(0x7fU & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__snake_len) 
                                         - (IData)(1U)))]
                               : 0U)),11);
    bufp->fullIData(oldp+44,(vlSelfRef.tb_top__DOT__dut__DOT__sb__DOT__i),32);
    bufp->fullQData(oldp+45,(vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[0]),40);
    bufp->fullQData(oldp+47,(vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[1]),40);
    bufp->fullQData(oldp+49,(vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[2]),40);
    bufp->fullQData(oldp+51,(vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[3]),40);
    bufp->fullQData(oldp+53,(vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[4]),40);
    bufp->fullQData(oldp+55,(vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[5]),40);
    bufp->fullQData(oldp+57,(vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[6]),40);
    bufp->fullQData(oldp+59,(vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[7]),40);
    bufp->fullQData(oldp+61,(vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[8]),40);
    bufp->fullQData(oldp+63,(vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[9]),40);
    bufp->fullQData(oldp+65,(vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[10]),40);
    bufp->fullQData(oldp+67,(vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[11]),40);
    bufp->fullQData(oldp+69,(vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[12]),40);
    bufp->fullQData(oldp+71,(vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[13]),40);
    bufp->fullQData(oldp+73,(vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[14]),40);
    bufp->fullQData(oldp+75,(vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[15]),40);
    bufp->fullQData(oldp+77,(vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[16]),40);
    bufp->fullQData(oldp+79,(vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[17]),40);
    bufp->fullQData(oldp+81,(vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[18]),40);
    bufp->fullQData(oldp+83,(vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[19]),40);
    bufp->fullQData(oldp+85,(vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[20]),40);
    bufp->fullQData(oldp+87,(vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[21]),40);
    bufp->fullQData(oldp+89,(vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[22]),40);
    bufp->fullQData(oldp+91,(vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[23]),40);
    bufp->fullQData(oldp+93,(vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[24]),40);
    bufp->fullQData(oldp+95,(vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[25]),40);
    bufp->fullQData(oldp+97,(vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[26]),40);
    bufp->fullQData(oldp+99,(vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[27]),40);
    bufp->fullQData(oldp+101,(vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[28]),40);
    bufp->fullQData(oldp+103,(vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[29]),40);
    bufp->fullCData(oldp+105,((0x3fU & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__tail_xy) 
                                        >> 5U))),6);
    bufp->fullCData(oldp+106,((0x1fU & (IData)(vlSelfRef.tb_top__DOT__dut__DOT__tail_xy))),5);
    bufp->fullIData(oldp+107,(vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__r),32);
    bufp->fullQData(oldp+108,(((0x1dU >= (IData)(vlSelfRef.tb_top__DOT__dut__DOT__next_y))
                                ? vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ
                               [vlSelfRef.tb_top__DOT__dut__DOT__next_y]
                                : 0ULL)),40);
    bufp->fullBit(oldp+110,((((IData)(vlSelfRef.tb_top__DOT__dut__DOT__next_x) 
                              == (0x3fU & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__tail_xy) 
                                           >> 5U))) 
                             & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__next_y) 
                                == (0x1fU & (IData)(vlSelfRef.tb_top__DOT__dut__DOT__tail_xy))))));
    bufp->fullBit(oldp+111,(((0x27U >= (IData)(vlSelfRef.tb_top__DOT__dut__DOT__next_x)) 
                             & (IData)((((0x1dU >= (IData)(vlSelfRef.tb_top__DOT__dut__DOT__next_y))
                                          ? vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ
                                         [vlSelfRef.tb_top__DOT__dut__DOT__next_y]
                                          : 0ULL) >> (IData)(vlSelfRef.tb_top__DOT__dut__DOT__next_x))))));
    bufp->fullIData(oldp+112,(vlSelfRef.tb_top__DOT__dut__DOT__td__DOT__counter),32);
    bufp->fullCData(oldp+113,(vlSelfRef.tb_top__DOT__dut__DOT__su),2);
    bufp->fullCData(oldp+114,(vlSelfRef.tb_top__DOT__dut__DOT__sd),2);
    bufp->fullCData(oldp+115,(vlSelfRef.tb_top__DOT__dut__DOT__sl),2);
    bufp->fullCData(oldp+116,(vlSelfRef.tb_top__DOT__dut__DOT__sr),2);
    bufp->fullBit(oldp+117,((1U & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__su) 
                                   >> 1U))));
    bufp->fullBit(oldp+118,((1U & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__sd) 
                                   >> 1U))));
    bufp->fullBit(oldp+119,((1U & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__sl) 
                                   >> 1U))));
    bufp->fullBit(oldp+120,((1U & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__sr) 
                                   >> 1U))));
    bufp->fullBit(oldp+121,(vlSelfRef.tb_top__DOT__clk));
    bufp->fullBit(oldp+122,(vlSelfRef.tb_top__DOT__btnC));
    bufp->fullBit(oldp+123,(vlSelfRef.tb_top__DOT__btnU));
    bufp->fullBit(oldp+124,(vlSelfRef.tb_top__DOT__btnD));
    bufp->fullBit(oldp+125,(vlSelfRef.tb_top__DOT__btnL));
    bufp->fullBit(oldp+126,(vlSelfRef.tb_top__DOT__btnR));
    bufp->fullIData(oldp+127,(vlSelfRef.tb_top__DOT__tick_count),32);
    bufp->fullCData(oldp+128,(vlSelfRef.tb_top__DOT__dut__DOT__div4),2);
    bufp->fullBit(oldp+129,(vlSelfRef.tb_top__DOT__dut__DOT__pix_clk));
    bufp->fullBit(oldp+130,(vlSelfRef.tb_top__DOT__dut__DOT__reset_pix));
}

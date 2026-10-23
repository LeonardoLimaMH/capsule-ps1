#include "common.h"

s32 _spu_note2pitch(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp0;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 var_a0;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_a3;
    s32 var_lo;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v1;
    u32 temp_v1;
    u32 temp_v1_2;
    u32 var_a0_2;

    temp_a2 = (((arg2 & 0xFFFF) << 7) + (arg3 & 0xFFFF)) - (((arg0 & 0xFFFF) << 7) + (arg1 & 0xFFFF));
    var_a1 = temp_a2;
    if (temp_a2 < 0) {
        var_a1 = -temp_a2;
    }
    var_a0 = var_a1 / 1536;
    var_v1 = var_a1 % 1536;
    if (temp_a2 >= 0) {
        var_v0_2 = 0x1000 << var_a0;
    } else {
        if (var_v1 != 0) {
            var_a0 += 1;
            var_v1 = 0x600 - var_v1;
        }
        var_v0_2 = 0x1000 >> var_a0;
    }
    temp_a2_2 = var_v0_2 & 0xFFFF;
    var_a0_2 = 0x103B;
    var_a3 = temp_a2_2 << 0xC;
    var_a1_2 = 0;
    var_v0_3 = var_v1;
    if (var_v1 < 0) {
        var_v0_3 = -var_v0_3;
    }
    temp_v1 = (u32) var_v0_3 >> 5;
    sp0 = temp_a2_2 * 0x103B;
    if (temp_v1 != 0) {
        var_lo = temp_a2_2 * 0x103B;
        do {
            var_a3 = var_lo;
            var_a0_2 = (u32) (var_a0_2 * 0x103B) >> 0xC;
            var_lo = temp_a2_2 * var_a0_2;
            var_a1_2 += 1;
            sp0 = var_lo;
        } while (var_a1_2 < (s32) temp_v1);
    }
    temp_v1_2 = (u32) (var_a3 + (((u32) (sp0 - var_a3) >> 5) * (var_v0_3 & 0x1F))) >> 0xC;
    var_v0 = temp_v1_2 & 0xFFFF;
    if (temp_v1_2 >= 0x4000U) {
        var_v0 = 0x3FFF & 0xFFFF;
    }
    return var_v0;
}

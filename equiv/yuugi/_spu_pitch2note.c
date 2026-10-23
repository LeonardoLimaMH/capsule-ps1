#include "common.h"

s32 _spu_pitch2note(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_a2;
    s32 temp_t6;
    s32 temp_v1;
    s32 var_a0;
    s32 var_lo;
    s32 var_t2;
    s32 var_t2_2;
    s32 var_t3;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    s32 var_v1_2;
    u32 temp_a2_2;
    u32 temp_t1;
    u32 var_a3;
    u32 var_t0;

    var_v1 = 0;
    var_t2 = 0xF;
    temp_a2 = ~arg2 & 0xFFFF;
    var_v0_2 = temp_a2 >> 0xF;
loop_1:
    if (!(var_v0_2 & 1)) {
        var_v1 = var_t2;
    } else {
        var_t2 -= 1;
        var_v0_2 = temp_a2 >> var_t2;
        if (var_t2 >= 0) {
            goto loop_1;
        }
    }
    temp_t6 = 1 << var_v1;
    var_t0 = 0x1000;
    var_t2_2 = 0;
    temp_a2_2 = arg2 & 0xFFFF;
    var_lo = temp_t6 * 0x1000;
loop_5:
    var_t0 = (u32) (var_t0 * 0x103B) >> 0xC;
    var_a0 = 0;
    var_t3 = 0;
    temp_t1 = (u32) ((temp_t6 * var_t0) - var_lo) >> 5;
    var_a3 = temp_t1;
loop_6:
    if ((temp_a2_2 < (u32) ((u32) (var_lo + var_t3) >> 0xC)) || (var_v0 = (var_t2_2 << 5) + var_a0, ((temp_a2_2 < (u32) ((u32) (var_lo + var_a3) >> 0xC)) == 0))) {
        var_a3 += temp_t1;
        var_a0 += 1;
        var_t3 += temp_t1;
        if (var_a0 >= 0x20) {
            var_t2_2 += 1;
            var_lo = temp_t6 * var_t0;
            if (var_t2_2 >= 0x30) {
                var_v0 = 0x600;
            } else {
                goto loop_5;
            }
        } else {
            goto loop_6;
        }
    }
    var_v1_2 = var_v0;
    if (var_v0 < 0) {
        var_v1_2 = var_v0 + 0x7F;
    }
    temp_v1 = var_v1_2 >> 7;
    return (((arg0 & 0xFFFF) + temp_v1 + ((var_v1 - 0xC) * 0xC)) << 8) | ((arg1 & 0xFFFF) + (var_v0 - (temp_v1 << 7)));
}

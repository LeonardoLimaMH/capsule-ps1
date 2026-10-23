#include "common.h"

s32 __mulsf3(s32 arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_a3_3;
    s32 temp_s0;
    s32 temp_t0;
    s32 temp_t1;
    s32 temp_v1;
    s32 var_a0;
    s32 var_t0;
    s32 var_v1;
    u32 temp_a3_2;
    u32 var_a3;

    temp_s0 = (arg0 & 0x80000000) ^ (arg1 & 0x80000000);
    if (!(arg0 & 0x7FFFFFFF) || !(arg1 & 0x7FFFFFFF)) {
        return temp_s0;
    }
    temp_t0 = (arg0 & 0x7FFFFF) | 0x800000;
    temp_t1 = (arg1 & 0x7FFFFF) | 0x800000;
    temp_a0 = temp_t0 >> 8;
    temp_v1 = temp_t1 >> 8;
    temp_a2 = ((arg0 >> 0x17) & 0xFF) + ((arg1 >> 0x17) & 0xFF);
    temp_a3 = (temp_a0 * temp_v1) + ((s32) ((temp_t0 & 0xFF) * temp_v1) >> 8) + ((s32) ((temp_t1 & 0xFF) * temp_a0) >> 8);
    var_v1 = temp_a2 - 0x7E;
    if (temp_a3 & 0x80000000) {
        var_a3 = (u32) (temp_a3 + 0x80) >> 8;
    } else {
        temp_a3_2 = temp_a3 + 0x40;
        if (temp_a3_2 & 0x80000000) {
            var_a3 = temp_a3_2 >> 8;
        } else {
            var_a3 = temp_a3_2 >> 7;
            var_v1 = temp_a2 - 0x7F;
        }
    }
    temp_a3_3 = var_a3 & 0xFF7FFFFF;
    if (var_v1 >= 0xFF) {
        _err_math(0x22, 0xC, temp_a2, temp_a3_3);
        var_a0 = 0x7F800000;
        if (temp_s0 != 0) {
            var_a0 = 0xFF800000;
        }
        var_t0 = var_a0;
    } else {
        var_t0 = temp_s0 | (var_v1 << 0x17) | temp_a3_3;
    }
    return var_t0;
}

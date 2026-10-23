#include "common.h"

s16 func_800D23F0(s32 arg0, s32 arg1, s32 arg2) {
    extern u16 D_800859F4[];
    s16 var_a1;
    s16 var_v1;
    s32 temp_a0;
    s32 temp_a1;
    u32 temp_v1;

    temp_a1 = (s32) (((arg1 & 0xFF) - (arg2 & 0xFF)) + 0x28) / 2;
    var_a1 = temp_a1 + 0xA;
    temp_v1 = (u32) ((*D_800859F4) & 0x7000) >> 0xC;
    temp_a0 = arg0 & 0xFF;
    if (temp_v1 == 0) {
        if (temp_a0 != 0) {
            goto block_7;
        }
        goto block_5;
    }
    if (temp_v1 == 2) {
        if (temp_a0 == 1) {
block_5:
            var_a1 += (temp_a1 + 0xA) / 5;
        } else {
block_7:
            var_a1 -= (temp_a1 + 0xA) / 5;
        }
    }
    var_v1 = 1;
    if (var_a1 > 0) {
        var_v1 = 0xFF;
        if (var_a1 < 0x100) {
            var_v1 = var_a1;
        }
    }
    return var_v1;
}

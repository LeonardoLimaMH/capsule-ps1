#include "common.h"

void func_80034148(s32 arg0) {
    extern M2C_UNK D_800922F0[];
    s32 temp_v1;
    s32 var_a0;
    s32 var_a1;
    s32 var_s1;
    u8 var_s0;

    if (arg0 & 0x8000) {
        var_a0 = arg0;
    } else {
        var_a0 = 0xFFFF;
    }
    var_a1 = 0;
    var_s0 = M2C_FIELD(D_800922F0, u8 *, 0x126);
    var_s1 = 1 << var_s0;
loop_5:
    if (M2C_FIELD(D_800922F0, u8 *, 0x125) & var_s1) {
        temp_v1 = var_s0 & 0xFF;
        if (M2C_FIELD(((temp_v1 * 2) + D_800922F0), u16 *, 0x12C) != (var_a0 & 0xFFFF)) {
            goto block_7;
        }
        SpuSetKey(0, 1 << (temp_v1 + 0x14), M2C_FIELD(D_800922F0, u8 *, 0x125));
        M2C_FIELD(D_800922F0, u8 *, 0x126) = var_s0;
        M2C_FIELD(D_800922F0, u8 *, 0x125) = (u8) (M2C_FIELD(D_800922F0, u8 *, 0x125) & ~var_s1);
        return;
    }
block_7:
    var_s1 *= 2;
    if (var_s1 & 0x10) {
        var_s1 = 1;
    }
    var_a1 += 1;
    var_s0 = (var_s0 + 1) & 3;
    if (var_a1 >= 4) {
        return;
    }
    goto loop_5;
}

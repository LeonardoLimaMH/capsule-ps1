#include "common.h"

s16 func_800D68D4(s32 arg0) {
    extern u8 D_800F1D1C[];
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    u32 temp_a0;

    temp_a0 = arg0 & 0x3F;
    if (temp_a0 < 0x11U) {
        var_v0_2 = temp_a0 * 8;
        goto block_8;
    }
    if ((s32) temp_a0 < 0x21) {
        var_v1 = 0x20 - temp_a0;
        goto block_6;
    }
    var_v1 = temp_a0 - 0x20;
    if ((s32) temp_a0 < 0x31) {
block_6:
        var_v0 = -*(s32 *)((var_v1 * 8) + D_800F1D1C);
    } else {
        var_v0_2 = (0x40 - temp_a0) * 8;
block_8:
        var_v0 = *(s32 *)(var_v0_2 + D_800F1D1C);
    }
    return (s16) var_v0;
}

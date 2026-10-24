#include "common.h"

s32 func_800DDCFC(void) {
    extern M2C_UNK D_80100F38[];
    s32 temp_v1;
    s32 var_v0;
    u8 temp_a0;

    temp_a0 = *M2C_FIELD((((func_800B1260() & 0xFFFF) * 0x79C) + D_80100F38), u8 **, 0x738);
    temp_v1 = temp_a0 - 2;
    var_v0 = temp_v1;
    if (temp_v1 < 0) {
        var_v0 = temp_a0 + 5;
    }
    return temp_v1 - ((var_v0 >> 3) * 8);
}

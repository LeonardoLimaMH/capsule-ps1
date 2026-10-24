#include "common.h"

s16 func_800340B4(s32 arg0) {
    extern M2C_UNK D_800922F0[];
    s16 var_a3;
    s32 var_a0;
    s32 var_a2;
    s32 var_v1;
    u8 var_a1;

    var_a0 = arg0;
    if (!(arg0 & 0x8000)) {
        var_a0 = 0xFFFF;
    }
    var_a3 = 0;
    var_a2 = 3;
    var_a1 = M2C_FIELD(D_800922F0, u8 *, 0x126);
    var_v1 = 1 << var_a1;
    do {
        if ((M2C_FIELD(D_800922F0, u8 *, 0x125) & var_v1) && (M2C_FIELD((((var_a1 & 0xFF) * 2) + D_800922F0), u16 *, 0x12C) == (var_a0 & 0xFFFF))) {
            var_a3 += 1;
        }
        var_v1 *= 2;
        if (var_v1 & 0x10) {
            var_v1 = 1;
        }
        var_a2 -= 1;
        var_a1 = (var_a1 + 1) & 3;
    } while (var_a2 >= 0);
    return var_a3;
}

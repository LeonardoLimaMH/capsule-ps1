#include "common.h"

void func_8003422C(s32 arg0) {
    extern M2C_UNK D_800922F0[];
    M2C_UNK *var_a3;
    s32 temp_a0;
    s32 var_a1;
    s32 var_a2;
    s32 var_t0;

    temp_a0 = arg0 & 0x8000;
    if (temp_a0 != 0) {
        func_800373A0(temp_a0);
        return;
    }
    var_t0 = 1;
    var_a1 = 0;
    var_a2 = 0;
    var_a3 = D_800922F0;
    do {
        if (M2C_FIELD(var_a3, u16 *, 0x12C) == (arg0 & 0xFFFF)) {
            var_a1 |= 1 << (var_a2 + 0x14);
            M2C_FIELD(D_800922F0, u8 *, 0x125) = (u8) (M2C_FIELD(D_800922F0, u8 *, 0x125) & ~var_t0);
        }
        var_t0 *= 2;
        var_a2 += 1;
        var_a3 += 2;
    } while (var_a2 < 4);
    if (var_a1 != 0) {
        SpuSetKey(0, var_a1, var_a2, var_a3);
    }
}

#include "common.h"

void func_8001602C(void *arg0) {
    s32 var_a1;
    s32 var_a1_2;
    s8 *temp_v0;
    void *var_a0;

    var_a1 = 0x33;
    M2C_FIELD(arg0, s16 *, 0x4E) = 0;
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    M2C_FIELD(arg0, s8 *, 0x58) = 0;
    M2C_FIELD(arg0, s16 *, 0x4C) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x50) = (s32) (M2C_FIELD(arg0, s32 *, 0x50) & ~8 & ~1 & ~2 & ~4 & ~0x30 & ~0x40);
    do {
        temp_v0 = arg0 + 0x18 + var_a1;
        var_a1 -= 1;
        *temp_v0 = 0;
    } while (var_a1 >= 0);
    var_a1_2 = 9;
    var_a0 = arg0 + 0x24;
    do {
        M2C_FIELD(var_a0, s32 *, 0x5C) = 0;
        var_a1_2 -= 1;
        var_a0 -= 4;
    } while (var_a1_2 >= 0);
}

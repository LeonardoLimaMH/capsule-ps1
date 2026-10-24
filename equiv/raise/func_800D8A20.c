#include "common.h"

void func_800D8A20(void) {
    extern M2C_UNK D_80069AD4[];
    extern M2C_UNK D_80069E4C[];
    s32 temp_v0;
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;

    if (M2C_FIELD(D_80069E4C, s32 *, 0x6C) == 0) {
        M2C_FIELD(D_80069E4C, s32 *, 0x6C) = 1;
        M2C_FIELD(D_80069E4C, s32 *, 0x70) = 0x10;
        return;
    }
    if (M2C_FIELD(D_80069E4C, s32 *, 0x70) >= 9) {
        var_v1 = M2C_FIELD(D_80069E4C, s32 *, 0x68) - M2C_FIELD(D_80069E4C, s32 *, 0x64);
        if (var_v1 < 0) {
            var_v1 += 7;
        }
        var_v0 = M2C_FIELD(D_80069AD4, s32 *, 0xE0) + (var_v1 >> 3);
    } else {
        var_v1_2 = M2C_FIELD(D_80069E4C, s32 *, 0x68) - M2C_FIELD(D_80069E4C, s32 *, 0x64);
        if (var_v1_2 < 0) {
            var_v1_2 += 7;
        }
        var_v0 = M2C_FIELD(D_80069AD4, s32 *, 0xE0) - (var_v1_2 >> 3);
    }
    M2C_FIELD(D_80069AD4, s32 *, 0xE0) = var_v0;
    temp_v0 = M2C_FIELD(D_80069E4C, s32 *, 0x70) - 1;
    M2C_FIELD(D_80069E4C, s32 *, 0x70) = temp_v0;
    if (temp_v0 == 0) {
        M2C_FIELD(D_80069E4C, s32 *, 0x6C) = 0;
        M2C_FIELD(D_80069AD4, s32 *, 0x54) = 0;
        M2C_FIELD(D_80069AD4, s32 *, 0xE0) = (s32) M2C_FIELD(D_80069E4C, s32 *, 0x64);
    }
}

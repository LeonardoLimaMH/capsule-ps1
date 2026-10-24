#include "common.h"

void func_80045594(s32 arg0, M2C_UNK *arg2) {
    extern M2C_UNK D_80072F28[];
    extern M2C_UNK D_80072F3C[];
    extern M2C_UNK (*D_80094C0C)(M2C_UNK, M2C_UNK *, s32);
    M2C_UNK *var_a2;
    s32 temp_a3;
    s32 var_v1;

    var_a2 = arg2;
    temp_a3 = arg0 & 0xFF;
    if (temp_a3 == 2) {
        var_a2 = D_80072F28;
        var_v1 = arg0 & 0xFF;
        if (M2C_FIELD(D_80072F28, u8 *, 0) == 0xE) {
            if ((M2C_FIELD(D_80072F28, u8 *, 0x29) ^ M2C_FIELD(D_80072F28, u8 *, 1)) & 0x80) {
                M2C_FIELD(D_80072F28, s32 *, 0x20) = 0xF;
                M2C_FIELD(D_80072F28, s32 *, 0x1C) = temp_a3;
                M2C_FIELD(D_80072F28, s32 *, 0x3C) = 3;
            }
            M2C_FIELD(D_80072F28, u8 *, 0x29) = (u8) M2C_FIELD(D_80072F28, u8 *, 1);
            goto block_5;
        }
    } else {
block_5:
        var_v1 = arg0 & 0xFF;
    }
    if (var_v1 == 5) {
        if (M2C_FIELD(D_80072F3C, u8 *, 0) & 0x10) {
            M2C_FIELD(D_80072F3C, s32 *, 8) = 2;
            M2C_FIELD(D_80072F3C, s32 *, 0xC) = 0xC;
            if ((D_80094C0C != NULL) && (M2C_FIELD(D_80072F3C, s32 *, -0x18) != 0)) {
                D_80094C0C(5, var_a2, temp_a3);
            }
        } else {
            M2C_FIELD(D_80072F3C, s32 *, 8) = 1;
            M2C_FIELD(D_80072F3C, s32 *, 0xC) = 0xB;
        }
    }
}

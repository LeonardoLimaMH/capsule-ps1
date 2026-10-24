#include "common.h"

void func_80032B0C(void *arg0, M2C_UNK *arg1) {
    extern u16 D_8008EE58[];
    extern M2C_UNK D_800922D0[];
    extern s32 D_800922D8[];
    M2C_UNK *var_a1;
    s8 var_v0;

    var_a1 = arg1;
    if (((u32) ((*D_8008EE58) - 5) < 2U) && (var_a1 = D_800922D0, (M2C_FIELD(D_800922D0, s16 *, 0) == 0))) {
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
        var_v0 = 0x30;
        if (M2C_FIELD(D_800922D0, s16 *, 4) == M2C_FIELD(arg0, s32 *, 0x80)) {
            var_v0 = 0x80;
        }
        M2C_FIELD(arg0, s8 *, 0x5A) = var_v0;
        M2C_FIELD(arg0, s8 *, 0x59) = var_v0;
        M2C_FIELD(arg0, s8 *, 0x58) = var_v0;
    } else {
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) | 1);
    }
    if ((u32) ((*D_800922D8) - 3) < 2U) {
        func_800185F8(var_a1);
    }
}

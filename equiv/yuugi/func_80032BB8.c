#include "common.h"

void func_80032BB8(void *arg0) {
    extern u16 D_8008EE58[];
    extern s16 D_800922D0[];
    extern s32 D_800922D8[];
    s32 temp_v1;
    s32 var_v0;

    temp_v1 = (*D_8008EE58) & 0xFFFF;
    if ((temp_v1 == 4) || (temp_v1 == 7) || (((u32) ((*D_8008EE58) - 5) < 2U) && ((*D_800922D0) > 0))) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x38) & ~1;
    } else {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x38) | 1;
    }
    M2C_FIELD(arg0, s32 *, 0x38) = var_v0;
    if ((u32) ((*D_800922D8) - 3) < 2U) {
        func_800185F8((*D_8008EE58));
    }
}

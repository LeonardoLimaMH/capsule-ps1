#include "common.h"

void func_80032760(void *arg0) {
    extern u16 D_8008EE58[];
    extern s32 D_800922D8[];
    s32 var_v0;

    if ((*D_8008EE58) == 3) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x38) & ~1;
    } else {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x38) | 1;
    }
    M2C_FIELD(arg0, s32 *, 0x38) = var_v0;
    if ((u32) ((*D_800922D8) - 3) < 2U) {
        func_800185F8();
    }
}

#include "common.h"

void func_80099AE4(void *arg0) {
    extern u8 D_800859F3[];
    s32 var_v0;

    if ((*D_800859F3) != 4) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x38) | 1;
    } else {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x38) & ~1;
    }
    M2C_FIELD(arg0, s32 *, 0x38) = var_v0;
}

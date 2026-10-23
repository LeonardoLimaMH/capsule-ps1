#include "common.h"

void func_800A81F4(void *arg0) {
    extern u16 D_8008EE44[];
    s32 var_v0;

    if ((*D_8008EE44) == M2C_FIELD(arg0, s32 *, 0x84)) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x38) & ~1;
    } else {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x38) | 1;
    }
    M2C_FIELD(arg0, s32 *, 0x38) = var_v0;
}

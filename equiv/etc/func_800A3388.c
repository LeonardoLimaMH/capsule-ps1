#include "common.h"

void func_800A3388(void *arg0) {
    extern u16 D_8008EE44[];
    extern s16 D_800B3B40[];
    s32 var_v0;

    if ((*D_8008EE44) == 0x10) {
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
        M2C_FIELD(arg0, s32 *, 0x18) = func_80019F30(0x6001D, (*D_800B3B40));
        return;
    }
    if ((*D_8008EE44) == 0x12) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x38) & ~1;
    } else {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x38) | 1;
    }
    M2C_FIELD(arg0, s32 *, 0x38) = var_v0;
}

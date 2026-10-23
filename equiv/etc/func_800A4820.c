#include "common.h"

void func_800A4820(void *arg0) {
    extern M2C_UNK D_80085428[];
    extern u16 D_8008EE44[];
    s16 var_a1;

    if ((u32) ((*D_8008EE44) - 0x19) < 2U) {
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
        var_a1 = -0x70;
        if (M2C_FIELD((*D_80085428), u8 *, 0x5D0) == 2) {
            var_a1 = -0x10;
        }
        M2C_FIELD(arg0, s16 *, 0x4A) = var_a1;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) | 1);
}

#include "common.h"

void func_800A3BDC(void *arg0) {
    extern M2C_UNK D_80085428[];
    extern u16 D_8008EE44[];
    s32 var_v0;

    if ((*D_8008EE44) == 0x18) {
        if (M2C_FIELD((*D_80085428), u8 *, 0x5D0) == 2) {
            M2C_FIELD(arg0, s16 *, 0x4A) = -0x10;
            M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
            if (M2C_FIELD(arg0, s32 *, 0x80) != 0) {
                M2C_FIELD(arg0, s16 *, 0x4A) = -0x20;
            }
        } else {
            if (M2C_FIELD(arg0, s32 *, 0x84) == 0) {
                M2C_FIELD(arg0, s16 *, 0x4A) = -0x68;
                var_v0 = M2C_FIELD(arg0, s32 *, 0x38) & ~1;
            } else {
                goto block_6;
            }
            goto block_7;
        }
    } else {
block_6:
        var_v0 = M2C_FIELD(arg0, s32 *, 0x38) | 1;
block_7:
        M2C_FIELD(arg0, s32 *, 0x38) = var_v0;
    }
}

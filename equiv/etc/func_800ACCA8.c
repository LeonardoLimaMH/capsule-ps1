#include "common.h"

void func_800ACCA8(void *arg0) {
    extern M2C_UNK D_8008ED68[];
    extern u16 D_8008EE44[];
    s16 var_a2;
    s32 var_v0;

    if (M2C_FIELD(D_8008ED68, u16 *, 0xDC) == 6) {
        var_a2 = -0x90;
        if (M2C_FIELD(D_8008ED68, u16 *, 0xE0) != 0) {
            M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
            if (M2C_FIELD(arg0, s32 *, 0x84) != 0) {
                var_a2 = 0x10;
            }
            M2C_FIELD(arg0, s16 *, 0x4A) = 0x10;
            M2C_FIELD(arg0, s16 *, 0x46) = var_a2;
            M2C_FIELD(arg0, s16 *, 0x4E) = 3;
            return;
        }
        goto block_6;
    }
block_6:
    if ((*D_8008EE44) == 8) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x38) & ~1;
    } else {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x38) | 1;
    }
    M2C_FIELD(arg0, s32 *, 0x38) = var_v0;
}

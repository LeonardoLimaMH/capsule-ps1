#include "common.h"

void func_800ACEDC(void *arg0) {
    extern M2C_UNK D_8008ED68[];
    extern u8 D_800B3D20[];
    s16 var_v1;
    s32 temp_a1;
    s32 var_v0;

    if (M2C_FIELD(D_8008ED68, u16 *, 0xDC) == 5) {
        temp_a1 = M2C_FIELD(arg0, s32 *, 0x38) & ~1;
        M2C_FIELD(arg0, s32 *, 0x38) = temp_a1;
        if (M2C_FIELD(D_8008ED68, u16 *, 0xE0) == 1) {
            var_v0 = temp_a1 & ~8;
            goto block_10;
        }
        if ((M2C_FIELD(D_8008ED68, u16 *, 0xE0) == 4) && ((*D_800B3D20) == 0)) {
            var_v1 = -2;
            if (M2C_FIELD(arg0, s32 *, 0x7C) != 0) {
                var_v1 = 2;
            }
            M2C_FIELD(arg0, s16 *, 0x6A) = var_v1;
            var_v0 = M2C_FIELD(arg0, s32 *, 0x38) | 8;
            goto block_10;
        }
    } else if ((u16) M2C_FIELD(D_8008ED68, u16 *, 0xDC) < 7U) {
        var_v0 = (M2C_FIELD(arg0, s32 *, 0x38) | 1) & ~8;
block_10:
        M2C_FIELD(arg0, s32 *, 0x38) = var_v0;
    }
}

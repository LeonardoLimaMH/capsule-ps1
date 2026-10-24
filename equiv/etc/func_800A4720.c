#include "common.h"

void func_800A4720(void *arg0) {
    extern M2C_UNK D_80085428[];
    extern u16 D_8008EE44[];
    extern M2C_UNK D_800B3B38[];
    s16 var_a2;
    s32 var_v0;

    if (((*D_8008EE44) == 0x18) && ((u32) (*((M2C_FIELD(arg0, s32 *, 0x84) * 2) + D_800B3B38) - 2) < 3U)) {
        M2C_FIELD(arg0, s16 *, 0x46) = 0x20;
        var_a2 = -0x60;
        if (M2C_FIELD(D_80085428, u8 *, 0x5D0) == 2) {
            M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
            if (M2C_FIELD(arg0, s32 *, 0x84) != 0) {
                var_a2 = 0x28;
            }
            M2C_FIELD(arg0, s16 *, 0x4A) = var_a2;
            return;
        }
        if (M2C_FIELD(arg0, s32 *, 0x84) == 0) {
            M2C_FIELD(arg0, s16 *, 0x4A) = 0x20;
            var_v0 = M2C_FIELD(arg0, s32 *, 0x38) & ~1;
        } else {
            goto block_11;
        }
        goto block_12;
    }
    if (((u32) ((*D_8008EE44) - 0x19) < 2U) && (M2C_FIELD(D_80085428, u8 *, 0x5D0) != 2)) {
        M2C_FIELD(arg0, s16 *, 0x46) = -0x40;
        M2C_FIELD(arg0, s16 *, 0x4A) = 0x20;
        var_v0 = M2C_FIELD(arg0, s32 *, 0x38) & ~1;
    } else {
block_11:
        var_v0 = M2C_FIELD(arg0, s32 *, 0x38) | 1;
    }
block_12:
    M2C_FIELD(arg0, s32 *, 0x38) = var_v0;
}

#include "common.h"

void func_800A3C70(void *arg0) {
    extern M2C_UNK D_80085428[];
    extern u16 D_8008EE44[];
    extern M2C_UNK D_800B3B38[];
    s16 var_a2;
    s32 var_v0_2;
    s8 var_v0;
    void *temp_v1;

    if ((*D_8008EE44) == 0x18) {
        temp_v1 = (M2C_FIELD(arg0, s32 *, 0x84) * 2) + (*D_800B3B38);
        if (M2C_FIELD(temp_v1, s16 *, 0) == 0) {
            var_v0 = 0x30;
            if (M2C_FIELD(temp_v1, s16 *, 0xC) == M2C_FIELD(arg0, s32 *, 0x80)) {
                var_v0 = 0x80;
            }
            M2C_FIELD(arg0, s8 *, 0x5A) = var_v0;
            M2C_FIELD(arg0, s8 *, 0x59) = var_v0;
            M2C_FIELD(arg0, s8 *, 0x58) = var_v0;
            var_a2 = -0x50;
            if (M2C_FIELD((*D_80085428), u8 *, 0x5D0) == 2) {
                M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
                if (M2C_FIELD(arg0, s32 *, 0x84) != 0) {
                    var_a2 = 0x38;
                }
                M2C_FIELD(arg0, s16 *, 0x4A) = var_a2;
                return;
            }
            if (M2C_FIELD(arg0, s32 *, 0x84) == 0) {
                M2C_FIELD(arg0, s16 *, 0x4A) = 0x10;
                var_v0_2 = M2C_FIELD(arg0, s32 *, 0x38) & ~1;
            } else {
                goto block_10;
            }
            goto block_11;
        }
    }
block_10:
    var_v0_2 = M2C_FIELD(arg0, s32 *, 0x38) | 1;
block_11:
    M2C_FIELD(arg0, s32 *, 0x38) = var_v0_2;
}

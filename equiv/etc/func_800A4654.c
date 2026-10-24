#include "common.h"

void func_800A4654(void *arg0) {
    extern M2C_UNK D_80085428[];
    extern u16 D_8008EE44[];
    extern M2C_UNK D_800B3B38[];
    s16 temp_v1;
    s16 var_v0;
    s32 temp_a1;
    s32 temp_a2;

    temp_a1 = M2C_FIELD(arg0, s32 *, 0x38) | 1;
    M2C_FIELD(arg0, s32 *, 0x38) = temp_a1;
    temp_a2 = M2C_FIELD(arg0, s32 *, 0x84);
    if ((*D_8008EE44) == 0x18) {
        if (M2C_FIELD(D_80085428, u8 *, 0x5D0) != 2) {
            M2C_FIELD(arg0, s32 *, 0x38) = (s32) (temp_a1 & ~1);
            return;
        }
        temp_v1 = *((temp_a2 * 2) + D_800B3B38);
        if ((temp_v1 == 1) || (var_v0 = -0x40, (temp_v1 == 5))) {
            M2C_FIELD(arg0, s32 *, 0x38) = (s32) (temp_a1 & ~1);
            if (temp_a2 != 0) {
                var_v0 = 0x20;
            } else {
                goto block_10;
            }
        }
        goto block_11;
    }
    if ((u32) ((*D_8008EE44) - 0x19) < 2U) {
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (temp_a1 & ~1);
        M2C_FIELD(arg0, s16 *, 0x4A) = -0x40;
        if (M2C_FIELD(D_80085428, u8 *, 0x5D0) == 2) {
            var_v0 = 0x20;
            if (temp_a2 == 0) {
block_10:
                var_v0 = -0x60;
            }
block_11:
            M2C_FIELD(arg0, s16 *, 0x4A) = var_v0;
        }
    }
}

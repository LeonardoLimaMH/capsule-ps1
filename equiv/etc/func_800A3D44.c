#include "common.h"

void func_800A3D44(void *arg0) {
    extern M2C_UNK D_80085428[];
    extern M2C_UNK D_8008ED68[];
    extern u16 D_8008EE44[];
    extern M2C_UNK D_800B3B38[];
    extern M2C_UNK D_800B3BF8[];
    extern M2C_UNK D_800B3C00[];
    s16 temp_v1;
    s16 var_v0;
    s32 *temp_a1;
    s32 *temp_a3;
    s32 temp_a0;
    s32 var_v0_2;
    u16 temp_v0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x84);
    if (((*D_8008EE44) == 0x18) && ((temp_v1 = *((temp_a0 * 2) + D_800B3B38), (temp_v1 == 1)) || (temp_v1 == 5))) {
        if (M2C_FIELD(D_80085428, u8 *, 0x5D0) == 2) {
            M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
            if (temp_a0 != 0) {
                var_v0 = 0x28;
            } else {
                var_v0 = -0x58;
            }
            M2C_FIELD(arg0, s16 *, 0x4A) = var_v0;
            if (*(temp_a0 + D_800B3C00) == 0) {
                temp_a3 = (temp_a0 * 4) + D_800B3BF8;
                if (*temp_a3 != 0) {
                    M2C_FIELD(arg0, u16 *, 0x52) = 0U;
                    M2C_FIELD(arg0, u16 *, 0x50) = 0U;
                    return;
                }
                temp_v0 = M2C_FIELD(arg0, u16 *, 0x50) - M2C_FIELD(arg0, u16 *, 0x74);
                M2C_FIELD(arg0, u16 *, 0x50) = temp_v0;
                M2C_FIELD(arg0, u16 *, 0x52) = (u16) (M2C_FIELD(arg0, u16 *, 0x52) - M2C_FIELD(arg0, u16 *, 0x76));
                if ((temp_v0 << 0x10) <= 0) {
                    *temp_a3 = 1;
                }
            } else {
                temp_a1 = (temp_a0 * 4) + D_800B3BF8;
                if (*temp_a1 != 0) {
                    M2C_FIELD(arg0, u16 *, 0x52) = 0x1000U;
                    M2C_FIELD(arg0, u16 *, 0x50) = 0x1000U;
                    return;
                }
                M2C_FIELD(arg0, u16 *, 0x50) = (u16) (M2C_FIELD(arg0, u16 *, 0x50) + M2C_FIELD(arg0, u16 *, 0x74));
                M2C_FIELD(arg0, u16 *, 0x52) = (u16) (M2C_FIELD(arg0, u16 *, 0x52) + M2C_FIELD(arg0, u16 *, 0x76));
                if ((s16) M2C_FIELD(arg0, u16 *, 0x50) >= 0x1000) {
                    *temp_a1 = 1;
                }
            }
        } else {
            if (temp_a0 == 0) {
                M2C_FIELD(arg0, s16 *, 0x4A) = 0x10;
                M2C_FIELD(arg0, u16 *, 0x52) = 0x1000U;
                M2C_FIELD(arg0, u16 *, 0x50) = 0x1000U;
                var_v0_2 = M2C_FIELD(arg0, s32 *, 0x38) & ~1;
            } else {
                goto block_26;
            }
            goto block_27;
        }
    } else {
        if (M2C_FIELD(D_8008ED68, u16 *, 0xDC) == 0xE) {
            if (M2C_FIELD(D_8008ED68, u16 *, 0xE0) == 3) {
                M2C_FIELD(arg0, u16 *, 0x52) = 0x1000U;
                M2C_FIELD(arg0, u16 *, 0x50) = 0x1000U;
                M2C_FIELD(arg0, s16 *, 0x4A) = 0;
                var_v0_2 = M2C_FIELD(arg0, s32 *, 0x38) & ~1;
            } else {
                goto block_22;
            }
        } else {
block_22:
            if ((M2C_FIELD(D_8008ED68, u16 *, 0xDC) == 0x1B) && ((M2C_FIELD(D_8008ED68, u16 *, 0xE0) == 1) || (M2C_FIELD(D_8008ED68, u16 *, 0xE0) == 8))) {
                M2C_FIELD(arg0, s16 *, 0x4A) = -0x14;
                M2C_FIELD(arg0, u16 *, 0x52) = 0x1000U;
                M2C_FIELD(arg0, u16 *, 0x50) = 0x1000U;
                var_v0_2 = M2C_FIELD(arg0, s32 *, 0x38) & ~1;
            } else {
block_26:
                var_v0_2 = M2C_FIELD(arg0, s32 *, 0x38) | 1;
            }
        }
block_27:
        M2C_FIELD(arg0, s32 *, 0x38) = var_v0_2;
    }
}

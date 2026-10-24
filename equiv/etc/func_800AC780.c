#include "common.h"

void func_800AC780(void *arg0) {
    extern M2C_UNK D_8008ED68[];
    extern u8 D_800B3D20[];
    extern u8 D_800B3D24[];
    s16 var_a2;
    s16 var_a2_2;
    s32 temp_v1;

    if (M2C_FIELD(D_8008ED68, u16 *, 0xDC) == 5) {
        if ((M2C_FIELD(D_8008ED68, u16 *, 0xE0) == 2) && ((*D_800B3D20) == 0)) {
            var_a2 = 0;
            M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
            if ((*D_800B3D24) == 0) {
                var_a2 = -0x98;
            }
            M2C_FIELD(arg0, s16 *, 0x46) = var_a2;
            M2C_FIELD(arg0, u16 *, 0x50) = (u16) (M2C_FIELD(arg0, u16 *, 0x50) - M2C_FIELD(arg0, u16 *, 0x74));
            M2C_FIELD(arg0, u16 *, 0x52) = (u16) (M2C_FIELD(arg0, u16 *, 0x52) - M2C_FIELD(arg0, u16 *, 0x76));
            if ((s16) M2C_FIELD(arg0, u16 *, 0x50) <= 0) {
                M2C_FIELD(arg0, u16 *, 0x52) = 0U;
                M2C_FIELD(arg0, u16 *, 0x50) = 0U;
                (*D_800B3D20) = 1;
            }
        } else if ((M2C_FIELD(D_8008ED68, u16 *, 0xDC) == 5) && (M2C_FIELD(D_8008ED68, u16 *, 0xE0) == 3)) {
            var_a2_2 = 0;
            M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
            if ((*D_800B3D24) == 0) {
                var_a2_2 = -0x98;
            }
            M2C_FIELD(arg0, s16 *, 0x46) = var_a2_2;
            if ((*D_800B3D20) == 0) {
                M2C_FIELD(arg0, u16 *, 0x50) = (u16) (M2C_FIELD(arg0, u16 *, 0x50) + M2C_FIELD(arg0, u16 *, 0x74));
                M2C_FIELD(arg0, u16 *, 0x52) = (u16) (M2C_FIELD(arg0, u16 *, 0x52) + M2C_FIELD(arg0, u16 *, 0x76));
                if ((s16) M2C_FIELD(arg0, u16 *, 0x50) >= 0x1000) {
                    M2C_FIELD(arg0, u16 *, 0x52) = 0x1000U;
                    M2C_FIELD(arg0, u16 *, 0x50) = 0x1000U;
                    (*D_800B3D20) = 1;
                }
            }
        } else {
            goto block_14;
        }
    } else {
block_14:
        if (M2C_FIELD(D_8008ED68, u16 *, 0xDC) == 6) {
            temp_v1 = M2C_FIELD(D_8008ED68, u16 *, 0xE0) & 0xFFFF;
            if (temp_v1 == 0) {
                M2C_FIELD(arg0, u16 *, 0x52) = 0U;
                M2C_FIELD(arg0, u16 *, 0x50) = 0U;
                return;
            }
            if ((u32) (M2C_FIELD(D_8008ED68, u16 *, 0xE0) - 1) < 2U) {
                if ((*D_800B3D20) == 0) {
                    M2C_FIELD(arg0, u16 *, 0x50) = (u16) (M2C_FIELD(arg0, u16 *, 0x50) - M2C_FIELD(arg0, u16 *, 0x74));
                    M2C_FIELD(arg0, u16 *, 0x52) = (u16) (M2C_FIELD(arg0, u16 *, 0x52) - M2C_FIELD(arg0, u16 *, 0x76));
                    if ((s16) M2C_FIELD(arg0, u16 *, 0x50) <= 0) {
                        M2C_FIELD(arg0, u16 *, 0x52) = 0U;
                        M2C_FIELD(arg0, u16 *, 0x50) = 0U;
                        (*D_800B3D20) = 1;
                    }
                }
            } else if ((temp_v1 == 3) || (temp_v1 == M2C_FIELD(D_8008ED68, u16 *, 0xDC))) {
                M2C_FIELD(arg0, s16 *, 0x46) = -0x50;
                M2C_FIELD(arg0, s16 *, 0x4A) = 0x10;
                M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
                if ((*D_800B3D20) == 0) {
                    M2C_FIELD(arg0, u16 *, 0x50) = (u16) (M2C_FIELD(arg0, u16 *, 0x50) + M2C_FIELD(arg0, u16 *, 0x74));
                    M2C_FIELD(arg0, u16 *, 0x52) = (u16) (M2C_FIELD(arg0, u16 *, 0x52) + M2C_FIELD(arg0, u16 *, 0x76));
                    if ((s16) M2C_FIELD(arg0, u16 *, 0x50) >= 0x1000) {
                        M2C_FIELD(arg0, u16 *, 0x52) = 0x1000U;
                        M2C_FIELD(arg0, u16 *, 0x50) = 0x1000U;
                        (*D_800B3D20) = 1;
                    }
                }
            } else {
                goto block_26;
            }
        } else {
block_26:
            M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) | 1);
        }
    }
}

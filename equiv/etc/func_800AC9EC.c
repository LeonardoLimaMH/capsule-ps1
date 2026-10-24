#include "common.h"

void func_800AC9EC(void *arg0) {
    extern M2C_UNK D_8008ED68[];
    extern u16 D_8008EE44[];
    extern u16 D_8008EE48[];
    extern u8 D_800B3D24[];
    extern u8 D_800B3D25[];
    extern s32 D_800B3D50[];
    extern s32 D_800B3D54[];
    s16 var_v1;
    s16 var_v1_2;
    s16 var_v1_3;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;

    if (M2C_FIELD(D_8008ED68, u16 *, 0xDC) == 6) {
        if (M2C_FIELD(D_8008ED68, u16 *, 0xE0) != 0) {
            if ((M2C_FIELD(D_8008ED68, u16 *, 0xE0) == 1) && ((*D_800B3D24) == 0)) {
                if (M2C_FIELD(arg0, s32 *, 0x84) == 0) {
                    goto block_6;
                }
                goto block_9;
            }
block_6:
            if (((*D_8008EE48) == 2) && ((*D_800B3D24) != 0) && (M2C_FIELD(arg0, s32 *, 0x84) == 0)) {
block_9:
                var_v0 = M2C_FIELD(arg0, s32 *, 0x38) | 1;
            } else {
                var_v0 = M2C_FIELD(arg0, s32 *, 0x38) & ~1;
            }
            M2C_FIELD(arg0, s32 *, 0x38) = var_v0;
            if (M2C_FIELD(arg0, s32 *, 0x84) == 0) {
                M2C_FIELD(arg0, s16 *, 0x46) = (s16) ((((*D_800B3D50) % 3) * 0x30) - 0x9A);
                if (((*D_800B3D24) != 0) && ((*D_800B3D25) != 1)) {
                    if ((*D_800B3D50) >= 3) {
                        var_v1 = -0x50;
                        if ((*D_800B3D50) == 3) {
                            var_v1 = -0x80;
                        }
                        M2C_FIELD(arg0, s16 *, 0x46) = var_v1;
                    }
                }
                var_v0_2 = (*D_800B3D50);
            } else {
                M2C_FIELD(arg0, s16 *, 0x46) = (s16) ((((*D_800B3D54) % 3) * 0x30) + 0xA);
                if (((*D_800B3D24) == 0) && ((*D_800B3D25) != 1) && ((*D_800B3D54) >= 3)) {
                    var_v1_2 = 0x50;
                    if ((*D_800B3D54) == 3) {
                        var_v1_2 = 0x20;
                    }
                    M2C_FIELD(arg0, s16 *, 0x46) = var_v1_2;
                }
                var_v0_2 = (*D_800B3D54);
            }
            var_v1_3 = -0x68;
            if ((var_v0_2 / 3) != (var_v0_2 >> 0x1F)) {
                var_v1_3 = -0x30;
            }
            M2C_FIELD(arg0, s16 *, 0x4A) = var_v1_3;
            return;
        }
        goto block_31;
    }
block_31:
    if ((*D_8008EE44) == 8) {
        var_v0_3 = M2C_FIELD(arg0, s32 *, 0x38) & ~1;
    } else {
        var_v0_3 = M2C_FIELD(arg0, s32 *, 0x38) | 1;
    }
    M2C_FIELD(arg0, s32 *, 0x38) = var_v0_3;
}

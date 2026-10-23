#include "common.h"

void func_800A4884(void *arg0) {
    extern M2C_UNK D_80085428[];
    extern u16 D_8008EE44[];
    extern M2C_UNK D_800B3B38[];
    s16 var_v1;

    if ((u32) ((*D_8008EE44) - 0x19) < 2U) {
        M2C_FIELD(arg0, s16 *, 0x4A) = -0x50;
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
        if (M2C_FIELD((*D_80085428), u8 *, 0x5D0) == 2) {
            var_v1 = -0x70;
            if (M2C_FIELD(arg0, s32 *, 0x84) != 0) {
                var_v1 = 0x10;
            }
            M2C_FIELD(arg0, s16 *, 0x4A) = var_v1;
        } else if (M2C_FIELD(arg0, s32 *, 0x84) != 0) {
            M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) | 1);
        }
        if ((*D_8008EE44) == 0x19) {
            M2C_FIELD(arg0, s16 *, 0x46) = (s16) ((M2C_FIELD(((M2C_FIELD(arg0, s32 *, 0x84) * 2) + (*D_800B3B38)), s16 *, 4) * 0x30) - 0x88);
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) | 1);
    }
}

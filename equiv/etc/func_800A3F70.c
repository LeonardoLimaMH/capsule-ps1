#include "common.h"

void func_800A3F70(void *arg0) {
    extern M2C_UNK D_80085428[];
    extern u16 D_8008EE44[];
    extern M2C_UNK D_800B3B38[];
    s32 var_v0;

    if ((*D_8008EE44) == 0x18) {
        M2C_FIELD(arg0, s32 *, 0x18) = func_80019F30(0x60010, M2C_FIELD(((M2C_FIELD(arg0, s32 *, 0x84) * 2) + (*D_800B3B38)), s16 *, 4) + 0x23);
        if (M2C_FIELD((*D_80085428), u8 *, 0x5D0) == 2) {
            M2C_FIELD(arg0, s16 *, 0x4A) = -8;
            var_v0 = M2C_FIELD(arg0, s32 *, 0x38) & ~1;
        } else if (M2C_FIELD(arg0, s32 *, 0x84) == 0) {
            M2C_FIELD(arg0, s16 *, 0x4A) = -0x60;
            var_v0 = M2C_FIELD(arg0, s32 *, 0x38) & ~1;
        } else {
            goto block_5;
        }
    } else {
block_5:
        var_v0 = M2C_FIELD(arg0, s32 *, 0x38) | 1;
    }
    M2C_FIELD(arg0, s32 *, 0x38) = var_v0;
}

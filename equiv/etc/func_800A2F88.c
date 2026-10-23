#include "common.h"

void func_800A2F88(void *arg0) {
    extern u16 D_8008EE44[];
    extern M2C_UNK D_800B3B38[];
    s16 var_v0;

    if ((*D_8008EE44) == 7) {
        if (M2C_FIELD((*D_800B3B38), s16 *, 0) != 1) {
            goto block_2;
        }
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
        if (M2C_FIELD((*D_800B3B38), s16 *, 0xC) < 3) {
            var_v0 = (M2C_FIELD((*D_800B3B38), s16 *, 0xC) * 0x10) - 0x60;
        } else if (M2C_FIELD((*D_800B3B38), s16 *, 0xC) == 8) {
            var_v0 = 0x50;
        } else {
            var_v0 = (M2C_FIELD((*D_800B3B38), s16 *, 0xC) * 0x10) - 0x50;
        }
        M2C_FIELD(arg0, s16 *, 0x4A) = var_v0;
        return;
    }
block_2:
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) | 1);
}

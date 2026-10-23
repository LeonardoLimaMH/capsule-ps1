#include "common.h"

void func_800A3128(void *arg0) {
    extern M2C_UNK D_80085428[];
    extern u16 D_8008EE44[];
    u32 temp_a1;
    u32 temp_v1;
    s32 var_v0;

    if ((*D_8008EE44) != 0xF) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x38) | 1;
        goto block_11;
    }
    temp_v1 = M2C_FIELD(arg0, s32 *, 0x38) & ~1;
    M2C_FIELD(arg0, s32 *, 0x38) = temp_v1;
    if (M2C_FIELD((*D_80085428), u8 *, 0x5D6) & 0x80) {
        M2C_FIELD(arg0, s16 *, 0x46) = (s16) (((M2C_FIELD(arg0, s32 *, 0x80) & 3) * 0x48) - 0x90);
        if (M2C_FIELD(arg0, s32 *, 0x80) < 4) {
            M2C_FIELD(arg0, s16 *, 0x4A) = -0x50;
            return;
        }
        M2C_FIELD(arg0, s16 *, 0x4A) = 0x10;
        return;
    }
    temp_a1 = M2C_FIELD(arg0, s32 *, 0x80);
    if (temp_a1 >= 0) {
        if (temp_a1 < 3) {
            M2C_FIELD(arg0, s16 *, 0x46) = (s16) (((temp_a1 & 3) * 0x50) - 0x70);
            M2C_FIELD(arg0, s16 *, 0x4A) = -0x50;
            return;
        }
        var_v0 = temp_v1 | 1;
        if (temp_a1 != 7) {
            goto block_10;
        }
block_11:
        M2C_FIELD(arg0, s32 *, 0x38) = var_v0;
        return;
    }
block_10:
    M2C_FIELD(arg0, s16 *, 0x4A) = 0x10;
    M2C_FIELD(arg0, s16 *, 0x46) = (s16) (((M2C_FIELD(arg0, s32 *, 0x80) - 3) * 0x48) - 0x90);
}

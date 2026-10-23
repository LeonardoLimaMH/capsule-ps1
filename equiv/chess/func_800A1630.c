#include "common.h"

void func_800A1630(void *arg0) {
    extern M2C_UNK D_80085428[];
    extern u8 D_80085FF2[];
    extern M2C_UNK D_8008ED68[];
    extern u16 D_8008EE4C[];
    s32 temp_a1;
    u16 var_v0;
    u8 temp_s1;

    temp_s1 = (*D_80085FF2);
    if ((u16) M2C_FIELD((*D_8008ED68), u16 *, 0xE4) >= 0xCU) {
        func_800185F8(arg0);
    } else {
        if (M2C_FIELD(arg0, s32 *, 0x7C) != M2C_FIELD((*D_8008ED68), u16 *, 0xE4)) {
            if (M2C_FIELD((*D_8008ED68), u16 *, 0xE4) == 2) {
                func_80015CD0(arg0 + 0x14, func_80019F30(0x70013, 0), 0);
            } else if (M2C_FIELD((*D_8008ED68), u16 *, 0xE4) == 3) {
                M2C_FIELD(arg0, s32 *, 0x1C) = 0;
                M2C_FIELD(arg0, s32 *, 0x18) = func_80019F30(0x60013, 2);
            }
        }
        M2C_FIELD(arg0, s32 *, 0x7C) = (s32) (*D_8008EE4C);
    }
    temp_a1 = temp_s1 & 0xFF;
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) ((M2C_FIELD(arg0, s32 *, 0x38) & ~1) | (M2C_FIELD((*D_80085428), u8 *, 0xBE0) != 5));
    if (M2C_FIELD((temp_a1 + (*D_80085428)), u8 *, 0xCAB) != 5) {
        M2C_FIELD(arg0, u16 *, 0x46) = -0x78U;
        M2C_FIELD(arg0, s16 *, 0x4A) = 0x20;
        if (temp_a1 != 0) {
            var_v0 = M2C_FIELD(arg0, u16 *, 0x46) + 0x98;
            goto block_14;
        }
    } else {
        M2C_FIELD(arg0, u16 *, 0x46) = -0x90U;
        M2C_FIELD(arg0, s16 *, 0x4A) = 0x20;
        if (temp_a1 != 0) {
            var_v0 = M2C_FIELD(arg0, u16 *, 0x46) + 0xC8;
block_14:
            M2C_FIELD(arg0, u16 *, 0x46) = var_v0;
        }
    }
}

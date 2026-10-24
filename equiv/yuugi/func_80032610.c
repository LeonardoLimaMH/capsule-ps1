#include "common.h"

void func_80032610(void *arg0) {
    extern M2C_UNK D_80065390[];
    extern u16 D_8008EE58[];
    extern M2C_UNK D_800922D0[];
    extern s32 D_800922D8[];
    s32 temp_v1;
    u16 var_v0;

    if ((*D_8008EE58) != 3) {
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) | 1);
    } else {
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
        if (M2C_FIELD(D_800922D0, s16 *, 2) == 8) {
            func_80015CD0(arg0 + 0x14, func_8001A44C(2, D_80065390), 0);
            var_v0 = 0x50;
            goto block_10;
        }
        func_80015CD0(arg0 + 0x14, func_8001A44C(M2C_FIELD(arg0, s32 *, 0x7C), D_80065390), 0);
        temp_v1 = M2C_FIELD(D_800922D0, s16 *, 2) * 0x10;
        M2C_FIELD(arg0, u16 *, 0x4A) = (u16) (temp_v1 - 0x60);
        if (M2C_FIELD(D_800922D0, s16 *, 2) >= 3) {
            M2C_FIELD(arg0, u16 *, 0x4A) = (u16) (temp_v1 - 0x54);
        }
        if (M2C_FIELD(D_800922D0, s16 *, 2) >= 5) {
            M2C_FIELD(arg0, u16 *, 0x4A) = (u16) (M2C_FIELD(arg0, u16 *, 0x4A) + 0xC);
        }
        if (M2C_FIELD(D_800922D0, s16 *, 2) == 7) {
            var_v0 = M2C_FIELD(arg0, u16 *, 0x4A) + 0xC;
block_10:
            M2C_FIELD(arg0, u16 *, 0x4A) = var_v0;
        }
    }
    if ((u32) ((*D_800922D8) - 3) < 2U) {
        func_800185F8(arg0);
    }
}

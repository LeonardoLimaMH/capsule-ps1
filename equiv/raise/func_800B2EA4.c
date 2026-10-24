#include "common.h"

s32 func_800B2EA4(void) {
    extern M2C_UNK D_8006AF90[];
    extern s16 D_8006AFA4[];
    extern M2C_UNK D_80085428[];
    extern M2C_UNK D_8008ED68[];
    extern u16 D_8008EE4C[];
    M2C_UNK *var_v1;
    s16 var_a1;
    s32 var_a0;

    switch ((*D_8008EE4C)) {
    case 0:
        M2C_FIELD(D_8008ED68, s16 *, 0xE8) = 0;
        M2C_FIELD(D_8008ED68, s16 *, 0xEC) = 0;
        M2C_FIELD(D_8008ED68, u16 *, 0xE4) = (u16) (M2C_FIELD(D_8008ED68, u16 *, 0xE4) + 1);
        M2C_FIELD(D_8006AF90, u16 *, 0) = (u16) (M2C_FIELD(D_8006AF90, u16 *, 0) + M2C_FIELD(D_8006AF90, u16 *, 0x14));
    default:
block_13:
        return 0;
    case 1:
        var_a1 = M2C_FIELD(D_8006AF90, s16 *, 0x16);
block_8:
        if (func_8002367C(D_80085428, var_a1, M2C_FIELD(D_8006AF90, s16 *, 0x1A), M2C_FIELD(D_8006AF90, s16 *, 0x1C)) != 0) {
            M2C_FIELD(D_8008ED68, u16 *, 0xE4) = (u16) (M2C_FIELD(D_8008ED68, u16 *, 0xE4) + 1);
        }
        goto block_13;
    case 2:
        if ((*D_8006AFA4) == 1) {
            M2C_FIELD(D_8008ED68, u16 *, 0xE4) = (u16) (M2C_FIELD(D_8008ED68, u16 *, 0xE4) + 2);
        } else {
            M2C_FIELD(D_8008ED68, s16 *, 0xE8) = 0;
            M2C_FIELD(D_8008ED68, s16 *, 0xEC) = 0;
            M2C_FIELD(D_8008ED68, u16 *, 0xE4) = (u16) (M2C_FIELD(D_8008ED68, u16 *, 0xE4) + 1);
        }
        goto block_13;
    case 3:
        var_a1 = M2C_FIELD(D_8006AF90, s16 *, 0x18);
        goto block_8;
    case 4:
        var_a0 = 0;
        var_v1 = D_8006AF90;
        (*D_8008EE4C) = 0;
        M2C_FIELD(D_8006AF90, u16 *, 0x14) = 0U;
        do {
            M2C_FIELD(var_v1, s16 *, 0x16) = -1;
            M2C_FIELD(var_v1, s16 *, 0x1A) = -1;
            var_a0 += 1;
            var_v1 += 2;
        } while (var_a0 < 2);
        return 1;
    }
}

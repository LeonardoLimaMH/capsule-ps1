#include "common.h"

u8 func_800D1BA8(u8 arg0) {
    extern u8 D_80085429[];
    extern M2C_UNK D_8008ED68[];
    extern s16 D_800F1D0A[];
    extern u16 D_800F1D0C[];
    u16 temp_v0_2;
    u16 temp_v0_3;
    u8 temp_s0;
    u8 temp_v0;
    u8 var_a0;

    var_a0 = arg0;
    if ((*D_80085429) != 0) {
        return 0U;
    }
    if (M2C_FIELD((*D_8008ED68), s32 *, 0x88) == 0x800) {
        func_80034AB0(0x58);
        temp_v0 = M2C_FIELD((*D_8008ED68), u8 *, 0x99A) != 1;
        var_a0 = temp_v0;
        M2C_FIELD((*D_8008ED68), u8 *, 0x99A) = temp_v0;
        if (var_a0 == 1) {
            (*D_800F1D0C) = 0x20;
            (*D_800F1D0A) = (s16) var_a0;
            goto block_5;
        }
    } else {
block_5:
        temp_s0 = M2C_FIELD((*D_8008ED68), u8 *, 0x99A);
        if (temp_s0 == 1) {
            if ((*D_800F1D0A) == temp_s0) {
                func_80015944(2);
                temp_v0_2 = (*D_800F1D0C) - 1;
                (*D_800F1D0C) = temp_v0_2;
                if ((temp_v0_2 << 0x10) == 0) {
                    (*D_800F1D0A) = 0;
                    goto block_11;
                }
            } else {
                func_80015A0C(var_a0);
                temp_v0_3 = (*D_800F1D0C) - 1;
                (*D_800F1D0C) = temp_v0_3;
                if ((temp_v0_3 << 0x10) == 0) {
                    (*D_800F1D0A) = (s16) temp_s0;
block_11:
                    (*D_800F1D0C) = 0x20;
                }
            }
        }
    }
    return M2C_FIELD((*D_8008ED68), u8 *, 0x99A);
}

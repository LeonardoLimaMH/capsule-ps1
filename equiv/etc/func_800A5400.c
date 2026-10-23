#include "common.h"

void func_800A5400(void) {
    extern u8 D_8008542A[];
    extern M2C_UNK D_8008ED68[];
    extern M2C_UNK D_800B2DA8[];
    extern s32 D_800B3C1C[];
    extern s32 D_800B3C20[];
    extern s32 D_800B3C24[];
    extern s8 D_800B3C28[];
    extern s8 D_800B3C29[];
    s32 var_v0;

    func_8001F1A8(-0x38, 0x50, 0, 1, 0, (*D_800B2DA8), 1, 9, 2);
    if (!(M2C_FIELD((*D_8008ED68), s32 *, 0x88) & 0x1000)) {
        if (M2C_FIELD((*D_8008ED68), s32 *, 0x98) & 0x1000) {
            goto block_2;
        }
        if (!(M2C_FIELD((*D_8008ED68), s32 *, 0x88) & 0x4000)) {
            if (M2C_FIELD((*D_8008ED68), s32 *, 0x98) & 0x4000) {
                goto block_6;
            }
            if (!(M2C_FIELD((*D_8008ED68), s32 *, 0x88) & 0x8000)) {
                if (M2C_FIELD((*D_8008ED68), s32 *, 0x98) & 0x8000) {
                    goto block_10;
                }
                if (!(M2C_FIELD((*D_8008ED68), s32 *, 0x88) & 0x2000)) {
                    if (M2C_FIELD((*D_8008ED68), s32 *, 0x98) & 0x2000) {
                        goto block_14;
                    }
                } else {
block_14:
                    if (!((*D_800B3C1C) & 1)) {
                        func_80034AB0(0x84);
                        var_v0 = (*D_800B3C1C) + 1;
                        goto block_16;
                    }
                }
            } else {
block_10:
                if ((*D_800B3C1C) & 1) {
                    func_80034AB0(0x84);
                    var_v0 = (*D_800B3C1C) - 1;
                    goto block_16;
                }
            }
        } else {
block_6:
            if ((*D_800B3C1C) < 2) {
                func_80034AB0(0x84);
                var_v0 = (*D_800B3C1C) + 2;
                goto block_16;
            }
        }
    } else {
block_2:
        if ((*D_800B3C1C) >= 2) {
            func_80034AB0(0x84);
            var_v0 = (*D_800B3C1C) - 2;
block_16:
            (*D_800B3C1C) = var_v0;
        }
    }
    if (!(M2C_FIELD((*D_8008ED68), s32 *, 0x88) & 0x830)) {
        if (M2C_FIELD((*D_8008ED68), s32 *, 0x98) & 0x830) {
            goto block_20;
        }
        if (!(M2C_FIELD((*D_8008ED68), s32 *, 0x88) & 0x40)) {
            if (M2C_FIELD((*D_8008ED68), s32 *, 0x98) & 0x40) {
                goto block_26;
            }
        } else {
block_26:
            func_80034AB0(0x5D);
            func_80034BD8(-3, 0);
            func_80033974(0x7017);
            func_80012544(0xA);
        }
        return;
    }
block_20:
    if ((*D_800B3C1C) == 0) {
        if ((*D_8008542A) == 0) {
            func_80034AB0(0x4C);
            return;
        }
        goto block_23;
    }
block_23:
    func_80034AB0(0x48);
    (*D_800B3C28) = 1;
    func_80012544(((u16) (*D_800B3C1C) + 6) & 0xFFFF);
    (*D_800B3C24) = 0;
    (*D_800B3C20) = 0;
    (*D_800B3C1C) = 0;
    (*D_800B3C29) = 1;
}

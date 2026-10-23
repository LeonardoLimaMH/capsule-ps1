#include "common.h"

void func_800B6310(void *arg0) {
    extern u16 D_8006AF80[];
    extern u16 D_8008EE44[];
    extern M2C_UNK D_80091618[];
    extern M2C_UNK D_800EEB9C[];
    extern s32 D_800EF308[];
    s16 var_a0;
    s16 var_a1;
    u16 var_v1;

    if ((arg0 == M2C_FIELD((*D_800EEB9C), s32 *, 0x764)) || (arg0 == M2C_FIELD((*D_800EEB9C), s32 *, 0x768))) {
        if ((*D_8008EE44) == 0x28) {
            goto block_31;
        }
        goto block_30;
    }
    if (arg0 == M2C_FIELD((*D_800EEB9C), s32 *, 0x770)) {
        if (M2C_FIELD((*D_800EEB9C), s32 *, 0x76C) == 1) {
            if ((*D_8006AF80) != 0xFFFF) {
                if (M2C_FIELD((((*D_8006AF80) * 0x1A8) + (*D_80091618)), u16 *, 0x10) != 0xFFFF) {
                    if ((M2C_FIELD(arg0, s32 *, 0x38) & 1) != M2C_FIELD((*D_800EEB9C), s32 *, 0x76C)) {
                        var_v1 = (*D_8006AF80);
                        var_a0 = M2C_FIELD(arg0, u16 *, 0x46) + 8;
                        var_a1 = M2C_FIELD(arg0, u16 *, 0x4A) + 7;
                        goto block_20;
                    }
                } else {
                    goto block_11;
                }
            } else {
block_11:
                (*D_800EF308) = 0;
                goto block_16;
            }
        }
    } else if (arg0 == M2C_FIELD((*D_800EEB9C), s32 *, 0x778)) {
        if (((*D_8006AF80) == 0xFFFF) || (M2C_FIELD((((*D_8006AF80) * 0x1A8) + (*D_80091618)), u16 *, 0x8A) == 0xFFFF)) {
            M2C_FIELD((*D_800EEB9C), s32 *, 0x774) = 0;
block_16:
            M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) | 1);
        } else if (M2C_FIELD((*D_800EEB9C), s32 *, 0x774) == 1) {
            if ((M2C_FIELD(arg0, s32 *, 0x38) & 1) != M2C_FIELD((*D_800EEB9C), s32 *, 0x774)) {
                var_a0 = M2C_FIELD(arg0, u16 *, 0x46) + 8;
                var_a1 = M2C_FIELD(arg0, u16 *, 0x4A) + 7;
                var_v1 = M2C_FIELD((((*D_8006AF80) * 0x1A8) + (*D_80091618)), u16 *, 0x8A);
block_20:
                func_8001F1A8(var_a0, var_a1, 0, 1, (var_v1 * 0x1A8) + ((*D_80091618) + 8));
            }
        }
    } else if (arg0 == M2C_FIELD((*D_800EEB9C), s32 *, 0x74C)) {
        if (!(M2C_FIELD(arg0, s32 *, 0x38) & 1)) {
            func_800B74A4();
            if (!(M2C_FIELD(M2C_FIELD((*D_800EEB9C), void **, 0x754), s32 *, 0x38) & 1)) {
                func_800B78C4();
            }
        }
    } else if (arg0 == M2C_FIELD((*D_800EEB9C), s32 *, 0xAC)) {
        func_800B7A94();
    } else if (arg0 == M2C_FIELD((*D_800EEB9C), s32 *, 0x1C)) {
        func_800B821C();
    }
block_30:
    if ((u16) (*D_8008EE44) >= 0x41U) {
block_31:
        func_80013920(arg0);
    }
}

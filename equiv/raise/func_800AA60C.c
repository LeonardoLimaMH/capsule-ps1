#include "common.h"

s32 func_800AA60C(void) {
    extern u16 D_8006AF80[];
    extern M2C_UNK D_80091618[];
    extern s32 D_800ED8DC[];
    extern s16 D_800EE9B4[];
    extern M2C_UNK D_800EEB9C[];
    s32 var_a0;

    var_a0 = -1;
    if (M2C_FIELD((*D_800EEB9C), s32 *, 0) != 0) {
        if (M2C_FIELD((*D_800EEB9C), s32 *, 0) >= 0) {
            if (M2C_FIELD((*D_800EEB9C), s32 *, 0) < 3) {
                if ((*D_800ED8DC) == 1) {
                    var_a0 = func_800A8FF0(-1);
                }
                if (M2C_FIELD((*D_800EEB9C), s32 *, 4) > 0) {
                    M2C_FIELD((*D_800EEB9C), s32 *, 4) = (s32) (M2C_FIELD((*D_800EEB9C), s32 *, 4) - 1);
                    func_800B7298(M2C_FIELD((*D_800EEB9C), s32 *, 0));
                    return 0;
                }
                if (var_a0 == -1) {
                    if (M2C_FIELD((((*D_8006AF80) * 0x1A8) + (*D_80091618)), u16 *, 0x10) == 0xFFFF) {
                        func_800AC34C(1);
                        if ((*D_800EE9B4) == 0x78) {
                            (*D_800EE9B4) = (u16) (*D_800EE9B4) - 1;
                            func_800D1CC4((*D_8006AF80), 3, 0, 0);
                            return 0;
                        }
                        if ((*D_800EE9B4) > 0) {
                            (*D_800EE9B4) = (u16) (*D_800EE9B4) - 1;
                            goto block_15;
                        }
                        (*D_800EE9B4) = 0x78;
                        M2C_FIELD((*D_800EEB9C), s32 *, 0) = 0;
                        M2C_FIELD((*D_800EEB9C), s32 *, 0xC) = 2;
                        (*D_800ED8DC) = 0;
                        return -1;
                    }
                    func_800AC34C(0);
                    M2C_FIELD((*D_800EEB9C), s32 *, 0) = 0;
                    (*D_800ED8DC) = 0;
                    return -1;
                }
                /* Duplicate return node #16. Try simplifying control flow for better match */
                return 0;
            }
            goto block_15;
        }
        goto block_15;
    }
block_15:
    return 0;
}

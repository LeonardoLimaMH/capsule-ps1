#include "common.h"

s32 func_800B3008(s32 arg0, s32 arg1) {
    extern s32 D_8006AF84[];
    extern u8 D_8006AF90[];
    extern u8 D_80091618[];
    extern s32 D_800EEB78[];
    extern s16 D_800EEB84[];
    extern s32 D_800F2DB8[];
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a1;
    s32 var_a0;
    u16 temp_a2;
    u16 temp_s0;
    void *temp_v0;
    void *temp_v1;
    void *temp_v1_2;

    temp_a0 = arg0 & 0xFFFF;
    temp_v1 = (temp_a0 * 0x1A8) + D_80091618;
    if (M2C_FIELD(temp_v1, u16 *, 0x64) == 0) {
        if ((*D_800EEB78) == 1) {
            (*D_800EEB78) = 0;
            goto block_9;
        }
        temp_s0 = M2C_FIELD(temp_v1, u16 *, 0x62);
        if ((temp_s0 == 1) && ((*D_800EEB84) == 0)) {
            if ((*D_800F2DB8) > 0) {
                (*D_800F2DB8) -= 1;
                goto block_14;
            }
            if (func_800B21F0(temp_a0, arg1 & 0xFFFF, D_800EEB78) >= 0) {
                if (func_800202A4(8) == 4) {
block_9:
                    temp_a0_2 = arg0 & 0xFFFF;
                    temp_v1_2 = (temp_a0_2 * 0x1A8) + D_80091618;
                    temp_a1 = arg1 & 0xFFFF;
                    temp_v0 = (temp_a1 * 0x1A8) + D_80091618;
                    M2C_FIELD(temp_v1_2, s16 *, 0x64) = 1;
                    M2C_FIELD(temp_v0, s16 *, 0x64) = 1;
                    M2C_FIELD(temp_v1_2, s32 *, 0x70) = (s32) (*D_8006AF84);
                    M2C_FIELD(temp_v0, s32 *, 0x70) = (s32) (*D_8006AF84);
                    temp_a2 = M2C_FIELD(temp_v1_2, u16 *, 0x172) + 1;
                    M2C_FIELD(temp_v1_2, u16 *, 0x172) = temp_a2;
                    M2C_FIELD(temp_v0, u16 *, 0x172) = (u16) (M2C_FIELD(temp_v0, u16 *, 0x172) + 1);
                    func_800B2C64(temp_a0_2, temp_a1, temp_a2, 1);
                    if (M2C_FIELD(D_8006AF90, s16 *, 0) < 3) {
                        var_a0 = *((M2C_FIELD(D_8006AF90, s16 *, 0) * 2) + D_8006AF90) & 0xFFFF;
                    } else {
                        var_a0 = M2C_FIELD(((M2C_FIELD(D_8006AF90, s16 *, 0x14) * 2) + D_8006AF90), s16 *, 0x14) & 0xFFFF;
                    }
                    func_800D1CC4(var_a0, 0x1B, 4, 0);
                    (*D_800EEB84) = 1;
                    return 1;
                }
                (*D_800EEB84) = (s16) temp_s0;
                goto block_14;
            }
            /* Duplicate return node #15. Try simplifying control flow for better match */
            return 0;
        }
        /* Duplicate return node #15. Try simplifying control flow for better match */
        return 0;
    }
block_14:
    return 0;
}

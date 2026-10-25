#include "common.h"

s16 func_800B34FC(s32 arg0, s32 arg1) {
    extern u8 D_80063940[];
    extern s32 D_8006AF84[];
    extern u8 D_80091618[];
    extern u8 D_800EEB54[];
    extern s32 D_800EEB80[];
    extern s16 D_800EEB84[];
    extern s32 D_800F2DB8[];
    extern u8 D_80100F38[];
    s32 temp_a1;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_v0;
    void *temp_a0;
    void *temp_s2;
    void *temp_v1;

    temp_s0 = arg0 & 0xFFFF;
    temp_s2 = (temp_s0 * 0x1A8) + D_80091618;
    if (M2C_FIELD(temp_s2, u16 *, 0x68) == 0) {
        if ((*D_800EEB80) == 1) {
            temp_a1 = arg1 & 0xFFFF;
            M2C_FIELD(D_800EEB54, s16 *, 0) = (s16) (((u32) M2C_FIELD(((M2C_FIELD(temp_s2, u16 *, 0) * 0x3C) + D_80063940), u32 *, 0x18) >> 0xE) & 7);
            (*D_800EEB80) = 0;
            M2C_FIELD(D_800EEB54, s16 *, 2) = (s16) (((u32) M2C_FIELD(((*((temp_a1 * 0x1A8) + D_80091618) * 0x3C) + D_80063940), u32 *, 0x18) >> 0xE) & 7);
            func_800D0C3C(func_800B14EC(temp_s0, temp_a1, D_800EEB54, D_80063940));
            goto block_12;
        }
        if (M2C_FIELD(temp_s2, u16 *, 0x66) != 0) {
            if ((*D_800EEB84) == 0) {
                if ((*D_800F2DB8) > 0) {
                    (*D_800F2DB8) -= 1;
                    goto block_14;
                }
                temp_s1 = arg1 & 0xFFFF;
                temp_v0 = func_800B21F0(temp_s0, temp_s1, D_80063940);
                if (temp_v0 >= 0) {
                    if (temp_v0 != 8) {
                        if ((M2C_FIELD(((temp_s0 * 0x79C) + D_80100F38), s16 *, 0x37E) == 0) && (M2C_FIELD(((temp_s1 * 0x79C) + D_80100F38), s16 *, 0x37E) == 0)) {
                            M2C_FIELD(D_800EEB54, s16 *, 0) = (s16) (((u32) M2C_FIELD(((M2C_FIELD(temp_s2, u16 *, 0) * 0x3C) + D_80063940), u32 *, 0x18) >> 0xE) & 7);
                            M2C_FIELD(D_800EEB54, s16 *, 2) = (s16) (((u32) M2C_FIELD(((*((temp_s1 * 0x1A8) + D_80091618) * 0x3C) + D_80063940), u32 *, 0x18) >> 0xE) & 7);
                            func_800D0C3C(func_800B14EC(temp_s0, temp_s1, D_800EEB54, D_80063940));
                            if (func_800202A4(0xA) == 5) {
block_12:
                                temp_a0 = ((arg0 & 0xFFFF) * 0x1A8) + D_80091618;
                                temp_v1 = ((arg1 & 0xFFFF) * 0x1A8) + D_80091618;
                                M2C_FIELD(temp_a0, s16 *, 0x68) = 1;
                                M2C_FIELD(temp_v1, s16 *, 0x68) = 1;
                                (*D_800EEB84) = 1;
                                M2C_FIELD(temp_a0, s32 *, 0x78) = (s32) (*D_8006AF84);
                                M2C_FIELD(temp_v1, s32 *, 0x78) = (s32) (*D_8006AF84);
                                return 1;
                            }
                            (*D_800EEB84) = 1;
                            goto block_14;
                        }
                        /* Duplicate return node #15. Try simplifying control flow for better match */
                        return 0;
                    }
                    goto block_14;
                }
                /* Duplicate return node #15. Try simplifying control flow for better match */
                return 0;
            }
            /* Duplicate return node #15. Try simplifying control flow for better match */
            return 0;
        }
        goto block_14;
    }
block_14:
    return 0;
}

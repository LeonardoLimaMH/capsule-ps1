#include "common.h"

s32 func_800B418C(s32 arg0, s32 arg1) {
    extern s32 D_8006AF84[];
    extern u8 D_8006AFCC[];
    extern s16 D_8006B008[];
    extern u8 D_8008ED90[];
    extern u8 D_80091618[];
    s32 temp_a1;
    s32 temp_s0;
    s32 temp_s1;
    u16 temp_v1;

    temp_s1 = (*D_8006AF84);
    switch (M2C_FIELD(D_8006AFCC, u16 *, 0x3C)) {  /* irregular */
    case 0:
        temp_v1 = M2C_FIELD((((arg0 & 0xFFFF) * 0x1A8) + D_80091618), u16 *, 0x10);
        if ((temp_v1 == 6) && ((temp_a1 = arg1 & 0xFFFF, (temp_a1 == 0xFFFF)) || (M2C_FIELD(((temp_a1 * 0x1A8) + D_80091618), u16 *, 0x10) == temp_v1)) && ((u32) ((((*D_8006AF84) % 28800) / 1200) - 5) >= 0x11U)) {
            if (temp_s1 != (((*D_8006AF84) / 1200) * 0x4B0)) {
                if (temp_s1 == (((*D_8006AF84) / 600) * 0x258)) {
                    if (func_800202A4(0x24, MULT_HI(temp_s1, 0x1B4E81B5), MULT_HI(((*D_8006AF84) % 28800), 0x1B4E81B5)) == 0x12) {
                        (*D_8006B008) = 2;
                        func_800DC79C(arg0 & 0xFFFF, 0x16);
                        return 1;
                    }
                    goto block_14;
                }
                /* Duplicate return node #15. Try simplifying control flow for better match */
                return 0;
            }
block_14:
            /* Duplicate return node #15. Try simplifying control flow for better match */
            return 0;
        }
    default:
        return 0;
    case 1:
        temp_s0 = temp_s1 - M2C_FIELD(D_8006AFCC, s32 *, 0x60);
        if ((temp_s0 >= func_800B46EC(2)) && ((*D_8008ED90) == 0)) {
            M2C_FIELD(D_8006AFCC, s32 *, 0x60) = temp_s1;
            func_800DC984(arg0 & 0xFFFF, 0xFFFF);
        }
        /* Duplicate return node #15. Try simplifying control flow for better match */
        return 0;
    }
}

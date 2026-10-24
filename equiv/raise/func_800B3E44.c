#include "common.h"

s32 func_800B3E44(s32 arg0, s32 arg1) {
    extern s32 D_8006AF84[];
    extern M2C_UNK D_8006AFCC[];
    extern s16 D_80078C28[];
    s32 temp_s0;
    s32 temp_s1;

    temp_s0 = (*D_8006AF84);
    if ((M2C_FIELD(D_8006AFCC, u16 *, 0x36) == 0) && ((*D_80078C28) == 0)) {
        temp_s1 = arg0 & 0xFFFF;
        if (func_800E13C8(temp_s1, arg1 & 0xFFFF) != 0) {
            if (temp_s0 >= 0x4B0) {
                if (temp_s0 != ((temp_s0 / 1200) * 0x4B0)) {
                    if (temp_s0 == ((temp_s0 / 600) * 0x258)) {
                        if (func_800202A4(0x1E0, MULT_HI(temp_s0, 0x1B4E81B5)) == 0xF0) {
                            M2C_FIELD(D_8006AFCC, u16 *, 0x36) = 2U;
                            func_800D1CC4(temp_s1, 0x13, 0, 0);
                            return 1;
                        }
                        goto block_8;
                    }
                    /* Duplicate return node #9. Try simplifying control flow for better match */
                    return 0;
                }
                goto block_8;
            }
            /* Duplicate return node #9. Try simplifying control flow for better match */
            return 0;
        }
block_8:
        /* Duplicate return node #9. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}

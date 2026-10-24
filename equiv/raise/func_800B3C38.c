#include "common.h"

s32 func_800B3C38(s32 arg0) {
    extern s32 D_8006AF84[];
    extern M2C_UNK D_8006AFCC[];
    extern s16 D_80105990[];
    s32 temp_a0;

    if ((M2C_FIELD(D_8006AFCC, u16 *, 0x32) == 0) && (M2C_FIELD(D_8006AFCC, u16 *, 0x30) == 1)) {
        if ((*D_80105990) != M2C_FIELD(D_8006AFCC, u16 *, 0x30)) {
            if ((*D_8006AF84) >= 0x4B0) {
                temp_a0 = (*D_8006AF84) % 1200;
                if (temp_a0 != 0) {
                    if (temp_a0 == ((((*D_8006AF84) % 1200) / 600) * 0x258)) {
                        if (func_800202A4(0x24, 0x1B4E81B5, MULT_HI(temp_a0, 0x1B4E81B5)) == 0x12) {
                            M2C_FIELD(D_8006AFCC, u16 *, 0x32) = 2U;
                            func_800DC770(arg0 & 0xFFFF, 0x11);
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

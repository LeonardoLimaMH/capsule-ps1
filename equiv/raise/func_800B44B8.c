#include "common.h"

s32 func_800B44B8(s32 arg0) {
    extern s32 D_8006AF84[];
    extern M2C_UNK D_8006AFCC[];
    if (M2C_FIELD(D_8006AFCC, u16 *, 0x40) == 0) {
        if ((*D_8006AF84) != (((*D_8006AF84) / 1200) * 0x4B0)) {
            if ((*D_8006AF84) == (((*D_8006AF84) / 600) * 0x258)) {
                if (func_800202A4(0x4B0, (s32) (*D_8006AF84) >> 0x1F, MULT_HI((*D_8006AF84), 0x1B4E81B5)) == 0x258) {
                    M2C_FIELD(D_8006AFCC, u16 *, 0x40) = 2U;
                    func_800DC84C(arg0 & 0xFFFF, 0x18);
                    return 1;
                }
                goto block_5;
            }
            /* Duplicate return node #6. Try simplifying control flow for better match */
            return 0;
        }
block_5:
        /* Duplicate return node #6. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}

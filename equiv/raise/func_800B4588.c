#include "common.h"

s32 func_800B4588(s32 arg0) {
    extern s32 D_8006AF84[];
    extern M2C_UNK D_8006AFCC[];
    if ((M2C_FIELD(D_8006AFCC, u16 *, 0x42) == 0) && (M2C_FIELD(D_8006AFCC, u16 *, 0x30) == 0)) {
        if (((u32) ((((*D_8006AF84) % 28800) / 1200) - 0x12) < 5U) && ((*D_8006AF84) != (((*D_8006AF84) / 1200) * 0x4B0))) {
            if ((*D_8006AF84) == (((*D_8006AF84) / 600) * 0x258)) {
                if (func_800202A4(0x12, (s32) (*D_8006AF84) >> 0x1F, MULT_HI((*D_8006AF84), 0x1B4E81B5), MULT_HI(((*D_8006AF84) % 28800), 0x1B4E81B5)) == 9) {
                    M2C_FIELD(D_8006AFCC, u16 *, 0x42) = 2U;
                    func_800DC820(arg0 & 0xFFFF, 0x19);
                    return 1;
                }
                goto block_7;
            }
            /* Duplicate return node #8. Try simplifying control flow for better match */
            return 0;
        }
block_7:
        /* Duplicate return node #8. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}

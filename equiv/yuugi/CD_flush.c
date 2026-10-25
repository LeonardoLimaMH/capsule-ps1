#include "common.h"

void CD_flush(void) {
    extern s8 * D_8007334C[];
    extern s8 * D_80073354[];
    extern u8 * D_80073358[];
    extern s32 * D_8007335C[];
    extern M2C_UNK D_80073364[];
    *(*D_8007334C) = 1;
    if (*(*D_80073358) & 7) {
        do {
            *(*D_8007334C) = 1;
            *(*D_80073358) = 7;
            *(*D_80073354) = 7;
        } while (*(*D_80073358) & 7);
    }
    M2C_FIELD(D_80073364, u8 *, 2) = 0U;
    M2C_FIELD(D_80073364, u8 *, 1) = (u8) M2C_FIELD(D_80073364, u8 *, 2);
    M2C_FIELD(D_80073364, s8 *, 0) = 2;
    *(*D_8007334C) = 0;
    *(*D_80073358) = 0;
    *(*D_8007335C) = 0x1325;
}

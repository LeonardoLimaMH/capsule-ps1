#include "common.h"

s32 func_800B1DEC(void) {
    extern u16 D_8006AF80[];
    extern M2C_UNK D_80091618[];
    extern s32 D_800EEB8C[];
    if ((*D_800EEB8C) != 0) {
        (*D_800EEB8C) -= 1;
        return 0;
    }
    M2C_FIELD((((*D_8006AF80) * 0x1A8) + (*D_80091618)), s16 *, 0x66) = 0;
    (*D_800EEB8C) = 8;
    M2C_FIELD((((*D_8006AF80) * 0x1A8) + (*D_80091618)), s16 *, 0x68) = 0;
    return 1;
}

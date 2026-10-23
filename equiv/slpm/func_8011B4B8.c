#include "common.h"

M2C_UNK *func_8011B4B8(void) {
    extern M2C_UNK D_801321DC[];
    extern u16 * D_8013326C[];
    extern s32 * D_80133270[];
    if (M2C_FIELD(D_801321DC, u16 *, 0) == 0) {
        func_8011B574(D_801321DC + 0x38);
        M2C_FIELD(D_801321DC, u16 *, 0) = 1U;
        *(*D_8013326C) = M2C_FIELD(D_801321DC, u16 *, 0x32);
        *(*D_80133270) = M2C_FIELD(D_801321DC, s32 *, 0x34);
        func_80112024((*D_8013326C));
        return D_801321DC;
    }
    return NULL;
}

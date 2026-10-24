#include "common.h"

M2C_UNK *func_8011B418(void) {
    extern M2C_UNK D_801321DC[];
    extern u16 * D_80133268[];
    extern u16 * D_8013326C[];
    extern s32 * D_80133270[];
    M2C_UNK *var_v0;

    var_v0 = NULL;
    if (M2C_FIELD(D_801321DC, u16 *, 0) != 0) {
        func_80112014();
        M2C_FIELD(D_801321DC, u16 *, 0x32) = (u16) *(*D_8013326C);
        M2C_FIELD(D_801321DC, s32 *, 0x34) = (s32) *(*D_80133270);
        *(*D_8013326C) = 0;
        *(*D_80133268) = *(*D_8013326C);
        *(*D_80133270) &= 0x77777777;
        func_8011B564((*D_80133270));
        var_v0 = D_801321DC;
        M2C_FIELD(D_801321DC, u16 *, 0) = 0U;
    }
    return var_v0;
}

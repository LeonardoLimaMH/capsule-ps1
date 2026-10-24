#include "common.h"

M2C_UNK *func_80042FA0(void) {
    extern M2C_UNK D_80071D84[];
    extern u16 * D_80072E10[];
    extern u16 * D_80072E14[];
    extern s32 * D_80072E18[];
    M2C_UNK *var_v0;

    var_v0 = NULL;
    if (M2C_FIELD(D_80071D84, u16 *, 0) != 0) {
        func_8004FEDC();
        M2C_FIELD(D_80071D84, u16 *, 0x32) = (u16) *(*D_80072E14);
        M2C_FIELD(D_80071D84, s32 *, 0x34) = (s32) *(*D_80072E18);
        *(*D_80072E14) = 0;
        *(*D_80072E10) = *(*D_80072E14);
        *(*D_80072E18) &= 0x77777777;
        func_8004FEBC((*D_80072E18));
        var_v0 = D_80071D84;
        M2C_FIELD(D_80071D84, u16 *, 0) = 0U;
    }
    return var_v0;
}

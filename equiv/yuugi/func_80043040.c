#include "common.h"

M2C_UNK *func_80043040(void) {
    extern M2C_UNK D_80071D84[];
    extern u16 * D_80072E14[];
    extern s32 * D_80072E18[];
    if (M2C_FIELD(D_80071D84, u16 *, 0) == 0) {
        func_8004FECC(D_80071D84 + 0x38);
        M2C_FIELD(D_80071D84, u16 *, 0) = 1U;
        *(*D_80072E14) = M2C_FIELD(D_80071D84, u16 *, 0x32);
        *(*D_80072E18) = M2C_FIELD(D_80071D84, s32 *, 0x34);
        func_8004FEEC((*D_80072E14));
        return D_80071D84;
    }
    return NULL;
}

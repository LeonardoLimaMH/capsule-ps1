#include "common.h"

u16 func_800B12D8(s32 arg0) {
    extern u16 D_8006AF80[];
    extern M2C_UNK D_80091618[];
    extern s32 D_800EEB70[];
    extern u16 D_800EF2D8[];
    if ((*D_800EEB70) == 0) {
        if (arg0 == 1) {
            return M2C_FIELD((((*D_8006AF80) * 0x1A8) + (*D_80091618)), u16 *, 0x8A);
        }
        goto block_5;
    }
    if (arg0 == 1) {
        return (*D_800EF2D8);
    }
block_5:
    return (*D_8006AF80);
}

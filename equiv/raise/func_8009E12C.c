#include "common.h"

s32 func_8009E12C(void) {
    extern u16 D_8006AF80[];
    extern M2C_UNK D_80091618[];
    extern s16 D_800ED880[];
    if ((*D_800ED880) > 0) {
        if ((*D_800ED880) == 8) {
            func_800E2AA0(M2C_FIELD((((*D_8006AF80) * 0x1A8) + (*D_80091618)), u16 *, 0x10), 1, 0);
        }
        (*D_800ED880) = (u16) (*D_800ED880) - 1;
        return 0;
    }
    (*D_800ED880) = 0x10;
    return 1;
}

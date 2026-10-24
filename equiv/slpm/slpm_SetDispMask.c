#include "common.h"

void slpm_SetDispMask(s32 arg0) {
    extern void * D_80131B2C[];
    extern M2C_UNK (*D_80131B30)(M2C_UNK *, s32);
    extern u8 D_80131B36[];
    M2C_UNK var_a0;

    if ((u8) (*D_80131B36) >= 2U) {
        D_80131B30("SetDispMask(%d)...\n", arg0);
    }
    if (arg0 == 0) {
        func_80116878(D_80131B36 + 0x6A, -1, 0x14);
    }
    var_a0 = 0x03000001;
    if (arg0 != 0) {
        var_a0 = 0x03000000;
    }
    M2C_FIELD((*D_80131B2C), M2C_UNK (**)(M2C_UNK), 0x10)(var_a0);
}

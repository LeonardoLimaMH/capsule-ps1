#include "common.h"

s32 *slpm_ClearOTagR(s32 *arg0, M2C_UNK arg1) {
    extern void * D_80131B2C[];
    extern M2C_UNK (*D_80131B30)(M2C_UNK *, s32 *, M2C_UNK);
    extern u8 D_80131B36[];
    extern M2C_UNK D_80131BE0[];
    extern s32 D_80131BF4[];
    if ((u8) (*D_80131B36) >= 2U) {
        D_80131B30("slpm_ClearOTagR(%08x,%d)...\n", arg0, arg1);
    }
    M2C_FIELD((*D_80131B2C), M2C_UNK (**)(s32 *, M2C_UNK), 0x2C)(arg0, arg1);
    (*D_80131BF4) = ((s32) D_80131BE0 & 0xFFFFFF) | 0x04000000;
    *arg0 = (s32) D_80131BF4 & 0xFFFFFF;
    return arg0;
}

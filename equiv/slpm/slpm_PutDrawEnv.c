#include "common.h"

void *slpm_PutDrawEnv(void *arg0) {
    extern void * D_80131B2C[];
    extern M2C_UNK (*D_80131B30)(M2C_UNK *, void *);
    extern u8 D_80131B36[];
    void *temp_s0;

    if ((u8) (*D_80131B36) >= 2U) {
        D_80131B30("PutDrawEnv(%08x)...\n", arg0);
    }
    temp_s0 = arg0 + 0x1C;
    func_80114D30(temp_s0, arg0);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) | 0xFFFFFF);
    M2C_FIELD((*D_80131B2C), M2C_UNK (**)(s32, void *, M2C_UNK, M2C_UNK), 8)(M2C_FIELD((*D_80131B2C), s32 *, 0x18), temp_s0, 0x40, 0);
    slpm_memcpy(D_80131B36 + 0xE, arg0, 0x5C);
    return arg0;
}

#include "common.h"

void slpm_DrawOTag(s32 arg0) {
    extern void * D_80131B2C;
    extern M2C_UNK (*D_80131B30)(M2C_UNK *, s32);
    extern u8 D_80131B36;
    if ((u8) D_80131B36 >= 2U) {
        D_80131B30("DrawOTag(%08x)...\n", arg0);
    }
    M2C_FIELD(D_80131B2C, M2C_UNK (**)(s32, s32, M2C_UNK, M2C_UNK), 8)(M2C_FIELD(D_80131B2C, s32 *, 0x18), arg0, 0, 0);
}

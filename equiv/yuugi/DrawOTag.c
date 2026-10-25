#include "common.h"

void DrawOTag(s32 arg0) {
    extern void * D_80078914;
    extern M2C_UNK (*D_80078918)(M2C_UNK *, s32);
    extern u8 D_8007891E;
    if ((u8) D_8007891E >= 2U) {
        D_80078918("DrawOTag(%08x)...\n", arg0);
    }
    M2C_FIELD(D_80078914, M2C_UNK (**)(s32, s32, M2C_UNK, M2C_UNK), 8)(M2C_FIELD(D_80078914, s32 *, 0x18), arg0, 0, 0);
}

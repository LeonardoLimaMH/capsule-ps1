#include "common.h"

void ClearOTagR(s32 *arg0, M2C_UNK arg1) {
    extern void * D_80078914[];
    extern M2C_UNK (*D_80078918)(M2C_UNK *, s32 *, M2C_UNK);
    extern u8 D_8007891E[];
    extern M2C_UNK D_800789C8[];
    extern s32 D_800789DC[];
    if ((u8) (*D_8007891E) >= 2U) {
        D_80078918("ClearOTagR(%08x,%d)...\n", arg0, arg1);
    }
    M2C_FIELD((*D_80078914), M2C_UNK (**)(s32 *, M2C_UNK), 0x2C)(arg0, arg1);
    (*D_800789DC) = ((s32) D_800789C8 & 0xFFFFFF) | 0x04000000;
    *arg0 = (s32) D_800789DC & 0xFFFFFF;
}

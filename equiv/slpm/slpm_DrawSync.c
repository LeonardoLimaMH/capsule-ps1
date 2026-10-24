#include "common.h"

void slpm_DrawSync(s32 arg0) {
    extern void * D_80131B2C[];
    extern M2C_UNK (*D_80131B30)(M2C_UNK *, s32);
    extern u8 D_80131B36[];
    if ((u8) (*D_80131B36) >= 2U) {
        D_80131B30("DrawSync(%d)...\n", arg0);
    }
    M2C_FIELD((*D_80131B2C), M2C_UNK (**)(s32), 0x3C)(arg0);
}

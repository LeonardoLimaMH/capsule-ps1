#include "common.h"

s32 slpm_DrawSyncCallback(s32 arg0) {
    extern M2C_UNK (*D_80131B30)(M2C_UNK *, s32);
    extern M2C_UNK D_80131B36[];
    s32 temp_v0;

    if ((u8) M2C_FIELD(D_80131B36, u8 *, 0) >= 2U) {
        D_80131B30("DrawSyncCallback(%08x)...\n", arg0);
    }
    temp_v0 = M2C_FIELD(D_80131B36, s32 *, 0xA);
    M2C_FIELD(D_80131B36, s32 *, 0xA) = arg0;
    return temp_v0;
}

#include "common.h"

s32 DrawSyncCallback(s32 arg0) {
    extern M2C_UNK (*D_80078918)(M2C_UNK *, s32);
    extern M2C_UNK D_8007891E[];
    s32 temp_v0;

    if ((u8) M2C_FIELD(D_8007891E, u8 *, 0) >= 2U) {
        D_80078918("DrawSyncCallback(%08x)...\n", arg0);
    }
    temp_v0 = M2C_FIELD(D_8007891E, s32 *, 0xA);
    M2C_FIELD(D_8007891E, s32 *, 0xA) = arg0;
    return temp_v0;
}

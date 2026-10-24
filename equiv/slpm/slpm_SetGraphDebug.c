#include "common.h"

u8 slpm_SetGraphDebug(u8 arg0) {
    extern M2C_UNK (*D_80131B30)(M2C_UNK *, u8, u8, u8);
    extern M2C_UNK D_80131B36[];
    u8 temp_s0;

    temp_s0 = M2C_FIELD(D_80131B36, u8 *, 0);
    M2C_FIELD(D_80131B36, u8 *, 0) = arg0;
    if (arg0 & 0xFF) {
        D_80131B30("SetGraphDebug:level:%d,type:%d reverse:%d\n", M2C_FIELD(D_80131B36, u8 *, 0), M2C_FIELD(D_80131B36, u8 *, -2), M2C_FIELD(D_80131B36, u8 *, 1));
    }
    return temp_s0;
}

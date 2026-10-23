#include "common.h"

void func_800FE958(s32 arg0, s32 arg1, s32 arg2) {
    extern M2C_UNK D_80119710[];
    M2C_FIELD(D_80119710, u16 *, 0x34) = (u16) (M2C_FIELD(D_80119710, u16 *, 0x34) + arg0);
    M2C_FIELD(D_80119710, u16 *, 0x36) = (u16) (M2C_FIELD(D_80119710, u16 *, 0x36) + arg1);
    M2C_FIELD(D_80119710, u16 *, 0x38) = (u16) (M2C_FIELD(D_80119710, u16 *, 0x38) + arg2);
}

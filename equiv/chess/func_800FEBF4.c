#include "common.h"

void func_800FEBF4(void *arg0) {
    extern M2C_UNK D_80069AD4[];
    M2C_FIELD(D_80069AD4, s32 *, 0x44) = (s32) -M2C_FIELD(arg0, s16 *, 0);
    M2C_FIELD(D_80069AD4, s32 *, 0x48) = (s32) -M2C_FIELD(arg0, s16 *, 2);
    M2C_FIELD(D_80069AD4, s32 *, 0x4C) = (s32) -M2C_FIELD(arg0, s16 *, 4);
}

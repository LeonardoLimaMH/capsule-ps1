#include "common.h"

void func_800A3718(void *arg0) {
    extern u16 D_8008EE44[];
    extern s16 D_800B3B3C[];
    if ((*D_8008EE44) != 0x14) {
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) | 1);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
    M2C_FIELD(arg0, s32 *, 0x18) = func_80019F30(0x60010, (*D_800B3B3C) + 0x19);
}

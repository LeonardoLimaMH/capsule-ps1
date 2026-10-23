#include "common.h"

void func_800A8638(void *arg0) {
    extern u16 D_8008EE44[];
    extern s32 D_800B3C20[];
    s32 temp_a2;

    temp_a2 = M2C_FIELD(arg0, s32 *, 0x38) | 1;
    M2C_FIELD(arg0, s32 *, 0x38) = temp_a2;
    if ((*D_8008EE44) == 7) {
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (temp_a2 & ~1);
        M2C_FIELD(arg0, s32 *, 0x18) = func_80019F30(0x6000C, (*D_800B3C20) + 0x22, temp_a2);
    }
}

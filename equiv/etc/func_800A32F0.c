#include "common.h"

void func_800A32F0(void *arg0) {
    extern M2C_UNK D_8008ED68[];
    extern s16 D_800B3B40[];
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x38) | 1;
    M2C_FIELD(arg0, s32 *, 0x38) = temp_a0;
    if ((M2C_FIELD(D_8008ED68, u16 *, 0xDC) == 0x10) && ((M2C_FIELD(arg0, s32 *, 0x80) != 0) || (M2C_FIELD(D_8008ED68, u16 *, 0xE0) == 0))) {
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (temp_a0 & ~1);
        if (M2C_FIELD(arg0, s32 *, 0x84) != 0) {
            M2C_FIELD(arg0, s32 *, 0x18) = func_80019F30(0x60010, (*D_800B3B40) + 0x40);
        }
    }
}

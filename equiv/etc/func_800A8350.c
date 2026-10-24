#include "common.h"

void func_800A8350(void *arg0) {
    extern M2C_UNK D_8008ED68[];
    if ((u32) (M2C_FIELD(D_8008ED68, u16 *, 0xDC) - 6) < 4U) {
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
        M2C_FIELD(arg0, s32 *, 0x18) = func_80019F30(0x6000C, M2C_FIELD(D_8008ED68, u16 *, 0xDC) - 5);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) | 1);
}

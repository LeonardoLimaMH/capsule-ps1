#include "common.h"

void func_800154C4(void) {
    extern M2C_UNK D_8008ED68[];
    func_80012A20(func_80019F30(0x2000E, 0x29), 1, 0, 0);
    M2C_FIELD(D_8008ED68, s8 *, 0x29) = 1;
    M2C_FIELD(D_8008ED68, s32 *, 0x2C) = 0;
    M2C_FIELD(D_8008ED68, s8 *, 0x2A) = 0;
    M2C_FIELD(D_8008ED68, s8 *, 0x2B) = 1;
}

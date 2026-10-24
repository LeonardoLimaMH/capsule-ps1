#include "common.h"

void func_80019088(void) {
    extern M2C_UNK D_8008F7E0[];
    func_8001A998(D_8008F7E0, 0x42C);
    M2C_FIELD(D_8008F7E0, s8 *, 0) = 0;
    M2C_FIELD(D_8008F7E0, s8 *, 2) = 2;
    M2C_FIELD(D_8008F7E0, s8 *, 3) = 0xFF;
    M2C_FIELD(D_8008F7E0, s8 *, 1) = 0;
    M2C_FIELD(D_8008F7E0, s32 *, 0x404) = 0;
    M2C_FIELD(D_8008F7E0, s8 *, 0x408) = 0;
    M2C_FIELD(D_8008F7E0, s8 *, 0x409) = 0;
    M2C_FIELD(D_8008F7E0, s8 *, 0x40C) = 1;
    M2C_FIELD(D_8008F7E0, s32 *, 0x414) = 0;
}

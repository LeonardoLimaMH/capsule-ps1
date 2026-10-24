#include "common.h"

void func_8002CBDC(void *arg0) {
    extern M2C_UNK D_80078C5C[];
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 0x18);
    RotMatrix(D_80078C5C, temp_s0 + 0x20);
    M2C_FIELD(temp_s0, s32 *, 0x5C) = 0;
    M2C_FIELD(temp_s0, s32 *, 0x58) = 0;
    M2C_FIELD(temp_s0, s32 *, 0x54) = 0;
    M2C_FIELD(temp_s0, s32 *, 0x10) = 0x1000;
    M2C_FIELD(temp_s0, s32 *, 0x14) = 0x1000;
    M2C_FIELD(temp_s0, s32 *, 0x18) = 0x1000;
}

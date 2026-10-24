#include "common.h"

void func_800C1BFC(M2C_UNK arg1) {
    extern M2C_UNK D_80100F38[];
    void *temp_v1;

    temp_v1 = ((func_800B1260(arg1) & 0xFFFF) * 0x79C) + D_80100F38;
    M2C_FIELD(temp_v1, s32 *, 0x2BC) = (s32) (M2C_FIELD(temp_v1, s32 *, 0x2BC) + 1);
}

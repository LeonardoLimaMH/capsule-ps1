#include "common.h"

void func_800C32C8(M2C_UNK arg1) {
    extern M2C_UNK D_80100F38[];
    u16 temp_v0;
    void *temp_v1;

    temp_v1 = ((func_800B1260(arg1) & 0xFFFF) * 0x79C) + D_80100F38;
    temp_v0 = M2C_FIELD(temp_v1, u16 *, 0x2CC) - 1;
    M2C_FIELD(temp_v1, u16 *, 0x2CC) = temp_v0;
    M2C_FIELD(temp_v1, s32 *, 0x2BC) = (s32) M2C_FIELD((((s32) (temp_v0 << 0x10) >> 0xE) + temp_v1), s32 *, 0x2F4);
}

#include "common.h"

void func_800C2CE0(M2C_UNK arg1) {
    extern M2C_UNK D_80100F38[];
    void *temp_v1;

    temp_v1 = ((func_800B1260(arg1) & 0xFFFF) * 0x79C) + D_80100F38;
    if (M2C_FIELD(temp_v1, s16 *, 0x2CC) != 0) {
        M2C_FIELD(temp_v1, s16 *, 0x2CC) = (s16) ((u16) M2C_FIELD(temp_v1, s16 *, 0x2CC) - 1);
    }
    M2C_FIELD(temp_v1, s32 *, 0x2BC) = (s32) (M2C_FIELD(temp_v1, s32 *, 0x2BC) + 1);
}

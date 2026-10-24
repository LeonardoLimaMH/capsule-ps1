#include "common.h"

void func_800CF13C(void) {
    extern M2C_UNK D_80100F38[];
    void *temp_v1;

    temp_v1 = ((func_800B1260() & 0xFFFF) * 0x79C) + D_80100F38;
    M2C_FIELD(temp_v1, u16 *, 0x1CC) = (u16) (M2C_FIELD(temp_v1, u16 *, 0x1CC) + M2C_FIELD(temp_v1, u16 *, 0x1D4));
    M2C_FIELD(temp_v1, u16 *, 0x1CE) = (u16) (M2C_FIELD(temp_v1, u16 *, 0x1CE) + M2C_FIELD(temp_v1, u16 *, 0x1D6));
    M2C_FIELD(temp_v1, u16 *, 0x1D0) = (u16) (M2C_FIELD(temp_v1, u16 *, 0x1D0) + M2C_FIELD(temp_v1, u16 *, 0x1D8));
}

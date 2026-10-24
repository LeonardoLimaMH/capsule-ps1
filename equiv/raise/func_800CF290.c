#include "common.h"

void func_800CF290(void) {
    extern M2C_UNK D_80100F38[];
    void *temp_v1;

    temp_v1 = ((func_800B1260() & 0xFFFF) * 0x79C) + D_80100F38;
    M2C_FIELD(temp_v1, s16 *, 0x1D4) = 0;
    M2C_FIELD(temp_v1, s16 *, 0x1D6) = 0;
    M2C_FIELD(temp_v1, s16 *, 0x1D8) = 0;
}

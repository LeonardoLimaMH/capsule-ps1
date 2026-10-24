#include "common.h"

void func_800C1DA4(M2C_UNK arg1) {
    extern M2C_UNK D_80100F38[];
    void *temp_a1;
    void *temp_v1;

    temp_v1 = ((func_800B1260(arg1) & 0xFFFF) * 0x79C) + D_80100F38;
    temp_a1 = M2C_FIELD(temp_v1, void **, 0x2BC);
    M2C_FIELD(temp_v1, void **, 0x2BC) = (void *) (temp_a1 + 1);
    M2C_FIELD(((M2C_FIELD(temp_v1, s16 *, 0x2CC) * 2) + temp_v1), s16 *, 0x30C) = (s16) M2C_FIELD(temp_a1, u8 *, 1);
    M2C_FIELD(temp_v1, void **, 0x2BC) = (void *) (M2C_FIELD(temp_v1, void **, 0x2BC) + 1);
}

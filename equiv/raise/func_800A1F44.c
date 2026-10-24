#include "common.h"

void func_800A1F44(s32 arg0, s32 arg1, s32 arg2) {
    extern M2C_UNK D_800FAE10[];
    extern M2C_UNK D_800FDE08[];
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_a2;
    void **temp_a0_2;
    void **temp_a3;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;

    temp_a0 = (arg0 != 1) * 4;
    temp_a3 = temp_a0 + D_800FDE08;
    temp_v1 = *temp_a3;
    temp_a1 = arg1 & 1;
    M2C_FIELD(temp_v1, s32 *, 0x38) = (s32) ((M2C_FIELD(temp_v1, s32 *, 0x38) & ~1) | temp_a1);
    temp_a0_2 = temp_a0 + D_800FAE10;
    temp_v1_2 = *temp_a0_2;
    M2C_FIELD(temp_v1_2, s32 *, 0x38) = (s32) ((M2C_FIELD(temp_v1_2, s32 *, 0x38) & ~1) | temp_a1);
    temp_v1_3 = *temp_a3;
    temp_a2 = (arg2 & 1) << 6;
    M2C_FIELD(temp_v1_3, s32 *, 0x38) = (s32) ((M2C_FIELD(temp_v1_3, s32 *, 0x38) & ~0x40) | temp_a2);
    temp_v1_4 = *temp_a0_2;
    M2C_FIELD(temp_v1_4, s32 *, 0x38) = (s32) ((M2C_FIELD(temp_v1_4, s32 *, 0x38) & ~0x40) | temp_a2);
}

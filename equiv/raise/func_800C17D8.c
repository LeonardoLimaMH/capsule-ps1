#include "common.h"

void func_800C17D8(void) {
    extern M2C_UNK D_80100F38[];
    s16 temp_v0;
    s16 temp_v0_2;
    s16 var_a1;
    s16 var_a1_2;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a2;
    void *temp_v1;
    void *temp_v1_2;

    temp_a2 = ((func_800B1260() & 0xFFFF) * 0x79C) + D_80100F38;
    var_a1 = 0;
    do {
        temp_a0 = M2C_FIELD((((s32) (var_a1 << 0x10) >> 0xE) + temp_a2), void **, 0x230);
        temp_v0 = var_a1 + 1;
        var_a1 = temp_v0;
        M2C_FIELD(temp_a0, s32 *, 0x38) = (s32) (M2C_FIELD(temp_a0, s32 *, 0x38) | 1);
    } while (temp_v0 < 9);
    var_a1_2 = 0;
    do {
        temp_a0_2 = M2C_FIELD((((s32) (var_a1_2 << 0x10) >> 0xE) + temp_a2), void **, 0x278);
        temp_v0_2 = var_a1_2 + 1;
        var_a1_2 = temp_v0_2;
        M2C_FIELD(temp_a0_2, s32 *, 0x38) = (s32) (M2C_FIELD(temp_a0_2, s32 *, 0x38) | 1);
    } while (temp_v0_2 < 7);
    temp_v1 = M2C_FIELD(temp_a2, void **, 0x184);
    M2C_FIELD(temp_v1, s32 *, 0x38) = (s32) (M2C_FIELD(temp_v1, s32 *, 0x38) | 1);
    temp_v1_2 = M2C_FIELD(temp_a2, void **, 0x18C);
    M2C_FIELD(temp_v1_2, s32 *, 0x38) = (s32) (M2C_FIELD(temp_v1_2, s32 *, 0x38) | 1);
}

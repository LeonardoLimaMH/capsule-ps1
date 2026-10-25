#include "common.h"

void *func_800D4CC4(void) {
    extern u8 D_80091618[];
    extern u8 D_800EE5D0[];
    extern u8 D_800EEB9C[];
    extern u8 D_80100F38[];
    s16 temp_a0_2;
    s16 var_v1;
    s32 temp_a0;
    s32 temp_a0_6;
    s32 temp_v0;
    s32 var_s1;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a0_5;
    void *temp_a1;
    void *temp_s0;
    void *temp_v1;
    void *temp_v1_2;

    temp_v0 = func_800B1260();
    temp_a0 = temp_v0 & 0xFFFF;
    temp_s0 = (temp_a0 * 0x79C) + D_80100F38;
    temp_v1 = (temp_a0 * 0x1A8) + D_80091618;
    temp_a0_2 = M2C_FIELD(temp_v1, s16 *, 0x198);
    if (temp_a0_2 == -1) {
        if (M2C_FIELD(temp_v1, s16 *, 0x19A) == temp_a0_2) {
            temp_v1_2 = M2C_FIELD(temp_s0, void **, 0x184);
            M2C_FIELD(temp_v1_2, s32 *, 0x38) = (s32) (M2C_FIELD(temp_v1_2, s32 *, 0x38) | 1);
        } else {
            goto block_4;
        }
    } else {
block_4:
        temp_a0_3 = ((temp_v0 & 0xFFFF) * 0x1A8) + D_80091618;
        var_v1 = M2C_FIELD(temp_a0_3, s16 *, 0x198);
        var_s1 = 0;
        if (var_v1 == -1) {
            var_v1 = M2C_FIELD(temp_a0_3, s16 *, 0x19A);
            var_s1 = 1;
        }
        M2C_FIELD(M2C_FIELD(temp_s0, void **, 0x184), s32 *, 0x18) = func_80019F30(M2C_FIELD(D_800EE5D0, s32 *, 0) | 0x60000, M2C_FIELD(D_800EE5D0, s32 *, 0xC) + M2C_FIELD(((var_v1 * 8) + D_800EEB9C + (var_s1 * 4)), s32 *, 0x784), 0x60000);
        temp_a0_4 = M2C_FIELD(temp_s0, void **, 0x184);
        M2C_FIELD(temp_a0_4, s32 *, 0x38) = (s32) (M2C_FIELD(temp_a0_4, s32 *, 0x38) & ~1);
        temp_a0_5 = M2C_FIELD(temp_s0, void **, 0x184);
        M2C_FIELD(temp_a0_5, s32 *, 0x34) = (s32) ((M2C_FIELD(temp_a0_5, s32 *, 0x34) & ~0xC00) | (var_s1 << 0xA));
        temp_a1 = M2C_FIELD(temp_s0, void **, 0x184);
        temp_a0_6 = temp_v0 & 0xFFFF;
        M2C_FIELD(temp_a1, s32 *, 0x34) = (s32) ((M2C_FIELD(temp_a1, s32 *, 0x34) & 0xFFFF0FFF) | ((temp_a0_6 & 0xF) << 0xC));
        M2C_FIELD(temp_s0, s32 *, 0x188) = 0;
        func_800C5850(M2C_FIELD(((temp_a0_6 * 0x1A8) + D_80091618), s32 *, 0x178), M2C_FIELD(temp_s0, void **, 0x184), 0, 0, -1);
    }
    return M2C_FIELD(temp_s0, void **, 0x184);
}

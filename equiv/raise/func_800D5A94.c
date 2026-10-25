#include "common.h"

void func_800D5A94(s32 arg0, s16 arg1) {
    extern u8 D_80100F38[];
    M2C_UNK var_a1;
    M2C_UNK var_a2;
    M2C_UNK var_a3;
    s16 temp_v0;
    s16 var_s2;
    s32 temp_s0;
    s32 var_v0;
    void *temp_s0_2;
    void *temp_s0_3;
    void *temp_s1;
    void *var_a0;

    var_s2 = 0;
    temp_s1 = ((arg0 & 0xFFFF) * 0x79C) + D_80100F38;
    M2C_FIELD(temp_s1, s16 *, 0x39C) = 1;
    M2C_FIELD(temp_s1, s16 *, 0x39E) = arg1;
    M2C_FIELD(temp_s1, s16 *, 0x39A) = 1;
    M2C_FIELD(temp_s1, s16 *, 0x3A2) = 0;
    M2C_FIELD(temp_s1, s16 *, 0x3A0) = 0x46;
    M2C_FIELD(temp_s1, s16 *, 0x392) = 1;
    var_v0 = 0 & 1;
    do {
        temp_s0 = var_s2 << 0x10;
        if (var_v0 != 0) {
            temp_s0_2 = temp_s1 + ((temp_s0 >> 0xC) + 0xA0);
            func_800D6960(temp_s0_2, 0xF0, 0xF0, 0x10);
            func_800D6960(temp_s0_2 + 4, 0xF0, 0xF0, 0xF0);
            func_800D6960(temp_s0_2 + 8, 0xE0, 0x40, 0x70);
            var_a0 = temp_s0_2 + 0xC;
            var_a1 = 0;
            var_a2 = 0;
            var_a3 = 0;
        } else {
            temp_s0_3 = temp_s1 + ((temp_s0 >> 0xC) + 0xA0);
            func_800D6960(temp_s0_3, 0xF0, 0xF0, 0xF0);
            func_800D6960(temp_s0_3 + 4, 0xF0, 0xF0, 0x10);
            func_800D6960(temp_s0_3 + 8, 0, 0, 0);
            var_a0 = temp_s0_3 + 0xC;
            var_a1 = 0xE0;
            var_a2 = 0x40;
            var_a3 = 0x70;
        }
        func_800D6960(var_a0, var_a1, var_a2, var_a3);
        temp_v0 = var_s2 + 1;
        var_s2 = temp_v0;
        var_v0 = var_s2 & 1;
    } while (temp_v0 < 8);
    M2C_FIELD(temp_s1, s16 *, 0x394) = GetTPage(0, M2C_FIELD(temp_s1, s16 *, 0x392), 0, 0);
}

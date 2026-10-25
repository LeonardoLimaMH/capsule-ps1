#include "common.h"

void func_800FFAB0(s32 arg0, s32 arg1) {
    extern u8 D_8008ED68[];
    extern u8 D_801010B0[];
    extern u8 D_801021B8[];
    u32 temp_fp;
    u32 temp_s0;
    s32 var_a2;
    s32 var_s1;
    s32 var_v0;
    s8 temp_a2;
    u32 temp_a1_2;
    u8 *var_v0_2;
    u8 temp_v0;
    void *temp_a1;
    void *temp_s0_2;
    void *temp_s2;
    void *temp_s4;
    void *temp_s5;

    temp_s4 = arg0 + 0x5D0;
    temp_s0 = M2C_FIELD((arg0 + arg1), u8 *, 0x5DE) - 1;
    temp_fp = *(u16 *)((M2C_FIELD(temp_s4, u8 *, 9) * 0x34) + D_801010B0);
    if (M2C_FIELD((temp_s4 + arg1), u8 *, 0x10) == 0) {
        temp_a1 = (arg1 * 4) + D_8008ED68;
        var_a2 = M2C_FIELD(temp_a1, s32 *, 0x9EC);
        M2C_FIELD(temp_a1, s32 *, 0x9EC) = (s32) ((var_a2 + 1) % 6);
    } else {
        var_a2 = func_800202A4(6);
    }
    var_s1 = 0;
    temp_s5 = (M2C_FIELD(temp_s4, u8 *, 9) * 0x48) + ((temp_s0 * 0x24) + D_801021B8) + (var_a2 * 6);
    do {
        var_v0_2 = temp_s5 + 5;
        if (var_s1 != 5) {
            var_v0_2 = temp_s5 + func_800202A4(5);
        }
        temp_v0 = *var_v0_2;
        temp_a1_2 = temp_v0 >> 4;
        temp_a2 = temp_v0 & 0xF;
        temp_s2 = (temp_a2 * 4) + ((temp_a1_2 * 0x34) + temp_fp);
        var_v0 = var_s1 < 6;
        if (M2C_FIELD(temp_s2, u8 *, 3) == 0) {
            temp_s0_2 = temp_s4 + ((var_s1 * 0x7C) + (arg1 * 0x2E8));
            M2C_FIELD(temp_s0_2, s8 *, 0x2D) = (s8) temp_a1_2;
            M2C_FIELD(temp_s0_2, s8 *, 0x2E) = temp_a2;
            M2C_FIELD(temp_s0_2, s8 *, 0x2F) = 1;
            var_s1 += 1;
            M2C_FIELD(temp_s0_2, s8 *, 0x3D) = func_800A835C(arg0, arg1, temp_a2);
            M2C_FIELD(temp_s2, u8 *, 3) = (u8) ((arg1 << 7) | var_s1);
            var_v0 = var_s1 < 6;
        }
    } while (var_v0 != 0);
}

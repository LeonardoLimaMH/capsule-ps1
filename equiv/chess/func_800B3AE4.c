#include "common.h"

void func_800B3AE4(s32 arg0) {
    extern u8 D_801010B0[];
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_t1;
    s32 var_a2;
    s32 var_a2_2;
    u8 *temp_v1;
    u8 temp_t2;
    u8 temp_t3;
    u8 temp_v0;
    u8 temp_v0_2;
    void *temp_a0;
    void *temp_a3;
    void *temp_t0;
    void *var_v1;

    temp_t0 = arg0 + 0x5D0;
    temp_t3 = M2C_FIELD(temp_t0, u8 *, 0x5FA);
    temp_a1 = temp_t3 & 0xFF;
    temp_t2 = M2C_FIELD((temp_t0 + temp_a1), u8 *, 0x5FB);
    var_a2 = 0;
    temp_t1 = *(s32 *)((M2C_FIELD(temp_t0, u8 *, 9) * 0x34) + D_801010B0);
    M2C_FIELD(temp_t0, s8 *, 0x60C) = 0;
    temp_a3 = temp_t0 + ((temp_a1 * 0x2E8) + 0x18) + (temp_t2 * 0x7C);
    M2C_FIELD(((M2C_FIELD(temp_a3, u8 *, 0x16) * 4) + ((M2C_FIELD(temp_a3, u8 *, 0x15) * 0x34) + temp_t1)), s8 *, 3) = 0;
    var_v1 = temp_a3;
    do {
        temp_v0 = M2C_FIELD((temp_t0 + var_a2), u8 *, 0x6E0);
        var_a2 += 1;
        M2C_FIELD(var_v1, u8 *, 0x15) = temp_v0;
        var_v1 = temp_a3 + var_a2;
    } while (var_a2 < 2);
    temp_a1_2 = temp_t3 & 0xFF;
    M2C_FIELD(((M2C_FIELD(temp_a3, u8 *, 0x16) * 4) + ((M2C_FIELD(temp_a3, u8 *, 0x15) * 0x34) + temp_t1)), s8 *, 3) = (s8) ((temp_t2 + 1) & 0x7F);
    if (temp_a1_2 != 0) {
        temp_a0 = (M2C_FIELD(temp_a3, u8 *, 0x16) * 4) + ((M2C_FIELD(temp_a3, u8 *, 0x15) * 0x34) + temp_t1);
        M2C_FIELD(temp_a0, u8 *, 3) = (u8) (M2C_FIELD(temp_a0, u8 *, 3) | 0x80);
    }
    var_a2_2 = 0;
    do {
        temp_v1 = (temp_a1_2 * 2) + temp_t0 + 0x601 + var_a2_2;
        temp_v0_2 = M2C_FIELD((temp_a3 + var_a2_2), u8 *, 0x15);
        var_a2_2 += 1;
        *temp_v1 = temp_v0_2;
    } while (var_a2_2 < 2);
}

#include "common.h"

void func_800D6A4C(s32 arg0, M2C_UNK arg1) {
    extern u8 D_80063940[];
    extern u8 D_8006B2A4[];
    extern u8 D_80085428[];
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s5;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_s0;
    s32 var_s1;
    u32 temp_a3;
    u32 temp_s1;
    u8 temp_s3;
    u8 temp_s4;
    void *temp_a1;

    temp_a3 = arg0 & 0xFF;
    temp_a1 = (((arg0 & 0x7F) - 1) * 0x7C) + ((temp_a3 >> 7) * 0x2E8) + D_80085428;
    var_s1 = 1;
    temp_s4 = M2C_FIELD(temp_a1, u8 *, 0x5FD);
    temp_s3 = M2C_FIELD(temp_a1, u8 *, 0x5FE);
    temp_s5 = ((u32) M2C_FIELD((((((u32) M2C_FIELD(((M2C_FIELD(temp_a1, u8 *, 0x5E8) * 0x3C) + D_80063940), u32 *, 8) >> 0x11) & 0x7F) * 0x58) + D_8006B2A4), u32 *, 0x10) >> 0xB) & 0xF;
    if (temp_s5 > 1) {
        do {
            temp_s0 = temp_s5 - var_s1;
            func_800D4F74(temp_a3, arg1, (temp_s4 + var_s1) & 0xFF, (temp_s3 + temp_s0) & 0xFF);
            func_800D4F74(temp_a3, arg1, (temp_s4 - var_s1) & 0xFF, (temp_s3 - temp_s0) & 0xFF);
            func_800D4F74(temp_a3, arg1, (temp_s4 + temp_s0) & 0xFF, (temp_s3 - var_s1) & 0xFF);
            func_800D4F74(temp_a3, arg1, (temp_s4 - temp_s0) & 0xFF, (temp_s3 + var_s1) & 0xFF);
            var_s1 += 1;
        } while (var_s1 < temp_s5);
    }
    temp_s1 = arg0 & 0xFF;
    if ((((u32) M2C_FIELD((((((u32) M2C_FIELD(((M2C_FIELD(((((arg0 & 0x7F) - 1) * 0x7C) + ((temp_s1 >> 7) * 0x2E8) + D_80085428), u8 *, 0x5E8) * 0x3C) + D_80063940), u32 *, 8) >> 0x11) & 0x7F) * 0x58) + D_8006B2A4), u32 *, 0x10) >> 0x11) & 0xF) != 4) {
        temp_s0_2 = temp_s4 & 0xFF;
        func_800D4F74(temp_s1, arg1, temp_s0_2, (temp_s3 + temp_s5) & 0xFF);
        func_800D4F74(temp_s1, arg1, temp_s0_2, (temp_s3 - temp_s5) & 0xFF);
        var_s0 = temp_s3 & 0xFF;
        func_800D4F74(temp_s1, arg1, (temp_s4 + temp_s5) & 0xFF, var_s0);
        goto block_12;
    }
    temp_s0_3 = temp_s4 & 0xFF;
    if (!(func_800D0B4C(temp_s0_3, (temp_s3 + 1) & 0xFF, D_80063940, D_8006B2A4) & 0xFF)) {
        func_800D4F74(temp_s1, arg1, temp_s0_3, (temp_s3 + temp_s5) & 0xFF);
    }
    var_a0 = temp_s4 + 1;
    if (!(func_800D0B4C(temp_s0_3, (temp_s3 - 1) & 0xFF) & 0xFF)) {
        func_800D4F74(temp_s1, arg1, temp_s0_3, (temp_s3 - temp_s5) & 0xFF);
        var_a0 = temp_s4 + 1;
    }
    var_s0 = temp_s3 & 0xFF;
    var_a0_2 = temp_s4 - 1;
    if (!(func_800D0B4C(var_a0 & 0xFF, var_s0) & 0xFF)) {
        func_800D4F74(temp_s1, arg1, (temp_s4 + temp_s5) & 0xFF, var_s0);
        var_a0_2 = temp_s4 - 1;
    }
    if (!(func_800D0B4C(var_a0_2 & 0xFF, var_s0) & 0xFF)) {
block_12:
        func_800D4F74(temp_s1, arg1, (temp_s4 - temp_s5) & 0xFF, var_s0);
    }
}

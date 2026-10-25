#include "common.h"

void func_800D68A8(s32 arg0, M2C_UNK arg1) {
    extern u8 D_80063940[];
    extern u8 D_8006B2A4[];
    extern u8 D_80085428[];
    s32 temp_s0;
    s32 temp_s7;
    s32 var_s1;
    s32 var_s2;
    u32 temp_a3;
    u8 temp_s4;
    u8 temp_s5;
    void *temp_a1;

    temp_a3 = arg0 & 0xFF;
    temp_a1 = (((arg0 & 0x7F) - 1) * 0x7C) + ((temp_a3 >> 7) * 0x2E8) + D_80085428;
    temp_s5 = M2C_FIELD(temp_a1, u8 *, 0x5FD);
    temp_s4 = M2C_FIELD(temp_a1, u8 *, 0x5FE);
    temp_s7 = ((u32) M2C_FIELD((((((u32) M2C_FIELD(((M2C_FIELD(temp_a1, u8 *, 0x5E8) * 0x3C) + D_80063940), u32 *, 8) >> 0x11) & 0x7F) * 0x58) + D_8006B2A4), u32 *, 0x10) >> 0xB) & 0xF;
    var_s2 = 1;
    if (temp_s7 != 0) {
        do {
            var_s1 = 0;
            if (var_s2 > 0) {
                do {
                    temp_s0 = var_s2 - var_s1;
                    func_800D4F74(temp_a3, arg1, (temp_s5 + var_s1) & 0xFF, (temp_s4 + temp_s0) & 0xFF);
                    func_800D4F74(temp_a3, arg1, (temp_s5 - var_s1) & 0xFF, (temp_s4 - temp_s0) & 0xFF);
                    func_800D4F74(temp_a3, arg1, (temp_s5 + temp_s0) & 0xFF, (temp_s4 - var_s1) & 0xFF);
                    func_800D4F74(temp_a3, arg1, (temp_s5 - temp_s0) & 0xFF, (temp_s4 + var_s1) & 0xFF);
                    var_s1 += 1;
                } while (var_s1 < var_s2);
            }
            var_s2 += 1;
        } while (temp_s7 >= var_s2);
    }
}

#include "common.h"

void func_800ABBF8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    extern u8 D_80063940[];
    extern u8 D_80085A10[];
    s16 temp_s0;
    s16 temp_s0_2;
    s16 temp_s1;
    s16 temp_s2;
    s16 temp_s4;
    s16 temp_s5;
    s16 temp_s7;
    s16 temp_s7_2;
    void *temp_s6;

    temp_s4 = arg2 + 5;
    temp_s7 = arg3 + 7;
    temp_s6 = (arg0 * 0x2E8) + ((arg1 * 0x7C) + D_80085A10);
    func_8001F1A8(temp_s4, temp_s7, 0, 0, 0, temp_s6 + 1, 0, 8, 3);
    temp_s5 = temp_s7 + 0xC;
    func_80018EF4((s16) (temp_s4 + 0x20), temp_s5, ((u32) M2C_FIELD(((M2C_FIELD(temp_s6, u8 *, 0) * 0x3C) + D_80063940), u32 *, 8) >> 0xC) & 3, 0, 3);
    temp_s1 = temp_s4 + 0x36;
    func_800188F0(temp_s1, temp_s5, 0, 0, 3);
    temp_s0 = temp_s4 + 3;
    temp_s2 = temp_s7 + 0x19;
    func_800188F0(temp_s0, temp_s2, 1, 0, 3);
    func_800188F0(temp_s1, temp_s2, 2, 0, 3);
    temp_s7_2 = temp_s7 + 0x26;
    func_800188F0(temp_s0, temp_s7_2, 3, 0, 3);
    func_8001F35C((s16) (temp_s4 + 0x62), temp_s7, 0, 0, 0, (s32) M2C_FIELD(temp_s6, u8 *, 0xD), 1, 3);
    func_8001F35C((s16) (temp_s4 + 0x44), temp_s5, 0, 0, 0, (s32) M2C_FIELD(temp_s6, u8 *, 0xA), 3, 3);
    temp_s0_2 = temp_s4 + 0xF;
    func_8001F35C(temp_s0_2, temp_s2, 0, 0, 0, (s32) M2C_FIELD(temp_s6, u8 *, 0xB), 3, 3);
    func_8001F35C((s16) (temp_s4 + 0x4E), temp_s2, 0, 0, 0, (s32) M2C_FIELD(temp_s6, u8 *, 0xC), 1, 3);
    func_8001F35C(temp_s0_2, temp_s7_2, 0, 0, 0, (s32) M2C_FIELD(temp_s6, u8 *, 9), 3, 3);
}

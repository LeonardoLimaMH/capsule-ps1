#include "common.h"

void func_800E3450(s32 arg0, s32 arg1, s32 arg2) {
    extern u8 D_800FDE08[];
    extern u8 D_80100F38[];
    s16 temp_s1;
    s16 temp_s1_2;
    void **temp_s2;
    void *temp_s0;
    void *temp_s4;

    temp_s0 = ((func_800B1260() & 0xFFFF) * 0x79C) + D_80100F38;
    temp_s4 = temp_s0 + 0x1CC;
    temp_s1 = arg1 - 1;
    temp_s1_2 = (temp_s1 * 8) - 1 + arg2;
    M2C_FIELD(temp_s0, s16 *, 0x32C) = temp_s1_2;
    M2C_FIELD(temp_s0, s16 *, 0x32A) = temp_s1_2;
    M2C_FIELD(temp_s0, s16 *, 0x326) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x324) = 0;
    func_800D0730(temp_s4, temp_s1, (s16) (arg2 - 1), 0);
    func_800CED80(arg0, M2C_FIELD(temp_s0, s16 *, 0x32A), M2C_FIELD(temp_s0, s16 *, 0x32C));
    temp_s2 = ((arg0 != 1) * 4) + D_800FDE08;
    M2C_FIELD(*temp_s2, s16 *, 0x4E) = func_800E3A04(arg0, temp_s4, temp_s2);
}

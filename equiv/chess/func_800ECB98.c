#include "common.h"

void func_800ECB98(void *arg0) {
    u16 sp10;
    u16 sp12;
    u16 sp14;
    s32 temp_s1;
    s32 temp_s2;
    s32 var_v1;
    s32 var_v1_2;
    u32 temp_v0;

    temp_s2 = M2C_FIELD(arg0, s32 *, 0x80);
    temp_s1 = M2C_FIELD(arg0, s32 *, 0x84);
    temp_v0 = M2C_FIELD(arg0, u32 *, 0x3C) + 1;
    M2C_FIELD(arg0, u32 *, 0x3C) = temp_v0;
    if (temp_v0 >= 0xB5U) {
        func_80013920();
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x7C) = (s32) (M2C_FIELD(arg0, s32 *, 0x7C) + 0x2710);
    var_v1 = temp_s2 * rsin(temp_s1);
    if (var_v1 < 0) {
        var_v1 += 0xFFF;
    }
    M2C_FIELD(arg0, s32 *, 0x68) = (s32) (M2C_FIELD(arg0, s32 *, 0x68) + (var_v1 >> 0xC));
    var_v1_2 = temp_s2 * rcos(temp_s1);
    if (var_v1_2 < 0) {
        var_v1_2 += 0xFFF;
    }
    M2C_FIELD(arg0, s32 *, 0x70) = (s32) (M2C_FIELD(arg0, s32 *, 0x70) + (var_v1_2 >> 0xC));
    M2C_FIELD(arg0, s32 *, 0x6C) = (s32) (M2C_FIELD(arg0, s32 *, 0x6C) + M2C_FIELD(arg0, s32 *, 0x7C));
    sp10 = M2C_FIELD(arg0, u16 *, 0x6A);
    sp12 = M2C_FIELD(arg0, u16 *, 0x6E);
    sp14 = M2C_FIELD(arg0, u16 *, 0x72);
    func_800FF0A0(arg0, &sp10, 1);
}

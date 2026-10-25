#include "common.h"

void func_800D8FB0(s32 arg0) {
    extern u8 D_800F0D40[];
    extern u8 D_80100F38[];
    u8 *var_a2;
    void *var_a3;

    var_a3 = ((arg0 & 0xFFFF) * 0x79C) + D_80100F38;
    var_a2 = D_800F0D40;
    do {
        M2C_FIELD(var_a3, s32 *, 0) = (s32) M2C_FIELD(var_a2, s32 *, 0);
        M2C_FIELD(var_a3, s32 *, 4) = (s32) M2C_FIELD(var_a2, s32 *, 4);
        M2C_FIELD(var_a3, s32 *, 8) = (s32) M2C_FIELD(var_a2, s32 *, 8);
        M2C_FIELD(var_a3, s32 *, 0xC) = (s32) M2C_FIELD(var_a2, s32 *, 0xC);
        var_a2 += 0x10;
        var_a3 += 0x10;
    } while (var_a2 != (D_800F0D40 + 0x790));
    M2C_FIELD(var_a3, s32 *, 0) = (s32) M2C_FIELD(var_a2, s32 *, 0);
    M2C_FIELD(var_a3, s32 *, 4) = (s32) M2C_FIELD(var_a2, s32 *, 4);
    M2C_FIELD(var_a3, s32 *, 8) = (s32) M2C_FIELD(var_a2, s32 *, 8);
}

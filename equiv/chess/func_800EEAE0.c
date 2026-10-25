#include "common.h"

void func_800EEAE0(void *arg0) {
    extern s8 D_8011974D[];
    s16 temp_v1;
    s32 temp_lo;
    s32 var_v0;
    s32 var_v1;
    u16 temp_v0;

    temp_v0 = M2C_FIELD(arg0, u16 *, 0x16) + 1;
    M2C_FIELD(arg0, u16 *, 0x16) = temp_v0;
    (*D_8011974D) = 0;
    if ((s16) temp_v0 > 0x28) {
        func_80013920(arg0);
        return;
    }
    temp_lo = (s32) ((s16) temp_v0 << 0xC) / 40;
    var_v1 = rsin(temp_lo) * 0x3C;
    if (var_v1 < 0) {
        var_v1 += 0xFFF;
    }
    M2C_FIELD(arg0, s16 *, 0x2A) = (s16) (M2C_FIELD(arg0, u16 *, 0x1C) - (var_v1 >> 0xC));
    var_v0 = rcos(temp_lo) * 0x14;
    if (var_v0 < 0) {
        var_v0 += 0xFFF;
    }
    temp_v1 = 0x32 - (var_v0 >> 0xC);
    M2C_FIELD(arg0, s16 *, 0x3A) = temp_v1;
    M2C_FIELD(arg0, s16 *, 0x3C) = (s16) (temp_v1 + 0xC);
    M2C_FIELD(arg0, u16 *, 0x3E) = (u16) (M2C_FIELD(arg0, u16 *, 0x3E) + 0x64);
}

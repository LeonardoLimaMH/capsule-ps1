#include "common.h"

void func_80015EF8(void *arg0) {
    s32 var_a3;
    s32 var_a3_2;
    s8 *temp_v0;
    void *var_a0;

    var_a3 = 0x1F;
    M2C_FIELD(arg0, s8 *, 0x5A) = 0x80;
    M2C_FIELD(arg0, s8 *, 0x59) = 0x80;
    M2C_FIELD(arg0, s8 *, 0x58) = 0x80;
    M2C_FIELD(arg0, s16 *, 0x50) = 0x1000;
    M2C_FIELD(arg0, s16 *, 0x52) = 0x1000;
    M2C_FIELD(arg0, s16 *, 0x60) = 0x140;
    M2C_FIELD(arg0, s16 *, 0x62) = 0xF0;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, s16 *, 0x54) = 0;
    M2C_FIELD(arg0, s8 *, 0x56) = 0;
    M2C_FIELD(arg0, s8 *, 0x57) = 0;
    M2C_FIELD(arg0, s32 *, 0x68) = 0;
    M2C_FIELD(arg0, s32 *, 0x6C) = 0;
    M2C_FIELD(arg0, s16 *, 0x78) = 0;
    M2C_FIELD(arg0, s16 *, 0x74) = 0;
    M2C_FIELD(arg0, s16 *, 0x76) = 0;
    M2C_FIELD(arg0, s16 *, 0x64) = 0;
    M2C_FIELD(arg0, s16 *, 0x66) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, s8 *, 0x5B) = 0;
    M2C_FIELD(arg0, s16 *, 0x5C) = 0;
    M2C_FIELD(arg0, s16 *, 0x5E) = 0;
    M2C_FIELD(arg0, s16 *, 0x7A) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) (M2C_FIELD(arg0, s32 *, 0x34) & ~0x7F);
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~8 & ~1 & ~2 & ~4 & ~0x30 & ~0x40 & ~0x80);
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) (M2C_FIELD(arg0, s32 *, 0x34) & ~0x80 & ~0x100 & ~0x200 & ~0xC00 & 0xFFFF0FFF);
    do {
        temp_v0 = arg0 + 0x14 + var_a3;
        var_a3 -= 1;
        *temp_v0 = 0;
    } while (var_a3 >= 0);
    var_a3_2 = 4;
    var_a0 = arg0 + 0x10;
    do {
        M2C_FIELD(var_a0, s32 *, 0x7C) = 0;
        var_a3_2 -= 1;
        var_a0 -= 4;
    } while (var_a3_2 >= 0);
}

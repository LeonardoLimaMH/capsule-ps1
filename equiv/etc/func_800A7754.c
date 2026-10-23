#include "common.h"

void func_800A7754(u16 *arg0, s32 arg1) {
    extern M2C_UNK D_8008ED68[];
    s32 var_s0;
    s32 var_s3;
    u16 *var_s2;
    u16 temp_a3;
    u32 var_s1;

    var_s3 = 0x40;
    var_s1 = 0;
    var_s2 = arg0;
    var_s0 = 0;
    do {
        temp_a3 = *var_s2;
        if (var_s1 == (arg1 & 0xFF)) {
            var_s0 = 0;
            var_s3 += 0x10;
        }
        var_s2 += 2;
        var_s1 += 1;
        func_8001EA24((s16) (((s32) M2C_FIELD((*D_8008ED68), s32 *, 0x108) / 2) - 0x80 + var_s0), (s16) (var_s3 + ((s32) M2C_FIELD((*D_8008ED68), s32 *, 0x10C) / 2)), 3, temp_a3, 0, 3);
        var_s0 += 0xE;
    } while (var_s1 < 0x20U);
}

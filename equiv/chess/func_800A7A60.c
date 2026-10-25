#include "common.h"

void func_800A7A60(s32 arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    s32 var_s0;
    u32 temp_s3;
    u32 var_v0;

    var_s0 = 0;
    temp_s3 = M2C_FIELD((arg0 + (arg2 * 0x2E8) + (arg3 * 0x7C)), u32 *, 0x600);
    var_v0 = temp_s3 >> 0;
    do {
        if ((var_v0 & 1) && (var_s0 == 0x12)) {
            func_800C4E94(arg0, arg1, arg2, arg3);
        }
        var_s0 += 1;
        var_v0 = temp_s3 >> var_s0;
    } while (var_s0 < 0x20);
}

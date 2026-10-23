#include "common.h"

s32 __floatsisf(s32 arg0) {
    s32 temp_a0;
    s32 var_a0_2;
    s32 var_a2;
    s32 var_v1;
    u32 var_a0;

    var_a0_2 = arg0;
    var_a2 = 0;
    var_v1 = 0x9D;
    if (var_a0_2 == 0) {
        return 0;
    }
    if (var_a0_2 < 0) {
        var_a2 = 0x80000000;
        var_a0_2 = -var_a0_2;
    }
    if (var_a0_2 <= 0xFFFFFF) {
        do {
            var_a0_2 *= 0x10;
            var_v1 -= 4;
        } while (var_a0_2 <= 0xFFFFFF);
    }
    if (var_a0_2 <= 0x3FFFFFFF) {
        do {
            var_a0_2 *= 2;
            var_v1 -= 1;
        } while (var_a0_2 <= 0x3FFFFFFF);
    }
    temp_a0 = var_a0_2 + 0x40;
    if (temp_a0 < 0) {
        var_v1 += 1;
        var_a0 = (u32) temp_a0 >> 8;
    } else {
        var_a0 = (u32) temp_a0 >> 7;
    }
    return var_a2 | (var_v1 << 0x17) | (var_a0 & 0xFF7FFFFF);
}

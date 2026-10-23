#include "common.h"

u32 _spu_2pitch(s32 arg0, u32 arg1) {
    s32 sp0;
    s32 var_a2;
    s32 var_lo;
    s32 var_t0;
    u32 temp_a3;
    u32 var_v1;

    var_v1 = 0x103B;
    var_t0 = arg0 << 0xC;
    var_a2 = 0;
    temp_a3 = arg1 >> 5;
    sp0 = arg0 * 0x103B;
    if (temp_a3 != 0) {
        var_lo = arg0 * 0x103B;
        do {
            var_t0 = var_lo;
            var_v1 = (u32) (var_v1 * 0x103B) >> 0xC;
            var_lo = arg0 * var_v1;
            var_a2 += 1;
            sp0 = var_lo;
        } while (var_a2 < (s32) temp_a3);
    }
    return (u32) (var_t0 + (((u32) (sp0 - var_t0) >> 5) * (arg1 & 0x1F))) >> 0xC;
}

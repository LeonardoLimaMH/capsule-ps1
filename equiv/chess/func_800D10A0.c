#include "common.h"

s32 func_800D10A0(void *arg0, s16 arg1) {
    extern void * D_80118C1C[];
    s32 temp_lo;
    s32 temp_lo_2;
    s32 var_a2;
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;
    void *var_a0;

    var_a0 = arg0;
    var_a2 = 0;
    if (arg1 >= 0xFA1) {
        var_v1 = 0;
        do {
            temp_lo = M2C_FIELD((*D_80118C1C), u16 *, 0x10) * M2C_FIELD(var_a0, u8 *, 0x12);
            var_a0 += 7;
            var_v1 += 1;
            var_a2 += temp_lo;
        } while (var_v1 < 5);
        var_v0 = var_a2 << 0x10;
    } else {
        var_v0 = 0 << 0x10;
        if (arg1 < -0xFA0) {
            var_v1_2 = 0;
            do {
                temp_lo_2 = M2C_FIELD((*D_80118C1C), u16 *, 0x10) * M2C_FIELD(var_a0, u8 *, 0x3C);
                var_a0 += 7;
                var_v1_2 += 1;
                var_a2 -= temp_lo_2;
            } while (var_v1_2 < 5);
            var_v0 = var_a2 << 0x10;
        }
    }
    return var_v0 >> 0x10;
}

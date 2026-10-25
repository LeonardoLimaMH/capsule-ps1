#include "common.h"

void func_800B8740(s32 arg0, u32 *arg1) {
    u32 temp_s0;
    u32 temp_v1;
    s32 var_s1;
    s32 var_v0;
    s32 var_v0_2;
    u32 *temp_s3;
    u32 *var_a1;
    u32 temp_a0;

    var_a1 = arg1;
    temp_s3 = var_a1;
    var_s1 = 0;
    var_v0 = 0;
loop_1:
    var_v0_2 = var_v0 < 0x97;
loop_2:
    var_s1 += 1;
    if (var_v0_2 != 0) {
        temp_s0 = func_800202A4(0xD, var_a1);
        var_a1 = (func_800202A4(0xD) * 4) + ((temp_s0 * 0x34) + arg0);
        temp_a0 = *var_a1;
        var_v0 = var_s1;
        if (((temp_a0 & 0x3F) == 2) && (temp_v1 = (temp_a0 >> 6) & 0x1FFF, var_v0 = var_s1, ((temp_v1 < 3) != 0))) {
            var_v0_2 = var_v0 < 0x97;
            if (temp_v1 != 0) {
                var_v0 = var_s1;
                if (!((temp_a0 >> 0x16) & 3)) {
                    *var_a1 = (temp_a0 & ~0x3F) | ((s32) temp_s3 & 0x3F);
                } else {
                    goto loop_1;
                }
            } else {
                goto loop_2;
            }
        } else {
            goto loop_1;
        }
    }
}

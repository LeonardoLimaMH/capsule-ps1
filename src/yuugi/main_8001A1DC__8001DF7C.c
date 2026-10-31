#include "common.h"
#include "yuugi.h"

void *func_8001DF7C(s32 arg0, s8 *arg1, s32 arg2) {
    s32 var_s0;
    s32 var_v0;
    s8 *var_s2;
    u32 var_s1;

    var_s2 = arg1;
    var_s1 = 0xF0000000;
    var_s0 = 0x1C;
    var_v0 = 8 - arg2;
    if ((var_v0 != 0) && (arg2 != 0)) {
        do {
            var_s1 = var_s1 >> 4;
            var_v0 -= 1;
            var_s0 -= 4;
        } while (var_v0 != 0);
    }
    if (var_s0 != 0) {
loop_4:
        if ((arg2 == 0) && !(arg0 & var_s1)) {
            var_s0 -= 4;
            var_s1 = var_s1 >> 4;
            if (var_s0 != 0) {
                goto loop_4;
            }
        }
        if (var_s0 != 0) {
            do {
                *var_s2 = func_8001E160((u32) (arg0 & var_s1) >> var_s0);
                var_s2 += 1;
                var_s0 -= 4;
                var_s1 = var_s1 >> 4;
            } while (var_s0 != 0);
        }
    }
    *var_s2 = func_8001E160(arg0 & var_s1);
    return var_s2 + 1;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_8001E044);

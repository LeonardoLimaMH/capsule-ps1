#include "common.h"

void func_800AECE0(s32 arg0, s32 arg1, s32 arg2) {
    s32 *var_v0;
    s32 var_a0;
    s32 var_a1;
    s32 var_v1;
    void *temp_v0;

    var_a0 = arg0;
    if (M2C_FIELD((arg1 + arg2), u8 *, 0x5E0) != 0) {
        var_a1 = 0;
        temp_v0 = var_a0 + (arg2 * 0x10);
        M2C_FIELD(temp_v0, s32 *, 0x88) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x80) = 0;
        do {
            var_v1 = 3;
            var_v0 = var_a0 + 0xB0;
loop_3:
            *var_v0 = 0;
            var_v1 -= 1;
            var_v0 -= 1;
            if (var_v1 >= 0) {
                goto loop_3;
            }
            /* Keep the ascending signed counter instead of a reversed countdown. */
            __asm__ volatile("" : "=r"(var_a1) : "0"(var_a1));
            var_a1 += 1;
            var_a0 += 0x10;
        } while (var_a1 < 2);
    }
}

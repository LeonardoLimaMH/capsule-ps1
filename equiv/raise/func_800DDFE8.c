#include "common.h"

s32 func_800DDFE8(s32 arg0, s16 arg1, u8 *arg2) {
    extern M2C_UNK D_80100F38[];
    u16 sp18;
    u16 sp1A;
    s32 temp_s1;
    s32 var_a2;
    s32 var_s0;
    s32 var_v0;
    u8 *var_s2;
    u8 temp_a0;
    u8 temp_a0_2;
    void *temp_s4;

    var_s2 = arg2;
    var_s0 = 1;
    temp_s4 = ((func_800B1260() & 0xFFFF) * 0x79C) + (*D_80100F38);
    temp_a0 = *var_s2;
    var_a2 = temp_a0 << 0x10;
    if (temp_a0 != 0xFF) {
loop_2:
        temp_s1 = var_a2 >> 0x10;
        sp18 = M2C_FIELD(temp_s4, u16 *, 0x336);
        sp1A = M2C_FIELD(temp_s4, u16 *, 0x338);
        var_v0 = func_800DE10C(arg0, arg1, temp_s1, &sp18, &sp1A) << 0x10;
        if (var_v0 != 0) {
            var_s0 = func_800DE480(arg0, arg1, temp_s1, (s16) sp18, (s32) (s16) sp1A);
            if (((var_s0 << 0x10) == 0) || (var_s2 += 1, temp_a0_2 = *var_s2, var_a2 = temp_a0_2 << 0x10, (temp_a0_2 == 0xFF))) {
                goto block_5;
            }
            goto loop_2;
        }
    } else {
block_5:
        var_v0 = var_s0 << 0x10;
    }
    return var_v0 >> 0x10;
}

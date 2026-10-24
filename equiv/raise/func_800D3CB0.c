#include "common.h"

s32 func_800D3CB0(s32 arg0) {
    extern s32 D_8008ED80[];
    extern M2C_UNK D_80100F38[];
    s32 var_a0;
    s32 var_s1;
    s32 var_s3;
    s32 var_v0;
    s32 var_v0_2;
    void *temp_s2;
    void *var_s0;

    var_s3 = 7;
    var_s1 = 0;
    temp_s2 = ((func_800B1260() & 0xFFFF) * 0x79C) + D_80100F38;
    var_s0 = temp_s2;
    do {
        M2C_FIELD(var_s0, s16 *, 0x346) = func_800D3DC0(arg0, var_s1);
        var_s1 += 1;
        var_s0 += 2;
    } while (var_s1 < 8);
    var_a0 = (rand() + (*D_8008ED80)) & 7;
    if (M2C_FIELD(((var_a0 * 2) + temp_s2), s16 *, 0x346) == -1) {
loop_4:
        var_v0_2 = 0;
        if (var_a0 != 7) {
            var_v0_2 = var_a0 + 1;
        }
        var_a0 = var_v0_2;
        var_v0 = -1;
        if (var_s3 != 0) {
            var_s3 -= 1;
            if (M2C_FIELD(((var_a0 * 2) + temp_s2), s16 *, 0x346) != -1) {
                goto block_8;
            }
            goto loop_4;
        }
    } else {
block_8:
        var_v0 = var_a0;
    }
    return var_v0;
}

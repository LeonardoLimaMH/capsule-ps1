#include "common.h"

void func_800A967C(s32 arg0, s32 arg1) {
    extern s16 D_80078C22[];
    extern u8 D_800900C0[];
    extern s32 D_800EE914[];
    extern s32 D_800EE9A8[];
    s32 *var_a2;
    u32 temp_t0;
    u32 temp_v0;
    u32 temp_v1;
    u32 temp_v1_2;
    s32 var_a3;
    s32 var_t1;
    s32 var_v0;

    (*D_800EE914) = 0;
    if ((*D_80078C22) != 0) {
        if ((*D_80078C22) != 1) {
            var_t1 = 9;
        } else {
            var_v0 = 4;
            goto block_5;
        }
    } else {
        var_v0 = 1;
block_5:
        var_t1 = var_v0;
    }
    var_a3 = 0;
    if (var_t1 != 0) {
        var_a2 = D_800EE914;
        temp_t0 = (*D_80078C22) + 1;
        do {
            temp_v1 = var_a3 / temp_t0;
            temp_v0 = var_a3 % temp_t0;
            var_a3 += 1;
            temp_v1_2 = ((arg0 - temp_v1) * 8) + (arg1 - temp_v0);
            M2C_FIELD(var_a2, s32 *, 0x70) = temp_v1_2;
            M2C_FIELD(var_a2, s32 *, 4) = (s32) (M2C_FIELD(D_800900C0, s32 *, 0x15C) + (temp_v1_2 * 0x2C));
            var_a2 += 4;
        } while (var_a3 < var_t1);
    }
    (*D_800EE9A8) = 0x40;
}

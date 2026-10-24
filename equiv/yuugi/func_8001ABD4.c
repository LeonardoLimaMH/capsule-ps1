#include "common.h"

s32 func_8001ABD4(void *arg0, void *arg1) {
    s32 temp_a3;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v1;
    s32 var_a2;
    s32 var_a3;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v0_5;
    s32 var_v1;
    u32 temp_a0;
    u32 temp_a1;
    u32 var_a0;
    u32 var_v0;
    u32 var_v1_2;

    /* Flowgraph is not reducible, falling back to gotos-only mode. */
    temp_v1 = M2C_FIELD(arg0, s32 *, 0) - M2C_FIELD(arg1, s32 *, 0);
    var_a2 = temp_v1;
    if (temp_v1 >= 0) {
        goto block_2;
    }
    var_a2 = -var_a2;
block_2:
    var_v0_2 = M2C_FIELD(arg0, s32 *, 4) - M2C_FIELD(arg1, s32 *, 4);
    if (var_v0_2 >= 0) {
        goto block_4;
    }
    var_v0_2 = -var_v0_2;
block_4:
    var_a3 = 0;
    if (var_v0_2 >= var_a2) {
        goto block_8;
    }
    var_v0_3 = M2C_FIELD(arg0, s32 *, 8) - M2C_FIELD(arg1, s32 *, 8);
    if (var_v0_3 >= 0) {
        goto block_7;
    }
    var_v0_3 = -var_v0_3;
block_7:
    var_v0_4 = var_a2 >> 0;
    if (var_v0_3 < var_a2) {
        goto block_15;
    }
block_8:
    var_v0_5 = M2C_FIELD(arg0, s32 *, 8) - M2C_FIELD(arg1, s32 *, 8);
    if (var_v0_5 >= 0) {
        goto block_10;
    }
    var_v0_5 = -var_v0_5;
block_10:
    var_a2 = var_v0_5;
    var_v1 = M2C_FIELD(arg0, s32 *, 4) - M2C_FIELD(arg1, s32 *, 4);
    if (var_v1 >= 0) {
        goto block_12;
    }
    var_v1 = -var_v1;
block_12:
    var_v0_4 = var_a2 >> 0;
    if (var_a2 >= var_v1) {
        goto block_15;
    }
    var_a2 = var_v1;
block_14:
    var_v0_4 = var_a2 >> var_a3;
block_15:
    var_a3 += 1;
    if (var_v0_4 >= 0x4001) {
        goto block_14;
    }
    temp_a3 = var_a3 - 1;
    temp_v0 = (s32) (M2C_FIELD(arg0, s32 *, 0) - M2C_FIELD(arg1, s32 *, 0)) >> temp_a3;
    temp_v0_2 = (s32) (M2C_FIELD(arg0, s32 *, 4) - M2C_FIELD(arg1, s32 *, 4)) >> temp_a3;
    temp_v0_3 = (s32) (M2C_FIELD(arg0, s32 *, 8) - M2C_FIELD(arg1, s32 *, 8)) >> temp_a3;
    temp_a1 = (temp_v0 * temp_v0) + (temp_v0_2 * temp_v0_2) + (temp_v0_3 * temp_v0_3);
    var_a0 = temp_a1;
    if (temp_a1 != 0) {
        goto block_18;
    }
    var_v0 = 0;
    goto block_21;
block_18:
    var_v1_2 = 1;
    if (var_a0 <= 1U) {
        goto loop_20;
    }
loop_19:
    var_v1_2 *= 2;
    var_a0 = var_a0 >> 1;
    if (var_v1_2 < var_a0) {
        goto loop_19;
    }
loop_20:
    temp_a0 = var_v1_2;
    var_v1_2 = (u32) ((temp_a1 / temp_a0) + temp_a0) >> 1;
    var_v0 = temp_a0;
    if (var_v1_2 < temp_a0) {
        goto loop_20;
    }
block_21:
    return var_v0 << temp_a3;
}

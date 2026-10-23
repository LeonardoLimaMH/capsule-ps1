#include "common.h"

s32 func_800A8B14(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_a3;
    s32 var_a3_2;
    s32 var_t0;
    s32 var_t0_2;
    s32 var_t0_3;
    s32 var_t1;
    s32 var_t1_2;
    s32 var_v1;
    s8 var_a3_3;
    void *temp_a0;
    void *temp_v1;

    /* Flowgraph is not reducible, falling back to gotos-only mode. */
    if (arg3 == 0) {
        goto block_10;
    }
    var_t0_2 = 0;
    var_t1 = 0;
loop_2:
    var_v1 = 0;
    var_a3 = var_t1;
loop_3:
    temp_a0 = arg0 + var_a3;
    if (var_t0_2 != arg1) {
        goto block_5;
    }
    if (var_v1 == arg2) {
        goto block_6;
    }
block_5:
    if (M2C_FIELD(temp_a0, u8 *, 0x5E8) == M2C_FIELD((arg0 + ((arg2 * 0x7C) + (arg1 * 0x2E8))), u8 *, 0x5E8)) {
        goto block_9;
    }
block_6:
    var_v1 += 1;
    var_a3 += 0x7C;
    if (var_v1 < 5) {
        goto loop_3;
    }
    var_t0_2 += 1;
    var_t1 += 0x2E8;
    if (var_t0_2 < 2) {
        goto loop_2;
    }
    var_t0 = 0;
    goto block_20;
block_9:
    var_t0 = M2C_FIELD(temp_a0, u8 *, 0x612) + 1;
    goto block_20;
block_10:
    var_t1_2 = 0;
    var_t0_3 = arg1;
    var_a3_2 = arg2;
    if (arg1 != 0) {
        goto loop_12;
    }
    if (arg2 == 0) {
        goto block_19;
    }
loop_12:
    if (var_a3_2 == 0) {
        goto block_14;
    }
block_13:
    var_a3_2 -= 1;
    goto block_15;
block_14:
    var_t0_3 -= 1;
    var_a3_2 = 4;
block_15:
    temp_v1 = arg0 + ((var_a3_2 * 0x7C) + (var_t0_3 * 0x2E8));
    if (M2C_FIELD((arg0 + ((arg2 * 0x7C) + (arg1 * 0x2E8))), u8 *, 0x5E8) != M2C_FIELD(temp_v1, u8 *, 0x5E8)) {
        goto block_17;
    }
    var_t1_2 = M2C_FIELD(temp_v1, u8 *, 0x612) + 1;
block_17:
    if (var_t0_3 != 0) {
        goto loop_12;
    }
    if (var_a3_2 != 0) {
        goto block_13;
    }
block_19:
    var_t0 = var_t1_2;
block_20:
    if (var_t0 == 0) {
        goto block_22;
    }
    M2C_FIELD((arg0 + ((arg2 * 0x7C) + (arg1 * 0x2E8))), s8 *, 0x612) = (s8) (var_t0 - 1);
    goto block_26;
block_22:
    var_a3_3 = 0;
loop_23:
    if (!(((s32) M2C_FIELD(arg0, u16 *, 0xBCE) >> var_a3_3) & 1)) {
        goto block_25;
    }
    var_a3_3 += 1;
    if (var_a3_3 < 0xA) {
        goto loop_23;
    }
block_25:
    M2C_FIELD((arg0 + ((arg2 * 0x7C) + (arg1 * 0x2E8))), s8 *, 0x612) = var_a3_3;
    M2C_FIELD(arg0, u16 *, 0xBCE) = (u16) (M2C_FIELD(arg0, u16 *, 0xBCE) | (1 << var_a3_3));
block_26:
    return var_t0;
}

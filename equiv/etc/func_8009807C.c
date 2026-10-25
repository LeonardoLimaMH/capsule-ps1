#include "common.h"

void func_8009807C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_a0;
    s32 temp_t0;
    s32 var_a0;
    s32 var_a2;
    s32 var_a3;
    s32 var_t1;
    s32 var_t2;
    u8 temp_t0_2;
    u8 temp_v1_2;
    void *temp_t3;
    void *temp_v1;

    /* Flowgraph is not reducible, falling back to gotos-only mode. */
    var_a2 = arg2;
    var_a3 = arg3;
    var_t2 = 0;
    temp_a0 = arg1 * 0x2E8;
    temp_t0 = var_a2 * 0x7C;
    temp_t3 = arg0 + (temp_a0 + 0x5E8) + temp_t0;
    if (var_a2 == 5) {
        goto block_12;
    }
    var_t1 = 0;
    temp_t0_2 = M2C_FIELD((arg0 + (temp_t0 + temp_a0)), u8 *, 0x5E8);
    var_a3 = arg1;
    if (arg1 != 0) {
        goto loop_3;
    }
    if (var_a2 == 0) {
        goto block_10;
    }
loop_3:
    if (var_a2 == 0) {
        goto block_5;
    }
block_4:
    var_a2 -= 1;
    goto block_6;
block_5:
    var_a3 -= 1;
    var_a2 = 4;
block_6:
    temp_v1 = arg0 + ((var_a2 * 0x7C) + (var_a3 * 0x2E8));
    if (temp_t0_2 != M2C_FIELD(temp_v1, u8 *, 0x5E8)) {
        goto block_8;
    }
    var_t1 = M2C_FIELD(temp_v1, u8 *, 0x612) + 1;
block_8:
    if (var_a3 != 0) {
        goto loop_3;
    }
    if (var_a2 != 0) {
        goto block_4;
    }
block_10:
    if (var_t1 == 0) {
        goto block_15;
    }
    var_t2 = 1;
    goto block_15;
block_12:
    if ((u8) M2C_FIELD(temp_t3, u8 *, 0x2A) < 0xAU) {
        goto block_14;
    }
    if (arg1 == (M2C_FIELD(temp_t3, u8 *, 0x2A) - 0xA)) {
        goto block_15;
    }
block_14:
    var_t2 = 1;
block_15:
    if (var_t2 != 0) {
        goto block_20;
    }
    temp_v1_2 = M2C_FIELD(temp_t3, u8 *, 0x2A);
    if ((s32) temp_v1_2 >= 0xA) {
        goto block_18;
    }
    var_a0 = (temp_v1_2 * 0xE000) + 0x80140000;
    goto block_19;
block_18:
    var_a0 = ((temp_v1_2 - 0xA) * 0xE000) + 0x80124000;
block_19:
    func_8001A49C(var_a0, temp_v1_2, var_a2, var_a3);
block_20:
    return;
}

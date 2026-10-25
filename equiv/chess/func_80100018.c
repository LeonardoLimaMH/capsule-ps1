#include "common.h"

s32 func_80100018(s16 arg0, s16 arg1) {
    extern u8 D_80063940[];
    extern u8 D_801024D0[];
    extern u8 D_801025A0[];
    s16 temp_v1_3;
    s16 temp_v1_4;
    s16 var_a2_2;
    s32 temp_a1;
    s32 temp_a2_2;
    s32 temp_a3;
    s32 temp_a3_2;
    s32 temp_t3;
    s32 temp_v0;
    s32 temp_v0_4;
    s32 temp_v1_2;
    s32 var_a0;
    s32 var_t0;
    s32 var_t1;
    s32 var_v0;
    s32 var_v0_2;
    u32 temp_a2;
    u32 temp_v0_2;
    u32 temp_v0_3;
    u32 temp_v1;
    u32 var_a2;

    var_t0 = 0;
    temp_a2 = M2C_FIELD(((arg0 * 0x3C) + D_80063940), u32 *, 8);
    temp_t3 = (temp_a2 >> 8) & 0xF;
    temp_a2_2 = (temp_a2 >> 0xC) & 3;
    temp_v1 = M2C_FIELD(((arg1 * 0x3C) + D_80063940), u32 *, 8);
    var_t1 = temp_a2_2;
    temp_v1_2 = (temp_v1 >> 0xC) & 3;
    temp_a3 = (temp_v1 >> 8) & 0xF;
    if (temp_a2_2 != temp_v1_2) {
        switch (temp_a2_2) {                        /* irregular */
        case 0:
            var_t1 = 1;
            if (temp_v1_2 == 1) {
                var_t1 = 2;
                var_t0 = -1;
            } else {
                goto block_13;
            }
            break;
        case 1:
            var_t1 = 2;
            if (temp_v1_2 != 0) {
                var_t1 = 0;
                var_t0 = -1;
            } else {
                goto block_13;
            }
            break;
        case 2:
            var_t1 = 0;
            if (temp_v1_2 == 0) {
                var_t1 = 1;
                var_t0 = -1;
            } else {
                goto block_13;
            }
            break;
        }
    } else {
block_13:
        var_t0 = 1;
    }
    if (temp_t3 != temp_a3) {
        temp_v0 = temp_a3 < 6;
        if (temp_t3 < 6) {
            var_a0 = arg0 << 0x10;
            if (temp_v0 == 0) {
                var_t0 += 1;
            }
        } else {
            var_a0 = arg0 << 0x10;
            if (temp_v0 != 0) {
                var_t0 -= 1;
                goto block_21;
            }
        }
    } else {
block_21:
        var_a0 = arg0 << 0x10;
    }
    temp_v1_3 = *(s16 *)((var_a0 >> 0xF) + D_801024D0) + *(s16 *)(((s32) (arg1 << 0x10) >> 0xF) + D_801024D0);
    temp_v0_2 = temp_v1_3 << 0x10;
    if (temp_v1_3 & 1) {
        var_a2 = ((s32) (temp_v1_3 + (temp_v0_2 >> 0x1F)) >> 1) + 1;
    } else {
        var_a2 = (u32) (temp_v1_3 + (temp_v0_2 >> 0x1F)) >> 1;
    }
    if ((*(s16 *)(((s32) (arg0 << 0x10) >> 0xF) + D_801024D0) == 3) || (var_v0_2 = var_t0 << 0x10, (*(s16 *)(((s32) (arg1 << 0x10) >> 0xF) + D_801024D0) == 3))) {
        temp_v0_3 = var_a2 + 1;
        var_a2 = temp_v0_3;
        var_v0_2 = var_t0 << 0x10;
        if ((s16) temp_v0_3 >= 4) {
            var_a2 = 3;
        }
    }
    temp_v0_4 = var_v0_2 >> 0x10;
    if (temp_v0_4 < 0) {
        var_t0 = 0;
    } else if (temp_v0_4 >= 3) {
        var_t0 = 2;
    }
    temp_a3_2 = temp_t3 * 0x48;
    temp_a1 = var_t1 * 0x18;
    temp_v1_4 = *(s16 *)(((s32) (var_t0 << 0x10) >> 0xF) + (((s16) var_a2 * 6) + (temp_a1 + (temp_a3_2 + D_801025A0))));
    var_a2_2 = temp_v1_4;
    if (temp_v1_4 < 0) {
        var_v0 = M2C_FIELD((((temp_v1_4 + 3) * 6) + temp_a1 + temp_a3_2 + D_801025A0), u16 *, 4) << 0x10;
    } else {
        if (temp_v1_4 >= 0x64) {
            var_a2_2 = (s16) *(((temp_v1_4 - 0x63) * 6) + temp_a1 + temp_a3_2 + D_801025A0);
        }
        var_v0 = var_a2_2 << 0x10;
    }
    return var_v0 >> 0x10;
}

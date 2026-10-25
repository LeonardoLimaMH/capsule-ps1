#include "common.h"

void func_800991D4(void *arg0, s32 arg1, void *arg2) {
    extern u8 D_80091618[];
    s32 sp10;
    s32 sp14;
    s16 temp_a2;
    s32 *var_s0;
    u32 temp_v0;
    s32 var_s1;
    s32 var_s3;
    s32 var_v0;
    u16 temp_v1;

    temp_v1 = *(s32 *)(((arg1 & 0xFFFF) * 0x1A8) + D_80091618);
    sp10 = -1;
    sp14 = -1;
    var_s3 = 0x8F;
    switch (temp_v1) {
    case 0x9:
        temp_a2 = M2C_FIELD(arg2, s16 *, 0x372);
        if (temp_a2 == 2) {
            var_v0 = 8;
            goto block_16;
        }
        var_s1 = 0;
        if (temp_a2 == 1) {
            var_v0 = 6;
block_16:
            sp10 = var_v0;
        default:
block_17:
            var_s1 = 0;
        }
        break;
    case 0x16:
        sp10 = 4;
        var_s1 = 0;
        if (M2C_FIELD(arg2, s16 *, 0x372) == 0) {
            sp14 = 7;
        }
        break;
    case 0x1C:
    case 0x24:
        if (M2C_FIELD(arg2, s16 *, 0x372) != 2) {
block_11:
            var_s1 = 0;
            if (M2C_FIELD(arg2, s16 *, 0x372) == 1) {
block_12:
                sp10 = 2;
                goto block_17;
            }
        } else {
block_15:
            var_v0 = 3;
            goto block_16;
        }
        break;
    case 0x49:
        if (M2C_FIELD(arg2, s16 *, 0x372) != 2) {
            goto block_11;
        }
        goto block_12;
    case 0x57:
        var_v0 = 4;
        goto block_16;
    case 0x3E:
    case 0x41:
    case 0x4B:
        var_s3 = 0x73;
        goto block_15;
    }
    var_s0 = &sp10;
loop_19:
    temp_v0 = *var_s0;
    if (temp_v0 != -1) {
        if ((M2C_FIELD(arg0, u16 *, 0x20) == (temp_v0 - 2)) && (M2C_FIELD(arg0, s16 *, 0x24) == 0)) {
            func_80034AB0(var_s3 & 0xFFFF);
        }
        var_s1 += 1;
        var_s0 += 4;
        if (var_s1 < 2) {
            goto loop_19;
        }
    }
}

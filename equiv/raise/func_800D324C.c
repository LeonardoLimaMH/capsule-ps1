#include "common.h"

s16 func_800D324C(s32 arg0, u32 arg1) {
    extern M2C_UNK D_80100F38[];
    M2C_UNK var_a1;
    M2C_UNK var_a2;
    s16 temp_v0;
    s16 var_v0;
    void *temp_a0;

    temp_a0 = ((func_800B1260() & 0xFFFF) * 0x79C) + (*D_80100F38);
    switch (arg1) {
    case 0:
        if (M2C_FIELD(temp_a0, s16 *, 0x332) != 8) {
            var_a1 = 1;
            var_a2 = 0;
block_23:
            temp_v0 = func_800D341C(arg0, var_a1, var_a2);
            var_v0 = temp_v0;
            if (!(temp_v0 & 0x8000)) {
                goto block_24;
            }
        } else {
block_24:
        default:
block_25:
            var_v0 = 0xFF;
        }
        break;
    case 1:
        if ((M2C_FIELD(temp_a0, s16 *, 0x332) != 8) && (M2C_FIELD(temp_a0, s16 *, 0x334) != 1)) {
            var_a1 = 1;
            var_a2 = -1;
            goto block_23;
        }
        goto block_24;
    case 2:
        if (M2C_FIELD(temp_a0, s16 *, 0x334) != 1) {
            var_a1 = 0;
            var_a2 = -1;
            goto block_23;
        }
        goto block_24;
    case 3:
        if ((M2C_FIELD(temp_a0, s16 *, 0x332) != 1) && (M2C_FIELD(temp_a0, s16 *, 0x334) != 1)) {
            var_a1 = -1;
block_22:
            var_a2 = var_a1;
            goto block_23;
        }
        goto block_25;
    case 4:
        if (M2C_FIELD(temp_a0, s16 *, 0x332) != 1) {
            var_a1 = -1;
            var_a2 = 0;
            goto block_23;
        }
        goto block_24;
    case 5:
        if ((M2C_FIELD(temp_a0, s16 *, 0x332) != 1) && (M2C_FIELD(temp_a0, s16 *, 0x334) != 8)) {
            var_a1 = -1;
            var_a2 = 1;
            goto block_23;
        }
        goto block_24;
    case 6:
        if (M2C_FIELD(temp_a0, s16 *, 0x334) != 8) {
            var_a1 = 0;
            var_a2 = 1;
            goto block_23;
        }
        goto block_24;
    case 7:
        if ((M2C_FIELD(temp_a0, s16 *, 0x332) != 8) && (M2C_FIELD(temp_a0, s16 *, 0x334) != 8)) {
            var_a1 = 1;
            goto block_22;
        }
        goto block_25;
    }
    return var_v0;
}

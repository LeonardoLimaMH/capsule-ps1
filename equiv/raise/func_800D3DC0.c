#include "common.h"

s16 func_800D3DC0(s32 arg0, u32 arg1) {
    extern M2C_UNK D_80100F38[];
    M2C_UNK var_a1;
    M2C_UNK var_a2;
    s16 var_s0;
    void *temp_a0;

    var_s0 = -1;
    temp_a0 = ((func_800B1260() & 0xFFFF) * 0x79C) + (*D_80100F38);
    switch (arg1) {
    case 0:
        if (M2C_FIELD(temp_a0, s16 *, 0x332) != 8) {
            var_a1 = 1;
            var_a2 = 0;
block_24:
            var_s0 = func_800D3F88(arg0, var_a1, var_a2);
        } else {
block_21:
            var_s0 = -1;
        }
        break;
    case 1:
        if ((M2C_FIELD(temp_a0, s16 *, 0x332) != 8) && (M2C_FIELD(temp_a0, s16 *, 0x334) != 1)) {
            var_a1 = 1;
            var_a2 = -1;
            goto block_24;
        }
        goto block_21;
    case 2:
        if (M2C_FIELD(temp_a0, s16 *, 0x334) != 1) {
            var_a1 = 0;
            var_a2 = -1;
            goto block_24;
        }
        goto block_21;
    case 3:
        var_s0 = -1;
        if ((M2C_FIELD(temp_a0, s16 *, 0x332) != 1) && (M2C_FIELD(temp_a0, s16 *, 0x334) != 1)) {
            var_a1 = -1;
block_23:
            var_a2 = var_a1;
            goto block_24;
        }
        break;
    case 4:
        if (M2C_FIELD(temp_a0, s16 *, 0x332) != 1) {
            var_a1 = -1;
            var_a2 = 0;
            goto block_24;
        }
        goto block_21;
    case 5:
        if ((M2C_FIELD(temp_a0, s16 *, 0x332) != 1) && (M2C_FIELD(temp_a0, s16 *, 0x334) != 8)) {
            var_a1 = -1;
            var_a2 = 1;
            goto block_24;
        }
        goto block_21;
    case 6:
        if (M2C_FIELD(temp_a0, s16 *, 0x334) != 8) {
            var_a1 = 0;
            var_a2 = 1;
            goto block_24;
        }
        goto block_21;
    case 7:
        var_s0 = -1;
        if (M2C_FIELD(temp_a0, s16 *, 0x332) != 8) {
            if (M2C_FIELD(temp_a0, s16 *, 0x334) == 8) {
                goto block_21;
            }
            var_a1 = 1;
            goto block_23;
        }
        break;
    }
    return var_s0;
}

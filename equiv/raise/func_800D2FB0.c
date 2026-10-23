#include "common.h"

s32 func_800D2FB0(s32 arg0, s32 arg1) {
    extern M2C_UNK D_80100F38[];
    M2C_UNK var_a1;
    M2C_UNK var_a2;
    s16 temp_v0;
    s16 var_v0;
    s32 var_v0_2;
    void *temp_a0;

    temp_a0 = ((func_800B1260() & 0xFFFF) * 0x79C) + (*D_80100F38);
    switch (arg1) {                                 /* irregular */
    case 1:
        var_v0_2 = 0xFF << 0x10;
        if (M2C_FIELD(temp_a0, s16 *, 0x332) != 8) {
            if (M2C_FIELD(temp_a0, s16 *, 0x334) != 1) {
                var_a1 = 1;
                var_a2 = -1;
block_9:
                temp_v0 = func_800D30B0(arg0, var_a1, var_a2);
                var_v0 = temp_v0;
                if (!(temp_v0 & 0x8000)) {
                    goto block_11;
                }
            } else {
block_11:
                var_v0_2 = 0xFF << 0x10;
                goto block_12;
            }
        } else {
block_12:
            var_v0 = (s16) (var_v0_2 >> 0x10);
        }
        return (s32) var_v0;
    case 5:
        if ((M2C_FIELD(temp_a0, s16 *, 0x332) != 1) && (M2C_FIELD(temp_a0, s16 *, 0x334) != 8)) {
            var_a1 = -1;
            var_a2 = 1;
            goto block_9;
        }
        goto block_11;
        /* Duplicate return node #13. Try simplifying control flow for better match */
        return (s32) var_v0;
    default:
        return 0xFF;
    }
}

#include "common.h"

s32 __ltdf2(u32 arg0, s32 arg1, u32 arg2, s32 arg3) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_v0;

    if (arg1 == arg3) {
        var_v0 = 0;
        if (arg0 != arg2) {
            goto block_2;
        }
        /* Duplicate return node #18. Try simplifying control flow for better match */
        return var_v0;
    }
block_2:
    if (!(arg1 & 0x7FFFFFFF)) {
        if (arg0 == 0) {
            if (!(arg3 & 0x7FFFFFFF)) {
                if (arg2 != 0) {
                    goto block_6;
                }
                goto block_17;
            }
            goto block_6;
        }
        goto block_6;
    }
block_6:
    temp_v1 = arg1 & 0x80000000;
    if (temp_v1 != (arg3 & 0x80000000)) {
        var_v0 = -1;
        if (temp_v1 == 0) {
            return 0;
        }
        /* Duplicate return node #18. Try simplifying control flow for better match */
        return var_v0;
    }
    temp_a0 = (arg1 >> 0x14) & 0x7FF;
    temp_v1_2 = (arg3 >> 0x14) & 0x7FF;
    if (temp_a0 >= temp_v1_2) {
        if (temp_a0 == temp_v1_2) {
            temp_v1_3 = (arg1 & 0xFFFFF) | 0x100000;
            temp_a0_2 = (arg3 & 0xFFFFF) | 0x100000;
            if (temp_v1_3 >= temp_a0_2) {
                if (temp_v1_3 == temp_a0_2) {
                    if (arg0 < arg2) {
                        goto block_14;
                    }
                    goto block_16;
                }
                goto block_16;
            }
            goto block_14;
        }
block_16:
        var_v0 = -1;
        if (arg1 >= 0) {
block_17:
            var_v0 = 0;
        }
        /* Duplicate return node #18. Try simplifying control flow for better match */
        return var_v0;
    }
block_14:
    var_v0 = 0;
    if (arg1 >= 0) {
        return -1;
    }
    return var_v0;
}

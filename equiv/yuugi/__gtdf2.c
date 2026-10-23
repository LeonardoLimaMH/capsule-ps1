#include "common.h"

s32 __gtdf2(u32 arg0, s32 arg1, u32 arg2, s32 arg3) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_v0;
    s32 var_v1;

    if ((arg1 != arg3) || (var_v0 = 0, (arg0 != arg2))) {
        if (!(arg1 & 0x7FFFFFFF) && (arg0 == 0) && !(arg3 & 0x7FFFFFFF)) {
            var_v1 = arg1 & 0x80000000;
            if (arg2 == 0) {
                return 0;
            }
            goto block_8;
        }
        var_v1 = arg1 & 0x80000000;
block_8:
        var_v0 = var_v1 == 0;
        if (var_v1 == (arg3 & 0x80000000)) {
            temp_a0 = (arg1 >> 0x14) & 0x7FF;
            temp_v1 = (arg3 >> 0x14) & 0x7FF;
            if (temp_v1 >= temp_a0) {
                var_v0 = arg1 < 0;
                if (temp_a0 == temp_v1) {
                    temp_v1_2 = (arg1 & 0xFFFFF) | 0x100000;
                    temp_a0_2 = (arg3 & 0xFFFFF) | 0x100000;
                    if (temp_a0_2 >= temp_v1_2) {
                        var_v0 = arg1 < 0;
                        if (temp_v1_2 == temp_a0_2) {
                            if (arg2 < arg0) {
                                goto block_14;
                            }
                            var_v0 = arg1 < 0;
                            /* Duplicate return node #16. Try simplifying control flow for better match */
                            return var_v0;
                        }
                        /* Duplicate return node #16. Try simplifying control flow for better match */
                        return var_v0;
                    }
                    goto block_14;
                }
                /* Duplicate return node #16. Try simplifying control flow for better match */
                return var_v0;
            }
block_14:
            return (arg1 & 0x80000000) == 0;
        }
        /* Duplicate return node #16. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}

#include "common.h"

u32 func_8003C894(s32 arg0) {
    extern u32 D_80078C78[];
    u32 temp_a0;

    temp_a0 = arg0 & 0xFF;
    if (temp_a0 < 0x19U) {
        if (temp_a0 != 0) {
            (*D_80078C78) = temp_a0;
            return temp_a0;
        }
        /* Duplicate return node #4. Try simplifying control flow for better match */
        return 0xFFU;
    }
    return 0xFFU;
}

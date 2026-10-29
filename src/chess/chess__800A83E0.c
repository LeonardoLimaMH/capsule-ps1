#include "ghidra.h"
#include "matching.h"
#include "common.h"

s32 func_800A83E0(s32 unused_arg0, void *arg1, void *arg2) {
    s32 temp_a0;
    s32 temp_a3;
    s32 var_v0;

    temp_a3 = M2C_FIELD(arg2, u8 *, 0x15) - M2C_FIELD(arg1, u8 *, 0x15);
    temp_a0 = M2C_FIELD(arg2, u8 *, 0x16) - M2C_FIELD(arg1, u8 *, 0x16);
    if (temp_a3 > 0) {
        var_v0 = 5;
        if (temp_a0 <= 0) {
            var_v0 = 6;
            if (temp_a0 < 0) {
                return 7;
            }
        }
        /* Duplicate return node #9. Try simplifying control flow for better match */
        return var_v0;
    }
    if (temp_a3 < 0) {
        var_v0 = 3;
        if (temp_a0 <= 0) {
            var_v0 = 2;
            if (temp_a0 < 0) {
                return 1;
            }
        }
        /* Duplicate return node #9. Try simplifying control flow for better match */
        return var_v0;
    }
    var_v0 = (temp_a0 > 0) * 4;
    return var_v0;
}

#include "ghidra.h"

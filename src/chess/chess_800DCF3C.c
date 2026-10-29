#include "ghidra.h"
#include "common.h"

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800DCF3C);

s32 func_800DD1D4(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_a1;
    s32 temp_a2;
    s32 var_v0;

    temp_a1 = arg1 - M2C_FIELD(arg0, u8 *, 0x15);
    temp_a2 = arg2 - M2C_FIELD(arg0, u8 *, 0x16);
    if (temp_a1 > 0) {
        var_v0 = 5;
        if (temp_a2 <= 0) {
            var_v0 = 6;
            if (temp_a2 < 0) {
                return 7;
            }
        }
        /* Duplicate return node #9. Try simplifying control flow for better match */
        return var_v0;
    }
    if (temp_a1 < 0) {
        var_v0 = 3;
        if (temp_a2 <= 0) {
            var_v0 = 2;
            if (temp_a2 < 0) {
                return 1;
            }
        }
        /* Duplicate return node #9. Try simplifying control flow for better match */
        return var_v0;
    }
    var_v0 = (temp_a2 > 0) * 4;
    return var_v0;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800DD230);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800DD274);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800DD2EC);

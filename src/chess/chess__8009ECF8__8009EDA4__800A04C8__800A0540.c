#include "ghidra.h"
#include "matching.h"
#include "common.h"

s32 func_800A0540(u8 *arg0, u32 arg1) {
    extern s32 D_80065310[];
    u32 b;
    u8 c;
    u32 t;
    s32 n;
    s32 off;
    if (*(arg0 + arg1 + 0x5E4) == 0xFF) {
        return 0;
    }
    if (arg1 == arg0[0xBCA]) {
        b = arg0[0xBEF];
        n = (u8) (b % 3) + 6;
        if (b < 2U) {
            arg0[0xBEF] = b + 1;
        }
    } else {
        c = arg0[0xBEF];
        n = (c & 1) + 9;
        if (c == 0) {
            arg0[0xBEF] = c + 1;
        }
    }
    t = *(arg0 + arg1 + 0x5E4);
    if (t >= 8U) {
        off = 0;
    } else {
        off = arg1 * 0x980 - 0x5580;
    }
    *(s32 *) (arg0 + 0x14) = *(s32 *) (n * 4 + (D_80065310[t] + off)) + off;
    return 1;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8__8009EDA4__800A04C8__800A0540", func_800A062C);

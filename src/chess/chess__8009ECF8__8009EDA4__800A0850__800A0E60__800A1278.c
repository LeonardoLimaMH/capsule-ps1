#include "ghidra.h"
#include "matching.h"
#include "common.h"

s32 func_800A1278(u8 *arg0, u32 arg1, s32 arg2) {
    extern s32 D_80065310[];
    register u32 cond asm("a2") = (u32)(arg2 - 3) < 2U;
    u32 t;
    s32 n;
    s32 off;
    if (*(arg0 + arg1 + 0x5E4) != 0xFF) {
        if (arg1 == arg0[0xBCA]) {
            if (cond) {
                n = 0x1E;
            } else {
                n = 0x1F;
            }
        } else {
            if (cond) {
                n = 0x20;
            } else {
                n = 0x21;
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
    return 0;
}

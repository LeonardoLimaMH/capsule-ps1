#include "ghidra.h"
#include "matching.h"
#include "common.h"

s32 func_800A0D40(u8 *arg0, s32 arg1, s32 arg2) {
    extern s32 D_80065310[];
    extern s32 func_800CB10C(void *, u8 *, s32);
    extern s32 func_800202A4(s32);
    s32 cond;
    s32 res;
    s32 n;
    u8 t;
    s32 off;

    if (*(arg0 + arg1 + 0x5E4) == 0xFF) {
        return 0;
    }

    if (arg2 == 0) {
        cond = (arg1 != arg0[0xBCA]);
    } else {
        cond = (arg1 == arg0[0xBCA]);
    }

    res = func_800CB10C(arg0, arg0 + 0x5D0, arg1);

    if (!cond) {
        if (res <= 0) {
            return 0;
        }
        if (func_800202A4(2) != 0) {
            n = 0x13;
        } else {
            n = 0x14;
        }
    } else {
        if (res > 0) {
            n = 0x15;
        } else {
            n = 0x16;
        }
    }

    t = *(arg0 + arg1 + 0x5E4);
    if (t >= 8) {
        off = 0;
    } else {
        off = arg1 * 0x980 - 0x5580;
    }

    *(s32 *)(arg0 + 0x14) = *(s32 *)(n * 4 + (D_80065310[t] + off)) + off;
    return 1;
}

#include "ghidra.h"
#include "matching.h"
#include "common.h"



s32 func_800A360C(s32 arg0, s32 arg1, u8 *arg2, s32 arg3) {
    extern u8 D_80100C18[];
    u8 *p;
    s32 value;
    s32 result;

    p = D_80100C18 + arg1 * 4;
    value = rsin(((u32)(*(s32 *)(arg2 + 0x54) << 12) / 120) & 0x7FF);
    if (arg3 == 0) {
        arg2[0x38] = (value * (s32)p[0]) / 0x1000;
        arg2[0x39] = (value * (s32)p[1]) / 0x1000;
        result = (value * (s32)p[2]) / 0x1000;
    } else {
        arg2[0x38] = (value * (s32)p[0]) / 0x4000;
        arg2[0x39] = (value * (s32)p[1]) / 0x4000;
        result = (value * (s32)p[2]) / 0x4000;
    }
    arg2[0x3A] = result;
    return result;
}







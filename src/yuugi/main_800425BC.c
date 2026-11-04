#include "common.h"
#include "yuugi.h"

s32 func_800425BC(s32 arg0, s32 arg1, u32 arg2) {
    extern s32 _SN_read(s32, s32, u32, s32);
    register s32 total asm("s2") = 0;
    s32 count;
    s32 n;
    while (arg2 != 0) {
        count = arg2;
        if (arg2 > 0x8000) count = 0x8000;
        n = _SN_read(0, arg0, count, arg1);
        total += n;
        if (n == -1) return -1;
        arg1 += n;
        arg2 -= n;
        if (n < count) break;
    }
    return total;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800425BC", _SN_read);

s32 func_80042694(s32 arg0, s32 arg1, u32 arg2) {
    extern s32 _SN_write(s32, s32, u32, s32);
    register s32 total asm("s2") = 0;
    s32 count;
    s32 n;
    while (arg2 != 0) {
        count = arg2;
        if (arg2 > 0x8000) count = 0x8000;
        n = _SN_write(0, arg0, count, arg1);
        total += n;
        if (n == -1) return -1;
        arg1 += n;
        arg2 -= n;
        if (n < count) break;
    }
    return total;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800425BC", _SN_write);

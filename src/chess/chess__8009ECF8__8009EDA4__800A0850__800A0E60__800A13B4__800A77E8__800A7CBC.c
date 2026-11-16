#include "ghidra.h"
#include "matching.h"
#include "common.h"

s32 func_800A7CBC(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3, s32 arg4) {
    extern u32 D_80063940[][15];
    s32 result = 0;
    register u8 *p asm("t1") = arg1 + 0x14;
    s32 value;

    if (arg4 == 6) {
        value = D_80063940[(arg0 + (arg2 * 0x2E8 + arg3 * 0x7C))[0x5E8]][8] >> 7;
    } else {
        value = D_80063940[(arg0 + (arg2 * 0x2E8 + arg3 * 0x7C))[0x5E8]][8] >> 11;
    }
    value &= 0xF;
    if (*(s16 *)(p + 0x10) < 0 || value < 2) {
        result = 3;
    } else if (*(s16 *)(p + 0x10) == 0 && *(s32 *)(p + 0xC) == value - 2) {
        result = 1;
        if (*(u16 *)(p + 0x12) != 0) {
            result = 2;
        }
    }
    return result;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8__8009EDA4__800A0850__800A0E60__800A13B4__800A77E8__800A7CBC", func_800A7DCC);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8__8009EDA4__800A0850__800A0E60__800A13B4__800A77E8__800A7CBC", func_800A81D8);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8__8009EDA4__800A0850__800A0E60__800A13B4__800A77E8__800A7CBC", func_800A82A0);

s32 func_800A835C(s32 arg0, s32 arg1) {
    return (M2C_FIELD((arg0 + arg1), u8 *, 0x5DE) != 2) * 4;
}

s32 func_800A8378(u8 *arg0) {
    u8 *p = arg0 + 0x5D0;
    s32 a = p[0x6E4] - p[0x6E6];
    s32 b = p[0x6E5] - p[0x6E7];
    s32 v;
    if (a > 0) {
        v = 5;
        if (b <= 0) {
            v = 6;
            if (b < 0) {
                v = 7;
            }
        }
    } else if (a < 0) {
        v = 3;
        if (b <= 0) {
            v = 2;
            if (b < 0) {
                v = 1;
            }
        }
    } else {
        v = (b > 0) << 2;
    }
    return v;
}

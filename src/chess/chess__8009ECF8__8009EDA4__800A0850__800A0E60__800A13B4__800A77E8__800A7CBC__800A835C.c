#include "ghidra.h"
#include "matching.h"
#include "common.h"

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

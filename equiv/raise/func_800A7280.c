#include "common.h"

extern u8 D_800ED504[];

u16 func_800A7280(s32 a, s32 b) {
    s16 *p = (s16 *)(D_800ED504 + (a & 0xFFFF) * 0x3C + (b & 0xFFFF) * 6);
    s32 n = 0;

    while (*p == -1) {
        n++;
        p++;
        if (n >= 3) {
            break;
        }
    }
    return n & 0xFFFF;
}

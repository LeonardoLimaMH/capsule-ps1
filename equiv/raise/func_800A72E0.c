#include "common.h"

extern u8 D_800ED2AC[];

u16 func_800A72E0(s32 a, s32 b) {
    s16 *p = (s16 *)(D_800ED2AC + (a & 0xFFFF) * 0x3C + (b & 0xFFFF) * 6);
    s32 n = 0;
    u16 last;

    for (;;) {
        last = (u16)*p;
        if (*p != -1) {
            break;
        }
        n++;
        p++;
        if (n >= 3) {
            break;
        }
    }
    return last;
}

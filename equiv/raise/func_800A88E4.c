#include "common.h"

/* arg0: small */
/* arg1: small */
extern u8 D_800916E8[], D_800EC588[];

s32 func_800A88E4(u16 a0, u16 a1) {
    s16 *e = (s16 *)(D_800916E8 + a0 * 0x1A8);
    u16 *t = (u16 *)(D_800EC588 + a1 * 34);
    s16 i;
    for (i = 1; i < 17; i++, e++) {
        s16 v = *e + t[i];
        if (i >= 2) {
            if (v < 0) v = 0;
            else if (v >= 0x100) v = 0xFF;
        }
        if (i >= 13) {
            if (v < 0) v = 0;
            else if (v >= 0x65) v = 0x64;
        }
        *e = v;
    }
    return 0;
}

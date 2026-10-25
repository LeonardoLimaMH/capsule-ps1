#include "common.h"

extern u8 D_80065164[];
extern u16 D_800638E4[];
extern u16 D_80063900[];
extern u16 D_80063928[];

void func_80022E64(u16 *dst, s32 b, s32 off, s32 mode) {
    u16 *src = (u16 *)(D_80065164 + b * 12);
    s32 i = 0;
    s32 k;
    u16 v;

    do {
        v = src[i];
        if (v == 0x219) {
            break;
        }
        dst[off + i] = v;
        i++;
    } while (i < 5);
    off += i;
    if (mode == 0) {
        for (k = 0; k < 13; k++) {
            dst[off + k] = D_800638E4[k];
        }
    } else if (mode == 1) {
        for (k = 0; k < 20; k++) {
            dst[off + k] = D_80063900[k];
        }
    } else {
        for (k = 0; k < 11; k++) {
            dst[off + k] = D_80063928[k];
        }
    }
}

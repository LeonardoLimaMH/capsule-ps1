#include "common.h"

extern u8 D_80065164[];
extern u16 D_80065298[];
extern u16 D_80063928[];
extern s32 func_8001F8B0();

void func_80023050(u8 *o, s32 b) {
    u16 *src = (u16 *)(D_80065164 + b * 12);
    s32 i = 0;
    s32 k;
    u16 v;

    do {
        v = src[i];
        if (v == 0x219) {
            break;
        }
        i++;
        D_80065298[i] = v;
    } while (i < 5);
    i++;
    for (k = 0; k < 11; k++) {
        D_80065298[i + k] = D_80063928[k];
    }
    *(s32 *)(o + 0x14) = func_8001F8B0(0x1B, 2);
}

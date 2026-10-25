#include "common.h"

extern u8 D_8008ED68[];
extern s32 D_800508E8[];

void func_800135A8(void) {
    u8 *d = D_8008ED68;

    if (d[0x105] != 0) {
        if (--d[0x106] != 0) {
            return;
        }
        d[0x105] = 0;
        d[0x104] = 0;
        return;
    }
    if (*(s32 *)(d + 0x88) == D_800508E8[d[0x104]]) {
        d[0x104]++;
        d[0x106] = 0x40;
        if (d[0x104] >= 10) {
            d[0x105] = 1;
            d[0x106] = 0;
        }
        return;
    }
    if (*(s32 *)(d + 0x88) != 0) {
        d[0x105] = 0;
        d[0x104] = 0;
        return;
    }
    if (--d[0x106] == 0) {
        d[0x104] = 0;
    }
}

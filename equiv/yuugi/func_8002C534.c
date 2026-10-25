#include "common.h"

void func_8002C534(u8 *d, u8 *c, s32 mode) {
    u8 r = c[0], g = c[1], b = c[2];
    s32 h;

    if (mode == 4 || mode == 5) {
        if ((r | g | b) == 0) {
            r = g = b = 0x80;
        }
        d[0] = r;
        d[1] = g;
        d[2] = b;
        d[3] = mode == 4 ? 0x24 : 0x30;
        return;
    }
    if ((mode == 1 || mode == 3) && (r | g | b) == 0) {
        r = g = b = 0x80;
    }
    h = mode / 2;
    d[0] = r;
    d[1] = g;
    d[2] = b;
    d[3] = h * 16 + 0x28 + (mode - h * 2) * 4;
}

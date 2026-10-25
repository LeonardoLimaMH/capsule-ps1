#include "common.h"

extern s16 D_800780AC[];

s32 ratan2(s32 y, s32 x) {
    s32 nx = 0, ny = 0;
    s32 q, r;

    if (x < 0) {
        nx = 1;
        x = -x;
    }
    if (y < 0) {
        ny = 1;
        y = -y;
    }
    if (x == 0 && y == 0) {
        return 0;
    }
    if (y < x) {
        if (y & 0x7FE00000) {
            q = y / (x >> 10);
        } else {
            q = (y << 10) / x;
        }
        r = D_800780AC[q];
    } else {
        if (x & 0x7FE00000) {
            q = x / (y >> 10);
        } else {
            q = (x << 10) / y;
        }
        r = 0x400 - D_800780AC[q];
    }
    if (nx) {
        r = 0x800 - r;
    }
    if (ny) {
        r = -r;
    }
    return r;
}

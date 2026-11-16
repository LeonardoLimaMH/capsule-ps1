#include "ghidra.h"
#include "matching.h"
#include "common.h"



s32 func_800A44E8(s32 arg0, s32 arg1, s32 arg2) {
    s32 delta[2];
    register s32 dx asm("v1");
    s32 dy;
    u8 index;
    register s32 coord asm("v0");
    void *base;
    void *p;
    base = (void *)(arg0 + 0x5D0);
    index = M2C_FIELD(base, u8 *, 0x5FA);
    p = base + (M2C_FIELD(base + index, u8 *, 0x5FB) * 0x7C + index * 0x2E8);
    coord = M2C_FIELD(p, u8 *, 0x2D);
    dx = delta[0] = arg1 - coord;
    dy = delta[1] = arg2 - M2C_FIELD(p, u8 *, 0x2E);
    if (dx != 0 && dy != 0) {
        if (dx < 0) dx = -dx;
        if (dy < 0) dy = -dy;
        if (dx != dy) return 0xFF;
    }
    if (M2C_FIELD(arg1 * 13 + base + arg2, u8 *, 0x630) != 0) {
        if (delta[0] > 0) {
            if (delta[1] > 0) return 1;
            if (delta[1] >= 0) return 0;
            return 7;
        }
        if (delta[0] < 0) {
            if (delta[1] > 0) return 3;
            if (delta[1] >= 0) return 4;
            return 5;
        }
        if (delta[1] > 0) return 2;
        if (delta[1] >= 0) return 0xFF;
        return 6;
    }
    return 0xFF;
}







#include "common.h"

extern u8 D_80069AD4[];

#define H(o) (*(s16 *)(s + (o)))
#define W(o) (*(s32 *)(s + (o)))

s32 func_8002C768(void) {
    u8 *s = D_80069AD4;
    s32 c;

    switch (W(0x130)) {
    case 0:
        return ((u32)D_80069AD4 + 0x8000) & 0xFFFF0000;
    case 1:
        H(0xE8) = (H(0xE8) + H(0x168)) % 4096;
        H(0xEA) = (H(0xEA) + H(0x16A)) % 4096;
        H(0xEC) = (H(0xEC) + H(0x16C)) % 4096;
        break;
    case 2:
        W(0xD8) += W(0x158);
        W(0xDC) += W(0x15C);
        W(0xE0) += W(0x160);
        break;
    case 3:
        H(0xB0) = (H(0xB0) + H(0x170)) % 4096;
        H(0xB2) = (H(0xB2) + H(0x172)) % 4096;
        H(0xB4) = (H(0xB4) + H(0x174)) % 4096;
        break;
    }
    c = W(0x134) - 1;
    W(0x134) = c;
    if (c != 0) {
        return c;
    }
    W(0x130) = 0;
    H(0x168) = 0;
    H(0x16A) = 0;
    H(0x16C) = 0;
    W(0x158) = 0;
    W(0x15C) = 0;
    W(0x160) = 0;
    H(0x170) = 0;
    H(0x172) = 0;
    H(0x174) = 0;
    return (s32)(s + 0x170);
}

#include "common.h"

extern u8 D_800EEB9C[];

#define O (*(u8 **)(D_800EEB9C + 0x754))

s32 func_800B77AC(s32 a0, s32 a1) {
    s32 r = (a0 % 12) << 12;
    s32 u = (a1 * 341) / 60;
    *(s32 *)(O + 0x38) &= ~8;
    *(s16 *)(O + 0x54) = r / 12;
    *(s16 *)(O + 0x54) += u;
    *(s16 *)(O + 0x78) = 0;
    return (s32)O;
}

#include "common.h"

extern u8 D_80091618[];

s32 func_800A7600(u16 a0) {
    u8 *e = D_80091618 + a0 * 0x1A8;
    s16 v = (*(s16 *)(e + 0xE6) * 100) / *(s16 *)(e + 0x9E);
    *(s16 *)(e + 0xC0) = v;
    if (v < 0) v = 0;
    else if (v >= 0x97) v = 0x96;
    *(s16 *)(e + 0xC0) = v;
    return *(s16 *)(D_80091618 + a0 * 0x1A8 + 0xC0);
}

#include "common.h"

extern u8 D_80100F38[];

s32 func_800E1450(u16 a0) {
    u8 *p = D_80100F38 + a0 * 0x79C;
    u16 v;
    if (*(s16 *)(p + 0x2B8) != 2) return 0;
    v = *(u16 *)(p + 0x2BA);
    if ((u16)(v - 10) < 2) return 1;
    return (s16)v == 14;
}

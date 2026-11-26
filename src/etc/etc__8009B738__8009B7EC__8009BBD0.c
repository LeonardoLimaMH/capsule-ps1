#include "common.h"

typedef struct {
    u8 pad[0xDC];
    u16 unkDC;
    u8 pad2[2];
    u16 unkE0;
} S_8008ED68;

void func_8009BBD0(u8 *arg0)
{
    extern S_8008ED68 D_8008ED68[];
    extern u16 D_8008EE44[];
    extern s32 D_800AF0B4[][3];
    extern s32 D_800B3B20[];
    register u8 *p asm("a1") = arg0;
    s32 flags;
    s16 idx;
    s32 *e;
    s32 cond;

    flags = *(s32 *)(p + 0x38) | 1;
    *(s32 *)(p + 0x38) = flags;
    idx = *(s16 *)(p + 0x80);
    if (*D_8008EE44 == 5) {
        register s32 (*tbl)[3] asm("a0");
        S_8008ED68 *g;
        *(s32 *)(p + 0x38) = flags & ~1;
        tbl = D_800AF0B4;
        *(s32 *)(p + 0x30) = (*(s32 *)(p + 0x30) & ~0x30) | 0x20;
        e = tbl[idx];
        *(s32 *)(p + 0x68) = e[1];
        cond = *D_800B3B20;
        *(s32 *)(p + 0x6C) = e[2];
        if (cond != 0) {
            if (*(s32 *)(p + 0x84) != 0 && *(s32 *)(p + 0x88) == 0) {
                *(s32 *)(p + 0x84) -= 1;
            } else {
                *(s32 *)(p + 0x88) = 1;
                *(s32 *)(p + 0x38) |= 8;
                *(u32 *)(p + 0x3C) += 1;
            }
        }
        g = D_8008ED68;
        if (g->unkE0 >= 3) {
            *(s32 *)(p + 0x84) += 1;
        }
        if (*(u32 *)(p + 0x3C) >= 0x3C) {
            if (g->unkE0 < 3 || *(s32 *)(p + 0x84) < 0x21) {
                *(s16 *)(p + 0x46) = 0;
                *(s16 *)(p + 0x4A) = 0xA0;
                *(u32 *)(p + 0x3C) = 0;
            } else {
                *(s32 *)(p + 0x38) &= ~8;
            }
        }
    }
}

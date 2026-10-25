#include "common.h"

typedef struct { s16 x, y, w, h; } Rect;
extern u8 D_800AD55C[];
extern s32 func_80019F30(s32);
extern void func_80012A20(s32, s32, s32, s32);
extern void MoveImage(Rect *, s32, s32);

static void fill(Rect *r, s32 x) {
    r->x = x;
    r->y = 0x180;
    r->w = 0x20;
    r->h = 0x80;
}

void func_80097B24(u8 *base, s32 side, s32 slot) {
    Rect r;
    s32 c = base[slot * 124 + side * 0x2E8 + 0x5E8];
    u8 *t = D_800AD55C + slot * 4 + side * 24;
    u8 *h;
    s32 i, x;
    if (c != 0x5C) {
        h = (u8 *)func_80019F30((c + 0x10D) | 0x10000);
        i = 0;
        do {
            s32 a = *(s32 *)(h + 0xC);
            h += 4;
            func_80012A20(a, 3, (s16)(*(u16 *)t + (i++ << 5)), *(s16 *)(t + 2));
        } while (i < 2);
        return;
    }
    i = 0;
    x = 0x3C0;
    do {
        fill(&r, x);
        x += 0x20;
        MoveImage(&r, *(s16 *)t + (i++ << 5), *(s16 *)(t + 2));
    } while (i < 2);
}

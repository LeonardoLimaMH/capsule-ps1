#include "common.h"

typedef struct {
    s16 x, y, w, h;
} Rect;

extern s32 LoadImage();

void func_80012D70(u32 *p, s16 x, s16 y) {
    Rect r;

    if (p[0] & 0x400) {
        return;
    }
    r.x = x;
    r.y = y;
    if (!(p[0] & 0x200)) {
        r.w = *(s16 *)(p + 2) / 4;
    } else {
        r.w = *(s16 *)(p + 2) / 2;
    }
    r.h = *(u16 *)((u8 *)p + 0xA);
    if (!(p[0] & 0x100)) {
        LoadImage(&r, p + 3);
    } else {
        func_8001A8C0(p + 3, 0x801CC000);
        LoadImage(&r, 0x801CC000);
        DrawSync(0);
    }
}

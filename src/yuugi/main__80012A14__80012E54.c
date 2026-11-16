#include "common.h"
#include "yuugi.h"

typedef struct {
    s16 x, y, w, h;
} Rect;

typedef struct {
    u32 mode;
    Rect *crect;
    u32 *caddr;
    Rect *prect;
    u32 *paddr;
} Tim;

extern s32 LoadImage();
extern s32 OpenTIM();
extern s32 ReadTIM();

void func_80012E54(u8 *arg0) {
    Rect r;

    if (!(*(u32 *)arg0 & 0x400)) {
        r.x = *(u16 *)(arg0 + 4);
        r.y = *(u16 *)(arg0 + 6);
        r.w = *(u16 *)(arg0 + 8);
        r.h = *(u16 *)(arg0 + 0xA);
        LoadImage(&r, arg0 + 0xC);
    }
}

void func_80012EB8(u8 *arg0, s16 arg1, s16 arg2) {
    Rect r;

    if (!(*(u32 *)arg0 & 0x400)) {
        r.x = arg1;
        r.y = arg2;
        r.w = *(u16 *)(arg0 + 8);
        r.h = *(u16 *)(arg0 + 0xA);
        LoadImage(&r, arg0 + 0xC);
    }
}

void func_80012F0C(u8 *p) {
    Rect r;
    Tim t;

    OpenTIM(p + 4);
    ReadTIM(&t);
    r.x = t.prect->x;
    r.y = t.prect->y;
    r.w = t.prect->w;
    r.h = t.prect->h;
    LoadImage(&r, t.paddr);
    if (t.caddr != 0) {
        r.x = t.crect->x;
        r.y = t.crect->y;
        r.w = t.crect->w;
        r.h = t.crect->h;
        LoadImage(&r, t.caddr);
    }
}

void func_80012FB8(u8 *arg0, s16 x, s16 y, s16 w, s16 h) {
    Rect r;

    r.x = x;
    r.y = y;
    r.w = w;
    r.h = h;
    LoadImage(&r, arg0 + 0xC);
}

void func_80012FF0(u8 *arg0, s16 x, s16 y, s16 w, s16 h) {
    Rect r;

    r.x = x;
    r.y = y;
    r.w = w;
    r.h = h;
    LoadImage(&r, arg0 + 0xC);
}

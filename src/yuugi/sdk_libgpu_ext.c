#include "common.h"
#include "yuugi.h"

typedef struct {
    s16 x, y, w, h;
} Rect;

extern s32 LoadImage();
extern u16 GetTPage();
extern u16 GetClut();

u16 LoadTPage(u32 *pix, s32 tp, s32 abr, s32 x, s32 y, s32 w, s32 h) {
    Rect r;

    r.x = x;
    r.h = h;
    r.y = y;
    switch (tp) {
    case 0:
        r.w = w / 4;
        break;
    case 1:
        r.w = w / 2;
        break;
    case 2:
        r.w = w;
        break;
    }
    LoadImage(&r, pix);
    return GetTPage(tp, abr, x, y);
}

u16 LoadClut(u32 *clut, s32 x, s32 y) {
    Rect r;
    u16 ret;

    r.x = x;
    r.y = y;
    r.w = 0x100;
    r.h = 1;
    LoadImage(&r, clut);
    ret = GetClut(x, y);
    return ret;
}

u16 LoadClut2(u32 *clut, s32 x, s32 y) {
    Rect r;
    u16 ret;

    r.x = x;
    r.y = y;
    r.w = 0x10;
    r.h = 1;
    LoadImage(&r, clut);
    ret = GetClut(x, y);
    return ret;
}

#include "common.h"

typedef struct {
    s16 x, y, w, h;
} Rect;

extern s32 slpm_LoadImage();
extern s32 slpm_GetTPage();

u16 slpm_LoadTPage(u32 *pix, s32 tp, s32 abr, s32 x, s32 y, s32 w, s32 h) {
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
    slpm_LoadImage(&r, pix);
    return slpm_GetTPage(tp, abr, x, y);
}

extern s32 slpm_GetClut();

u16 slpm_LoadClut(u32 *clut, s32 x, s32 y) {
    Rect r;

    r.x = x;
    r.y = y;
    r.w = 0x100;
    r.h = 1;
    slpm_LoadImage(&r, clut);
    return slpm_GetClut(x, y);
}

u16 slpm_LoadClut2(u32 *clut, s32 x, s32 y) {
    Rect r;

    r.x = x;
    r.y = y;
    r.w = 0x10;
    r.h = 1;
    slpm_LoadImage(&r, clut);
    return slpm_GetClut(x, y);
}

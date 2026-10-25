#include "common.h"

typedef struct {
    s16 x, y, w, h;
} Rect;

extern s32 LoadImage();
extern s32 GetTPage();

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

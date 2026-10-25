#include "common.h"

typedef struct {
    s16 x, y, w, h;
} Rect;

extern s32 LoadImage();
extern s32 GetClut();

u16 LoadClut2(u32 *clut, s32 x, s32 y) {
    Rect r;

    r.x = x;
    r.y = y;
    r.w = 0x10;
    r.h = 1;
    LoadImage(&r, clut);
    return GetClut(x, y);
}

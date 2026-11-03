#include "common.h"

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

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_ext", slpm_LoadClut);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_ext", slpm_LoadClut2);

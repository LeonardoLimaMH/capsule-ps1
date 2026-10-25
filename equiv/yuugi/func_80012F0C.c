#include "common.h"

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

void func_80012F0C(u8 *p) {
    Rect r;
    Tim t;

    OpenTIM(p + 4);
    ReadTIM(&t);
    r = *t.prect;
    LoadImage(&r, t.paddr);
    if (t.caddr != 0) {
        r = *t.crect;
        LoadImage(&r, t.caddr);
    }
}

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

INCLUDE_ASM("asm/yuugi/nonmatchings/main__80012A14__80012E54", func_80012EB8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__80012A14__80012E54", func_80012F0C);

void func_80012FB8(u8 *arg0, s16 x, s16 y, s16 w, s16 h) {
    Rect r;

    r.x = x;
    r.y = y;
    r.w = w;
    r.h = h;
    LoadImage(&r, arg0 + 0xC);
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main__80012A14__80012E54", func_80012FF0);

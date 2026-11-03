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

INCLUDE_ASM("asm/yuugi/nonmatchings/main__80012A14__80012E54", func_80012E54);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__80012A14__80012E54", func_80012EB8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__80012A14__80012E54", func_80012F0C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__80012A14__80012E54", func_80012FB8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__80012A14__80012E54", func_80012FF0);

#include "common.h"
#include "yuugi.h"

typedef struct {
    s16 x, y, w, h;
} Rect;

extern s32 LoadImage();
extern s32 GetTPage();
extern s32 GetClut();

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_ext", LoadTPage);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_ext", LoadClut);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_ext", LoadClut2);

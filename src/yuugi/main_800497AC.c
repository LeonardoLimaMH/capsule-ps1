#include "common.h"
#include "yuugi.h"

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800497AC", SetVideoMode);

s32 GetVideoMode(void) {
    extern s32 D_800788BC[];
    return (*D_800788BC);
}

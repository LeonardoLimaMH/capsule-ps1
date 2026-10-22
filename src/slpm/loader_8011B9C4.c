#include "common.h"

INCLUDE_ASM("asm/slpm/nonmatchings/loader_8011B9C4", slpm_SetVideoMode);

s32 slpm_GetVideoMode(void) {
    extern s32 D_801332E4[];
    return (*D_801332E4);
}

#include "common.h"

extern s32 D_801332E4;

s32 slpm_SetVideoMode(s32 arg0) {
    s32 old = D_801332E4;

    D_801332E4 = arg0;
    return old;
}

s32 slpm_GetVideoMode(void) {
    extern s32 D_801332E4[];
    return (*D_801332E4);
}

#include "common.h"
#include "yuugi.h"

extern s32 D_800788BC;

s32 SetVideoMode(s32 arg0) {
    s32 old = D_800788BC;

    D_800788BC = arg0;
    return old;
}

s32 GetVideoMode(void) {
    extern s32 D_800788BC[];
    return (*D_800788BC);
}

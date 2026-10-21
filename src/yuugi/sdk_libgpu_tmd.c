#include "common.h"
#include "yuugi.h"

s32 OpenTIM(s32 arg0) {
    extern s32 D_800965C0[];
    (*D_800965C0) = arg0;
    return 0;
}

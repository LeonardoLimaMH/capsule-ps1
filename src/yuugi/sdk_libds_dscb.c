#include "common.h"
#include "yuugi.h"

s32 DsSyncCallback(s32 arg0) {
    extern s32 D_80094C50[];
    s32 temp_v0;

    temp_v0 = (*D_80094C50);
    (*D_80094C50) = arg0;
    return temp_v0;
}

s32 DsReadyCallback(s32 arg0) {
    extern s32 D_80094C54[];
    s32 temp_v0;

    temp_v0 = (*D_80094C54);
    (*D_80094C54) = arg0;
    return temp_v0;
}

s32 DsStartCallback(s32 arg0) {
    extern s32 D_80094C58[];
    s32 temp_v0;

    temp_v0 = (*D_80094C58);
    (*D_80094C58) = arg0;
    return temp_v0;
}

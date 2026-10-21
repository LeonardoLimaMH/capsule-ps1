#include "common.h"

s32 slpm_DsSyncCallback(s32 arg0) {
    extern s32 D_80138670[];
    s32 temp_v0;

    temp_v0 = (*D_80138670);
    (*D_80138670) = arg0;
    return temp_v0;
}

s32 slpm_DsReadyCallback(s32 arg0) {
    extern s32 D_80138674[];
    s32 temp_v0;

    temp_v0 = (*D_80138674);
    (*D_80138674) = arg0;
    return temp_v0;
}

s32 slpm_DsStartCallback(s32 arg0) {
    extern s32 D_80138678[];
    s32 temp_v0;

    temp_v0 = (*D_80138678);
    (*D_80138678) = arg0;
    return temp_v0;
}

#include "common.h"

s32 DecDCTvlcSize(s32 arg0) {
    extern s32 D_80120AB4[];
    s32 temp_v0;

    temp_v0 = (*D_80120AB4);
    if ((arg0 - 1) > 0) {
        (*D_80120AB4) = arg0 * 2;
        return temp_v0;
    }
    (*D_80120AB4) = 0xFFFFFF;
    return temp_v0;
}

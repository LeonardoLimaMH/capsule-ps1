#include "common.h"

extern s32 D_80072E60[];
extern volatile u32 *D_80072E5C;

s32 func_800433C8(s32 i, s32 v) {
    s32 old = D_80072E60[i];

    if (v == old) {
        return old;
    }
    if (v != 0) {
        D_80072E60[i] = v;
        *D_80072E5C = (*D_80072E5C & 0xFFFFFF) | ((1 << (i + 16)) | 0x800000);
    } else {
        D_80072E60[i] = 0;
        *D_80072E5C = ((*D_80072E5C & 0xFFFFFF) | 0x800000) & ~(1 << (i + 16));
    }
    return old;
}

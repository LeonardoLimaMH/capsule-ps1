#include "common.h"

extern u8 D_80091618[];

s32 func_800E0FB8(s32 idx) {
    u8 *rec;
    s32 k;

    idx &= 0xFFFF;
    if (idx == 0xFFFF) {
        return 0;
    }
    rec = D_80091618 + idx * 0x1A8;
    for (k = 0; k < 4; k++) {
        if (*(u16 *)(rec + 0x62 + k * 2) == 1) {
            return 1;
        }
    }
    return 0;
}

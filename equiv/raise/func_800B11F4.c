#include "common.h"

extern u8 D_80091618[];

void func_800B11F4(void) {
    u8 *rec;
    s32 k;

    for (rec = D_80091618; rec < D_80091618 + 0x9F0; rec += 0x1A8) {
        *(s16 *)(rec + 0x12) = 0;
        for (k = 0; k < 3; k++) {
            *(u16 *)(rec + 0x14 + k * 2) = 0xFFFF;
            *(s32 *)(rec + k * 0xC + 0x1C) = -1;
            *(s32 *)(rec + k * 0xC + 0x20) = -1;
            *(s32 *)(rec + k * 0xC + 0x24) = -1;
        }
    }
}

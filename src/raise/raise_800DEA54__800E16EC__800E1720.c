#include "common.h"

extern u8 D_800F07E4[];
extern u8 D_80105320[];

void func_800E1720(s32 idx) {
    u8 *rec = D_80105320 + (idx & 0xFFFF) * 0x110;
    s32 k;

    *(s16 *)(rec + 0) = 0;
    *(s16 *)(rec + 2) = 0;
    *(s16 *)(rec + 4) = 0;
    *(s16 *)(rec + 6) = 0;
    for (k = 0; k < 0x20; k++) {
        *(s16 *)(rec + k * 8 + 0x10) = 0;
        *(s16 *)(rec + k * 8 + 0x12) = 0;
        *(u8 **)(rec + 0xC) = D_800F07E4;
    }
}

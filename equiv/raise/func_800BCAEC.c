#include "common.h"

extern s16 D_8006AF90[];
extern u8 D_800EFF58[];

s32 func_800BCAEC(void) {
    s32 n, i;

    *(s32 *)(D_800EFF58 + 0x33C) = 1;
    n = D_8006AF90[0];
    *(s32 *)(D_800EFF58 + 0x340) = 0x20;
    *(s32 *)(D_800EFF58 + 0x344) = 0;
    *(s32 *)(D_800EFF58 + 0x348) = n + 4;
    if (n <= 0) {
        return n + 4;
    }
    for (i = 0; i < D_8006AF90[0]; i++) {
        *(s32 *)(D_800EFF58 + 0x3E8 + i * 4) = D_8006AF90[1 + i];
    }
    return 0;
}

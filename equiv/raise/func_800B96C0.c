#include "common.h"

/* stub-ret: mixed */
extern u8 D_80100F38[], D_800EFF58[], D_80091618[];
extern s32 D_800EE9B8[];
extern s32 func_800B1260(s32);

s32 func_800B96C0(void) {
    s32 i, j, a, b;
    u16 k = 0;
    for (i = 1, j = 0; i >= 0; i--, j++) {
        u8 *p;
        k = func_800B1260(i);
        if (k == 0xFFFF) continue;
        p = D_80100F38 + k * 0x79C;
        for (a = 0; a < 8; a++)
            for (b = 7; b >= 0; b--) D_800EFF58[j * 64 + a * 8 + b + 0x94] = 1;
        D_800EFF58[j * 64 + 0xA2] = 0;
        D_800EFF58[j * 64 + 0xC5] = 0;
        *(u16 *)(p + 0x338) = 6;
        *(u16 *)(p + 0x334) = 6;
        *(u16 *)(p + 0x330) = 6;
        *(u16 *)(p + 0x32C) = 5;
        *(u16 *)(p + 0x32A) = 5;
        *(u16 *)(p + 0x336) = 1;
        *(u16 *)(p + 0x332) = 1;
        *(u16 *)(p + 0x32E) = 1;
        *(u16 *)(D_80091618 + k * 0x1A8 + 0x90) = 0;
        D_800EE9B8[j] = 0;
    }
    /* v0 que sobra no registrador ao sair do laco */
    return k == 0xFFFF ? 0xFFFF0 : (s32)&D_800EE9B8[1];
}

#include "common.h"

extern u8 D_800944B8[];

void func_8003C530(s32 n) {
    u8 *e = D_800944B8 + n * 684;
    s32 i;

    for (i = 0; i < *(u16 *)(e + 0x2A2); i++) {
        e[i * 0x28 + 0x20] = 1;
        *(s32 *)(e + i * 0x28) = 0;
    }
}

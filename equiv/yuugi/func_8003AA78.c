#include "common.h"

extern u8 D_800944B8[];
extern s32 D_80078C9C;

s32 func_8003AA78(u8 *s) {
    u8 *e = D_800944B8 + D_80078C9C * 684;
    u32 pos = *(u32 *)s;
    u8 c = (*(u8 **)(e + 0x284))[pos];

    pos++;
    *(u32 *)s = pos;
    if (*(u32 *)(e + 0x294) < pos) {
        s[0x20] = 1;
        return -1;
    }
    return c;
}

#include "common.h"

extern u8 D_800944B8[];
extern s32 D_80078C9C;

static s32 rd(u32 *p) {
    u8 *e = D_800944B8 + D_80078C9C * 0x2AC;
    u8 b = *(u8 *)(*(s32 *)(e + 0x284) + *p);

    (*p)++;
    if (*(u32 *)(e + 0x294) < *p) {
        ((u8 *)p)[0x20] = 1;
        return -1;
    }
    return b;
}

u32 func_8003AC60(u32 *p) {
    s32 a = rd(p);
    s32 b = rd(p);
    s32 c = rd(p);
    s32 d = rd(p);

    return (((((a & 0xFF) << 8) + (b & 0xFF)) << 8) + (c & 0xFF)) << 8 | (d & 0xFF);
}

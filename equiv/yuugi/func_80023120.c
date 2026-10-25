#include "common.h"

extern u8 D_8008ED68[];

s32 func_80023120(s32 n) {
    u32 f = *(u32 *)(D_8008ED68 + n * 16 + 0x88);
    u32 v;

    if (f & 0x20) {
        return *(s32 *)(D_8008ED68 + 0x99C) + 1;
    }
    if (f & 0x40) {
        return -1;
    }
    if (f & 0x4000) {
        v = *(u32 *)(D_8008ED68 + 0x99C) + 1;
    } else if (f & 0x1000) {
        v = *(u32 *)(D_8008ED68 + 0x99C) + 2;
    } else {
        return 0;
    }
    *(u32 *)(D_8008ED68 + 0x99C) = v % 3;
    return 0;
}

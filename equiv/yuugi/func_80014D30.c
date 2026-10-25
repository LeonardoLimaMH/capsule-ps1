#include "common.h"

extern u8 D_8008ED68[];

void func_80014D30(s32 a0, s32 a1, s32 a2) {
    s32 i;

    *(s32 *)(D_8008ED68 + 0x20) = 0;
    D_8008ED68[0x24] = a0;
    D_8008ED68[0x28] = 0;
    if (a0 != 0) {
        D_8008ED68[0x25] = 4;
    } else {
        D_8008ED68[0x25] = a2;
    }
    D_8008ED68[0x26] = 0x60;
    if (a1 != 0) {
        D_8008ED68[0x27] = 1;
        D_8008ED68[0x26] = 0x20;
        for (i = 0; i < 4; i++) {
            func_80014C4C(i);
        }
        D_8008ED68[0x29] = 0;
    } else {
        D_8008ED68[0x27] = 0;
        D_8008ED68[0x29] = 0;
    }
    D_8008ED68[0x2A] = 0;
    D_8008ED68[0x2B] = 0;
    *(s32 *)(D_8008ED68 + 0x2C) = 0;
}

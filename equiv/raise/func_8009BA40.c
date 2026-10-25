#include "common.h"

extern u8 D_8008ED68[];

s32 func_8009BA40(void) {
    u8 *p = D_8008ED68;
    p[0x28] = 0;
    p[0x29] = 0;
    p[0x2A] = 0;
    p[0x2B] = 0;
    *(s32 *)(p + 0x2C) = 0;
    return (s32)p;
}

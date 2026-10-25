#include "common.h"

extern u8 D_8008ED68[];

void func_80015524(void) {
    D_8008ED68[0x29] = 0;
    *(s32 *)(D_8008ED68 + 0x2C) = 0;
    D_8008ED68[0x2B] = 2;
}

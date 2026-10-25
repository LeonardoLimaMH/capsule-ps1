#include "common.h"

extern u8 D_8008ED50[];

s32 func_80012778(void) {
    s32 v;

    *(u16 *)(D_8008ED50 + 0xC) += 1;
    v = (*(s32 **)(D_8008ED50 + 8))[*(u16 *)(D_8008ED50 + 0xC)];
    *(s32 *)(D_8008ED50 + 4) = v;
    return v;
}

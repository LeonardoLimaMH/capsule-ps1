#include "common.h"

extern u8 D_8008ED50[];

u8 *func_80012764(void) {
    *(s32 *)(D_8008ED50 + 4) = 0;
    *(s16 *)(D_8008ED50 + 0xC) = 0;
    return D_8008ED50;
}

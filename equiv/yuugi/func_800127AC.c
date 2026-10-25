#include "common.h"

extern s32 D_800508D4[];
extern u8 D_8008ED50[];

void func_800127AC(s32 mode) {
    u16 i = mode & 0xFFFF;

    if (i < 4 && i != 0) {
        *(s16 *)(D_8008ED50 + 2) = mode;
        *(s32 *)(D_8008ED50 + 8) = D_800508D4[i];
    }
}

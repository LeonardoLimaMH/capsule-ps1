#include "common.h"

extern u8 D_8008ED50[];
extern u16 D_800508D0;
extern void func_80012264();

void func_80012698(void) {
    *(void **)(D_8008ED50 + 0x14) = (void *)func_80012264;
    *(s16 *)(D_8008ED50 + 0xE) = 0;
    *(s16 *)D_8008ED50 = 1;
    func_800127AC(D_800508D0);
    *(s16 *)(D_8008ED50 + 0xC) = 0;
    *(s32 *)(D_8008ED50 + 4) = **(s32 **)(D_8008ED50 + 8);
}

#include "common.h"

extern u8 D_8008ED50[];
extern u16 D_800508D0[];

void func_800126F8(void) {
    u16 old = *(u16 *)(D_8008ED50 + 0xE);

    *(u16 *)(D_8008ED50 + 0xE) = *(u16 *)(D_8008ED50 + 0x12);
    *(u16 *)(D_8008ED50 + 0x10) = old;
    func_800127AC(D_800508D0[*(u16 *)(D_8008ED50 + 0xE)]);
    *(s16 *)(D_8008ED50 + 0xC) = 0;
    *(s32 *)(D_8008ED50 + 4) = **(s32 **)(D_8008ED50 + 8);
}

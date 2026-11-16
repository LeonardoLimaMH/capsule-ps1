#include "ghidra.h"
#include "matching.h"
#include "common.h"




s32 func_800A46B8(u8 *base, u32 x, u32 y, s16 *out) {
    extern u8 D_801010B0[];
    u8 *table = D_801010B0;
    u32 board = *(u32 *)(table + base[0x5D9] * 0x34);
    u32 cell;
    s32 height;

    out[0] = x * 100 - 550;
    cell = *(u32 *)(board + x * 0x34 + y * 4);
    out[2] = y * 100 - 550;
    height = -((s32)((cell >> 19) & 7) * 50);
    out[1] = height;
    return height;
}






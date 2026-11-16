#include "ghidra.h"
#include "matching.h"
#include "common.h"



void func_800A1CA0(s32 unused, u8 *base, u8 party) {
    extern u8 D_801010B0[];
    s32 i = 0;
    s32 offset = party * 0x2E8;
    u8 *board = *(u8 **)(D_801010B0 + base[9] * 0x34);
    do {
        u8 *actor = base + offset;
        u8 x;
        u8 y;
        offset += 0x7C;
        x = actor[0x2D];
        y = actor[0x2E];
        i++;
        actor[0x2D] = 0;
        actor[0x2E] = 0;
        actor[0x2F] = 0;
        *(u8 *)(board + x * 0x34 + y * 4 + 3) = 0;
    } while (i < 6);
}







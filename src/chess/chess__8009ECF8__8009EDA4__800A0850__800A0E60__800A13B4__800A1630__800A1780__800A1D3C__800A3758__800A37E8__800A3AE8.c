#include "ghidra.h"
#include "matching.h"
#include "common.h"



void func_800A3AE8(u8 *arg0) {
    extern u8 D_801010B0[];
    extern s32 func_800A3C5C();
    extern s32 func_800A4678();
    s32 first = 0;
    s32 second = 0;
    s32 row = 0;
    s32 col;
    u32 *line = *(u32 **)(D_801010B0 + arg0[0x5D9] * 0x34);
    u32 *cell;
    s32 object;
    u32 kind;
    s32 side;
    do {
        col = 0;
        cell = line;
        do {
            kind = (*cell >> 22) & 3;
            if (kind == arg0[0x5DE]) {
                object = func_800A4678(func_800A3C5C);
                *(u8 *)(object + 0x58) = first;
                first = 1;
                side = 0;
            } else {
                object = 0;
                if (kind == arg0[0x5DF]) {
                    object = func_800A4678(func_800A3C5C);
                    *(u8 *)(object + 0x58) = second;
                    second = 1;
                    side = 1;
                } else {
                    side = 0;
                }
            }
            if (object != 0) {
                *(s32 *)(object + 0x5C) = side;
                *(s32 *)(object + 0x60) = row;
                *(s32 *)(object + 0x64) = col;
                *(u32 *)(object + 0x50) |= 0x71;
            }
            col++;
            cell++;
        } while (col < 13);
        row++;
        line += 13;
    } while (row < 13);
}







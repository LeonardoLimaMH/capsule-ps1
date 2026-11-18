#include "ghidra.h"
#include "common.h"

void func_800DD274(u8 *arg0, s32 arg1, s32 arg2) {
    extern u8 (*D_80118C18[])[13][4];
    u8 x = arg0[0x15];
    u8 y = arg0[0x16];
    u8 v = D_80118C18[0][x][y][3];

    arg0[0x15] = arg1;
    arg0[0x16] = arg2;
    D_80118C18[0][x][y][3] = 0;
    D_80118C18[0][arg1][arg2][3] = v;
}


#include "common.h"

typedef struct { u32 unk0; u32 unk4; u32 unk8; u8 pad[0x30]; } D63940_t;

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844__800CBAA0__800CBBB4__SsQuit__800CFC9C__800CFE1C__800D00B0__800D0360__800D08FC__800D09D8", func_800D09D8);

s32 func_800D0B4C(u8 arg0, u8 arg1) {
    extern s32 D_80118C18[];
    u8 *p;
    u32 cell;
    s32 n;
    u32 base;

    if (arg0 < 13 && arg1 < 13) {
        base = D_80118C18[0];
        p = (u8 *)(arg1 * 4 + (arg0 * 0x34 + base));
        cell = *(u32 *)p;
        n = (cell >> 6) & 0x1FFF;
        if (n != 0 && n < 3) {
            if ((s32)(cell & 0x3F) < 2) {
                return 2;
            }
            if (p[3] == 0) {
                return n == 2;
            }
        }
    }
    return 2;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844__800CBAA0__800CBBB4__SsQuit__800CFC9C__800CFE1C__800D00B0__800D0360__800D08FC__800D09D8", func_800D0BDC);

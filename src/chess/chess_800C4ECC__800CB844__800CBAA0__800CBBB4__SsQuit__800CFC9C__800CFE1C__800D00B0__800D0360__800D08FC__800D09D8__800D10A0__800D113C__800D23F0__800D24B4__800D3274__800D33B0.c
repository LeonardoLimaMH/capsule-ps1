#include "common.h"

typedef struct { u32 unk0; u32 unk4; u32 unk8; u8 pad[0x30]; } D63940_t;

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844__800CBAA0__800CBBB4__SsQuit__800CFC9C__800CFE1C__800D00B0__800D0360__800D08FC__800D09D8__800D10A0__800D113C__800D23F0__800D24B4__800D3274__800D33B0", func_800D33B0);

void func_800D3408(s32 arg0) {
    extern u8 D_80118C25[];
    u8 temp_a0;
    register s32 step __asm__("$4");
    void *temp_s0;
    void *temp_s1;

    temp_s1 = ((arg0 & 0xFF) * 0xB4) + D_80118C25;
    func_8001A998(temp_s1, 0xB4);
    temp_s0 = D_80118C25 - 0xD;
    temp_a0 = M2C_FIELD(temp_s0, u8 *, 0xC);
    if ((temp_a0 != 0) && (M2C_FIELD(temp_s0, u8 *, 0xA) == 0)) {
        step = (temp_a0 & 0x7F) - 1;

        M2C_FIELD(temp_s1, s8 *, 5) = 5;
        M2C_FIELD(temp_s1, s8 *, 6) = (s8) (((step & 0xFF) + 1) % 6);
        return;
    }
    M2C_FIELD(temp_s1, s8 *, 6) = func_800202A4(6);
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844__800CBAA0__800CBBB4__SsQuit__800CFC9C__800CFE1C__800D00B0__800D0360__800D08FC__800D09D8__800D10A0__800D113C__800D23F0__800D24B4__800D3274__800D33B0", func_800D34D4);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844__800CBAA0__800CBBB4__SsQuit__800CFC9C__800CFE1C__800D00B0__800D0360__800D08FC__800D09D8__800D10A0__800D113C__800D23F0__800D24B4__800D3274__800D33B0", func_800D3698);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844__800CBAA0__800CBBB4__SsQuit__800CFC9C__800CFE1C__800D00B0__800D0360__800D08FC__800D09D8__800D10A0__800D113C__800D23F0__800D24B4__800D3274__800D33B0", func_800D3A2C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844__800CBAA0__800CBBB4__SsQuit__800CFC9C__800CFE1C__800D00B0__800D0360__800D08FC__800D09D8__800D10A0__800D113C__800D23F0__800D24B4__800D3274__800D33B0", func_800D3D2C);

extern u8 D_80085428[];
extern u32 *D_80118C18[];
s32 func_800D3274(u8 arg0, u8 *arg1, u8 *arg2);
typedef struct {
    u8 pad0[0x10];
    u8 unk10[2][6][7];
    u8 unk64[13][13];
} ChessState_D3F7C;
typedef struct {
    u8 pad0[0x5DE];
    u8 unk5DE[2];
} D_80085428_t;
u8 func_800D3F7C(ChessState_D3F7C *arg0, u8 arg1, u8 *arg2, u8 arg3)
{
    u8 *p;
    u8 count;
    s32 i;
    s32 side;
    u8 color;
    u8 x;
    u8 y;
    u32 w;

    side = arg1 >> 7;
    p = arg0->unk10[side][(arg1 & 0x7F) - 1];
    count = 0;
    color = ((D_80085428_t *)D_80085428)->unk5DE[side];
    for (i = 0; i < 8; i++) {
        x = p[0];
        y = p[1];
        if (func_800D3274(i, &x, &y) == 0) {
            if (arg0->unk64[x][y] == 0) {
                w = ((u32 (*)[13])D_80118C18[0])[x][y];
                if (((w >> 6) & 0x1FFF) != 2 && (s32)(w & 0x3F) >= 2 && ((w >> 22) & 3) == color) {
                    if (arg3 == 0) {
                        arg2[x * 13 + y] = 1;
                    } else {
                        arg2[count] = y + x * 13;
                    }
                    count++;
                }
            }
        }
    }
    return count;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844__800CBAA0__800CBBB4__SsQuit__800CFC9C__800CFE1C__800D00B0__800D0360__800D08FC__800D09D8__800D10A0__800D113C__800D23F0__800D24B4__800D3274__800D33B0", func_800D4100);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844__800CBAA0__800CBBB4__SsQuit__800CFC9C__800CFE1C__800D00B0__800D0360__800D08FC__800D09D8__800D10A0__800D113C__800D23F0__800D24B4__800D3274__800D33B0", func_800D449C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844__800CBAA0__800CBBB4__SsQuit__800CFC9C__800CFE1C__800D00B0__800D0360__800D08FC__800D09D8__800D10A0__800D113C__800D23F0__800D24B4__800D3274__800D33B0", func_800D46D0);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844__800CBAA0__800CBBB4__SsQuit__800CFC9C__800CFE1C__800D00B0__800D0360__800D08FC__800D09D8__800D10A0__800D113C__800D23F0__800D24B4__800D3274__800D33B0", func_800D497C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844__800CBAA0__800CBBB4__SsQuit__800CFC9C__800CFE1C__800D00B0__800D0360__800D08FC__800D09D8__800D10A0__800D113C__800D23F0__800D24B4__800D3274__800D33B0", func_800D4C20);

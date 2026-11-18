#include "common.h"

typedef struct { u32 unk0; u32 unk4; u32 unk8; u8 pad[0x30]; } D63940_t;

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844__800CBAA0__800CBBB4__SsQuit__800CFC9C__800CFE1C__800D00B0__800D0360__800D08FC__800D09D8__800D10A0__800D113C__800D23F0__800D24B4__800D3274__800D33B0__800D4F74__800D862C", func_800D862C);

s32 func_800D888C(void) {
    return 0;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844__800CBAA0__800CBBB4__SsQuit__800CFC9C__800CFE1C__800D00B0__800D0360__800D08FC__800D09D8__800D10A0__800D113C__800D23F0__800D24B4__800D3274__800D33B0__800D4F74__800D862C", func_800D8894);

static inline u8 roll_800D8B6C(s16 chance) {
    if (func_800202A4(100) < chance) {
        return 1;
    }
    return 0;
}
INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844__800CBAA0__800CBBB4__SsQuit__800CFC9C__800CFE1C__800D00B0__800D0360__800D08FC__800D09D8__800D10A0__800D113C__800D23F0__800D24B4__800D3274__800D33B0__800D4F74__800D862C", func_800D8B6C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844__800CBAA0__800CBBB4__SsQuit__800CFC9C__800CFE1C__800D00B0__800D0360__800D08FC__800D09D8__800D10A0__800D113C__800D23F0__800D24B4__800D3274__800D33B0__800D4F74__800D862C", func_800D8D48);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844__800CBAA0__800CBBB4__SsQuit__800CFC9C__800CFE1C__800D00B0__800D0360__800D08FC__800D09D8__800D10A0__800D113C__800D23F0__800D24B4__800D3274__800D33B0__800D4F74__800D862C", func_800D8EB4);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844__800CBAA0__800CBBB4__SsQuit__800CFC9C__800CFE1C__800D00B0__800D0360__800D08FC__800D09D8__800D10A0__800D113C__800D23F0__800D24B4__800D3274__800D33B0__800D4F74__800D862C", func_800D8FC4);

void func_800D90C0(s32 arg0) {
    typedef struct {
        u8 x, y, unk2, unk3, unk4, unk5, unk6;
    } ChessUnit;
    typedef struct {
        u16 unk0[4];
        u8 unk8[8];
        ChessUnit units[2][6];
        u8 grid[13][13];
    } ChessState;
    typedef struct {
        u8 pad0[0x1A];
        u16 unk1A;
    } ChessUnk4;
    typedef struct {
        u32 *board;
        ChessUnk4 *unk4;
        s16 unk8;
        u8 depth;
        u8 unkB;
        s8 unkC;
        u8 padD[0x392 - 0xD];
        ChessState states[5];
    } ChessWork;
    typedef struct {
        u8 pad0[0x12];
        u8 unk12;
        s8 unk13;
        u8 pad14[0x7C - 0x14];
    } Unit85994;
    extern ChessWork D_80118C18;
    extern Unit85994 D_80085994[][6];
    extern u8 D_80085429[];

    Unit85994 *row = D_80085994[(u8)arg0 >> 7];
    Unit85994 *u = &row[arg0 & 0x7F];
    s32 hp = u->unk12;
    s32 diff = hp - u->unk13 + 1;

    D_80118C18.states[2] = D_80118C18.states[0];
    D_80118C18.states[2].unk8[0] = 1 - D_80118C18.states[0].unk8[0];
    if (D_80085429[0] == 1) {
        D_80118C18.states[2].unk0[3] += 0x32;
    } else if (u->unk13 != -1) {
        u16 val = D_80118C18.unk4->unk1A;
        D_80118C18.states[2].unk0[3] -= val + (val * diff) / hp;
    }
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844__800CBAA0__800CBBB4__SsQuit__800CFC9C__800CFE1C__800D00B0__800D0360__800D08FC__800D09D8__800D10A0__800D113C__800D23F0__800D24B4__800D3274__800D33B0__800D4F74__800D862C", func_800D9268);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844__800CBAA0__800CBBB4__SsQuit__800CFC9C__800CFE1C__800D00B0__800D0360__800D08FC__800D09D8__800D10A0__800D113C__800D23F0__800D24B4__800D3274__800D33B0__800D4F74__800D862C", func_800D943C);

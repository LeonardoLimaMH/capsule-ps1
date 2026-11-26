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

static inline u8 roll_800D8D48(u8 arg0) {
    typedef struct { u8 pad[0x14]; u16 unk14; u8 pad2[0x58 - 0x16]; } D6B2A4_8D48;
    extern D63940_t D_80063940[];
    extern D6B2A4_8D48 D_8006B2A4[];
    extern u8 D_80085428[];
    extern s32 func_800202A4(s32);
    u8 *base = D_80085428;
    u8 *p = base + (((arg0 & 0x7F) - 1) * 0x7C + ((arg0 & 0xFF) >> 7) * 0x2E8);
    s32 chance = D_8006B2A4[(D_80063940[p[0x5E8]].unk8 >> 17) & 0x7F].unk14;
    s32 r = func_800202A4(100);
    {
        register s32 t asm("s0") = chance << 16;
        chance = t >> 16;
    }
    if (r < chance) {
        return 1;
    }
    return 0;
}
INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844__800CBAA0__800CBBB4__SsQuit__800CFC9C__800CFE1C__800D00B0__800D0360__800D08FC__800D09D8__800D10A0__800D113C__800D23F0__800D24B4__800D3274__800D33B0__800D4F74__800D862C", func_800D8D48);

u8 func_800D8EB4(u8 arg0, u8 arg1) {
    extern u8 D_80085428[];
    extern s32 func_800D0B4C();
    u8 *base = D_80085428;
    u8 *q = base + (((arg1 & 0x7F) - 1) * 0x7C + ((arg1 & 0xFF) >> 7) * 0x2E8);
    u8 *p = base + (((arg0 & 0x7F) - 1) * 0x7C + ((arg0 & 0xFF) >> 7) * 0x2E8);
    u8 x = q[0x5FD] * 2 - p[0x5FD];
    s32 y = q[0x5FE] * 2 - p[0x5FE];

    if (x < 0xD) {
        register s32 yy asm("a1") = y;
        if ((u8)yy > 0xC) {
            return 0xFF;
        }
        if ((u8)func_800D0B4C(x, (u8)yy) == 0) {
            return y + x * 13;
        }
    }
    return 0xFF;
}

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

void func_800D943C(s32 arg0, s32 arg1) {
    typedef struct { u8 pad[0x10]; u32 unk10; u8 pad2[0x44]; } T6B2A4;
    extern D63940_t D_80063940[];
    extern T6B2A4 D_8006B2A4[];
    extern u8 D_80085428[];
    extern u8 D_80118C18[];
    extern void func_800D9268(u32, u32);
    extern s32 func_800D82A0(u32, u32);
    extern s32 func_800D8490(u32, u32);
    extern s32 func_800D8508(u32, u32);
    extern s32 func_800D8580(u32, u32);

    register s32 arg1_r asm("a1") = arg1;
    register D63940_t *tbl1 asm("t0") = D_80063940;
    register u8 *base asm("a3") = D_80085428;
    s32 idx = (arg0 & 0x7F) - 1;
    register u32 id asm("a0");
    u32 side;
    register u8 *p asm("a2") = idx * 0x7C + (side = (id = (u8)arg0) >> 7) * 0x2E8 + base;
    u32 off = ((tbl1[p[0x5E8]].unk8 >> 17) & 0x7F) * sizeof(T6B2A4);
    u32 flags;
    s32 val;
    u8 *q;

    {
        register u8 *tbl2 asm("v1") = (u8 *)D_8006B2A4;
        flags = ((T6B2A4 *)(off + tbl2))->unk10;
    }

    switch ((s32)(flags & 3)) {
    case 0:
        func_800D9268(id, (u8)arg1_r);
        break;
    case 1:
        switch ((s32)((flags >> 2) & 0x1F)) {
        case 2:
            val = func_800D82A0(id, (u8)arg1_r);
            {
                u8 *tbl = D_80118C18;
                q = idx * 7 + side * 0x2A + tbl;
                q[0x5C0] += val;
            }
            break;
        case 3:
            val = func_800D8490(id, (u8)arg1_r);
            {
                u8 *tbl = D_80118C18;
                q = idx * 7 + side * 0x2A + tbl;
                q[0x5C1] += val;
            }
            break;
        case 4:
            val = func_800D8508(id, (u8)arg1_r);
            {
                u8 *tbl = D_80118C18;
                q = idx * 7 + side * 0x2A + tbl;
                q[0x5C2] += val;
            }
            break;
        case 5:
            val = func_800D8580(id, (u8)arg1_r);
            {
                u8 *tbl = D_80118C18;
                q = idx * 7 + side * 0x2A + tbl;
                q[0x5C3] += val;
            }
            break;
        }
        break;
    case 2:
        break;
    }
}

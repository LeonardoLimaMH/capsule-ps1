#include "common.h"
#include "gte_inline.h"

typedef struct { u32 unk0; u32 unk4; u32 unk8; u8 pad[0x30]; } D63940_t;


void func_800D0270(u8 arg0, u8 arg1, u8 arg2) {
    typedef struct {
        u8 x, y, unk2, unk3, unk4, unk5, unk6;
    } ChessUnit;
    typedef struct {
        s16 unk0[4];
        u8 unk8[8];
        ChessUnit units[2][6];
        u8 grid[13][13];
    } ChessState;
    extern struct {
        u8 pad0[0xA];
        u8 depth;
        u8 pad1[0x392 - 0xB];
        ChessState states[4];
    } D_80118C18;
    ChessState *s = &D_80118C18.states[D_80118C18.depth];
    s32 target = s->grid[arg1][arg2];
    ChessUnit *u = &s->units[arg0 >> 7][(arg0 & 0x7F) - 1];
    ChessUnit *u2;

    s->grid[u->x][u->y] = 0;
    s->grid[arg1][arg2] = arg0;
    u->x = arg1;
    u->y = arg2;
    u2 = s->units[target >> 7];
    u2[(target & 0x7F) - 1].unk2 = 0;
}

#include "ghidra.h"

typedef struct {
    u32 pad0 : 15;
    u32 a : 2;
    u32 b : 4;
    u32 pad1 : 11;
} Flags76D8;


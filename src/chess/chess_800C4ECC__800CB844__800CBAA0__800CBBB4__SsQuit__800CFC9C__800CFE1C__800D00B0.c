#include "common.h"

typedef struct { u32 unk0; u32 unk4; u32 unk8; u8 pad[0x30]; } D63940_t;

void func_800D00B0(u8 arg0, u8 arg1, u8 arg2) {
    typedef struct {
        u8 x, y, unk2, unk3, unk4, unk5, unk6;
    } ChessUnit;
    typedef struct {
        s16 unk0[4];
        u8 unk8[4];
        u8 unkC[4];
        ChessUnit units[2][6];
        u8 grid[13][13];
    } ChessState;
    extern struct {
        u32 (*board)[13];
        u8 pad0[0xA - 4];
        u8 depth;
        u8 pad1[0x392 - 0xB];
        ChessState states[4];
    } D_80118C18;
    extern u16 func_800D28C0(u8, u8);
    ChessState *s = &D_80118C18.states[D_80118C18.depth];
    ChessUnit *u = &s->units[arg0 >> 7][(arg0 & 0x7F) - 1];

    if ((u8)((((D_80118C18.board[arg1][arg2] >> 19) & 7) - ((D_80118C18.board[u->x][u->y] >> 19) & 7)) + 2) < 5) {
        u8 target = s->grid[arg1][arg2];
        if (target != 0) {
            ChessUnit *u2 = &s->units[target >> 7][(target & 0x7F) - 1];
            if ((target & 0x7F) - 1 == 5) {
                s->unkC[target >> 7]++;
                if (s->unkC[target >> 7] >= 5) {
                    s->grid[arg1][arg2] = 0;
                }
            } else {
                u16 dmg = func_800D28C0(arg0, target);
                if (dmg >= u2->unk2) {
                    u2->unk2 = 0;
                    s->grid[arg1][arg2] = 0;
                } else {
                    u2->unk2 -= dmg;
                }
            }
        }
    }
}

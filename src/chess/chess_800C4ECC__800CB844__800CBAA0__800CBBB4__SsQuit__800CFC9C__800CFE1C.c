#include "common.h"

typedef struct { u32 unk0; u32 unk4; u32 unk8; u8 pad[0x30]; } D63940_t;

void func_800CFE1C(void) {
    typedef struct {
        u8 x, y, unk2, unk3, unk4, unk5, unk6;
    } ChessUnit;
    typedef struct {
        s16 unk0[4];
        u8 unk8[8];
        ChessUnit units[2][6];
        u8 grid[13][13];
    } ChessState;
    typedef struct {
        u16 unk0;
        u8 unk2[5];
        u8 pad7[2];
        u8 x;
        u8 y;
        u8 padB;
        u32 flags;
        u8 pad10[0x6C];
    } BattleUnit;
    extern struct {
        u8 pad0[0x5D9];
        u8 unk5D9;
        u8 pad5DA[0xC];
        u8 unk5E6;
        u8 unk5E7;
        u8 pad5E8[0xC];
        BattleUnit units[2][6];
        u8 padBC4[0x16];
        u8 unkBDA;
        u8 unkBDB;
    } D_80085428;
    extern struct {
        u32 *board;
        u8 pad4[6];
        u8 depth;
        u8 padB[0x392 - 0xB];
        ChessState states[5];
    } D_80118C18;
    extern u8 D_80085FF2[];
    extern u32 *D_801010B0[][13];
    extern void func_8001A998(void *, s32);
    extern u8 func_800D0884(u8);
    s32 i, j;

    func_8001A998(D_80118C18.states, sizeof(D_80118C18.states));
    D_80118C18.board = D_801010B0[D_80085428.unk5D9][0];
    D_80118C18.depth = 0;
    D_80118C18.states[0].unk8[2] = D_80085428.unk5E6;
    D_80118C18.states[0].unk8[3] = D_80085428.unk5E7;
    D_80118C18.states[0].unk8[4] = D_80085428.unkBDA;
    D_80118C18.states[0].unk8[5] = D_80085428.unkBDB;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 6; j++) {
            if (D_80085428.units[i][j].unk2[0] != 0 && !(D_80085428.units[i][j].flags & 0x300)) {
                u8 x = D_80085428.units[i][j].x;
                u8 y = D_80085428.units[i][j].y;
                D_80118C18.states[0].grid[x][y] = (i << 7) | (j + 1);
                D_80118C18.states[0].units[i][j].x = x;
                D_80118C18.states[0].units[i][j].y = y;
                D_80118C18.states[0].units[i][j].unk2 = D_80085428.units[i][j].unk2[0];
                D_80118C18.states[0].units[i][j].unk3 = D_80085428.units[i][j].unk2[1];
                D_80118C18.states[0].units[i][j].unk4 = D_80085428.units[i][j].unk2[2];
                D_80118C18.states[0].units[i][j].unk5 = D_80085428.units[i][j].unk2[3];
                D_80118C18.states[0].units[i][j].unk6 = D_80085428.units[i][j].unk2[4];
            }
        }
    }

    D_80118C18.states[0].unk8[0] = *D_80085FF2;
    D_80118C18.states[0].unk8[6] = func_800D0884(0);
    D_80118C18.states[0].unk8[7] = func_800D0884(1);
    if (D_80118C18.states[0].unk8[0] == 0) {
        D_80118C18.states[0].unk0[0] = -0x4E20;
        D_80118C18.states[0].unk0[1] = -0x4E20;
        D_80118C18.states[0].unk0[2] = 0x4E20;
    } else {
        D_80118C18.states[0].unk0[0] = 0x4E20;
        D_80118C18.states[0].unk0[1] = 0x4E20;
        D_80118C18.states[0].unk0[2] = -0x4E20;
    }
}

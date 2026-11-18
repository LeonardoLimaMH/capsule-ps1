#include "common.h"

typedef struct { u32 unk0; u32 unk4; u32 unk8; u8 pad[0x30]; } D63940_t;

void SsQuit(void) {
    func_800FF700();
}

void func_800CF2C8(s8 arg0) {
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
        u8 pad0;
        u8 unk1;
        u8 pad2[0x5DE];
        u8 unk5E0[2];
        u8 pad5E2[2];
        u8 unk5E4[2];
        u8 pad5E6[0x5D6];
        u8 unkBBC[2][6];
        u8 padBC8[2];
        u8 unkBCA;
    } D_80085428;
    extern struct {
        u8 pad0[0xEC];
        u16 unkEC;
    } D_8008ED68;
    extern u16 D_8008EE54[];
    extern u8 D_80101CCC[][8];
    extern u8 D_80101D0C[][0x2E];
    extern u8 D_80101E4E[];
    extern struct {
        u32 *board;
        void *unk4;
        s16 unk8;
        u8 depth;
        u8 unkB;
        s8 unkC;
        u8 padD[0x392 - 0xD];
        ChessState states[5];
    } D_80118C18;
    extern void func_800CFE1C(void);
    extern void func_800D3408(s32);

    u8 a0;
    s32 a1;
    s32 idx;

    D_80118C18.unk8 = 0x32;
    D_80118C18.unkC = arg0;
    func_800CFE1C();

    if (D_80085428.unk5E4[D_80118C18.states[0].unk8[0]] == 0xFF) {
        D_80118C18.unk4 = D_80101E4E;
    } else {
        D_80118C18.unk4 = D_80101D0C[D_80085428.unk5E4[D_80118C18.states[0].unk8[0]]];
    }

    a0 = D_80085428.unk5E4[D_80085428.unkBCA];
    a1 = D_80118C18.states[0].unk8[6] + D_80118C18.states[0].unk8[7];
    if (D_80085428.unk1 == 1 || a0 == 0xFF) {
        a0 = 0;
    }
    if (a1 < 3) {
        a1 = 3;
    }
    D_80118C18.unkB = D_80101CCC[a0][a1 - 3];

    idx = D_80118C18.states[0].unk8[0];
    D_80085428.unkBBC[idx][0] = 0;
    D_80085428.unkBBC[idx][1] = 0;
    D_80085428.unkBBC[idx][2] = 0;
    D_80085428.unkBBC[idx][3] = 0;
    D_80085428.unkBBC[idx][4] = 0;
    D_80085428.unkBBC[idx][5] = 0;
    func_800D3408(0);

    if (D_80085428.unk5E0[D_80118C18.states[0].unk8[0]] != 0) {
        D_8008ED68.unkEC++;
        return;
    }
    *D_8008EE54 = 2;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844__800CBAA0__800CBBB4__SsQuit", func_800CF450);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844__800CBAA0__800CBBB4__SsQuit", func_800CF720);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844__800CBAA0__800CBBB4__SsQuit", func_800CF960);

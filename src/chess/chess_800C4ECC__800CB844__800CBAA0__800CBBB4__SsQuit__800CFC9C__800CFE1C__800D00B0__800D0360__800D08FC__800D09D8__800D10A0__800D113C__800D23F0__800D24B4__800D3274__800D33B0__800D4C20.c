#include "common.h"

typedef struct { u32 unk0; u32 unk4; u32 unk8; u8 pad[0x30]; } D63940_t;

extern u8 D_80085428[];

extern u32 *D_80118C18[];

typedef struct {
    u8 pad0[0x10];
    u8 unk10[2][6][7];
    u8 unk64[13][13];
} ChessState_D3F7C;

extern u32 *D_80118C18[];

typedef struct {
    u8 pad0[0x10];
    u8 unk10[2][6][7];
    u8 unk64[13][13];
} ChessState_X46D0;

typedef struct {
    u8 *buffer;
    u8 x;
    u8 y;
    u8 direction;
    u8 distance;
} ChessMove_X46D0;

void func_800D46D0(ChessState_X46D0 *arg0, u32 arg1, ChessMove_X46D0 *arg2);

static inline u8 chess_move_dfs_D497C(ChessState_D3F7C *board, u8 id, u8 *dst, u8 mode)
{
    ChessMove_X46D0 move;
    u8 buf[169];
    u8 *p;
    u8 count;
    u8 dir;
    s32 i;

    count = 0;
    p = board->unk10[id >> 7][(id & 0x7F) - 1];
    func_8001A998(buf, 0xA9);
    move.buffer = buf;
    func_800D3D2C(board, id, buf, 0);
    dir = 0;
    do {
        move.x = p[0];
        move.y = p[1];
        move.direction = dir;
        move.distance = 0;
        func_800D46D0((ChessState_X46D0 *)board, id, &move);
        dir++;
    } while (dir < 4);
    for (i = 0; i < 169; i++) {
        if (buf[i] != 0) {
            if (mode == 0) dst[i] = buf[i];
            else dst[count] = i;
            count++;
        }
    }
    return count;
}

u8 func_800D4C20(arg0, arg1)
u8 arg0;
u8 *arg1;
{
    extern D63940_t D_80063940[];
    extern void func_8001A998(void *, s32);
    extern u8 func_800D4100(void *, u8, u8 *, u8);
    extern u8 func_800D449C(void *, u8, u8 *, u8);
    typedef struct {
        u8 x, y, unk2, unk3, unk4, unk5, unk6;
    } ChessUnit_D4C20;
    typedef struct {
        s16 unk0[4];
        u8 unk8[8];
        ChessUnit_D4C20 units[2][6];
        u8 grid[13][13];
    } ChessState_D4C20;
    typedef struct {
        u32 *board;
        u8 pad4[6];
        u8 depth;
        u8 padB[0x392 - 0xB];
        ChessState_D4C20 states[5];
    } ChessGlobal_D4C20;
    typedef struct {
        u8 species;
        u8 pad[0x7B];
    } BattleUnit_D4C20;
    typedef struct {
        u8 pad0[0x5E8];
        BattleUnit_D4C20 units[2][6];
    } BattleGlobal_D4C20;

    ChessState_D4C20 *board;
    u8 *p;
    u8 count;
    s32 side;
    s32 index;

    count = 0;
    board = &((ChessGlobal_D4C20 *)D_80118C18)->states[((ChessGlobal_D4C20 *)D_80118C18)->depth];
    side = arg0 >> 7;
    p = (u8 *)&board->units[side][(arg0 & 0x7F) - 1];
    func_8001A998(arg1, 0xA9);
    index = (arg0 & 0x7F) - 1;
    arg1[0] = p[0] * 13 + p[1];
    if (index == 5) {
        count = func_800D3F7C((ChessState_D3F7C *)board, arg0, arg1 + 1, 1);
    } else if (p[5] != 0) {
        switch ((D_80063940[((BattleGlobal_D4C20 *)D_80085428)->units[side][index].species].unk8 >> 8) & 0xF) {
        case 0:
        case 1:
        case 2:
        case 4:
        case 6:
        case 7:
        case 8:
            count = func_800D4100(board, arg0, arg1 + 1, 1);
            break;
        case 5:
            count = func_800D449C(board, arg0, arg1 + 1, 1);
            break;
        case 3:
        case 9:
            count = chess_move_dfs_D497C((ChessState_D3F7C *)board, arg0, arg1 + 1, 1);
            break;
        }
    }
    return count + 1;
}

#include "common.h"

typedef struct {
    u8 x;
    u8 y;
    u8 status;
    u8 flags;
    u16 texture;
    u16 tile;
    s32 unk8;
} ChessCellSave_C8A48;
typedef struct {
    u8 unk0;
    u8 pad1[0x7C - 1];
} ChessUnit_C8A48;
typedef struct {
    u8 pad0[9];
    u8 unk9;
    u8 padA[0x18 - 0xA];
    ChessUnit_C8A48 units[2][6];
    u8 pad5E8[0x5FA - (0x18 + 2 * 6 * 0x7C)];
    u8 unk5FA;
    u8 unk5FB[2];
    u8 pad5FD[0x730 - 0x5FD];
    ChessCellSave_C8A48 unk730[6];
    u8 unk778;
} ChessSub_C8A48;
typedef struct {
    u32 (*b)[13];
    u8 _pad[0x30];
} BoardEntry;

typedef struct {
    u32 flags : 6;
    u32 tile : 13;
    u32 rest : 13;
} ChessCellFlags;

extern BoardEntry D_801010B0[];

struct ChessTextureState {
    u8 _pad[8];
    u8 *table;
    u8 *entry;
};
struct ChessPrimBuffer {
    u8 _pad[0x684];
    u8 *buffer[2];
};
extern struct ChessTextureState D_80118B48[];
extern u8 D_80118710[];
extern struct ChessPrimBuffer D_800900C0[];

void func_800C87C0(s32, ChessSub_C8A48 *, ChessCellSave_C8A48 *);
void func_80013928(s32);
void func_8001AA70(void *, void *, s32);
void func_800C8BF4(u8 *arg0) {
    ChessSub_C8A48 *sub = (ChessSub_C8A48 *)(arg0 + 0x5D0);
    ChessCellSave_C8A48 *save;
    s32 i;
    s32 j;

    for (i = 0; i < sub->unk778; i++) {
        save = &sub->unk730[i];

        if (--save->flags == 0) {
            switch (save->status) {
            case 1:
                func_800C87C0((s32)arg0, sub, save);
                break;
            case 2: {
                u32 b = (u32)D_801010B0[sub->unk9].b;
                ChessCellFlags *cell = (ChessCellFlags *)(save->y * 4 + (save->x * 0x34 + b));
                save->status = 0;
                cell->tile = save->tile;
                func_80013928(save->unk8);
                break;
            }
            }
        }
    }

    for (i = 0; i < sub->unk778; i++) {
        save = &sub->unk730[i];
        if (save->status == 0) {
            for (j = i + 1; j < sub->unk778; j++) {
                func_8001AA70(&sub->unk730[j - 1], &sub->unk730[j], sizeof(ChessCellSave_C8A48));
            }
            i--;
            sub->unk778--;
        }
    }
}


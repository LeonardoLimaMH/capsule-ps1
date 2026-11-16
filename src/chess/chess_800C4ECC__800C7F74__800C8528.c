#include "common.h"

/* Tabuleiros 13x13 por partida (0x34 bytes cada). */
extern struct {
    u32 (*b)[13];
    u8 _pad[0x30];
} D_801010B0[];
struct ChessCellFlags {
    u32 flags : 6;
    u32 tile : 13;
    u32 rest : 13;
};
struct ChessCellSave {
    u8 x, y, status, flags;
    u16 texture, tile;
};
struct ChessTextureState {
    u8 _pad[8];
    u8 *table;
    u8 *entry;
};
struct ChessPrimBuffer {
    u8 _pad[0x684];
    u8 *buffer;
};
extern struct ChessTextureState D_80118B48[];
extern u8 D_80118710[];
extern struct ChessPrimBuffer D_800900C0[];

extern u16 D_8008EE54[];
void func_800CAA44(s32, void *);
void func_800CA7B0(s32, void *, s32, s32, s32);
void func_800C44BC(s32, s32, s32, s32, s32);
void func_80012668(void);
s32 func_800C8528(s32 arg0, void *arg1, s32 arg2, s32 arg3) {
    s32 ret;
    u8 *temp_s0;
    s32 temp_s6;
    s32 diff;
    u16 count;

    temp_s0 = (u8 *)arg1 + (arg2 * 0x2E8 + 0x18) + (arg3 * 0x7C);
    temp_s6 = *(s32 *)(temp_s0 + 0x70);
    ret = 0;

    switch (D_8008EE54[0]) {
    case 0:
        func_800CAA44(arg0, temp_s0);
        func_800CA7B0(arg0, temp_s0, 3, 4, -3);
        diff = temp_s0[0x6E] - temp_s0[0x11];
        *(u8 *)((u8 *)arg1 + 0x715) = 3;
        *(u8 *)((u8 *)arg1 + 0x70E) = 0;
        *(u8 *)((u8 *)arg1 + 0x70D) = 0;
        *(s16 *)((u8 *)arg1 + 0x710) = diff;
        func_800C44BC(arg0, temp_s6, arg2, arg3, 2);
        *(u16 *)((u8 *)arg0 + 0xC) = 0;
        func_80012668();
        break;
    case 1:
        count = *(u16 *)((u8 *)arg0 + 0xC) + 1;
        *(u16 *)((u8 *)arg0 + 0xC) = count;
        if (count >= 0x3D) {
            *(u8 *)((u8 *)arg1 + 0x70D) = 1;
            ret = 1;
        }
        break;
    }

    return ret;
}

extern u8 *D_80118B54[];

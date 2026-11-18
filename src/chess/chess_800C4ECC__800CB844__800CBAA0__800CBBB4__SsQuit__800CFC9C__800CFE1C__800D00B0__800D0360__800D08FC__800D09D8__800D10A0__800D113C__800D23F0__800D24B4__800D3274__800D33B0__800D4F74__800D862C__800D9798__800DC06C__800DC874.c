#include "common.h"

typedef struct { u32 unk0; u32 unk4; u32 unk8; u8 pad[0x30]; } D63940_t;

s32 func_800DC874(u8 arg0) {
    typedef struct {
        u8 pad[0xE];
        u8 unkE;
        u8 pad2[0x7C - 0xF];
    } D85428Unit;
    extern struct {
        u8 pad[0x5E8];
        D85428Unit units[2][6];
    } D_80085428;
    extern struct {
        u8 pad[0x5B4];
        u16 unk5B4;
    } D_80118C18[];
    extern u8 func_800D2340(u8);
    extern void func_800D90C0(u8);
    u8 side = 1 - (arg0 >> 7);
    s32 i;
    u8 counts[3];
    s32 x;
    s32 d1;
    s32 d2;

    counts[2] = 0;
    counts[1] = 0;
    counts[0] = 0;
    for (i = 0; i < 5; i++) {
        if (D_80085428.units[side][i].unkE != 0) {
            counts[func_800D2340((side << 7) | (i + 1))]++;
        }
    }
    x = func_800D2340(arg0);
    d1 = counts[(x + 2) % 3] - counts[(x + 1) % 3];
    d2 = counts[(x + 1) % 3] - counts[(x + 3) % 3];
    if (d1 < d2) {
        func_800D90C0(arg0);
        D_80118C18[0].unk5B4 += (d2 - d1) * 1000;
        return 1;
    }
    return 0;
}

u32 func_800DCA2C(u32 piece) {
    typedef s32 (*ChessAction)(u32);
    typedef struct { u8 pad[0x10]; u32 unk10; u8 rest[0x44]; } Effect;
    extern u8 D_80085428[];
    extern D63940_t D_80063940[];
    extern Effect D_8006B2A4[];
    extern ChessAction D_80101E7C[];
    extern u8 D_8011970A[];
    extern u8 D_80118C18[];
    extern s32 func_800D79A4(void);
    D63940_t *cards = D_80063940;
    u8 *base = D_80085428;
    u8 *p = base + (((piece & 0x7F) - 1) * 0x7C + ((u8)piece >> 7) * 0x2E8);
    ChessAction action;
    u32 type;

    D_8011970A[1] = 0;
    D_8011970A[0] = 0;
    action = D_80101E7C[(cards[p[0x5E8]].unk8 >> 17) & 0x7F];
    if (action != 0) {
    if ((u8)action((u8)piece) == 0) return 0;
    if ((u8)func_800D79A4() != 0) {
    D_80118C18[0xD] = piece;
    D_80118C18[0xE] = 3;
    type = (D_8006B2A4[(cards[p[0x5E8]].unk8 >> 17) & 0x7F].unk10 >> 2) & 0x1F;
    if (type == 16) {
        D_80118C18[0x10] = 0;
        D_80118C18[0xF] = D_8011970A[1] + D_8011970A[0] * 13;
    } else if (type == 17) {
        D_80118C18[0xF] = D_8011970A[1];
        D_80118C18[0x10] = D_8011970A[0];
    } else {
        D_80118C18[0xF] = p[0x5FE] + p[0x5FD] * 13;
        D_80118C18[0x10] = D_8011970A[1] + D_8011970A[0] * 13;
    }
    return 1;
    }
    }
    return 0;
}

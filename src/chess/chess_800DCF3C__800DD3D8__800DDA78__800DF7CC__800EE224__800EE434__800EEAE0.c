#include "ghidra.h"
#include "common.h"

typedef struct {
    s16 vx, vy, vz, pad;
    s16 dx, dx_pad;
    s16 dz, dz_pad;
    s16 sx, sy;
    s32 p;
    s32 flag;
} S_800EFCF4_Work;

typedef struct { u8 b[4]; } U4_800DD;

typedef struct {
    u8 pad0[0x10];
    u32 a;
    u32 b;
    u8 pad18[0x24];
} S_800DD_Tab;

typedef struct {
    u8 pad0[0x13];
    u8 f13;
    u8 pad14[0x28];
} S_800DD_Tab8;

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC__800EE224__800EE434__800EEAE0", func_800EEAE0);

extern s32 rsin(s32);
extern s32 rcos(s32);
extern void func_80013920(void *);

void func_800EEBC0(u8 *arg0) {
    extern u8 D_8011974D[];
    extern void func_80013920(void *);
    s32 d = 30;
    s32 k1 = 140;
    s32 k2 = 100;
    s32 n;
    s32 y_off;
    s32 c;
    s32 s;

    n = (s16)(*(u16 *)(arg0 + 0x16) += 1);
    D_8011974D[0] = 0;
    if (n > d) {
        func_80013920(arg0);
    } else {
        y_off = (d - n) * k1 / d;
        c = (d - n) * 0xFF / d;
        s = (n * k2 * n / d) / d;
        arg0[0x36] = c;
        arg0[0x35] = c;
        arg0[0x34] = c;
        arg0[0x32] = c;
        arg0[0x31] = c;
        arg0[0x30] = c;
        *(u16 *)(arg0 + 0x3E) += 100;
        *(s16 *)(arg0 + 0x2A) = *(u16 *)(arg0 + 0x1C) - y_off;
        *(s16 *)(arg0 + 0x3C) = s;
        *(s16 *)(arg0 + 0x3A) = s + 0xC;
    }
}

typedef struct {
    u8 pad0[0x34];
    u32 bf0 : 7;
    u32 bf7 : 25;
} S_EECC0_Sub;

typedef struct {
    u8 pad0[0x10];
    u32 unk10;
    s16 unk14;
    u8 pad16[0x42];
} S_6B2A4_EF1FC;

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC__800EE224__800EE434__800EEAE0", func_800EECC0);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC__800EE224__800EE434__800EEAE0", func_800EF1FC);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC__800EE224__800EE434__800EEAE0", func_800EF478);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC__800EE224__800EE434__800EEAE0", func_800EFA28);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC__800EE224__800EE434__800EEAE0", func_800EFBA4);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC__800EE224__800EE434__800EEAE0", func_800EFCF4);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC__800EE224__800EE434__800EEAE0", func_800F0BEC);

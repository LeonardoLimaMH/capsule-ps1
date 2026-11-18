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

extern s32 rsin(s32);
extern s32 rcos(s32);
extern void func_80013920(void *);

void func_800EF1FC(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    extern u8 D_80085A10[];
    extern S_6B2A4_EF1FC D_8006B2A4[];
    extern s32 D_8008F7C8[];
    extern u8 D_8008ED68[];
    extern s16 D_80069BBE[];
    extern void func_800EECC0();
    extern void func_800FCB5C();
    extern u8 *func_80015B3C(void *, void *, s32);
    extern u8 func_800D7CC4(s16);
    extern u8 func_800A835C(u8 *, s32);
    extern void func_800FE188(void *, void *);
    extern void func_80034AB0(s32);

    u8 *s1;
    u8 *s0;
    u8 *s2;
    register s32 val asm("a1");
    u8 *ed;

    s1 = D_80085A10 + arg2 * 0x2E8 + arg3 * 0x7C;
    s0 = func_80015B3C(func_800EECC0, func_800FCB5C, 1);
    s2 = arg0 + (arg0[0xBCA] * 0x2E8 + 0x5E8) + (arg0 + arg0[0xBCA])[0xBCB] * 0x7C;
    *(u32 *)(s0 + 0x5C) = (D_8006B2A4[s2[0]].unk10 >> 26) & 7;
    val = D_8006B2A4[s2[0]].unk14;
    val += (s2[0x12] - s1[0x12]) * 10;
    if (val < 5) {
        val = 5;
    } else if (val > 100) {
        val = 100;
    }
    if (func_800D7CC4(val) != 0) {
        s1[0x25] = func_800A835C(arg0, arg2);
        s1[0x17] = 1;
        s1[0x28] = ((D_8006B2A4[s2[0]].unk10 >> 25) & 0xE) + 1;
        D_8008F7C8[0] = 1;
    } else {
        D_8008F7C8[0] = 0;
    }
    ed = D_8008ED68;
    *(s32 *)(ed + 0xA3C) = *(s16 *)(*(u8 **)(s1 + 0x70) + 0x46);
    *(s32 *)(ed + 0xA40) = *(s16 *)(*(u8 **)(s1 + 0x70) + 0x4A);
    func_800FE188(s1, s0 + 0x28);
    s0[0x30] = 5;
    s0[0x31] = 5;
    s0[0x32] = 5;
    s0[0x34] = 1;
    s0[0x35] = 1;
    s0[0x36] = 1;
    s0[0x38] = 5;
    *(s16 *)(s0 + 0x3A) = -1;
    s0[0x40] = 1;
    *(s16 *)(s0 + 0x42) = 0x96;
    *(s16 *)(s0 + 0x44) = 0x3C;
    *(s16 *)(s0 + 0x46) = 0x5A;
    *(s32 *)(s0 + 0x4C) = *(s16 *)(*(u8 **)(s1 + 0x70) + 0x4E);
    *(s32 *)(s0 + 0x50) = 0;
    *(s32 *)(s0 + 0x54) = D_80069BBE[0];
    *(u8 **)(s0 + 0x58) = s1;
    func_80034AB0(7);
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC__800EE224__800EE434__800EEAE0", func_800EF478);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC__800EE224__800EE434__800EEAE0", func_800EFA28);

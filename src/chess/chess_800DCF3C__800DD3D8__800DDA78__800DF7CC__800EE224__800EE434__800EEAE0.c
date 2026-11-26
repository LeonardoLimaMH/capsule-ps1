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

static inline s32 mul_800EEAE0(s32 a, s32 b) {
    return a * b;
}
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

void func_800EECC0(u8 *arg0) {
    extern u8 D_80018600[];
    extern s8 D_8008610C[];
    extern struct { u8 pad0[0xA3C]; s32 x; s32 y; } D_8008ED68[];
    extern u8 D_801021B4[];
    extern s8 D_8011974D[];
    extern void func_800F52C4();
    extern void func_80013920(void *);
    extern u8 *func_80015B3C(void *, void *, s32);
    extern void func_80034AB0(s32);
    extern void func_800CA268(s16, s16, s32, s32, s32, s32);
    extern void func_8001F524(s16, s16, s32, s32, s32, s32, s32, s32, s32, s32);
    extern void func_800FE188(void *, void *);
    extern s32 func_800202A4(s32);
    extern void func_800FF190(void *, void *, s32);
    extern void func_8001F1A8(s16, s16, s32, s32, s32, void *, s32, s32, s32);
    s16 sp28[4];
    s32 s3;
    s32 s5;
    s32 s0;
    u8 *obj;
    u8 *ed;
    s8 c;
    s8 c2;
    s8 c3;

    s3 = *(s32 *)(arg0 + 0x50);
    D_8011974D[0] = 0;
    if (0x55 <= s3) {
        func_80013920(arg0);
        *(u32 *)(*(u8 **)(arg0 + 0x58) + 0x18) ^= 0x80000000;
        D_8008610C[0] = 1;
        return;
    }
    *(s16 *)(arg0 + 0x48) = (*(u16 *)(arg0 + 0x48) + 0x96) - (s3 * 0xA0) / 100;
    if (*(s16 *)(arg0 + 0x48) < 0) {
        *(s16 *)(arg0 + 0x48) = 0;
    }
    if (s3 == 0x32) {
        obj = func_80015B3C(D_80018600, func_800F52C4, 1);
        *(obj + 0x28) = 0xFF;
        obj[0x29] = 0xFF;
        obj[0x2A] = 0xFF;
        obj[0x30] = 1;
        obj[0x2C] = 0;
        obj[0x2D] = 0;
        obj[0x2E] = 0;
        *(s16 *)(obj + 0x32) = 0xF;
        func_80034AB0(0x76);
        func_80034AB0(0x50);
        *(u32 *)(*(u8 **)(arg0 + 0x58) + 0x18) |= 0x80000000;
    }
    if (s3 >= 0x33 && (s5 = *(s32 *)((ed = (u8 *)D_8008ED68) + 0xA60)) == 1) {
        func_800CA268(
            (s16)((*(u16 *)(ed + 0xA3C) + *(s32 *)(ed + 0x108) / 2) - 0xA),
            (s16)((*(u16 *)(ed + 0xA40) + *(s32 *)(ed + 0x10C) / 2) - 0x3C),
            2, 0xBB8, 0xBB8, 0xA);
        func_8001F524(
            (s16)(*(u16 *)(ed + 0xA3C) - 0x14),
            (s16)(*(u16 *)(ed + 0xA40) - 0x3E),
            2, 0, *(s32 *)(arg0 + 0x5C), s5, 0x1000, 0x1000, 0xA, 0);
        *(s16 *)(arg0 + 0x42) = 0x96;
        *(s16 *)(arg0 + 0x44) = 0x3C;
        *(s16 *)(arg0 + 0x46) = 0x5A;
        func_800FE188(*(void **)(arg0 + 0x58), sp28);
        s0 = 0x55 - s3;
        sp28[0] += ((func_800202A4(s0) - s0 / 2) * 2) / 3;
        sp28[2] += ((func_800202A4(s0) - s0 / 2) * 2) / 3;
        func_800FF190(*(void **)(arg0 + 0x58), sp28, 0xA);
        (*(S_EECC0_Sub **)(*(u8 **)(arg0 + 0x58) + 0x70))->bf0 = s3 % 2;
    } else if (s3 < 0x32) {
        *(s16 *)(arg0 + 0x42) = 0x258 - s3 * 9;
        *(s16 *)(arg0 + 0x44) = (short)0x1F4 - (s3 * 0x1B8) / 50;
        *(s16 *)(arg0 + 0x46) = 0x258 - (s3 * 0x1FE) / 50;
    } else if (s3 >= 0x33) {
        func_8001F1A8(
            (s16)(D_8008ED68[0].x - 0xA),
            (s16)(D_8008ED68[0].y - 0x3C),
            1, 0, 0, D_801021B4, 1, 2, 3);
    }
    if (s3 < 0x32) {
        arg0[0x34] = s3;
        arg0[0x35] = s3 * 2;
        arg0[0x36] = s3;
        c = (s3 * 0xB4) / 50;
        arg0[0x30] = c;
        arg0[0x31] = (s3 * 0x100) / 50;
        arg0[0x32] = c;
    } else {
        s3 = *(s32 *)(arg0 + 0x50) - 0x32;
        c3 = -0x4C - (s3 * 0xB4) / 35;
        arg0[0x30] = c3;
        arg0[0x31] = -((s3 * 0x100) / 35);
        arg0[0x32] = c3;
        c2 = 0x32 - (s3 * 0x32) / 35;
        arg0[0x34] = c2;
        arg0[0x35] = 0x64 - (s3 * 0x64) / 35;
        arg0[0x36] = c2;
    }
    *(s32 *)(arg0 + 0x50) += 1;
}

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

#include "common.h"
#include "yuugi.h"

INCLUDE_ASM("asm/yuugi/nonmatchings/main", main);

void func_800118BC(void) {
    ResetGraph(0);
    srand(1);
    func_8001A998(__bss_start, 4);
    func_8001C9D8();
}

extern void *D_80078B7C[];
extern void func_80011D84(void);
extern void func_80011B1C(void);
extern void func_80011A60(s32 mode);
extern void func_80011AA4(void);
INCLUDE_ASM("asm/yuugi/nonmatchings/main", func_800118FC);

extern void func_80011AFC();

void func_80011A60(s32 mode) {
    if (mode == 0) {
        func_80033514(0x9858, 0x3138);
    } else {
        func_80033604();
    }
    VSyncCallback(func_80011AFC);
}

void func_80011AA4(void) {
    struct { s16 m[3][3]; s32 t[3]; } m;
    extern void SetColorMatrix(), SetBackColor();

    m.m[2][0] = m.m[1][0] = m.m[0][0] = 0xFF0;
    m.m[2][1] = m.m[1][1] = m.m[0][1] = 0xFF0;
    m.m[2][2] = m.m[1][2] = m.m[0][2] = 0xFF0;
    SetColorMatrix(&m);
    SetBackColor(0x80, 0x80, 0x80);
}

void func_80011AFC(void) {
    func_800337FC();
}

void func_80011B1C(void) {
    extern u8 D_80086228[];
    extern u8 D_8008ED68[];
    u8 *d = D_80086228;
    u8 *d2;

    SetDefDrawEnv(d, 0, 0, 320, 240);
    d2 = d + 0x4594;
    SetDefDrawEnv(d2, 0, 240, 320, 240);
    SetDefDispEnv(d + 0x5C, 0, 240, 320, 240);
    SetDefDispEnv(d + 0x45F0, 0, 0, 320, 240);
    d[0x18] = 1;
    d[0x45AC] = 1;
    *(s16 *)(d + 0x14) = 0x20;
    *(s16 *)(d + 0x45A8) = 0x20;
    *(s16 *)(d + 0x45FA) = 0;
    *(s16 *)(d + 0x66) = 0;
    *(s16 *)(d + 0x45FE) = 240;
    *(s16 *)(d + 0x6A) = 240;
    d[0x19] = 0;
    d[0x1A] = 0;
    d[0x1B] = 0;
    d2[0x19] = 0;
    d2[0x1A] = 0;
    d2[0x1B] = 0;
    ClearOTagR(d + 0x70, 0x408);
    ClearOTagR(d + 0x4604, 0x408);
    *(u8 **)D_8008ED68 = d;
    *(s32 *)(D_8008ED68 + 0x110) = 0;
    *(s32 *)(D_8008ED68 + 0x120) = 0;
    *(s32 *)(D_8008ED68 + 0x118) = 0;
    *(s32 *)(D_8008ED68 + 0x128) = 0;
    *(s32 *)(D_8008ED68 + 0x114) = 0;
    *(s32 *)(D_8008ED68 + 0x124) = 0;
    *(s32 *)(D_8008ED68 + 0x11C) = 240;
    *(s32 *)(D_8008ED68 + 0x12C) = 240;
}

void func_80011C40(void) {
    extern u8 D_80085428[];
    extern struct {
        u8 pad0[0x14];
        u32 f14;
        u8 pad18[0x24];
    } D_80063940[];
    extern struct {
        u8 f0;
        u8 pad1[0xD];
    } D_8006B1FC[];
    extern void func_8001A998();
    extern void func_800267F0();
    u8 *s0 = D_80085428;
    s32 i;

    func_8001A998(s0 + 0x50, 0x578);
    for (i = 0; i < 0x32; i++) {
        s0[0x50 + i * 0xE] = 0xFF;
        s0[0x30C + i * 0xE] = 0xFF;
    }
    func_8001A998(s0 + 0x5D0, 0x7AC);
    func_800267F0();
    for (i = 0; i < 2; i++) {
        (s0 + i)[2] = 0;
        (s0 + i)[4] = 6;
    }
    s0[7] = 0;
    s0[6] = 0;
    s0[0x5CB] = 4;
    for (i = 0; i < 0x67; i++) {
        u32 v = D_80063940[i].f14;
        v &= ~0x20;
        v &= ~0x40;
        D_80063940[i].f14 = v;
    }
    for (i = 0; i < 6; i++) {
        D_80063940[D_8006B1FC[i].f0].f14 |= 0x20;
        D_80063940[D_8006B1FC[i].f0].f14 |= 0x40;
    }
}

void func_80011D84(void) {
    extern u8 D_80085428[];
    extern struct {
        u8 pad0[0x14];
        u32 f14;
        u8 pad18[0x24];
    } D_80063940[];
    extern struct {
        u8 f0;
        u8 pad1[0xD];
    } D_8006B1FC[];
    extern void func_8001A998();
    extern void func_800267F0();
    u8 *s0 = D_80085428;
    s32 i;

    func_8001A998(s0, 0xD84);
    func_800267F0();
    s0[0x5D6] = 1;
    s0[0x5D7] = 1;
    s0[1] = 1;
    s0[4] = 6;
    s0[5] = 6;
    for (i = 0; i < 0x32; i++) {
        s0[0x50 + i * 0xE] = 0xFF;
        s0[0x30C + i * 0xE] = 0xFF;
    }
    s0[0] = 3;
    s0[0x5C8] = 0xF;
    s0[0x5C9] = 1;
    s0[0x5CA] = 0x1A;
    *(u16 *)(s0 + 0x5CC) = 0x9BA8;
    s0[0x5CB] = 4;
    for (i = 0; i < 0x67; i++) {
        u32 v = D_80063940[i].f14;
        v &= ~0x20;
        v &= ~0x40;
        D_80063940[i].f14 = v;
    }
    for (i = 0; i < 6; i++) {
        D_80063940[D_8006B1FC[i].f0].f14 |= 0x20;
        D_80063940[D_8006B1FC[i].f0].f14 |= 0x40;
    }
}

void func_80011ED4(void) {
    func_8001DAAC();
    func_8001E180();
    func_80011F14();
    func_80011F84();
    func_80012578();
}

void func_80011F14(void) {
    extern M2C_UNK D_80065390[];
    s32 var_s0;

    var_s0 = 0;
    do {
        func_80012C7C(func_80019F30(0x20001, var_s0 + 0xD));
        var_s0 += 1;
    } while (var_s0 < 3);
    func_80012E54(func_80019F30(0x50001, 2));
    func_8001A49C(D_80065390);
}

void func_80011F84(void) {
    func_80012A20(func_80019F30(0x50001, 3), 1, 0, 0);
    func_80012A20(func_80019F30(0x50001, 4), 1, 0, 0);
    func_80012A20(func_80019F30(0x50001, 5), 1, 0, 0);
    func_80012A20(func_80019F30(0x50001, 6), 1, 0, 0);
    func_80012A20(func_80019F30(0x50001, 7), 1, 0, 0);
    func_80012A20(func_80019F30(0x50001, 8), 1, 0, 0);
}

void func_80012074(s32 a0, s32 i) {
    u8 *base = (u8 *)0x801CC000;
    register u8 *t asm("t1");
    register u8 *p asm("v1");
    register s32 val asm("t0");
    register s32 v1_var asm("v1");
    register s32 a0_var asm("a0");
    register s32 v0_var asm("v0");
    s32 k;
    u8 *s;
    u8 *q;

    v1_var = i * 3;
    a0_var = v1_var << 4;
    v0_var = a0_var - i;
    v0_var = (v0_var << 3) + i;
    v0_var = (v0_var << 3) + 0x1378;
    t = base + v0_var;

    k = 0;
    val = 0xFF;

    v1_var = ((v1_var + a0_var) << 2) + i;
    v1_var = (v1_var << 3) + 0x40;
    s = base + v1_var;

    p = s;
loop:
    *p = val;
    p += 14;
    k++;
    if (k < 50) goto loop;

    k = 0x66;
    q = s + 0x66;
    do {
        q[0x2BC] = 0;
        k--;
        q--;
    } while (k >= 0);

    s[0x32D] = 1;
    t[0] = 0xF;
    t[2] = 0x1A;
    t[1] = 1;
    *(u16 *)(t + 4) = 0x9BA8;
    func_800260F4(t, i, base, k);
    func_800264BC(s);
}

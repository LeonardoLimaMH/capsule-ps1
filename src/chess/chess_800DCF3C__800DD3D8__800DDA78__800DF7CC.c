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

static inline s32 mul_800DF7CC(s32 a, s32 b) {
    return a * b;
}
static inline s32 lerp_800DF7CC(s32 a, s32 b, s32 ta, s32 tb, s32 d) {
    return (a * ta + b * tb) / d;
}
INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC", func_800DF7CC);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC", func_800DF95C);

void func_800DFD98(int param_1)

{
    extern u8 D_80018600[];
    extern int func_800F5514();
  undefined2 uVar1;
  int iVar2;

  if (*(int *)(param_1 + 0x40) == (int)*(short *)(param_1 + 0x32)) {
    iVar2 = func_80015B3C(D_80018600,func_800F5514,1);
    *(undefined2 *)(iVar2 + 0x28) = *(undefined2 *)(param_1 + 0x2c);
    *(undefined2 *)(iVar2 + 0x2a) = *(undefined2 *)(param_1 + 0x2e);
    uVar1 = *(undefined2 *)(param_1 + 0x30);
    *(undefined1 *)(iVar2 + 0x32) = 1;
    *(undefined1 *)(iVar2 + 0x33) = 1;
    *(undefined1 *)(iVar2 + 0x34) = 8;
    *(undefined2 *)(iVar2 + 0x36) = 0x28;
    *(undefined1 *)(iVar2 + 0x2e) = 0xff;
    *(undefined1 *)(iVar2 + 0x2f) = 0xff;
    *(undefined1 *)(iVar2 + 0x30) = 0;
    *(undefined2 *)(iVar2 + 0x38) = 0x1e;
    *(undefined2 *)(iVar2 + 0x2c) = uVar1;
    *(undefined1 *)(param_1 + 0x38) = 0xff;
    *(undefined1 *)(param_1 + 0x39) = 0xff;
    *(undefined1 *)(param_1 + 0x3a) = 0x7f;
  }
  return;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC", func_800DFE44);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC", func_800E01D8);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC", func_800E0360);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC", func_800E0538);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC", func_800E0A1C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC", func_800E0E2C);

void func_800E1180(u8 *arg0) {
    s32 v;

    *(s32 *)(arg0 + 0x18) += 1;
    *(u16 *)(arg0 + 0x3A) += 14;
    *(u16 *)(arg0 + 0x3C) += 14;
    v = 0x7F - (*(s32 *)(arg0 + 0x18) * 127) / 30;
    arg0[0x32] = v;
    arg0[0x31] = v;
    arg0[0x30] = v;
    if (*(s32 *)(arg0 + 0x18) >= 30) {
        func_80013920(arg0);
    }
}

void func_800E1210(void *arg0) {
    M2C_FIELD(arg0, u16 *, 0x34) = (u16) (M2C_FIELD(arg0, u16 *, 0x34) + 0x10);
    M2C_FIELD(arg0, u16 *, 0x3C) = (u16) (M2C_FIELD(arg0, u16 *, 0x3C) + 0x40);
    if ((u16) M2C_FIELD(arg0, u16 *, 0x34) >= 0x191U) {
        func_80013920();
    }
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC", func_800E1258);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC", func_800E1978);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC", func_800E1F68);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC", func_800E21D8);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC", func_800E260C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC", func_800E2778);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC", func_800E2D34);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC", func_800E31BC);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC", func_800E33FC);

void func_800E3798(u8 *arg0) {
    extern u8 D_8008ED68[];
    extern u8 *func_80013920(void *);
    u8 *ed = D_8008ED68;
    register s32 h asm("a1");
    s32 n;
    s32 diff;

    n = *(s32 *)(ed + 0x108) / 2 + 0x28;
    *(volatile s16 *)(arg0 + 0x36) = *(u16 *)(arg0 + 0x36) + 6;
    *(u16 *)(arg0 + 0x38) += 6;
    *(u16 *)(arg0 + 0x3E) += 4;
    h = *(s16 *)(arg0 + 0x36);
    if (n < h || *(s32 *)(ed + 0xA3C) == 1) {
        func_80013920(arg0);
    } else {
        diff = n - h;
        if (*(s16 *)(arg0 + 0x1C) != 0) {
            arg0[0x2E] = diff * 0xFF / n;
        } else {
            arg0[0x30] = diff * 0xFF / n;
        }
    }
}

void func_800E3864(u8 *arg0) {
    extern u8 D_8008ED68[];
    extern u8 *func_80013920(void *);
    u8 *ed = D_8008ED68;
    s32 d = 30;
    s32 k = 400;
    s32 v;
    s32 n;
    s32 c;
    s32 s;

    v = *(s16 *)(arg0 + 0x16) + (ed[0x103] >= 2 ? ed[0x103] : 1);
    *(s16 *)(arg0 + 0x16) = v;
    n = (s16)v;
    if (n > d) {
        func_80013920(arg0);
    } else {
        c = (d - n) * 0xFF / d;
        s = (k * n) / d;
        *(u16 *)(arg0 + 0x3E) += 200;
        arg0[0x32] = c;
        arg0[0x31] = c;
        arg0[0x30] = c;
        *(s16 *)(arg0 + 0x3C) = s;
        *(s16 *)(arg0 + 0x3A) = s + 0x30;
    }
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC", func_800E392C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC", func_800E3F88);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC", func_800E41E0);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC", func_800E4414);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC", func_800E4764);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC", func_800E4914);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC", func_800E4B48);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC", func_800E4EAC);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC", func_800E5078);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC", func_800E5530);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC", func_800E584C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC", func_800E5D18);

void func_800E6828(u8 *arg0) {
    register s32 d = 30;
    s32 n = *(s32 *)(arg0 + 0x18);
    s32 v;

    *(s32 *)(arg0 + 0x18) = n + 1;
    if (n > d) {
        func_80013920(arg0);
    } else {
        *(s16 *)(arg0 + 0x44) = (n << 11) / d;
        v = (n * 255) / d;
        arg0[0x36] = v;
        arg0[0x35] = v;
        arg0[0x34] = v;
        arg0[0x32] = v;
        arg0[0x31] = v;
        arg0[0x30] = v;
    }
}

s32 func_800E68A4(s32 arg0, s32 arg1, u8 *arg2, s32 arg3) {
    extern u8 D_8008ED68[];
    extern s32 D_80119710[];
    extern s32 D_80119714[];
    extern s32 func_800A83E0();
    extern s32 func_80034AB0();
    u8 *ed = D_8008ED68;
    switch ((s32)*(u16 *)(ed + 0xEC)) {
    case 0:
        arg2[0x25] = func_800A83E0(arg0, arg2, arg3);
        arg2[0x17] = 0x88;
        arg2[0x23] = 1;
        *(u16 *)(ed + 0xEC) += 1;
        D_80119714[0] = 0;
        break;
    case 1: {
        s32 *t = D_80119710;
        if (t[1] < 0x1E) break;
        func_80034AB0(0x801C);
        t[1] = 0;
        *(u16 *)(ed + 0xEC) += 1;
        break;
    }
    case 2:
        if (D_80119714[0] < 0x3C) break;
    case 99:
        return 1;
    }
    return 0;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC", func_800E69A8);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC", func_800E6C14);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC", func_800E6F18);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC", func_800E7328);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC", func_800E78A4);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC", func_800E7E5C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC", func_800E7F4C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC", func_800E824C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC", func_800E85E0);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC", func_800E8994);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC", func_800E8B68);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC", func_800E8F64);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC", func_800E9294);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC", func_800E97A0);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC", func_800E9C98);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC", func_800EA3E4);

void func_800EA824(s32 arg0) {
    extern u8 D_8008ED68[];
    extern s32 func_800FF190();
    extern s32 func_800202A4();
    s32 s2 = *(s32*)(arg0 + 0x14);
    s32 s1 = *(s32*)(s2 + 0x70);
    s32 s5 = *(s32*)(s2 + 0x74);
    s32 s4 = 3;
    s16 v;
    s32 v2;
    s32 s0;
    s32 t;
    s32 base = *(s16*)(arg0 + 0x1e);
    u16 buf[3];

    if (D_8008ED68[0x103] >= 2) {
        v2 = base + D_8008ED68[0x103];
    } else {
        v2 = base + 1;
    }
    *(s16*)(arg0 + 0x1e) = v2;
    buf[0] = *(u16*)(arg0 + 0x2c);
    buf[1] = *(u16*)(arg0 + 0x2e);
    buf[2] = *(u16*)(arg0 + 0x30);
    s0 = (s16)v2;
    func_800FF190(s2, buf, 1);
    t = s0;
    if (t < 0) {
        t = s0 + 3;
    }
    *(u32*)(s1 + 0x34) = *(u32*)(s1 + 0x34) & 0xFFFFFF80 | (u32)(s0 + (t >> 2) * -4 < 2);
    if (s0 < 10) {
        v = *(s16*)(s1 + 0x46) + (func_800202A4(s4 * 2 + 1) - s4);
        *(s16*)(s1 + 0x46) = v;
        *(s16*)(s5 + 0x46) = v;
        v = *(s16*)(s1 + 0x4a) + (func_800202A4(s4 * 2 + 1) - s4);
        *(s16*)(s1 + 0x4a) = v;
        *(s16*)(s5 + 0x4a) = v;
    } else {
        *(u32*)(s2 + 0x18) ^= 0x80000000;
        *(u32*)(s1 + 0x34) &= 0xFFFFFF80;
        func_80013920(arg0);
    }
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC", func_800EA97C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC", func_800EADFC);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC", func_800EAFE0);

void func_800EB5BC(u8 *arg0) {
    extern void func_80013920();
    s32 k = 0x186A0;
    u16 sp10[4];
    s16 v;
    register s32 done asm("v0");
    register s32 limit asm("v1") = 0x280000;
    register u16 t asm("v0");
    register u8 *p asm("a0");
    u8 *a;
    register u8 *b asm("v0");

    p = *(u8 **)(arg0 + 0x14);
    t = *(u16 *)(arg0 + 0x1C) + 1;
    *(u16 *)(arg0 + 0x1C) = t;
    done = (t << 16) > limit;
    if (done) {
        a = *(u8 *volatile *)(p + 0x70);
        b = *(u8 *volatile *)(p + 0x74);
        *(s16 *)(b + 0x54) = 0;
        *(s16 *)(a + 0x54) = 0;
        func_80013920(arg0);
        return;
    }
    if (*(s16 *)(arg0 + 0x1E) > 0) {
        b = *(u8 **)(p + 0x74);
        v = *(u16 *)(b + 0x54) + 0x28;
        p = *(u8 **)(p + 0x70);
    } else {
        b = *(u8 **)(p + 0x74);
        v = *(u16 *)(b + 0x54) - 0x28;
        p = *(u8 **)(p + 0x70);
    }
    *(s16 *)(b + 0x54) = v;
    *(s16 *)(p + 0x54) = v;
    *(s32 *)(arg0 + 0x3C) += k;
    *(s32 *)(arg0 + 0x2C) += *(s32 *)(arg0 + 0x38);
    *(s32 *)(arg0 + 0x34) += *(s32 *)(arg0 + 0x40);
    *(s32 *)(arg0 + 0x30) += *(s32 *)(arg0 + 0x3C);
    sp10[0] = *(u16 *)(arg0 + 0x2E);
    sp10[1] = *(u16 *)(arg0 + 0x32);
    sp10[2] = *(u16 *)(arg0 + 0x36);
    func_800FF190(*(void **)(arg0 + 0x14), sp10, 0xA);
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC", func_800EB6CC);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC", func_800EB968);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC", func_800EBBBC);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC", func_800EBD84);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC", func_800EC22C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC", func_800EC5B0);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC", func_800EC878);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC", func_800ECB98);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC", func_800ECC94);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC", func_800ED3E0);

void func_800ED9CC(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    extern u8 D_80085A10[];
    extern s32 func_800EE7D4();
    extern s32 func_800FB368();
    u8 *obj;
    u8 *p;

    obj = (u8 *)func_80015B3C(func_800EE7D4, func_800FB368, 1);
    p = D_80085A10 + arg2 * 0x2E8 + arg3 * 0x7C;
    func_800DDA78(p);
    func_800FE188(p, obj + 0x28);
    obj[0x30] = 0x80;
    obj[0x31] = 0x80;
    obj[0x32] = 0x80;
    obj[0x34] = 0x10;
    *(u16 *)(obj + 0x36) = 0x32;
    *(u16 *)(obj + 0x3A) = 0;
    *(u16 *)(obj + 0x38) = 0x14;
    obj[0x3C] = 1;
    *(u16 *)(obj + 0x3E) = GetTPage(0, 1, 0x280, 0x100);
    *(u16 *)(obj + 0x40) = GetClut(0, 0x1F0);
    obj[0x42] = 0;
    D_80085A10[0x6FC] = 1;
}

typedef struct {
    u8 pad0[0x34];
    u32 bf0 : 7;
    u32 bf7 : 25;
} S_EDAC8_Sub;
void func_800EDAC8(u8 *arg0) {
    extern u8 D_80018600[];
    extern s8 D_8008610C[];
    extern int func_800F5514();
    u8 *obj;
    S_EDAC8_Sub *sub;
    s16 tmp;

    sub = *(S_EDAC8_Sub **)(arg0 + 0x18);
    if (*(s32 *)(arg0 + 0x40) == 2) {
        func_80034AB0(0x8009);
    }
    if (*(s32 *)(arg0 + 0x40) == *(s16 *)(arg0 + 0x32)) {
        obj = (u8 *)func_80015B3C(D_80018600, func_800F5514, 1);
        *(u16 *)(obj + 0x28) = *(u16 *)(arg0 + 0x2C);
        *(u16 *)(obj + 0x2A) = *(u16 *)(arg0 + 0x2E);
        tmp = *(u16 *)(arg0 + 0x30);
        obj[0x32] = 1;
        obj[0x33] = 1;
        obj[0x34] = 8;
        *(u16 *)(obj + 0x36) = 0x28;
        obj[0x2E] = 0xFF;
        obj[0x2F] = 0xFF;
        obj[0x30] = 0;
        *(u16 *)(obj + 0x38) = 0x1E;
        *(u16 *)(obj + 0x2C) = tmp;
        arg0[0x38] = 0xFF;
        arg0[0x39] = 0xFF;
        arg0[0x3A] = 0x7F;
        func_80034AB0(0x65);
    }
    if (*(s16 *)(arg0 + 0x32) < *(s32 *)(arg0 + 0x40)) {
        sub->bf0 = (*(s32 *)(arg0 + 0x40) % 3) != 0;
    }
    if (*(s32 *)(arg0 + 0x40) == *(s16 *)(arg0 + 0x36)) {
        sub->bf0 = 0;
        *D_8008610C = 1;
    }
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC", func_800EDC1C);

void func_800EDD8C(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
    extern u8 D_80085A10[];
    extern int func_800EE8CC();
    extern int func_800FB650();
  undefined2 uVar1;
  int iVar2;

  iVar2 = func_80015B3C(func_800EE8CC,func_800FB650,1);
  func_800FE188(D_80085A10 + param_3 * 0x2e8 + param_4 * 0x7c,iVar2 + 0x28);
  *(undefined1 *)(iVar2 + 0x30) = 0x7f;
  *(undefined1 *)(iVar2 + 0x31) = 0x7f;
  *(undefined1 *)(iVar2 + 0x32) = 0x7f;
  *(undefined1 *)(iVar2 + 0x34) = 0x10;
  *(undefined2 *)(iVar2 + 0x36) = 0x3c;
  *(undefined2 *)(iVar2 + 0x3e) = 0x40;
  *(undefined2 *)(iVar2 + 0x3a) = 0;
  *(undefined2 *)(iVar2 + 0x3c) = 0;
  *(undefined1 *)(iVar2 + 0x40) = 1;
  uVar1 = GetTPage(0,1,0x280,0x100);
  *(undefined2 *)(iVar2 + 0x42) = uVar1;
  uVar1 = GetClut(0xb0,0x1f0);
  *(undefined2 *)(iVar2 + 0x44) = uVar1;
  *(undefined1 *)(iVar2 + 0x46) = 0;
  func_800374E8(0x800f);
  return;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC", func_800EDE7C);

void func_800EE02C(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
    extern u8 D_80018600[];
    extern u8 D_80085A10[];
    extern int func_800EDE7C();
  int iVar1;
  undefined1 *puVar2;

  iVar1 = func_80015B3C(func_800EDE7C,D_80018600,1);
  puVar2 = D_80085A10 + param_3 * 0x2e8 + param_4 * 0x7c;
  *(uint *)(puVar2 + 0x18) = *(uint *)(puVar2 + 0x18) | 0x80000;
  *(undefined1 **)(iVar1 + 0x14) = puVar2;
  func_800FE188(puVar2,iVar1 + 0x2c);
  func_80034AB0(0x800d);
  return;
}

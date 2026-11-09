#include "ghidra.h"
#include "common.h"
#include "ghidra.h"

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800FE98C", func_800FE98C);

#include "common.h"

void func_800FEBF4(void *arg0) {
    extern M2C_UNK D_80069AD4[];
    M2C_GFIELD(D_80069AD4, s32, 0x44) = (s32) -M2C_FIELD(arg0, s16 *, 0);
    M2C_GFIELD(D_80069AD4, s32, 0x48) = (s32) -M2C_FIELD(arg0, s16 *, 2);
    M2C_GFIELD(D_80069AD4, s32, 0x4C) = (s32) -M2C_FIELD(arg0, s16 *, 4);
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800FE98C", func_800FEC2C);

void func_800FED90(u8 *arg0) {
    extern u8 *D_80118C18[];
    s16 v[3];
    s16 *p = v;
    s32 a = arg0[0x15];
    s32 b = arg0[0x16];

    v[0] = a * 100 - 0x226;
    p[2] = b * 100 - 0x226;
    p[1] = -(((*(u32 *)(D_80118C18[0] + a * 0x34 + b * 4)) >> 19) & 7) * 50;
    func_800FEC2C(p);
}

void func_800FEE40(s32 arg0, s32 arg1) {
    extern u8 *D_80118C18[];
    s16 v[3];
    s16 *p = v;

    v[0] = arg0 * 100 - 0x226;
    p[2] = arg1 * 100 - 0x226;
    if (arg0 < 13 && arg1 < 13) {
        p[1] = -(((*(u32 *)(D_80118C18[0] + arg0 * 0x34 + arg1 * 4)) >> 19) & 7) * 50;
    } else {
        p[1] = 0;
    }
    func_800FEC2C(p);
}

#include "ghidra.h"
void func_800FEF04(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_10 [8];

  func_800FF460(param_1,param_2,2,1,auStack_10);
  func_800FEC2C(auStack_10);
  return;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800FE98C", func_800FEF40);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800FE98C", func_800FF0A0);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800FE98C", func_800FF190);

void func_800FF2CC(s32 arg0, void *arg1, s16 arg2) {
    extern u8 D_80119710[];
    extern u8 D_800906A0[];
    extern s32 D_8008ED68[];
    s16 sp[2];
    s32 b, c;
    s32 r;
    s32 d;
    u8 *q = *(u8 **)((u8 *)arg0 + 0x70);

    if (D_80119710[0x3d] == 0) {
        func_8002CEC0(D_800906A0);
        D_80119710[0x3d] = 1;
    }
    r = RotTransPers(arg1, sp, &b, &c);
    d = 0x140000 / r;
    *(s16 *)(q + 0x46) = sp[0] - D_8008ED68[0x108 / 4] / 2;
    *(s16 *)(q + 0x4a) = sp[1] - D_8008ED68[0x10c / 4] / 2;
    *(s16 *)(q + 0x4e) = r - 15 - arg2;
    *(s16 *)(q + 0x50) = d;
    *(s16 *)(q + 0x52) = d & ~0xf;
    *(s16 *)(q + 0x50) = d & ~0xf;
}

void func_800FF3B4(void *arg0, void *arg1, s32 arg2, s32 arg3, void *arg4) {
    s32 temp_t0;

    temp_t0 = arg2 - arg3;
    M2C_FIELD(arg4, s16 *, 0) = (s16) ((s32) ((M2C_FIELD(arg0, s16 *, 0) * temp_t0) + (M2C_FIELD(arg1, s16 *, 0) * arg3)) / arg2);
    M2C_FIELD(arg4, s16 *, 2) = (s16) ((s32) ((M2C_FIELD(arg0, s16 *, 2) * temp_t0) + (M2C_FIELD(arg1, s16 *, 2) * arg3)) / arg2);
    M2C_FIELD(arg4, s16 *, 4) = (s16) ((s32) ((M2C_FIELD(arg0, s16 *, 4) * temp_t0) + (M2C_FIELD(arg1, s16 *, 4) * arg3)) / arg2);
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800FE98C", func_800FF460);

void func_800FF820(void);
s32 func_800FF644(void) {
    extern u8 D_80085428[];
    u8 i, j;
    s32 sum = 0;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 6; j++) {
            u8 *e = D_80085428 + (j * 0x7c + i * 0x2e8);
            sum += ((i * 6 + j) * 169 + 1) * (e[0x5fd] * 13 + e[0x5fe]);
        }
    }
    return sum;
}

#include "common.h"

void func_800FF700(void) {
    extern M2C_UNK D_80119600[];
    func_8001A998(D_80119600, 0x54);
    M2C_FIELD(D_80119600, s32 *, 0x2C) = func_800FF644();
}

void func_800FF740(u8 *arg0) {
    extern u8 D_80118C18[];
    extern u8 D_80085FF2[];
    u8 *p;

    p = D_80118C18 + (D_80118C18[0x9E9] = (D_80118C18[0x9E9] + 1) % 10) * 4;
    p[0x9EA] = (D_80085FF2[0] << 7) | (arg0[0] + 1);
    p[0x9EB] = arg0[1];
    p[0x9EC] = arg0[3] + arg0[2] * 13;
    p[0x9ED] = arg0[5] + arg0[4] * 13;
    *(s32 *)(p + 0xA14) = func_800FF644();
    func_800FF820();
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800FE98C", func_800FF820);

s32 func_800FF8E0(u8 *arg0) {
    extern u8 D_80118C18[];
    u8 *p = D_80118C18 + ((D_80118C18[0x9E9] - D_80118C18[0x9E8] + 11) % 10 & 0xFF) * 4;
    s32 r;

    if (arg0[0] != p[0x9EA]) {
        r = 0;
    } else {
        r = arg0[2] == p[0x9EC];
    }
    return r;
}

u8 func_800FF96C(void) {
    extern u8 D_80118C18[];
    u8 i;
    u8 n = 0;

    for (i = 0; i < 10; i += 2) {
        u8 *q = D_80118C18 + (((D_80118C18[0x9E9] - i) + 10) % 10 & 0xFF) * 4;
        u8 v = q[0x9EB];
        if (v != 0) {
            if (v != 1) {
                return n;
            }
            n++;
        }
    }
    return n;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800FE98C", func_800FFA00);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800FE98C", func_800FFAB0);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800FE98C", func_800FFCAC);

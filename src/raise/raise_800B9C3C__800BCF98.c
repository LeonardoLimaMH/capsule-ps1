#include "common.h"

void func_800BCF98(s32 arg0)
{
  M2C_UNK *new_var;
  extern M2C_UNK D_800EFF58[];
  new_var = D_800EFF58;
  *((s32 *) (((s8 *) new_var) + 0x33C)) = arg0;
  *((s32 *) (((s8 *) new_var) + 0x340)) = 0x20;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C__800BCF98", func_800BCFB0);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C__800BCF98", func_800BD164);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C__800BCF98", func_800BD2E0);

void func_800BD4D0(void)
{
    extern u8 D_800EFF58[];
    extern u8 D_80091620[];
    extern u16 D_8006AF80[];
    extern u8 D_800F038C[];
    extern u16 D_800F0568[];
    u16 v;
    s32 i;
    u8 *p;
    u8 *q;
    func_8001A998(D_80091620 + *D_8006AF80 * 0x1A8, 8);
    func_8001A998(D_800F038C, 8);
    v = 0xA6;
    p = D_800F038C - 0x434;
    *(s32 *)(p + 0x43C) = 0;
    *(s32 *)(p + 0x428) = 0;
    for (i = 7; i >= 0; i--) {
        D_800F0568[i] = v;
    }
    q = D_800EFF58;
    *(s32 *)(q + 0x440) = 0;
    *(s32 *)(q + 0x444) = 0;
}

void func_800BD57C(void)
{
    extern u8 D_800EFF58[];
    extern u8 D_80091620[];
    extern u16 D_8006AF80[];
    extern u8 D_800F038C[];
    extern u16 D_800F0568[];
    s32 i;
    s32 j;
    u8 *p;
    u8 *q;
    func_8001611C(0x1000);
    func_8001A998(D_80091620 + *D_8006AF80 * 0x1A8, 8);
    func_8001A998(D_800F038C, 8);
    p = D_800F038C - 0x434;
    j = 7;
    *(s32 *)(p + 0x43C) = 0;
    *(s32 *)(p + 0x428) = 0;
    for (; j >= 0; j--) {
        D_800F0568[j] = 0xA6;
    }
    q = D_800EFF58;
    *(s32 *)(q + 0x440) = 0;
    *(s32 *)(q + 0x444) = 0;
    func_800BD830();
    func_800BD8A8();
    func_800BD920();
    func_800BDA18();
    for (i = 0; i < 2; i++) {
        func_800BD998(i);
    }
    func_800BE020(3);
}

void func_800BD66C(s32 arg0)
{
  s8 *new_var;
  extern M2C_UNK D_800EFF58[];
  new_var = (s8 *) D_800EFF58;
  *((s32 *) (new_var + 0x420)) = arg0;
  *((s32 *) (((s8 *) D_800EFF58) + 0x424)) = 0x20;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C__800BCF98", func_800BD684);

#include "common.h"

extern u8 D_800EE5F0[];
extern u8 D_800EFF58[];

s32 func_800BD830(void) {
    s32 r = func_800BDE30(0x19, 0x38, -0x50, 4, 0, D_800EE5F0, M2C_GFIELD(D_800EFF58, s32, 0x5F4), 1, 0, 0, 2, 0, 0);

    M2C_GFIELD(D_800EFF58, s32, 0x5F0) = r;
    return r;
}

#include "common.h"

extern u8 D_800EE5F0[];
extern u8 D_800EFF58[];

s32 func_800BD8A8(void) {
    s32 r = func_800BDE30(0x1A, 0x50, -0x88, 5, 0, D_800EE5F0, M2C_GFIELD(D_800EFF58, s32, 0x430), 1, 0, 0, 2, 0, 0);

    M2C_GFIELD(D_800EFF58, s32, 0x42C) = r;
    return r;
}

#include "common.h"

extern u8 D_800EE5F0[];
extern u8 D_800EFF58[];

s32 func_800BD920(void) {
    s32 r = func_800BDE30(0x1A, 0x10, 0x160, 5, 0, D_800EE5F0, M2C_GFIELD(D_800EFF58, s32, 0x5B4), 1, 0, 0, 2, 0, 0);

    M2C_GFIELD(D_800EFF58, s32, 0x5B0) = r;
    return r;
}

#include "common.h"

void func_800BD998(s32 arg0)
{
  extern u8 D_800EE5F0[];
  extern u8 D_800EFF58[];
  void *temp_s0;
  s8 *new_var;
  temp_s0 = (arg0 * 4) + (new_var = D_800EFF58);
  new_var = (s8 *) temp_s0;
  *((s32 *) (((s8 *) temp_s0) + 0x5E0)) = func_800BDE30(0x19, 0, 0, 4, 0, D_800EE5F0, *((s32 *) (new_var + 0x5E8)), 0, 1, 0, 2, 0, 0);
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C__800BCF98", func_800BDA18);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C__800BCF98", func_800BDB68);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C__800BCF98", func_800BDE30);

extern u8 D_800EE5F0[];
extern u8 D_800EFF58[];


extern u8 D_800EE5F0[];
extern u8 D_800EFF58[];


extern u8 D_800EE5F0[];
extern u8 D_800EFF58[];


extern u8 D_800178F8[];
extern s32 D_8008ED68[];
extern s32 D_800F0550[];
extern s32 D_800F0578[];
extern void func_800BB814();
extern void func_800BC7B0();
extern void func_800BD164();
extern void func_800BDB68();
extern void func_8009AEC8();
extern void func_8009AF70();
extern u8 *func_80015B3C(void *, u8 *, s32);
extern void func_80015EF8(u8 *);
void func_800BE020(s32 arg0) {
    void *fn = 0;
    s32 s1 = 3;
    u8 *o;
    s16 *p;
    s32 ed10c;
    s32 temp;

    switch (arg0) {
    case 0: fn = func_800BB814; break;
    case 1: fn = func_800BC7B0; break;
    case 2: fn = func_800BD164; break;
    case 3: fn = func_800BDB68; s1 = 8; break;
    case 4: fn = func_8009AEC8; break;
    case 5: fn = func_8009AF70; break;
    }
    o = func_80015B3C(fn, D_800178F8, 0x1A);
    if (o != 0) {
        func_80015EF8(o);
        *(s16 *)(o + 0x46) = 0x2C - D_8008ED68[0x108 / 4] / 2;
        ed10c = D_8008ED68[0x10C / 4];
        *(s16 *)(o + 0x4E) = 5;
        o[0x58] = 0x80;
        o[0x59] = 0x80;
        o[0x5A] = 0x80;
        temp = s1 * 32 + 0xD8;
        *(s16 *)(o + 0x14) = 0;
        *(s32 *)(o + 0x38) |= 0x40;
        *(s16 *)(o + 0x4A) = temp - ed10c / 2;
        p = (s16 *)(o + 0x14);
        p[2] = 0xF0;
        p[3] = 0x10;
        p[1] = 0;
        D_800F0550[0] = (s32)o;
        if (arg0 == 2) D_800F0578[0] = (s32)o;
    }
}


extern u8 D_800F05E8[];
extern s32 func_8001F1A8(s32, s32, s32, s32, s32, void *, s32, s32, s32);


extern s32 D_800F062C[], D_800ED890, D_800ED894;
extern u16 D_800F2CF2, D_800F2CF0, D_800F2D10, D_80100D4E, D_80100D48, D_80100D4C, D_80100D44;
extern u16 D_80100D46, D_800F062A, D_80100D4A, D_800F0654, D_800F0656;

#include "common.h"

extern u8 D_800F05E8[];
extern s32 func_8001F1A8(s32, s32, s32, s32, s32, void *, s32, s32, s32);

s32 func_800BE190(u8 *o) {
    return func_8001F1A8((s16)(*(u16 *)(o + 0x46) + 8), *(s16 *)(o + 0x4A), 0, 1, 0, D_800F05E8, 1, 0xE, 4);
}

#include "common.h"

extern s32 D_800F062C[], D_800ED890, D_800ED894;
extern u16 D_800F2CF2, D_800F2CF0, D_800F2D10, D_80100D4E, D_80100D48, D_80100D4C, D_80100D44;
extern u16 D_80100D46, D_800F062A, D_80100D4A, D_800F0654, D_800F0656;

s32 func_800BE1F0(void) {
    s32 i;
    D_800ED890 = 0;
    D_800ED894 = 0;
    D_800F2CF2 = 0;
    D_800F2CF0 = 0;
    D_800F2D10 = 0;
    D_80100D4E = 0;
    D_80100D48 = 0xFF;
    D_80100D4C = 0;
    D_80100D44 = 0;
    D_80100D46 = 0;
    D_800F062A = 0x10;
    for (i = 4; i >= 0; i--) D_800F062C[i] = 0;
    D_80100D4A = 0;
    D_800F0654 = 0;
    D_800F0656 = 0;
    return 0;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C__800BCF98", func_800BE290);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C__800BCF98", func_800BE434);

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

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C__800BCF98", func_800BD4D0);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C__800BCF98", func_800BD57C);

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

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C__800BCF98", func_800BE020);

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

#include "common.h"

void func_800BC728(s32 arg0)
{
  int new_var3;
  M2C_UNK *new_var2;
  extern M2C_UNK D_800EE5F0[];
  M2C_UNK *new_var;
  extern M2C_UNK D_800EFF58[];
  M2C_UNK var_a2;
  void *temp_s0;
  var_a2 = 0x90;
  if (arg0 == 0)
  {
 do { var_a2 = 0x38; } while (0);
  }
  new_var3 = 2;
  new_var = D_800EFF58;
  new_var2 = new_var;
  temp_s0 = new_var2;
  temp_s0 = (arg0 * 4) + temp_s0;
  *((s32 *) (((s8 *) temp_s0) + 0x31C)) = func_800BC8FC(0x19, -0xE0, var_a2, 4, 0, D_800EE5F0, *((s32 *) (((s8 *) temp_s0) + 0x324)), 0, 1, 0, new_var3, 0, 0);
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C__800BC728", func_800BC7B0);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C__800BC728", func_800BC8FC);

void func_800BCAEC(void)
{
    extern u8 D_800EFF58[];
    extern s16 D_8006AF90[];
    s32 i;
    M2C_GFIELD(D_800EFF58, s32, 0x33C) = 1;
    M2C_GFIELD(D_800EFF58, s32, 0x340) = 0x20;
    M2C_GFIELD(D_800EFF58, s32, 0x344) = 0;
    M2C_GFIELD(D_800EFF58, s32, 0x348) = D_8006AF90[0] + 4;
    for (i = 0; i < D_8006AF90[0]; i++) {
        *(s32 *)(D_800EFF58 + 0x3E8 + i * 4) = D_8006AF90[i + 1];
    }
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C__800BC728", func_800BCB58);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C__800BC728", func_800BCC98);

#include "common.h"

extern u8 D_800EE5F0[];
extern u8 D_800EFF58[];

s32 func_800BCD9C(void) {
    s32 r = func_800BD2E0(0x1A, -0xC0, 0x28, 5, 0, D_800EE5F0, M2C_GFIELD(D_800EFF58, s32, 0x350), 1, 0, 0, 2, 0, 0);

    M2C_GFIELD(D_800EFF58, s32, 0x34C) = r;
    return r;
}

void func_800BCE14(void) {

}

#include "common.h"

extern u8 D_800EE5F0[];
extern u8 D_800EFF58[];

s32 func_800BCE1C(void) {
    s32 r = func_800BD2E0(0x1A, 0x1C0, 0x48, 5, 0, D_800EE5F0, M2C_GFIELD(D_800EFF58, s32, 0x358), 1, 0, 0, 2, 0, 0);

    M2C_GFIELD(D_800EFF58, s32, 0x354) = r;
    return r;
}

extern u8 D_800EE630[];
extern s16 D_8006AF90[];
extern s32 func_800BD2E0();
s32 func_800BD2E0();
void func_800BCE94(void)
{
    struct S {
        u8 _0[0x344];
        s32 f344;
        u8 _348[0x398 - 0x348];
        s32 f398[1];
        u8 _39C[0x3D4 - 0x39C];
        s32 f3D4[1];
        u8 _3D8[0x414 - 0x3D8];
        s32 f414;
    };
    s32 idx = (*(struct S *)D_800EFF58).f3D4[(*(struct S *)D_800EFF58).f344];
    (*(struct S *)D_800EFF58).f414 = func_800BD2E0(
        0x19, 0x1E0, 0x80, 4,
        0, D_800EE630,
        (*(struct S *)D_800EFF58).f398[idx],
        0, 0, 0, 2, 0, 0);
}

#include "common.h"

extern u8 D_800EE5F0[];
extern u8 D_800EFF58[];

s32 func_800BCF20(void) {
    s32 r = func_800BD2E0(0x1A, 0x38, 0x118, 5, 0, D_800EE5F0, M2C_GFIELD(D_800EFF58, s32, 0x41C), 1, 0, 0, 2, 0, 0);

    M2C_GFIELD(D_800EFF58, s32, 0x418) = r;
    return r;
}

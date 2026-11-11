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

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C__800BC728", func_800BCAEC);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C__800BC728", func_800BCB58);

extern u8 D_800178F8[];
extern u8 D_8008ED68[];
extern s32 func_800BD164();
void func_800BCC98(void) {
    extern u8 D_800EFF58[];
    s16 *r;
    u8 *p;

    p = (u8 *)func_80015B3C(func_800BD164, D_800178F8, 0x1A);
    M2C_GFIELD(D_800EFF58, u8 *, 0x5FC) = p;
    if (p != 0) {
        func_80015EF8(p);
        *(s16 *)(M2C_GFIELD(D_800EFF58, u8 *, 0x5FC) + 0x46) = 0x1C4 - M2C_GFIELD(D_8008ED68, s32, 0x108) / 2;
        *(s16 *)(M2C_GFIELD(D_800EFF58, u8 *, 0x5FC) + 0x4A) = 0x4C - M2C_GFIELD(D_8008ED68, s32, 0x10C) / 2;
        *(s16 *)(M2C_GFIELD(D_800EFF58, u8 *, 0x5FC) + 0x4E) = 5;
        *(u8 *)(M2C_GFIELD(D_800EFF58, u8 *, 0x5FC) + 0x58) = 0x80;
        *(u8 *)(M2C_GFIELD(D_800EFF58, u8 *, 0x5FC) + 0x59) = 0x80;
        *(u8 *)(M2C_GFIELD(D_800EFF58, u8 *, 0x5FC) + 0x5A) = 0x80;
        r = (s16 *)(M2C_GFIELD(D_800EFF58, u8 *, 0x5FC) + 0x14);
        r[0] = 0;
        r[1] = 0;
        r[2] = 0x3A;
        r[3] = 0x4A;
        *(s32 *)(M2C_GFIELD(D_800EFF58, u8 *, 0x5FC) + 0x38) |= 0x40;
    }
}

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

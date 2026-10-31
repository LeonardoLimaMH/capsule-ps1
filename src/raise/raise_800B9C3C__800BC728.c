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

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C__800BC728", func_800BCE94);

#include "common.h"

extern u8 D_800EE5F0[];
extern u8 D_800EFF58[];

s32 func_800BCF20(void) {
    s32 r = func_800BD2E0(0x1A, 0x38, 0x118, 5, 0, D_800EE5F0, M2C_GFIELD(D_800EFF58, s32, 0x41C), 1, 0, 0, 2, 0, 0);

    M2C_GFIELD(D_800EFF58, s32, 0x418) = r;
    return r;
}

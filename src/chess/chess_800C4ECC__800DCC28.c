#include "common.h"

s32 func_800DCC28(s32 arg0)
{
  extern M2C_UNK D_80118C18[];
  M2C_UNK *new_var;
  s8 *new_var3;
  s32 temp_s0;
  u16 *new_var2;
  s8 *new_var4;
  int new_var5;
  temp_s0 = arg0 & 0xFF;
  func_800D90C0(temp_s0);
  new_var4 = D_80118C18;
  new_var2 = (u16 *) (((s8 *) D_80118C18) + 0x5B4);
  func_800D943C(temp_s0, temp_s0);
  new_var5 = 0x5B4;
  new_var = new_var4;
  new_var4 = (s8 *) new_var;
  new_var3 = new_var4;
  *((u16 *) (new_var3 + new_var5)) = (u16) ((*new_var2) + func_800202A4(0xC8));
  return 1;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800DCC28", func_800DCC84);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800DCC28", func_800DCD20);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800DCC28", func_800DCDE4);

void func_800DCE48(void) {
    extern u8 D_80119710[];
    func_8001A998(D_80119710, 0x4C);
    func_800FE7B8();
}

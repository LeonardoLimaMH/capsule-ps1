#include "common.h"

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800DCC28__800DCD20", func_800DCD20);

s32 func_800DCDE4(s32 arg0)
{
  extern u8 D_80118C18[];
  u8 *new_var;
  if (func_800202A4(100) < 10)
  {
    func_800D90C0(arg0 & 0xFF);
    *((u16 *) ((new_var = D_80118C18) + 0x5B4)) = (*((u16 *) ((new_var = D_80118C18) + 0x5B4))) + func_800202A4(300);
    return 1;
  }
  if (arg0)
  {
    return 0;
  }
  else
  {
    return 0;
  }
}

void func_800DCE48(void) {
    extern u8 D_80119710[];
    func_8001A998(D_80119710, 0x4C);
    func_800FE7B8();
}

#include "common.h"

void func_800CAE14(void *arg0)
{
  u8 temp_v0;
  void *temp_a0;
  u8 *new_var;
  temp_v0 = *((u8 *) (((s8 *) arg0) + 0xBCA));
  new_var = (u8 *) (((s8 *) (arg0 + temp_v0)) + 0xBCB);
  temp_a0 = (arg0 + ((temp_v0 * 0x2E8) + 0x5E8)) + ((*new_var) * 0x7C);
  if ((*((s8 *) (((s8 *) temp_a0) + 0x13))) > 0)
  {
    *((s8 *) (((s8 *) temp_a0) + 0x13)) = (s8) (((u8) (*((s8 *) (((s8 *) temp_a0) + 0x13)))) - 1);
  }
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CAE14", func_800CAE6C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CAE14", func_800CAECC);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CAE14", func_800CAF74);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CAE14", func_800CB10C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CAE14", func_800CB24C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CAE14", func_800CB400);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CAE14", func_800CB540);

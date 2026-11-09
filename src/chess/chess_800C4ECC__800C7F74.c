#include "common.h"

extern int func_800A8E34(s32 a, s32 b, s32 c);
extern u32 *func_800A8E84(void);

int func_800C7F74(s32 arg0)
{
  s32 var_a1;
  s32 var_a2;
  s32 var_a3;
  int new_var2;
  s32 var_t0;
  s32 new_var3;
  void *var_v1;
  var_t0 = 0;
  var_a3 = 0;
  new_var2 = 0x2E;
  var_a2 = 0x18;
  do
  {
    new_var3 = var_a2;
    var_a1 = 0;
    var_v1 = arg0 + new_var3;
    var_v1 = ((s8 *) var_v1) + 0;
    loop_2:
    if (((*((u8 *) var_v1)) == new_var2) && (((u8) (*((u8 *) (((s8 *) var_v1) + 0x29)))) >= 0xFEU))
    {
      var_t0 = 1;
    }

    var_a1 += 1;
    var_v1 = var_v1 + 0x7C;
    if (var_a1 < 5)
    {
      goto loop_2;
    }
    var_a3 += 1;
    var_a2 += 0x2E8;
  }
  while (var_a3 < 2);
  return var_t0;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800C7F74", func_800C7FDC);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800C7F74", func_800C8368);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800C7F74", func_800C8528);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800C7F74", func_800C867C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800C7F74", func_800C87C0);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800C7F74", func_800C8A48);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800C7F74", func_800C8BF4);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800C7F74", func_800C8DE0);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800C7F74", func_800C8EF0);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800C7F74", func_800C9254);

extern int func_800A8E34(s32 a, s32 b, s32 c);
extern u32 *func_800A8E84(void);
int func_800C9338(s32 arg0, u8 *arg1)
{
  u8 *p;
  if (arg1[1] >= 5)
  {
    if (arg1[0] != 0)
    {
      return 1;
    }
    arg1[0] = 1;
    arg1[1] = 0;
  }
  if (func_800A8E34(arg0, arg1[0], arg1[1]) != 0)
  {
    return 0;
  }
  p = (u8 *) (arg0 + arg1[1] * 0x7C + arg1[0] * 0x2E8);
  return *(u8 *) (arg0 + p[0x2D] * 13 + p[0x2E] + 0x630) == 2;
}

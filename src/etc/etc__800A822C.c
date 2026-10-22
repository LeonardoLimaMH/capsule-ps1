#include "common.h"

void func_800A822C(void *arg0)
{
  int new_var2;
  extern u16 D_8008EE44[];
  s32 new_var;
  s32 var_v0;
  if (((*D_8008EE44) == (*((s32 *) (((s8 *) arg0) + 0x80)))) || ((*D_8008EE44) == (*((s32 *) (((s8 *) arg0) + 0x84)))))
  {
    if (arg0)
    {
      new_var2 = ~1;
      var_v0 = (*((s32 *) (((s8 *) arg0) + 0x38))) & new_var2;
    }
    else
    {
      new_var2 = ~1;
      var_v0 = (*((s32 *) (((s8 *) arg0) + 0x38))) & new_var2;
    }
  }
  else
  {
    new_var = *((s32 *) (((s8 *) arg0) + 0x38));
    var_v0 = new_var | 1;
  }
  *((s32 *) (((s8 *) arg0) + 0x38)) = var_v0;
}

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A822C", func_800A8278);

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A822C", func_800A8350);

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A822C", func_800A83CC);

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A822C", func_800A847C);

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A822C", func_800A8534);

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A822C", func_800A8638);

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A822C", func_800A86A4);

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A822C", func_800A8758);

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A822C", func_800A8810);

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A822C", func_800A88DC);

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A822C", func_800A8988);

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A822C", func_800A8B74);

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A822C", func_800A8CAC);

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A822C", func_800A8D38);

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A822C", func_800A8D68);

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A822C", func_800A8EC8);

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A822C", func_800A90DC);

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A822C", func_800A92D4);

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A822C", func_800A9650);

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A822C", func_800A98FC);

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A822C", func_800A9ABC);

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A822C", func_800A9C0C);

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A822C", func_800A9EC8);

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A822C", func_800AA020);

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A822C", func_800AA0A0);

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A822C", func_800AA20C);

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A822C", func_800AA238);

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A822C", func_800AA280);

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A822C", func_800AA7DC);

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A822C", func_800AAE64);

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A822C", func_800AB690);

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A822C", func_800AB78C);

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A822C", func_800AB7D8);

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A822C", func_800AB8E8);

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A822C", func_800ABBF8);

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A822C", func_800ABEA0);

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A822C", func_800AC20C);

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A822C", func_800AC4A4);

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A822C", func_800AC570);

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A822C", func_800AC650);

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A822C", func_800AC780);

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A822C", func_800AC9EC);

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A822C", func_800ACC04);

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A822C", func_800ACCA8);

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A822C", func_800ACD40);

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A822C", func_800ACD98);

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A822C", func_800ACEDC);

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A822C", func_800ACF80);

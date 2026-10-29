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

#include "ghidra.h"
void func_800A8CAC(void)

{
    extern u16 D_8008EE44[];
    extern u8 D_800B399C[];
    extern s16 D_800B3D0C[];
  int iVar1;
  
  if ((((3 < (*D_8008EE44)) && ((*D_8008EE44) != 8)) && (iVar1 = func_800202A4(0x20), iVar1 == 0)) &&
     ((*D_800B3D0C) < 3)) {
    (*D_800B3D0C) = (*D_800B3D0C) + 1;
    func_800A9EC8();
  }
  (**(code **)(D_800B399C + (uint)(*D_8008EE44) * 4))();
  return;
}

void func_800A8D38(void) {
    extern int func_80012508();
    func_80019F30(0xB, func_80012508);
    func_80012508();
}

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

#include "ghidra.h"
void func_800AA20C(undefined4 param_1)

{
    extern int func_80012508();
  func_80097E40(param_1,&func_80012508);
  func_80012508();
  return;
}

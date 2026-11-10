#include "common.h"

u16 func_800B84BC(s32 arg0, s32 arg1)
{
  extern M2C_UNK D_80091618[];
  s8 *new_var;
  s8 *new_var2;
  ;
  new_var = D_80091618;
  new_var2 = (s8 *) ((((arg0 & 0xFFFF) * 0x1A8) + new_var) + (arg1 * 2));
  return *((u16 *) (new_var2 + 0x134));
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4__800B84BC", func_800B84FC);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4__800B84BC", func_800B8700);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4__800B84BC", func_800B8898);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4__800B84BC", func_800B89F4);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4__800B84BC", func_800B8AD0);

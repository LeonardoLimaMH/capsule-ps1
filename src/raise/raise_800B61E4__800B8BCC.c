#include "common.h"

s16 func_800B8BCC(void)
{
  unsigned int new_var;
  extern u16 D_800EFA4A[];
  extern u16 D_800EFA4C[];
  u16 temp_a0;
  new_var = *D_800EFA4C;
  temp_a0 = *D_800EFA4A;
  *D_800EFA4A = new_var;
  return (s16) (new_var - temp_a0);
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4__800B8BCC", func_800B8BF0);

#include "common.h"

void func_800B8DDC(void) {
    extern s16 D_800ED88C[];
    (*D_800ED88C) = 0;
    func_800B7264(2);
}

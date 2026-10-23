#include "common.h"

#include "ghidra.h"
int func_800E6A1C(uint param_1,short param_2)

{
    extern M2C_UNK D_80091618[];
  int iVar1;
  
  iVar1 = *(int *)((param_1 & 0xffff) * 0x1a8 + -0x7ff6e924) / 0x7080;
  if (iVar1 < 0x13) {
    if (iVar1 < 0xe) goto L800E6AE8;
    iVar1 = (int)param_2 * ((iVar1 + -0xd) * -4 + 100) * 0x10000;
  }
  else {
    iVar1 = param_2 * 0x500000;
  }
  param_2 = (short)((iVar1 >> 0x10) / 100);
L800E6AE8:
  return (int)param_2;
}

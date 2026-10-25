#include "common.h"

#include "ghidra.h"
int func_800A03F0(uint param_1,int param_2,int param_3)

{
    extern u8 D_80065310[];
  int iVar1;
  
  if (param_1 < 8) {
    iVar1 = param_3 * 0x980 + -0x5580;
  }
  else {
    iVar1 = 0;
  }
  return *(int *)(param_2 * 4 + *(int *)(D_80065310 + param_1 * 4) + iVar1) + iVar1;
}

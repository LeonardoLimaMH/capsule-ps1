#include "common.h"

#include "ghidra.h"
undefined1 func_800A8E34(int param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + param_3 * 0x7c + param_2 * 0x2e8 + 0x30);
  if ((uVar2 & 0x100) == 0) {
    uVar1 = (uVar2 & 0x200) != 0;
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}

#include "common.h"

#include "ghidra.h"
int func_800A8954(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 < 10) {
    iVar1 = param_1 * 0xe000;
    iVar2 = -0x7fec0000;
  }
  else {
    iVar1 = -0x7fedc000;
    iVar2 = (param_1 + -10) * 0xe000;
  }
  return iVar1 + iVar2;
}

#include "common.h"

#include "ghidra.h"
bool func_800BB880(undefined4 param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  
  bVar1 = *(short *)(*(int *)(param_3 + 0x70) + 0x24) < 0;
  if (bVar1) {
    *(undefined1 *)(param_3 + 0x17) = 1;
    *(uint *)(param_3 + 0x18) = *(uint *)(param_3 + 0x18) ^ 0x8000000;
  }
  return bVar1;
}

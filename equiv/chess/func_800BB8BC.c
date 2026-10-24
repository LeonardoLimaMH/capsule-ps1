#include "common.h"

#include "ghidra.h"
bool func_800BB8BC(undefined4 param_1,int param_2,int param_3)

{
  bool bVar1;
  
  bVar1 = *(short *)(*(int *)(param_3 + 0x70) + 0x24) < 0;
  if (bVar1) {
    *(undefined1 *)(param_3 + 0x17) = 1;
    func_800A87C8
              (param_1,1 - (uint)*(byte *)(param_2 + 0x5fa),*(undefined1 *)(param_2 + 0x70c),0);
  }
  return bVar1;
}

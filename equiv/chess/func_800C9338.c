#include "common.h"

#include "ghidra.h"
bool func_800C9338(int param_1,byte *param_2)

{
  bool bVar1;
  int iVar2;
  
  if (4 < param_2[1]) {
    if (*param_2 != 0) {
      return true;
    }
    *param_2 = 1;
    param_2[1] = 0;
  }
  iVar2 = func_800A8E34(param_1,*param_2,param_2[1]);
  bVar1 = false;
  if (iVar2 == 0) {
    iVar2 = param_1 + (uint)param_2[1] * 0x7c + (uint)*param_2 * 0x2e8;
    bVar1 = *(char *)((uint)*(byte *)(iVar2 + 0x2d) * 0xd + param_1 + (uint)*(byte *)(iVar2 + 0x2e)
                     + 0x630) == '\x02';
  }
  return bVar1;
}

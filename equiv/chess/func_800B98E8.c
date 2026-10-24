#include "common.h"

#include "ghidra.h"
void func_800B98E8(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = param_1 + 0x5d0;
  uVar1 = (uint)*(byte *)(param_1 + 0xbca);
  iVar2 = func_800B2ABC
                    (param_1,0,
                     iVar2 + uVar1 * 0x2e8 + 0x18 + (uint)*(byte *)(iVar2 + uVar1 + 0x5fb) * 0x7c,
                     iVar2 + (1 - uVar1) * 0x2e8 + 0x18 + (uint)*(byte *)(param_1 + 0xcdc) * 0x7c);
  if (iVar2 != 0) {
    func_800125D8();
  }
  return;
}

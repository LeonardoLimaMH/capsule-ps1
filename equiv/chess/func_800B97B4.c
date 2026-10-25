#include "common.h"

#include "ghidra.h"
void func_800B97B4(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  iVar4 = param_1 + 0x5d0;
  uVar5 = (uint)*(byte *)(param_1 + 0xbca);
  uVar6 = (uint)*(byte *)(param_1 + 0xcdc);
  bVar1 = *(byte *)(iVar4 + uVar5 + 0x5fb);
  iVar2 = func_800A8EE8(iVar4,1 - uVar5,uVar6);
  *(undefined1 *)(iVar4 + (uint)bVar1 * 0x7c + uVar5 * 0x2e8 + 0x3e) = 1;
  func_8009C4B0(param_1,uVar5);
  if (((*(uint *)(iVar2 + 0x10) & 3) == 2) &&
     (((uVar3 = *(uint *)(iVar2 + 0x10) >> 2 & 0x1f, uVar3 == 1 || (uVar3 == 8)) || (uVar3 == 3))))
  {
    *(undefined1 *)(iVar4 + uVar6 * 0x7c + (1 - uVar5) * 0x2e8 + 0x3e) = 2;
    if (uVar6 != 5) {
      func_8009C4B0(param_1,1 - uVar5,uVar6);
    }
  }
  *(undefined1 *)(param_1 + 0xbe9) = 0;
  return;
}

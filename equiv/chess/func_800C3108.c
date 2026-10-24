#include "common.h"

#include "ghidra.h"
void func_800C3108(int param_1)

{
    extern M2C_UNK D_80063940[];
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar4 = 0;
  uVar6 = (*(byte *)(param_1 + 0xbe1) & 6) >> 1;
  iVar5 = uVar6 * 0x2e8;
  do {
    iVar2 = func_800A8E34(param_1 + 0x5d0,uVar6,iVar4);
    iVar3 = param_1 + 0x5d0 + iVar5;
    if (iVar2 == 0) {
      *(undefined1 *)(iVar3 + 0x2f) = 0x85;
      *(undefined1 *)(iVar3 + 0x3b) = 0;
      uVar1 = func_800C94DC
                        (param_1,*(byte *)((uint)*(byte *)(iVar3 + 0x18) * 0x3c + -0x7ff9c6a8) >> 5)
      ;
      *(undefined1 *)(iVar3 + 0x3d) = uVar1;
    }
    iVar4 = iVar4 + 1;
    iVar5 = iVar5 + 0x7c;
  } while (iVar4 < 5);
  return;
}

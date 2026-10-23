#include "common.h"

#include "ghidra.h"
undefined4 func_800C9254(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = func_800A8E84();
  iVar6 = 0;
  if ((*(uint *)(iVar1 + 0x10) >> 7 & 0xf) == 1) {
    uVar2 = 1;
  }
  else {
    iVar1 = 0;
    do {
      iVar4 = 0;
      iVar5 = iVar1;
      do {
        iVar3 = func_800A8E34(param_1,iVar6,iVar4);
        if ((iVar3 == 0) &&
           (*(char *)((uint)*(byte *)(param_1 + iVar5 + 0x2d) * 0xd + param_1 +
                      (uint)*(byte *)(param_1 + iVar5 + 0x2e) + 0x630) == '\x02')) {
          return 1;
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 0x7c;
      } while (iVar4 < 6);
      iVar6 = iVar6 + 1;
      iVar1 = iVar1 + 0x2e8;
    } while (iVar6 < 2);
    uVar2 = 0;
  }
  return uVar2;
}

#include "common.h"

#include "ghidra.h"
void func_800AFBDC(int param_1)

{
    extern M2C_UNK D_80063940[];
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  iVar6 = 0x18;
  do {
    iVar4 = 0;
    pbVar3 = (byte *)(param_1 + 0x5d0 + iVar6);
    do {
      iVar2 = func_800A8E34(param_1 + 0x5d0,iVar5,iVar4);
      if ((iVar2 == 0) && (pbVar3[0x28] == 0)) {
        pbVar3[0x17] = 0x84;
        pbVar3[0x23] = 0;
        func_800A84A0(pbVar3,iVar5,iVar4,1);
        bVar1 = func_800C94DC
                          (param_1,*(uint *)((uint)*pbVar3 * 0x3c + -0x7ff9c6a8) >> 2 & 7);
        pbVar3[0x25] = bVar1;
      }
      iVar4 = iVar4 + 1;
      pbVar3 = pbVar3 + 0x7c;
    } while (iVar4 < 5);
    iVar5 = iVar5 + 1;
    iVar6 = iVar6 + 0x2e8;
  } while (iVar5 < 2);
  return;
}

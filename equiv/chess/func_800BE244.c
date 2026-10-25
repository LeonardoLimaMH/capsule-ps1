#include "common.h"

#include "ghidra.h"
void func_800BE244(int param_1,int param_2,int param_3)

{
    extern u8 D_8008ED68[];
    extern u8 D_801010B0[];
  bool bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  if (param_3 == 0) {
    uVar6 = 1 - param_2;
    iVar5 = -1;
    iVar8 = 1;
  }
  else {
    uVar6 = *(uint *)(param_2 * 0x10 + -0x7ff71210);
    iVar8 = -1;
    if (((((uVar6 & 0x1000) == 0) && ((uVar6 & 0x8000) == 0)) && (iVar8 = 1, (uVar6 & 0x4000) == 0))
       && ((uVar6 & 0x2000) == 0)) {
      return;
    }
    iVar5 = param_1 + param_2 * 2;
    bVar2 = *(byte *)((uint)*(byte *)(iVar5 + 0x602) * 4 +
                      (uint)*(byte *)(iVar5 + 0x601) * 0x34 +
                      *(int *)((*D_801010B0) + (uint)*(byte *)(param_1 + 9) * 0x34) + 3);
    uVar6 = (uint)(bVar2 >> 7);
    iVar5 = (bVar2 & 0x7f) - 1;
  }
  iVar7 = param_1 + param_2 * 2;
  do {
    do {
      if (iVar8 < 1) {
        bVar1 = iVar5 == 0;
        iVar5 = iVar5 + -1;
        if (bVar1) {
          uVar6 = 1 - uVar6;
          iVar5 = 5;
        }
      }
      else {
        iVar5 = iVar5 + 1;
        if (iVar5 == 6) {
          uVar6 = 1 - uVar6;
          iVar5 = 0;
        }
      }
      iVar4 = func_800A8E34(param_1,uVar6,iVar5);
    } while (iVar4 != 0);
    iVar4 = param_1 + iVar5 * 0x7c + uVar6 * 0x2e8;
    bVar2 = *(byte *)(iVar4 + 0x2d);
    bVar3 = *(byte *)(iVar4 + 0x2e);
  } while (*(char *)((uint)bVar2 * 0xd + param_1 + (uint)bVar3 + 0x630) != '\x02');
  *(byte *)(iVar7 + 0x601) = bVar2;
  *(byte *)(iVar7 + 0x602) = bVar3;
  return;
}

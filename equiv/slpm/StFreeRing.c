#include "common.h"

#include "ghidra.h"
undefined4 StFreeRing(int param_1)

{
    extern s32 D_80134EBC[];
    extern s32 D_80134ED0[];
    extern s32 D_80134ED4[];
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  
  iVar1 = (param_1 - ((*D_80134ED0) + (*D_80134ED4) * 0x20) >> 2) / 0x1f8;
  psVar5 = (short *)((*D_80134ED0) + iVar1 * 0x20);
  uVar2 = 1;
  if (*psVar5 == 4) {
    iVar3 = (int)psVar5[3];
    (*D_80134EBC) = 0;
    if (0 < iVar3) {
      do {
        iVar4 = (*D_80134EBC) + iVar1;
        (*D_80134EBC) = (*D_80134EBC) + 1;
        *(undefined2 *)((*D_80134ED0) + iVar4 * 0x20) = 0;
      } while ((*D_80134EBC) < iVar3);
    }
    (*D_80134EBC) = (*D_80134EBC) + iVar1;
    uVar2 = 0;
  }
  return uVar2;
}

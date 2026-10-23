#include "common.h"

#include "ghidra.h"
void func_8001A784(int param_1,int *param_2,int param_3)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = 0;
  if (*param_2 != 0) {
    param_1 = param_1 - param_3;
    while( true ) {
      puVar2 = *(uint **)(iVar5 * 4 + *param_2);
      uVar4 = 0;
      if (puVar2 == (uint *)0xffffffff) break;
      puVar2[2] = puVar2[2] + param_1;
      if (*puVar2 != 0) {
        iVar3 = 0;
        do {
          uVar4 = uVar4 + 1;
          iVar1 = puVar2[2] + iVar3;
          *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + param_1;
          *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + param_1;
          iVar3 = iVar3 + 0x24;
        } while (uVar4 < *puVar2);
      }
      iVar5 = iVar5 + 1;
    }
  }
  return;
}

#include "common.h"

#include "ghidra.h"
void func_8001A704(int param_1,int *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (*param_2 != 0) {
    while( true ) {
      iVar3 = *(int *)(iVar4 * 4 + *param_2);
      uVar2 = 0;
      if (iVar3 == -1) break;
      *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + (param_1 - param_3);
      iVar1 = iVar3;
      if (*(int *)(iVar3 + 8) != 0) {
        do {
          uVar2 = uVar2 + 1;
          *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + (param_1 - param_3);
          iVar1 = iVar1 + 4;
        } while (uVar2 < *(uint *)(iVar3 + 8));
      }
      iVar4 = iVar4 + 1;
    }
  }
  return;
}

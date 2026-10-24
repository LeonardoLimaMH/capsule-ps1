#include "common.h"

#include "ghidra.h"
int func_800AEBA8(int param_1,int param_2)

{
    extern M2C_UNK D_800EEB9C[];
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = 0;
  if (0 < param_1) {
    puVar2 = D_800EEB9C;
    do {
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + *(int *)(puVar2 + 0xc);
      puVar2 = (undefined8 *)((int)puVar2 + 4);
    } while (iVar3 < param_1);
  }
  return iVar1 + param_2;
}

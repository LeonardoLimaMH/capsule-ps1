#include "common.h"

#include "ghidra.h"
void func_80033CEC(undefined2 *param_1,int param_2)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  
  for (iVar5 = param_2 / 2; 0 < iVar5; iVar5 = iVar5 + -1) {
    uVar1 = param_1[iVar5 + -1];
    iVar4 = iVar5;
    while (iVar3 = iVar4 * 2, iVar3 <= param_2) {
      if ((iVar3 < param_2) && ((ushort)(param_1 + iVar3)[-1] < (ushort)param_1[iVar3])) {
        iVar3 = iVar3 + 1;
      }
      if ((ushort)param_1[iVar3 + -1] <= uVar1) break;
      param_1[iVar4 + -1] = param_1[iVar3 + -1];
      iVar4 = iVar3;
    }
    param_1[iVar4 + -1] = uVar1;
  }
  if (1 < param_2) {
    puVar6 = param_1 + param_2;
    do {
      param_2 = param_2 + -1;
      uVar1 = puVar6[-1];
      iVar4 = 2;
      puVar6[-1] = *param_1;
      puVar6 = puVar6 + -1;
      iVar5 = 1;
      if (1 < param_2) {
        bVar2 = 2 < param_2;
        do {
          iVar3 = iVar4;
          if ((bVar2) && ((ushort)(param_1 + iVar4)[-1] < (ushort)param_1[iVar4])) {
            iVar3 = iVar4 + 1;
          }
          iVar4 = iVar3 * 2;
          if ((ushort)param_1[iVar3 + -1] <= uVar1) break;
          param_1[iVar5 + -1] = param_1[iVar3 + -1];
          bVar2 = iVar4 < param_2;
          iVar5 = iVar3;
        } while (iVar4 <= param_2);
      }
      param_1[iVar5 + -1] = uVar1;
    } while (1 < param_2);
  }
  return;
}

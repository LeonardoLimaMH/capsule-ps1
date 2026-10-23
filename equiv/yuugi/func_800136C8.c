#include "common.h"

#include "ghidra.h"
undefined2 * func_800136C8(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
    extern void * D_80078B7C[];
  bool bVar1;
  undefined2 *puVar2;
  int iVar3;
  ushort *puVar4;
  int iVar5;
  uint uVar6;
  ushort *puVar7;
  undefined2 *puVar8;
  
  if (7 < param_4) {
    param_4 = 7;
  }
  puVar7 = *(ushort **)((*D_80078B7C) + 0xc578);
  puVar4 = *(ushort **)(puVar7 + 4);
  if (puVar4 != (ushort *)0x0) {
    bVar1 = puVar7 < puVar4;
    do {
      if (bVar1) {
        puVar7 = puVar4;
      }
      puVar4 = *(ushort **)(puVar4 + 4);
      bVar1 = puVar7 < puVar4;
    } while (puVar4 != (ushort *)0x0);
  }
  iVar5 = *(int *)((*D_80078B7C) + 0xc554);
  puVar8 = (undefined2 *)((int)puVar7 + (uint)*puVar7);
  if (iVar5 != 0) {
    puVar8 = *(undefined2 **)(iVar5 * 4 + (*D_80078B7C) + 0xc000);
    *(int *)((*D_80078B7C) + 0xc554) = iVar5 + -1;
  }
  puVar2 = (undefined2 *)0x0;
  if (puVar8 + 0x48 <= (undefined2 *)((*D_80078B7C) + 0xc000)) {
    func_80013C14(puVar8,0x90);
    *puVar8 = 0x90;
    puVar8[1] = (short)param_4;
    uVar6 = param_4;
    if (-1 < (int)param_4) {
      iVar5 = param_4 * 4 + (*D_80078B7C);
      do {
        iVar3 = *(int *)(iVar5 + 0xc558);
        if (iVar3 != 0) {
          if (*(int *)(iVar3 + 8) == 0) {
            *(undefined2 **)(iVar3 + 8) = puVar8;
            *(int *)(puVar8 + 2) = iVar3;
            *(undefined4 *)(puVar8 + 4) = 0;
          }
          else {
            *(int *)(puVar8 + 4) = *(int *)(iVar3 + 8);
            *(undefined2 **)(*(int *)(iVar3 + 8) + 4) = puVar8;
            *(undefined2 **)(iVar3 + 8) = puVar8;
            *(int *)(puVar8 + 2) = iVar3;
          }
          break;
        }
        uVar6 = uVar6 - 1;
        iVar5 = iVar5 + -4;
      } while (-1 < (int)uVar6);
    }
    iVar5 = (*D_80078B7C);
    if (uVar6 == 0xffffffff) {
      uVar6 = param_4 + 1;
      if ((int)uVar6 < 8) {
        iVar3 = uVar6 * 4 + (*D_80078B7C);
        do {
          if (*(int *)(iVar3 + 0xc558) != 0) {
            iVar3 = *(int *)((*D_80078B7C) + 0xc578);
            *(undefined2 **)(iVar3 + 4) = puVar8;
            *(int *)(puVar8 + 4) = iVar3;
            *(undefined2 **)(iVar5 + 0xc578) = puVar8;
            *(undefined4 *)(puVar8 + 2) = 0;
            break;
          }
          uVar6 = uVar6 + 1;
          iVar3 = iVar3 + 4;
        } while ((int)uVar6 < 8);
      }
    }
    if (uVar6 == 8) {
      *(undefined2 **)((*D_80078B7C) + 0xc578) = puVar8;
      *(undefined4 *)(puVar8 + 2) = 0;
      *(undefined4 *)(puVar8 + 4) = 0;
    }
    iVar5 = (*D_80078B7C);
    *(undefined4 *)(puVar8 + 6) = param_2;
    *(undefined4 *)(puVar8 + 8) = param_1;
    *(undefined2 **)(param_4 * 4 + iVar5 + 0xc558) = puVar8;
    puVar2 = puVar8;
  }
  return puVar2;
}

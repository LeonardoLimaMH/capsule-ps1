#include "common.h"

#include "ghidra.h"
undefined4 * DecDCTGetEnv(undefined4 *param_1)

{
    extern s32 D_80120968[];
    extern s32 D_801209A8[];
    extern s32 D_801209EC[];
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar3 = (undefined4 *)D_80120968;
  iVar2 = 0xf;
  puVar4 = param_1;
  do {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    iVar2 = iVar2 + -1;
    *puVar4 = uVar1;
    puVar4 = puVar4 + 1;
  } while (iVar2 != -1);
  puVar3 = param_1 + 0x10;
  puVar4 = (undefined4 *)D_801209A8;
  iVar2 = 0xf;
  do {
    uVar1 = *puVar4;
    puVar4 = puVar4 + 1;
    iVar2 = iVar2 + -1;
    *puVar3 = uVar1;
    puVar3 = puVar3 + 1;
  } while (iVar2 != -1);
  puVar3 = param_1 + 0x20;
  puVar4 = (undefined4 *)D_801209EC;
  iVar2 = 0x1f;
  do {
    uVar1 = *puVar4;
    puVar4 = puVar4 + 1;
    iVar2 = iVar2 + -1;
    *puVar3 = uVar1;
    puVar3 = puVar3 + 1;
  } while (iVar2 != -1);
  return param_1;
}

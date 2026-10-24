#include "common.h"

#include "ghidra.h"
undefined4 * DecDCTPutEnv(undefined4 *param_1)

{
    extern M2C_UNK D_80120964[];
    extern s32 D_80120968[];
    extern s32 D_801209A8[];
    extern M2C_UNK D_801209E8[];
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)D_80120968;
  iVar2 = 0xf;
  puVar3 = param_1;
  do {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    iVar2 = iVar2 + -1;
    *puVar4 = uVar1;
    puVar4 = puVar4 + 1;
  } while (iVar2 != -1);
  puVar4 = (undefined4 *)D_801209A8;
  puVar3 = param_1 + 0x10;
  iVar2 = 0xf;
  do {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    iVar2 = iVar2 + -1;
    *puVar4 = uVar1;
    puVar4 = puVar4 + 1;
  } while (iVar2 != -1);
  func_80112F74(D_80120964,0x20);
  func_80112F74(D_801209E8,0x20);
  return param_1;
}

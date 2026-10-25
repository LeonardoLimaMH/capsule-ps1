#include "common.h"

#include "ghidra.h"
undefined4 slpm_StoreImage2(undefined4 param_1,undefined4 param_2)

{
    extern void * D_80131B2C[];
    extern s32 * D_80131C3C[];
    extern s32 * D_80131C48[];
    extern s32 D_80131C70[];
    extern s32 D_80131C74[];
    extern s32 D_801104EC[];
    extern int func_80116850();
  int iVar1;
  uint uVar2;
  
  func_80113C78(D_801104EC,param_1);
  iVar1 = slpm_VSync(0xffffffff);
  (*D_80131C70) = iVar1 + 0xf0;
  (*D_80131C74) = 0;
  uVar2 = *(*D_80131C48);
  while (((uVar2 & 0x1000000) != 0 || ((*(*D_80131C3C) & 0x4000000) == 0))) {
    iVar1 = func_80116254();
    if (iVar1 != 0) {
      return 0xffffffff;
    }
    uVar2 = *(*D_80131C48);
  }
  slpm_DMACallback(2,func_80116850);
  (**(code **)((*D_80131B2C) + 0x1c))(param_1,param_2);
  return 0;
}

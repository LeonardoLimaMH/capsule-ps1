#include "common.h"

#include "ghidra.h"
undefined4 func_801159A8(undefined4 *param_1,int param_2)

{
    extern s32 * D_80131C38;
    extern s32 * D_80131C3C;
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = param_2 + -1;
  *D_80131C3C = 0x4000000;
  if (param_2 != 0) {
    do {
      uVar1 = *param_1;
      param_1 = param_1 + 1;
      iVar2 = iVar2 + -1;
      *D_80131C38 = uVar1;
    } while (iVar2 != -1);
  }
  return 0;
}

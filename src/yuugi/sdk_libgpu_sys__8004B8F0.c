#include "common.h"
#include "yuugi.h"

#include "ghidra.h"
undefined4 func_8004B8F0(undefined4 *param_1,int param_2)

{
    extern s32 * D_80078A20;
    extern s32 * D_80078A24;
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = param_2 + -1;
  *D_80078A24 = 0x4000000;
  if (param_2 != 0) {
    do {
      uVar1 = *param_1;
      param_1 = param_1 + 1;
      iVar2 = iVar2 + -1;
      *D_80078A20 = uVar1;
    } while (iVar2 != -1);
  }
  return 0;
}

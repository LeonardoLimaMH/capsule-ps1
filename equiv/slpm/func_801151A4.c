#include "common.h"

#include "ghidra.h"
int func_801151A4(int param_1,int param_2)

{
    extern s32 * D_80131C4C;
    extern s32 * D_80131C50;
    extern s32 * D_80131C54;
    extern s32 * D_80131C58;
  uint uVar1;
  int iVar2;
  
  *D_80131C58 = *D_80131C58 | 0x8000000;
  *D_80131C54 = 0;
  *D_80131C4C = param_1 + param_2 * 4 + -4;
  *D_80131C50 = param_2;
  *D_80131C54 = 0x11000002;
  func_80116220();
  uVar1 = *D_80131C54;
  while( true ) {
    if ((uVar1 & 0x1000000) == 0) {
      return param_2;
    }
    iVar2 = func_80116254();
    if (iVar2 != 0) break;
    uVar1 = *D_80131C54;
  }
  return -1;
}

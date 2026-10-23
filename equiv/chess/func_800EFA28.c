#include "common.h"

#include "ghidra.h"
void func_800EFA28(undefined1 param_1,int *param_2,int *param_3,int param_4)

{
  int iVar1;
  
  switch(param_1) {
  case 0:
    *param_2 = 0;
    iVar1 = param_4 * -0x4b0;
    break;
  case 1:
    param_4 = param_4 * -0x4b0;
    goto L800EFA8C;
  case 2:
    param_4 = param_4 * -0x4b0;
    goto L800EFB40;
  case 3:
    iVar1 = param_4 * 0x4b0;
    param_4 = param_4 * -0x4b0;
    if (param_4 < 0) {
      param_4 = param_4 + 0xfff;
    }
    *param_2 = param_4 >> 0xc;
    break;
  case 4:
    *param_2 = 0;
    iVar1 = param_4 * 0x4b0;
    break;
  case 5:
    param_4 = param_4 * 0x4b0;
L800EFA8C:
    if (param_4 < 0) {
      param_4 = param_4 + 0xfff;
    }
    *param_2 = param_4 >> 0xc;
    *param_3 = param_4 >> 0xc;
    return;
  case 6:
    param_4 = param_4 * 0x4b0;
L800EFB40:
    if (param_4 < 0) {
      param_4 = param_4 + 0xfff;
    }
    *param_2 = param_4 >> 0xc;
    *param_3 = 0;
    return;
  case 7:
    iVar1 = param_4 * 0x4b0;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xfff;
    }
    *param_2 = iVar1 >> 0xc;
    iVar1 = param_4 * -0x4b0;
    break;
  default:
    goto L800EFB9C;
  }
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xfff;
  }
  *param_3 = iVar1 >> 0xc;
L800EFB9C:
  return;
}

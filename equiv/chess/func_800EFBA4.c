#include "common.h"

#include "ghidra.h"
void func_800EFBA4(undefined1 param_1,int param_2,short param_3,int param_4)

{
    extern u8 D_80069AD4[];
    extern s32 D_80069BBE[];
  short sVar1;
  int iVar2;
  
  if (param_2 != 0) {
    switch(param_1) {
    case 0:
L800EFC04:
      param_4 = 0x200;
      break;
    case 1:
L800EFC2C:
      param_4 = 0xc00;
      break;
    case 2:
L800EFC34:
      param_4 = 0xe00;
      break;
    case 3:
L800EFC1C:
      param_4 = 0x800;
      break;
    case 4:
L800EFC24:
      param_4 = 0xa00;
      break;
    case 5:
L800EFC0C:
      param_4 = 0x400;
      break;
    case 6:
L800EFC14:
      param_4 = 0x600;
      break;
    case 7:
L800EFBFC:
      param_4 = 0;
    default:
      break;
    }
L800EFC38:
    if (0x1000 < D_80069BBE) {
      D_80069BBE = 0;
    }
    if (D_80069BBE < 0) {
      D_80069BBE = 0x1000;
    }
    if (((int)D_80069BBE < param_4 + -0x14) || (param_4 + 0x14 < (int)D_80069BBE)) {
      iVar2 = (int)D_80069BBE;
      if (iVar2 - param_4 < 1) {
        sVar1 = D_80069BBE + param_3;
        if ((iVar2 + 0x1000) - param_4 <= param_4 - iVar2) {
          sVar1 = D_80069BBE - param_3;
        }
      }
      else {
        sVar1 = D_80069BBE - param_3;
        if ((param_4 - iVar2) + 0x1019 <= iVar2 - param_4) {
          sVar1 = D_80069BBE + param_3;
        }
      }
    }
    else {
      sVar1 = (short)param_4;
    }
    D_80069BBE = sVar1;
    return;
  }
  switch(param_1) {
  case 0:
    goto L800EFC34;
  case 1:
    goto L800EFBFC;
  case 2:
    goto L800EFC24;
  case 3:
    goto L800EFC2C;
  case 4:
    goto L800EFC14;
  case 5:
    goto L800EFC1C;
  case 6:
    goto L800EFC04;
  case 7:
    goto L800EFC0C;
  default:
    goto L800EFC38;
  }
}

#include "common.h"

#include "ghidra.h"
int func_800DF300(undefined4 param_1,undefined2 param_2,undefined2 param_3,short *param_4,
                 short *param_5)

{
  short sVar1;
  short sVar2;
  short sVar3;
  undefined4 uVar4;
  short sVar5;
  short sVar6;
  
  sVar6 = 0;
  sVar5 = 0;
  sVar1 = *param_4;
  sVar2 = *param_5;
  sVar3 = 1;
  switch(param_3) {
  case 0:
    if (sVar1 != 8) {
      sVar6 = 1;
      sVar5 = 0;
      goto L800DF4C4;
    }
    break;
  case 1:
    if (sVar1 != 8) {
      if (sVar2 != 1) {
        sVar6 = 1;
        sVar5 = -1;
        goto L800DF4C4;
      }
      uVar4 = 1;
      goto L800DF4AC;
    }
    break;
  case 2:
    if (sVar2 != 1) {
      sVar6 = 0;
      sVar5 = -1;
      goto L800DF4C4;
    }
    uVar4 = 1;
    goto L800DF4AC;
  case 3:
    if (sVar1 != 1) {
      if (sVar2 != 1) {
        sVar6 = -1;
        sVar5 = -1;
        goto L800DF4C4;
      }
      uVar4 = 1;
      goto L800DF4AC;
    }
    break;
  case 4:
    if (sVar1 != 1) {
      sVar6 = -1;
      sVar5 = 0;
      goto L800DF4C4;
    }
    break;
  case 5:
    if (sVar1 != 1) {
      if (sVar2 == 8) goto L800DF4A8;
      sVar6 = -1;
L800DF4C0:
      sVar5 = 1;
      goto L800DF4C4;
    }
    break;
  case 6:
    if (sVar2 != 8) {
      sVar6 = 0;
      goto L800DF4C0;
    }
L800DF4A8:
    uVar4 = 8;
L800DF4AC:
    sVar3 = func_800DF1D8(param_1,param_2,uVar4);
    goto L800DF4C4;
  default:
    if (sVar1 != 8) {
      if (sVar2 == 8) goto L800DF4A8;
      sVar6 = 1;
      goto L800DF4C0;
    }
  }
  sVar3 = 2;
L800DF4C4:
  if (sVar3 == 1) {
    *param_4 = *param_4 + sVar6;
    *param_5 = *param_5 + sVar5;
  }
  return (int)sVar3;
}

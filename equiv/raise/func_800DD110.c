#include "common.h"

#include "ghidra.h"
int func_800DD110(undefined4 param_1,undefined4 param_2,short *param_3,short *param_4)

{
  short sVar1;
  short sVar2;
  int iVar3;
  short sVar4;
  short sVar5;
  
  sVar5 = 0;
  sVar4 = 0;
  sVar1 = *param_3;
  sVar2 = *param_4;
  iVar3 = 1;
  switch(param_2) {
  case 0:
    if (sVar1 != 8) {
      sVar5 = 1;
      sVar4 = 0;
      goto L800DD280;
    }
    break;
  case 1:
    if ((sVar1 != 8) && (sVar2 != 1)) {
      sVar5 = 1;
      sVar4 = -1;
      goto L800DD280;
    }
    break;
  case 2:
    if (sVar2 != 1) {
      sVar5 = 0;
      sVar4 = -1;
      goto L800DD280;
    }
    break;
  case 3:
    if ((sVar1 != 1) && (sVar2 != 1)) {
      sVar5 = -1;
      sVar4 = -1;
      goto L800DD280;
    }
    break;
  case 4:
    if (sVar1 != 1) {
      sVar5 = -1;
      sVar4 = 0;
      goto L800DD280;
    }
    break;
  case 5:
    if ((sVar1 != 1) && (sVar2 != 8)) {
      sVar5 = -1;
L800DD27C:
      sVar4 = 1;
      goto L800DD280;
    }
    break;
  case 6:
    if (sVar2 != 8) {
      sVar5 = 0;
      goto L800DD27C;
    }
    break;
  default:
    if ((sVar1 != 8) && (sVar2 != 8)) {
      sVar5 = 1;
      goto L800DD27C;
    }
  }
  iVar3 = 0;
L800DD280:
  if (iVar3 == 1) {
    *param_3 = *param_3 + sVar5;
    *param_4 = *param_4 + sVar4;
  }
  return iVar3;
}

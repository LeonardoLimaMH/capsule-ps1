#include "common.h"

#include "ghidra.h"
undefined4 func_800DE10C(undefined4 param_1,short param_2,int param_3,short *param_4,short *param_5)

{
  bool bVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  
  sVar5 = 0;
  sVar4 = 0;
  sVar2 = *param_4;
  sVar3 = *param_5;
  bVar1 = true;
  switch((param_3 + -8) * 0x10000 >> 0x10) {
  case 0:
    if (sVar2 != 8) {
      sVar5 = 1;
      sVar4 = 0;
      goto L800DE28C;
    }
    break;
  case 1:
    if ((sVar2 != 8) && (sVar3 != 1)) {
      sVar5 = 1;
      sVar4 = -1;
      goto L800DE28C;
    }
    break;
  case 2:
    if (sVar3 != 1) {
      sVar5 = 0;
      sVar4 = -1;
      goto L800DE28C;
    }
    break;
  case 3:
    if ((sVar2 != 1) && (sVar3 != 1)) {
      sVar5 = -1;
      sVar4 = -1;
      goto L800DE28C;
    }
    break;
  case 4:
    if (sVar2 != 1) {
      sVar5 = -1;
      sVar4 = 0;
      goto L800DE28C;
    }
    break;
  case 5:
    if ((sVar2 != 1) && (sVar3 != 8)) {
      sVar5 = -1;
L800DE288:
      sVar4 = 1;
      goto L800DE28C;
    }
    break;
  case 6:
    if (sVar3 != 8) {
      sVar5 = 0;
      goto L800DE288;
    }
    break;
  default:
    if ((sVar2 != 8) && (sVar3 != 8)) {
      sVar5 = 1;
      goto L800DE288;
    }
  }
  bVar1 = false;
L800DE28C:
  if (bVar1) {
    sVar2 = sVar2 + sVar5 * (param_2 + -1);
    sVar3 = sVar3 + sVar4 * (param_2 + -1);
    if (((ushort)(sVar2 - 1U) < 8) && ((ushort)(sVar3 - 1U) < 8)) {
      *param_4 = sVar2;
      *param_5 = sVar3;
      return 1;
    }
  }
  return 0;
}

#include "common.h"

#include "ghidra.h"
bool CdControlB(byte param_1,int param_2,undefined4 param_3)

{
    extern u8 D_80131C94[];
    extern s32 D_80131D1C[];
    extern u8 D_80131D2C[];
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = (*D_80131D1C);
  iVar5 = 3;
  do {
    (*D_80131D1C) = 0;
    if ((param_1 != 1) && (((*D_80131D2C) & 0x10) != 0)) {
      slpm_CD_cw(1,0,0,0);
    }
    if (((param_2 == 0) || (*(int *)(D_80131C94 + (uint)param_1 * 4) == 0)) ||
       (iVar3 = slpm_CD_cw(2,param_2,param_3,0), iVar3 == 0)) {
      (*D_80131D1C) = uVar1;
      iVar3 = slpm_CD_cw(param_1,param_2,param_3,0);
      iVar4 = 0;
      if (iVar3 == 0) break;
    }
    iVar5 = iVar5 + -1;
    iVar4 = -1;
    (*D_80131D1C) = uVar1;
  } while (iVar5 != -1);
  if (iVar4 == 0) {
    iVar5 = slpm_CD_sync(0,param_3);
    bVar2 = iVar5 == 2;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

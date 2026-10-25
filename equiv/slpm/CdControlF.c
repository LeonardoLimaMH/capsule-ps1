#include "common.h"

#include "ghidra.h"
undefined4 CdControlF(byte param_1,int param_2)

{
    extern u8 D_80131C94[];
    extern s32 D_80131D1C[];
    extern u8 D_80131D2C[];
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = (*D_80131D1C);
  iVar3 = 3;
  while( true ) {
    (*D_80131D1C) = 0;
    if ((param_1 != 1) && (((*D_80131D2C) & 0x10) != 0)) {
      slpm_CD_cw(1,0,0,0);
    }
    if ((((param_2 == 0) || (*(int *)(D_80131C94 + (uint)param_1 * 4) == 0)) ||
        (iVar2 = slpm_CD_cw(2,param_2,0,0), iVar2 == 0)) &&
       ((*D_80131D1C) = uVar1, iVar2 = slpm_CD_cw(param_1,param_2,0,1), iVar2 == 0)) break;
    iVar3 = iVar3 + -1;
    if (iVar3 == -1) {
      (*D_80131D1C) = uVar1;
      return 0;
    }
  }
  return 1;
}

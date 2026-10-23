#include "common.h"

#include "ghidra.h"
undefined4 CdReset(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 2) {
    slpm_CD_initintr();
    uVar1 = 1;
  }
  else {
    iVar2 = slpm_CD_init();
    uVar1 = 0;
    if ((iVar2 == 0) && (uVar1 = 1, param_1 == 1)) {
      iVar2 = slpm_CD_initvol();
      uVar1 = 0;
      if (iVar2 == 0) {
        uVar1 = 1;
      }
    }
  }
  return uVar1;
}

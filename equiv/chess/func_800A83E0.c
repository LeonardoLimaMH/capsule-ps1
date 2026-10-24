#include "common.h"

#include "ghidra.h"
int func_800A83E0(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (uint)*(byte *)(param_3 + 0x15) - (uint)*(byte *)(param_2 + 0x15);
  iVar1 = (uint)*(byte *)(param_3 + 0x16) - (uint)*(byte *)(param_2 + 0x16);
  if (iVar2 < 1) {
    if (iVar2 < 0) {
      iVar2 = 3;
      if ((iVar1 < 1) && (iVar2 = 2, iVar1 < 0)) {
        iVar2 = 1;
      }
    }
    else {
      iVar2 = (uint)(0 < iVar1) << 2;
    }
  }
  else {
    iVar2 = 5;
    if ((iVar1 < 1) && (iVar2 = 6, iVar1 < 0)) {
      iVar2 = 7;
    }
  }
  return iVar2;
}

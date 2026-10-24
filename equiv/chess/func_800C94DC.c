#include "common.h"

#include "ghidra.h"
int func_800C94DC(undefined4 param_1,int param_2)

{
    extern s16 D_80069BBE[];
  int iVar1;
  int iVar2;
  
  iVar2 = (*D_80069BBE) + 0x100;
  iVar1 = iVar2;
  if (iVar2 < 0) {
    iVar1 = (*D_80069BBE) + 0x10ff;
  }
  iVar2 = iVar2 + (iVar1 >> 0xc) * -0x1000;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0x1ff;
  }
  iVar2 = (param_2 + 8) - (iVar2 >> 9);
  iVar1 = iVar2;
  if (iVar2 < 0) {
    iVar1 = iVar2 + 7;
  }
  return iVar2 + (iVar1 >> 3) * -8;
}

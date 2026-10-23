#include "common.h"

#include "ghidra.h"
int func_800C9484(undefined4 param_1,int param_2)

{
    extern s16 D_80069BBE[];
  int iVar1;
  int iVar2;
  
  iVar2 = (*D_80069BBE) + 0x80;
  iVar1 = iVar2;
  if (iVar2 < 0) {
    iVar1 = (*D_80069BBE) + 0x107f;
  }
  iVar2 = iVar2 + (iVar1 >> 0xc) * -0x1000;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  param_2 = param_2 + (iVar2 >> 8);
  iVar1 = param_2;
  if (param_2 < 0) {
    iVar1 = param_2 + 0xf;
  }
  return param_2 + (iVar1 >> 4) * -0x10;
}

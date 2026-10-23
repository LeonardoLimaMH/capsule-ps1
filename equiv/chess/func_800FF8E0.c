#include "common.h"

#include "ghidra.h"
bool func_800FF8E0(char *param_1)

{
    extern M2C_UNK D_80118C18[];
    extern s32 D_80119600[];
  bool bVar1;
  int iVar2;
  
  iVar2 = ((int)(((uint)D_80119600[1] - (uint)D_80119600[0]) + 0xb) % 10 & 0xffU) * 4;
  if (*param_1 == D_80119600[iVar2 + 2]) {
    bVar1 = param_1[2] == D_80119600[iVar2 + 4];
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

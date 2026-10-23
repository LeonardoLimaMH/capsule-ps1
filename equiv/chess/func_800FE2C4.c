#include "common.h"

#include "ghidra.h"
int func_800FE2C4(int param_1,int param_2)

{
    extern s32 D_80118C18[];
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = (param_1 + 600) / 100;
  iVar2 = (param_2 + 600) / 100;
  iVar3 = 0;
  if (uVar1 < 0xd) {
    if ((iVar2 < 0) || (0xc < iVar2)) {
      iVar3 = 0;
    }
    else {
      iVar3 = (*(uint *)(iVar2 * 4 + uVar1 * 0x34 + (*D_80118C18)) >> 0x13 & 7) * -0x32;
    }
  }
  return iVar3;
}

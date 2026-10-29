#include "common.h"

#include "ghidra.h"
undefined4 StGetBackloc(undefined4 param_1)

{
    extern s32 D_80134F08[];
    extern u8 D_80137310[];
    extern s32 D_80137314[];
  int iVar1;
  undefined4 uVar2;
  
  if ((*D_80134F08) == 0) {
    iVar1 = CdPosToInt(D_80137310);
    CdIntToPos(iVar1 + 1,param_1);
    uVar2 = (*D_80137314);
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

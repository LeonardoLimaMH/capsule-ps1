#include "common.h"

#include "ghidra.h"
bool func_800FE378(short *param_1,int *param_2,int *param_3)

{
    extern s32 D_80118C18[];
  int iVar1;
  bool bVar2;
  
  *param_2 = (*param_1 + 0x226) / 100;
  iVar1 = (param_1[2] + 0x226) / 100;
  *param_3 = iVar1;
  if ((*param_2 < 0xd) && (iVar1 < 0xd)) {
    bVar2 = (*(uint *)(iVar1 * 4 + *param_2 * 0x34 + (*D_80118C18)) >> 6 & 0x1fff) != 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

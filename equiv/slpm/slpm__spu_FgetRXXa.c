#include "common.h"

#include "ghidra.h"
uint slpm__spu_FgetRXXa(int param_1,int param_2)

{
    extern s32 D_801333D4[];
    extern s32 D_801333FC[];
  uint uVar1;
  
  uVar1 = (uint)*(ushort *)(param_1 * 2 + (*D_801333D4));
  if (param_2 != -1) {
    uVar1 = uVar1 << ((*D_801333FC) & 0x1f);
  }
  return uVar1;
}

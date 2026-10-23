#include "common.h"

#include "ghidra.h"
uint _spu_FgetRXXa(int param_1,int param_2)

{
    extern s32 D_80071598[];
    extern s32 D_800715C0[];
  uint uVar1;
  
  uVar1 = (uint)*(ushort *)(param_1 * 2 + (*D_80071598));
  if (param_2 != -1) {
    uVar1 = uVar1 << ((*D_800715C0) & 0x1f);
  }
  return uVar1;
}

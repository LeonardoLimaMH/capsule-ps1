#include "common.h"

#include "ghidra.h"
void _spu_FsetRXX(int param_1,uint param_2,int param_3)

{
    extern s32 D_80071598[];
    extern s32 D_800715C0[];
  if (param_3 == 0) {
    *(short *)(param_1 * 2 + (*D_80071598)) = (short)param_2;
  }
  else {
    *(short *)(param_1 * 2 + (*D_80071598)) = (short)(param_2 >> ((*D_800715C0) & 0x1f));
  }
  return;
}

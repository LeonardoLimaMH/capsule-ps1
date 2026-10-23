#include "common.h"

#include "ghidra.h"
void slpm__spu_FsetRXX(int param_1,uint param_2,int param_3)

{
    extern s32 D_801333D4[];
    extern s32 D_801333FC[];
  if (param_3 == 0) {
    *(short *)(param_1 * 2 + (*D_801333D4)) = (short)param_2;
  }
  else {
    *(short *)(param_1 * 2 + (*D_801333D4)) = (short)(param_2 >> ((*D_801333FC) & 0x1f));
  }
  return;
}

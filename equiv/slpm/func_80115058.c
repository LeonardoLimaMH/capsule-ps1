#include "common.h"

#include "ghidra.h"
uint func_80115058(uint param_1,uint param_2)

{
    extern s16 D_80131B38[];
    extern s16 D_80131B3A[];
  uint uVar1;
  
  uVar1 = 0;
  if ((-1 < (short)param_1) &&
     (uVar1 = (*D_80131B38) - 1,
     (int)(short)param_1 <= (short)(*D_80131B38) + -1)) {
    uVar1 = param_1;
  }
  if ((short)param_2 < 0) {
    param_2 = 0;
  }
  else if ((short)(*D_80131B3A) + -1 < (int)(short)param_2) {
    param_2 = (*D_80131B3A) - 1;
  }
  return (param_2 & 0x3ff) << 10 | uVar1 & 0x3ff | 0xe4000000;
}

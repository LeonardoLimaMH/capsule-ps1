#include "common.h"

#include "ghidra.h"
uint func_8004AF08(uint param_1,uint param_2)

{
    extern s16 D_80078920[];
    extern s16 D_80078922[];
  uint uVar1;
  
  uVar1 = 0;
  if ((-1 < (short)param_1) &&
     (uVar1 = (*D_80078920) - 1, (int)(short)param_1 <= (short)(*D_80078920) + -1)) {
    uVar1 = param_1;
  }
  if ((short)param_2 < 0) {
    param_2 = 0;
  }
  else if ((short)(*D_80078922) + -1 < (int)(short)param_2) {
    param_2 = (*D_80078922) - 1;
  }
  return (param_2 & 0x3ff) << 10 | uVar1 & 0x3ff | 0xe3000000;
}

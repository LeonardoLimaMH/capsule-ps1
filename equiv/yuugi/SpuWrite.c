#include "common.h"

#include "ghidra.h"
uint SpuWrite(undefined4 param_1,uint param_2)

{
    extern s32 D_800715CC[];
    extern s32 D_800715D0[];
  if (0x7eff0 < param_2) {
    param_2 = 0x7eff0;
  }
  _spu_Fw(param_1,param_2);
  if ((*D_800715D0) == 0) {
    (*D_800715CC) = 0;
  }
  return param_2;
}

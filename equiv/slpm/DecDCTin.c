#include "common.h"

#include "ghidra.h"
void DecDCTin(uint *param_1,uint param_2)

{
  uint uVar1;
  
  if ((param_2 & 1) == 0) {
    uVar1 = *param_1 | 0x8000000;
  }
  else {
    uVar1 = *param_1 & 0xf7ffffff;
  }
  *param_1 = uVar1;
  if ((param_2 & 2) == 0) {
    uVar1 = *param_1 & 0xfdffffff;
  }
  else {
    uVar1 = *param_1 | 0x2000000;
  }
  *param_1 = uVar1;
  func_80112F74(param_1,(short)*param_1);
  return;
}

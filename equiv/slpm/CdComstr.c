#include "common.h"

#include "ghidra.h"
undefined * CdComstr(uint param_1)

{
    extern u8 D_80131D44[];
    extern s32 D_801105F8[];
  undefined *puVar1;
  
  if ((param_1 & 0xff) < 0x1c) {
    puVar1 = *(undefined **)(D_80131D44 + (param_1 & 0xff) * 4);
  }
  else {
    puVar1 = &D_801105F8;
  }
  return puVar1;
}

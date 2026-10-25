#include "common.h"

#include "ghidra.h"
undefined * CdIntstr(uint param_1)

{
    extern u8 D_80131DC4[];
    extern s32 D_801105F8[];
  undefined *puVar1;
  
  if ((param_1 & 0xff) < 7) {
    puVar1 = *(undefined **)(D_80131DC4 + (param_1 & 0xff) * 4);
  }
  else {
    puVar1 = &D_801105F8;
  }
  return puVar1;
}

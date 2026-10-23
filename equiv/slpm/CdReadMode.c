#include "common.h"

#include "ghidra.h"
undefined4 CdReadMode(undefined4 param_1)

{
    extern s32 D_80132088[];
  undefined4 uVar1;
  
  uVar1 = (*D_80132088);
  (*D_80132088) = param_1;
  return uVar1;
}

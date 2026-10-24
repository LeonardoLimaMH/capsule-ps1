#include "common.h"

#include "ghidra.h"
undefined4 func_800B1E7C(void)

{
    extern M2C_UNK D_80069AD4[];
    extern s32 D_800EEB70[];
    extern s16 D_800EFA4A[];
    extern s16 D_800EFA4C[];
  int iVar1;
  int iVar2;
  
  iVar2 = 2;
  iVar1 = -0x7ff96524;
  do {
    *(undefined4 *)(iVar1 + 0x44) = 0;
    iVar2 = iVar2 + -1;
    iVar1 = iVar1 + -4;
  } while (-1 < iVar2);
  (*D_800EFA4C) = 0;
  (*D_800EFA4A) = 0;
  (*D_800EEB70) = 0;
  return 1;
}

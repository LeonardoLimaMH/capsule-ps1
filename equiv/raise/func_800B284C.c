#include "common.h"

#include "ghidra.h"
undefined4 func_800B284C(uint param_1,uint param_2)

{
    extern s32 D_8006AF84[];
    extern M2C_UNK D_80091618[];
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)((param_1 & 0xffff) * 0x1a8 + -0x7ff6e97c);
  if (((((iVar1 == 0) || (uVar2 = 0, 0x7080 < (*D_8006AF84) - iVar1)) &&
       ((iVar1 = *(int *)((param_2 & 0xffff) * 0x1a8 + -0x7ff6e97c), iVar1 == 0 ||
        (uVar2 = 0, 0x7080 < (*D_8006AF84) - iVar1)))) &&
      ((iVar1 = *(int *)((param_1 & 0xffff) * 0x1a8 + -0x7ff6e974), iVar1 == 0 ||
       (uVar2 = 0, 0x7080 < (*D_8006AF84) - iVar1)))) &&
     ((iVar1 = *(int *)((param_2 & 0xffff) * 0x1a8 + -0x7ff6e974), iVar1 == 0 ||
      (uVar2 = 0, 0x7080 < (*D_8006AF84) - iVar1)))) {
    uVar2 = 1;
  }
  return uVar2;
}

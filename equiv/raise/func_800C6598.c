#include "common.h"

#include "ghidra.h"
undefined4 func_800C6598(void)

{
    extern M2C_UNK D_80091618[];
  short sVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar2 = func_800B1260();
  sVar1 = *(short *)((uVar2 & 0xffff) * 0x1a8 + -0x7ff6e904);
  uVar3 = 2;
  if ((((0x19 < sVar1) && (uVar3 = 3, 0x33 < sVar1)) && (uVar3 = 4, 0x66 < sVar1)) &&
     ((uVar3 = 5, 0x99 < sVar1 && (uVar3 = 7, sVar1 < 0xcd)))) {
    uVar3 = 6;
  }
  return uVar3;
}

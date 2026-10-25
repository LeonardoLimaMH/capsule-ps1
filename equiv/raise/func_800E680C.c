#include "common.h"

#include "ghidra.h"
undefined4 func_800E680C(uint param_1,uint param_2)

{
    extern u8 D_80091618[];
    extern u8 D_800ED228[];
    extern u8 D_801061E0[];
  short sVar1;
  undefined4 uVar2;
  
  sVar1 = *(short *)(D_800ED228 +
                    (uint)*(ushort *)((param_1 & 0xffff) * 0x1a8 + -0x7ff6e948) * 2 +
                    (param_2 & 0xffff) * 6);
  *(short *)((param_1 & 0xffff) * 0x28 + -0x7fef9dfa) = sVar1;
  if (sVar1 == 1) {
    uVar2 = 1;
  }
  else if (sVar1 < 2) {
    uVar2 = 1;
    if (sVar1 == 0) {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 1;
    if (sVar1 == 2) {
      uVar2 = 2;
    }
  }
  return uVar2;
}

#include "common.h"

#include "ghidra.h"
uint func_800D2DA8(uint param_1,uint param_2)

{
    extern M2C_UNK D_80085428[];
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = (uint)*(byte *)(((param_1 & 0x7f) - 1) * 0x7c + ((param_1 & 0xff) >> 7) * 0x2e8 +
                         -0x7ff7a5db);
  uVar2 = (uint)*(byte *)(((param_2 & 0x7f) - 1) * 0x7c + ((param_2 & 0xff) >> 7) * 0x2e8 +
                         -0x7ff7a5db);
  uVar1 = uVar3 - uVar2;
  if ((int)uVar1 < 0) {
    uVar1 = uVar2 - uVar3;
  }
  uVar1 = uVar1 & 0xff;
  if (uVar1 == 0) {
    uVar4 = (uint)*(byte *)(((param_1 & 0x7f) - 1) * 0x7c + ((param_1 & 0xff) >> 7) * 0x2e8 +
                           -0x7ff7a5da);
    uVar3 = (uint)*(byte *)(((param_2 & 0x7f) - 1) * 0x7c + ((param_2 & 0xff) >> 7) * 0x2e8 +
                           -0x7ff7a5da);
    uVar2 = uVar4 - uVar3;
    uVar1 = uVar2 & 0xff;
    if ((int)uVar2 < 0) {
      uVar1 = uVar3 - uVar4 & 0xff;
    }
  }
  return uVar1;
}

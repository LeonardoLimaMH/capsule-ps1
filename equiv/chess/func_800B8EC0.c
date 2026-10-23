#include "common.h"

#include "ghidra.h"
void func_800B8EC0(int param_1)

{
    extern u8 D_80086012[];
    extern s32 D_8008ED84[];
  uint uVar1;
  
  if (((*D_8008ED84) / 0x14 & 1) == 0) {
    uVar1 = *(uint *)(param_1 + 0x38) | 1;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x38) & 0xfffffffe;
  }
  *(uint *)(param_1 + 0x38) = uVar1;
  if ((*D_80086012) != '\x05') {
    func_800185F8();
  }
  return;
}

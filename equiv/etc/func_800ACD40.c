#include "common.h"

#include "ghidra.h"
void func_800ACD40(int param_1)

{
    extern M2C_UNK D_8008ED68[];
    extern s32 D_8008EE44[];
    extern s32 D_8008EE48[];
  uint uVar1;
  
  if (((D_8008EE44 == 6) && (D_8008EE48 != 0)) || (D_8008EE44 == 8)) {
    uVar1 = *(uint *)(param_1 + 0x38) & 0xfffffffe;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x38) | 1;
  }
  *(uint *)(param_1 + 0x38) = uVar1;
  return;
}

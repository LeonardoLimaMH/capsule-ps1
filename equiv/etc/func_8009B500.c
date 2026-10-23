#include "common.h"

#include "ghidra.h"
void func_8009B500(int param_1)

{
    extern u16 D_8008EE44[];
    extern M2C_UNK D_800B3AF8[];
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x38);
  *(uint *)(param_1 + 0x38) = uVar1 | 1;
  if (((*D_8008EE44) == 4) ||
     (((*D_8008EE44) == 5 && (*(int *)((*D_800B3AF8) + *(int *)(param_1 + 0x84) * 4) < 2)))
     ) {
    *(uint *)(param_1 + 0x38) = uVar1 & 0xfffffffe;
  }
  return;
}

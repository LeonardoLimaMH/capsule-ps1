#include "common.h"

#include "ghidra.h"
undefined4 func_800C7D84(undefined4 param_1,undefined4 param_2,int param_3)

{
    extern u16 D_8008EE54[];
  undefined4 uVar1;
  
  uVar1 = 0;
  if (((*D_8008EE54) == 0) && (*(char *)(param_3 + 0x22) == *(char *)(param_3 + 0x17))) {
    uVar1 = 1;
    *(undefined1 *)(param_3 + 0x17) = 1;
    *(uint *)(param_3 + 0x18) = *(uint *)(param_3 + 0x18) | 0x1040040;
  }
  return uVar1;
}

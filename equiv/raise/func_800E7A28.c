#include "common.h"

#include "ghidra.h"
undefined4 func_800E7A28(uint param_1)

{
    extern M2C_UNK D_80085428[];
    extern M2C_UNK D_80091618[];
  undefined4 uVar1;
  
  param_1 = param_1 & 0xffff;
  uVar1 = 0;
  if (*(char *)(param_1 + 0x800861a4) == '\x02') {
    if (*(short *)(param_1 * 0x1a8 + -0x7ff6e912) < 0x97) {
      *(undefined1 *)(param_1 + 0x800861a4) = 0;
      uVar1 = 0;
    }
    else {
      *(undefined2 *)(param_1 * 0x1a8 + -0x7ff6e844) = 0x47;
      uVar1 = 1;
    }
  }
  return uVar1;
}

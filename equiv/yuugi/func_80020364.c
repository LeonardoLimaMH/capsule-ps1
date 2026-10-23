#include "common.h"

#include "ghidra.h"
uint func_80020364(uint param_1)

{
    extern M2C_UNK D_80063940[];
    extern u8 D_80085428[];
  uint uVar1;
  
  if ((*D_80085428) == '\x01') {
    uVar1 = *(uint *)((param_1 & 0xff) * 0x3c + -0x7ff9c6b4) >> 9 & 3;
  }
  else {
    uVar1 = *(uint *)((param_1 & 0xff) * 0x3c + -0x7ff9c6b4) >> 6 & 7;
  }
  return uVar1;
}

#include "common.h"

#include "ghidra.h"
bool func_800E7B18(uint param_1)

{
    extern M2C_UNK D_80085428[];
    extern M2C_UNK D_80091618[];
  short sVar1;
  int iVar2;
  
  iVar2 = (param_1 & 0xffff) * 0x1a8;
  sVar1 = *(short *)(iVar2 + -0x7ff6e844);
  if (sVar1 != 0) {
    *(short *)(iVar2 + -0x7ff6e844) = sVar1 + -1;
  }
  else {
    *(undefined2 *)(iVar2 + -0x7ff6e844) = 0;
    *(undefined1 *)((param_1 & 0xffff) + 0x800861a4) = 0;
  }
  return sVar1 == 0;
}

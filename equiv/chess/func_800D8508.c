#include "common.h"

#include "ghidra.h"
int func_800D8508(undefined1 param_1,uint param_2)

{
    extern M2C_UNK D_80085428[];
  uint uVar1;
  int iVar2;
  
  iVar2 = ((param_2 & 0x7f) - 1) * 0x7c + ((param_2 & 0xff) >> 7) * 0x2e8;
  uVar1 = func_800D7B80(param_1,*(undefined1 *)(iVar2 + -0x7ff7a5e0));
  return (uVar1 & 0xff) - (uint)*(byte *)(iVar2 + -0x7ff7a5e0);
}

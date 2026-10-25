#include "common.h"

#include "ghidra.h"
void func_8001602C(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  
  iVar2 = 0x33;
  *(undefined2 *)(param_1 + 0x4e) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0x58) = 0;
  *(undefined2 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) & 0xffffff80;
  do {
    puVar1 = (undefined1 *)(param_1 + 0x18 + iVar2);
    iVar2 = iVar2 + -1;
    *puVar1 = 0;
  } while (-1 < iVar2);
  iVar2 = 9;
  param_1 = param_1 + 0x24;
  do {
    *(undefined4 *)(param_1 + 0x5c) = 0;
    iVar2 = iVar2 + -1;
    param_1 = param_1 + -4;
  } while (-1 < iVar2);
  return;
}

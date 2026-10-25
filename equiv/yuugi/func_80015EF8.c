#include "common.h"

#include "ghidra.h"
void func_80015EF8(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  
  iVar2 = 0x1f;
  *(undefined1 *)(param_1 + 0x5a) = 0x80;
  *(undefined1 *)(param_1 + 0x59) = 0x80;
  *(undefined1 *)(param_1 + 0x58) = 0x80;
  *(undefined2 *)(param_1 + 0x50) = 0x1000;
  *(undefined2 *)(param_1 + 0x52) = 0x1000;
  *(undefined2 *)(param_1 + 0x60) = 0x140;
  *(undefined2 *)(param_1 + 0x62) = 0xf0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined2 *)(param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0x56) = 0;
  *(undefined1 *)(param_1 + 0x57) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined2 *)(param_1 + 0x78) = 0;
  *(undefined2 *)(param_1 + 0x74) = 0;
  *(undefined2 *)(param_1 + 0x76) = 0;
  *(undefined2 *)(param_1 + 100) = 0;
  *(undefined2 *)(param_1 + 0x66) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x5b) = 0;
  *(undefined2 *)(param_1 + 0x5c) = 0;
  *(undefined2 *)(param_1 + 0x5e) = 0;
  *(undefined2 *)(param_1 + 0x7a) = 0;
  *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) & 0xffffff80;
  *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xffffff00;
  *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) & 0xffff007f;
  do {
    puVar1 = (undefined1 *)(param_1 + 0x14 + iVar2);
    iVar2 = iVar2 + -1;
    *puVar1 = 0;
  } while (-1 < iVar2);
  iVar2 = 4;
  param_1 = param_1 + 0x10;
  do {
    *(undefined4 *)(param_1 + 0x7c) = 0;
    iVar2 = iVar2 + -1;
    param_1 = param_1 + -4;
  } while (-1 < iVar2);
  return;
}

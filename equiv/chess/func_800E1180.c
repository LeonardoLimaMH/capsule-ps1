#include "common.h"

#include "ghidra.h"
void func_800E1180(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x18) + 1;
  *(int *)(param_1 + 0x18) = iVar2;
  *(short *)(param_1 + 0x3a) = *(short *)(param_1 + 0x3a) + 0xe;
  *(short *)(param_1 + 0x3c) = *(short *)(param_1 + 0x3c) + 0xe;
  cVar1 = '\x7f' - (char)((iVar2 * 0x7f) / 0x1e);
  *(char *)(param_1 + 0x32) = cVar1;
  *(char *)(param_1 + 0x31) = cVar1;
  *(char *)(param_1 + 0x30) = cVar1;
  if (0x1d < *(int *)(param_1 + 0x18)) {
    func_80013920(param_1);
  }
  return;
}

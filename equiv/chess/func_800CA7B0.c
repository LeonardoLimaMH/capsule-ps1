#include "common.h"

#include "ghidra.h"
void func_800CA7B0(int param_1,int param_2,int param_3,char param_4,short param_5)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  
  iVar3 = param_2 + param_3;
  puVar2 = (undefined1 *)(param_2 + (uint)*(byte *)(param_2 + 0x6a) * 6 + 0x2e);
  iVar1 = (uint)*(byte *)(iVar3 + 0x6b) + (int)param_5;
  if (iVar1 < 0x100) {
    if (iVar1 < 0) {
      *(ushort *)(puVar2 + 2) = -(ushort)*(byte *)(iVar3 + 0x6b);
    }
    else {
      *(short *)(puVar2 + 2) = param_5;
    }
  }
  else {
    *(ushort *)(puVar2 + 2) = 0xff - (ushort)*(byte *)(iVar3 + 0x6b);
  }
  if (*(short *)(puVar2 + 2) != 0) {
    if ((param_3 != 0) && (param_4 != '\0')) {
      *puVar2 = (char)param_3;
      puVar2[4] = param_4 << 1;
      *(char *)(param_2 + 0x6a) = *(char *)(param_2 + 0x6a) + '\x01';
      *(char *)(param_1 + 0xce5) = (char)param_3;
    }
    *(char *)(param_2 + param_3 + 0x6b) = *(char *)(param_2 + param_3 + 0x6b) + puVar2[2];
  }
  return;
}

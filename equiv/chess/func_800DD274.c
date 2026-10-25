#include "common.h"

#include "ghidra.h"
void func_800DD274(int param_1,int param_2,int param_3)

{
    extern s32 D_80118C18[];
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (uint)*(byte *)(param_1 + 0x16) * 4;
  iVar2 = (uint)*(byte *)(param_1 + 0x15) * 0x34;
  uVar1 = *(undefined1 *)(iVar3 + iVar2 + (*D_80118C18) + 3);
  *(char *)(param_1 + 0x15) = (char)param_2;
  *(char *)(param_1 + 0x16) = (char)param_3;
  *(undefined1 *)(iVar3 + iVar2 + (*D_80118C18) + 3) = 0;
  *(undefined1 *)(param_3 * 4 + param_2 * 0x34 + (*D_80118C18) + 3) = uVar1;
  return;
}

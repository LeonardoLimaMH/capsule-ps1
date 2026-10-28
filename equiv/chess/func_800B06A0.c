#include "common.h"

#include "ghidra.h"
#define DAT_801010b4 (*(s32 *)0x801010B4)
#define D_801010B0 (*(s32 *)0x801010B0)
#define func_80024990 ((s32 (*)())0x80024990)
#define func_80025CEC ((s32 (*)())0x80025CEC)
void func_800B06A0(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;

  iVar1 = (uint)*(byte *)(param_1 + 0x5d9) * 0x34;
  iVar3 = param_1 + 0x5d0 + (uint)*(byte *)(param_1 + 0xbca) * 2;
  iVar6 = *(int *)(((u8 *)0x801010B4) + iVar1);
  uVar2 = (uint)*(byte *)(iVar3 + 0x602);
  uVar5 = (uint)*(byte *)(iVar3 + 0x601);
  if (*(byte *)(param_1 + 0x5d9) == 4) {
    uVar4 = *(uint *)(*(int *)(((u8 *)0x801010B0) + iVar1) + 0x150);
  }
  else {
    uVar4 = *(uint *)(uVar2 * 4 + uVar5 * 0x34 + *(int *)(((u8 *)0x801010B0) + iVar1));
  }
  func_80025CEC(1,0xd - uVar2,uVar5 + 1,uVar4 >> 0x13 & 7);
  func_80024990(*(undefined4 *)(iVar6 + 0x98),1,param_2,0);
  return;
}

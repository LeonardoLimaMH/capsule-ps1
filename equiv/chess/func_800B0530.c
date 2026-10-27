#include "common.h"

#include "ghidra.h"
#define DAT_801010ba (*(u8 *)0x801010BA)
#define DAT_801010bb (*(u8 *)0x801010BB)
#define D_80078C30 (*(s16 *)0x80078C30)
#define D_801010B0 (*(s32 *)0x801010B0)
#define func_80025CEC ((s32 (*)())0x80025CEC)
#define func_80025DA8 ((s32 (*)())0x80025DA8)
#define func_80025FC0 ((s32 (*)())0x80025FC0)
void func_800B0530(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;

  uVar2 = (uint)*(byte *)(param_1 + 0x5d9);
  iVar1 = param_1 + (uint)*(byte *)(param_1 + 0xbca) * 2;
  iVar6 = *(int *)(((u8 *)0x801010B0) + uVar2 * 0x34);
  uVar5 = (uint)*(byte *)(iVar1 + 0xbd1);
  uVar4 = (uint)*(byte *)(iVar1 + 0xbd2);
  if ((uVar2 < 2) || ((uVar2 < 5 && (2 < uVar2)))) {
    D_80078C30 = 0;
  }
  else {
    D_80078C30 = 1;
  }
  uVar2 = (uint)*(byte *)(param_1 + 0x5d9);
  uVar3 = *(uint *)(uVar5 * 4 + uVar4 * 0x34 + iVar6) >> 0x13 & 7;
  if ((uVar2 == 10) || (uVar2 == 6)) {
    uVar3 = 1;
    uVar2 = (uint)*(byte *)(param_1 + 0x5d9);
  }
  func_80025FC0(1,(&DAT_801010bb)[uVar2 * 0x34],(&DAT_801010ba)[uVar2 * 0x34],uVar3);
  func_80025CEC(1,0xd - uVar5,uVar4 + 1,*(uint *)(uVar5 * 4 + uVar4 * 0x34 + iVar6) >> 0x13 & 7);
  func_80025DA8(1);
  return;
}

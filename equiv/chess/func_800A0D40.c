#include "common.h"

#include "ghidra.h"
#define D_80065310 (*(s32 *)0x80065310)
#define func_800202A4 ((s32 (*)())0x800202A4)
#define func_800CB10C ((s32 (*)())0x800CB10C)
undefined4 func_800A0D40(int param_1,uint param_2,int param_3)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;

  uVar2 = 0;
  if (*(s8 *)(param_1 + param_2 + 0x5e4) != -1) {
    if (param_3 == 0) {
      bVar1 = param_2 != *(byte *)(param_1 + 0xbca);
    }
    else {
      bVar1 = param_2 == *(byte *)(param_1 + 0xbca);
    }
    iVar3 = func_800CB10C(param_1,param_1 + 0x5d0,param_2);
    if (bVar1) {
      iVar4 = 0x16;
      if (0 < iVar3) {
        iVar4 = 0x15;
      }
    }
    else {
      if (iVar3 < 1) {
        return 0;
      }
      iVar3 = func_800202A4(2);
      iVar4 = 0x14;
      if (iVar3 != 0) {
        iVar4 = 0x13;
      }
    }
    uVar5 = (uint)*(byte *)(param_1 + param_2 + 0x5e4);
    if (uVar5 < 8) {
      iVar3 = param_2 * 0x980 + -0x5580;
    }
    else {
      iVar3 = 0;
    }
    uVar2 = 1;
    *(int *)(param_1 + 0x14) =
         *(int *)(iVar4 * 4 + *(int *)(((u8 *)0x80065310) + uVar5 * 4) + iVar3) + iVar3;
  }
  return uVar2;
}

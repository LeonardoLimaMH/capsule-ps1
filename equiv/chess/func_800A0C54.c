#include "common.h"

#include "ghidra.h"
#define D_80065310 (*(s32 *)0x80065310)
#define func_800202A4 ((s32 (*)())0x800202A4)
undefined4 func_800A0C54(int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;

  uVar1 = 0;
  if (*(s8 *)(param_1 + param_2 + 0x5e4) != -1) {
    iVar2 = func_800202A4(8);
    uVar1 = 0;
    if (iVar2 < 2) {
      if (param_2 == *(byte *)(param_1 + 0xbca)) {
        iVar3 = 0x1c;
        if (iVar2 != 0) {
          iVar3 = 0x1b;
        }
      }
      else {
        iVar3 = 0x1a;
        if (iVar2 != 0) {
          iVar3 = 0x19;
        }
      }
      uVar4 = (uint)*(byte *)(param_1 + param_2 + 0x5e4);
      if (uVar4 < 8) {
        iVar2 = param_2 * 0x980 + -0x5580;
      }
      else {
        iVar2 = 0;
      }
      uVar1 = 1;
      *(int *)(param_1 + 0x14) =
           *(int *)(iVar3 * 4 + *(int *)(((u8 *)0x80065310) + uVar4 * 4) + iVar2) + iVar2;
    }
  }
  return uVar1;
}

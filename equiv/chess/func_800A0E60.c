#include "common.h"

#include "ghidra.h"
#define DAT_8008f75c (*(u8 *)0x8008F75C)
#define D_80065310 (*(s32 *)0x80065310)
#define func_800202A4 ((s32 (*)())0x800202A4)
#define func_800CB10C ((s32 (*)())0x800CB10C)
#define func_800D33B0 ((s32 (*)())0x800D33B0)
#define func_800FF96C ((s32 (*)())0x800FF96C)
int func_800A0E60(int param_1,uint param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;

  if ((*(short *)(param_1 + 0xbd8) == 0) && (param_2 == *(byte *)(param_1 + 0x5da))) {
    return 0;
  }
  if ((*(s8 *)(param_1 + param_2 + 0x5e4) != -1) && (param_3 == 0)) {
    iVar2 = func_800D33B0(param_2 & 0xff);
    if (((2 < iVar2) && (DAT_8008f75c == '\0')) &&
       (((bVar1 = func_800FF96C(1 - param_2 & 0xff), 4 < bVar1 &&
         (iVar2 = func_800202A4(100), iVar2 < 0x1e)) ||
        ((6 < bVar1 && (iVar2 = func_800202A4(100), iVar2 < 0x46)))))) {
      uVar5 = (uint)*(byte *)(param_1 + param_2 + 0x5e4);
      if (uVar5 < 8) {
        iVar2 = param_2 * 0x980 + -0x5580;
      }
      else {
        iVar2 = 0;
      }
      *(int *)(param_1 + 0x14) = *(int *)(*(int *)(&D_80065310 + uVar5 * 4) + iVar2 + 0xa4) + iVar2;
      DAT_8008f75c = 1;
      return param_2 + 1;
    }
    DAT_8008f75c = '\0';
  }
  iVar2 = func_800202A4(0x14);
  iVar3 = func_800CB10C(param_1,param_1 + 0x5d0,1);
  iVar3 = (uint)*(byte *)(param_1 + 0xbec) - iVar3;
  if (((*(s8 *)((param_1 + 0x5e5) - param_2) == -1) || (1 < iVar2)) || (param_3 != 0)) {
    if (*(s8 *)(param_1 + param_2 + 0x5e4) != -1) {
      if (1 < iVar2) {
        return 0;
      }
      if (param_3 != 0) {
        if (iVar3 == -2) {
          iVar3 = 0x27;
          if (param_2 == 0) {
            iVar3 = 0x28;
          }
        }
        else if (iVar3 == 2) {
          iVar3 = 0x28;
          if (param_2 == 0) {
            iVar3 = 0x27;
          }
        }
        else {
          iVar3 = func_800CB10C(param_1,param_1 + 0x5d0,param_2);
          if (iVar3 < 1) {
            return 0;
          }
          iVar3 = 3;
          if (iVar2 != 0) {
            iVar3 = 2;
          }
        }
        uVar5 = (uint)*(byte *)(param_1 + param_2 + 0x5e4);
        if (uVar5 < 8) {
          iVar2 = param_2 * 0x980 + -0x5580;
        }
        else {
          iVar2 = 0;
        }
        iVar4 = *(int *)(iVar3 * 4 + *(int *)(&D_80065310 + uVar5 * 4) + iVar2);
        iVar3 = param_2 + 1;
        goto LAB_800a118c;
      }
    }
LAB_800a1198:
    iVar3 = 0;
  }
  else {
    if (iVar3 == -2) {
      iVar3 = 0x27;
      if (param_2 == 1) {
        iVar3 = 0x28;
      }
    }
    else if (iVar3 == 2) {
      iVar3 = 0x28;
      if (param_2 == 1) {
        iVar3 = 0x27;
      }
    }
    else {
      iVar2 = func_800CB10C(param_1,param_1 + 0x5d0,1 - param_2);
      iVar3 = 4;
      if (iVar2 < 1) goto LAB_800a1198;
    }
    uVar5 = (uint)*(byte *)((param_1 + 0x5e5) - param_2);
    if (uVar5 < 8) {
      iVar2 = (1 - param_2) * 0x980 + -0x5580;
    }
    else {
      iVar2 = 0;
    }
    iVar4 = *(int *)(iVar3 * 4 + *(int *)(&D_80065310 + uVar5 * 4) + iVar2);
    iVar3 = 2 - param_2;
LAB_800a118c:
    *(int *)(param_1 + 0x14) = iVar4 + iVar2;
  }
  return iVar3;
}

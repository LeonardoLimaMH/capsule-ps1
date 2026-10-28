#include "common.h"

#include "ghidra.h"
#define D_801010B0 (*(s32 *)0x801010B0)
#define func_8001A998 ((s32 (*)())0x8001A998)
void func_800A1BD4(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  iVar5 = *(int *)(((u8 *)0x801010B0) + (uint)*(byte *)(param_2 + 9) * 0x34);
  func_8001A998(param_2 + 0x6d9,7);
  iVar4 = 0;
  do {
    iVar3 = 0xc;
    iVar1 = iVar5 + 0x30;
    do {
      *(undefined1 *)(iVar1 + 3) = 0;
      iVar3 = iVar3 + -1;
      iVar1 = iVar1 + -4;
    } while (-1 < iVar3);
    iVar4 = iVar4 + 1;
    iVar5 = iVar5 + 0x34;
  } while (iVar4 < 0xd);
  iVar4 = 0;
  iVar5 = 0;
  do {
    iVar3 = 0;
    iVar1 = iVar5;
    do {
      iVar2 = param_2 + iVar1;
      iVar3 = iVar3 + 1;
      *(undefined1 *)(iVar2 + 0x2d) = 0;
      *(undefined1 *)(iVar2 + 0x2e) = 0;
      *(undefined1 *)(iVar2 + 0x2f) = 0;
      iVar1 = iVar1 + 0x7c;
    } while (iVar3 < 6);
    iVar4 = iVar4 + 1;
    iVar5 = iVar5 + 0x2e8;
  } while (iVar4 < 2);
  return;
}

#include "common.h"

#include "ghidra.h"
#define func_800A431C ((s32 (*)())0x800A431C)
#define func_800A44E8 ((s32 (*)())0x800A44E8)
#define func_800A4678 ((s32 (*)())0x800A4678)
#define func_800A4900 ((s32 (*)())0x800A4900)
void func_800A3FC0(int param_1,uint param_2,undefined4 param_3,code *param_4)

{
  int iVar1;
  uint uVar2;
  s8 *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 uVar8;

  uVar8 = 0;
  iVar5 = 0;
  iVar7 = param_1 + (param_2 & 0xff) * 2;
  iVar6 = param_1;
  do {
    iVar4 = 0;
    pcVar3 = (s8 *)(iVar6 + 0xc00);
    do {
      if (*pcVar3 != '\0') {
        iVar1 = func_800A4678(param_4);
        *(uint *)(iVar1 + 0x5c) = param_2 & 0xff;
        *(int *)(iVar1 + 0x60) = iVar5;
        *(int *)(iVar1 + 100) = iVar4;
        *(uint *)(iVar1 + 0x68) = (uint)*(byte *)(iVar7 + 0xbd1);
        *(uint *)(iVar1 + 0x6c) = (uint)*(byte *)(iVar7 + 0xbd2);
        *(uint *)(iVar1 + 0x50) = *(uint *)(iVar1 + 0x50) & 0xffffffce | 0x40;
        func_800A4900(param_1,iVar1 + 0x18,iVar5,iVar4);
        if (param_4 == func_800A431C) {
          uVar2 = func_800A44E8(param_1,iVar5,iVar4);
          *(uint *)(iVar1 + 0x70) = uVar2 & 0xff;
        }
        *(undefined1 *)(iVar1 + 0x58) = uVar8;
        uVar8 = 1;
      }
      iVar4 = iVar4 + 1;
      pcVar3 = (s8 *)(iVar6 + 0xc00) + iVar4;
    } while (iVar4 < 0xd);
    iVar5 = iVar5 + 1;
    iVar6 = iVar6 + 0xd;
  } while (iVar5 < 0xd);
  return;
}

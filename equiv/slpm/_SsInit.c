#include "common.h"

#include "ghidra.h"
void _SsInit(void)

{
    extern u16 D_80133300[];
    extern u16 D_80133310[];
    extern s32 D_801373E4[];
    extern s32 D_801373E8[];
    extern s32 D_801373EC[];
    extern u8 D_80137470[];
  undefined2 uVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  
  puVar6 = (undefined2 *)0x1f801c00;
  iVar4 = 0;
  do {
    iVar5 = 0;
    puVar7 = (undefined2 *)(*D_80133300);
    do {
      uVar1 = *puVar7;
      puVar7 = puVar7 + 1;
      iVar5 = iVar5 + 1;
      *puVar6 = uVar1;
      puVar6 = puVar6 + 1;
    } while (iVar5 < 8);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x18);
  puVar7 = (undefined2 *)0x1f801d80;
  iVar4 = 0;
  puVar6 = (undefined2 *)D_80133310;
  do {
    uVar1 = *puVar6;
    puVar6 = puVar6 + 1;
    iVar4 = iVar4 + 1;
    *puVar7 = uVar1;
    puVar7 = puVar7 + 1;
  } while (iVar4 < 0x10);
  _SsVmInit(0x18);
  iVar4 = 0;
  puVar3 = D_80137470;
  do {
    iVar5 = 0xf;
    puVar2 = (undefined4 *)(puVar3 + 0x3c);
    do {
      *puVar2 = 0;
      iVar5 = iVar5 + -1;
      puVar2 = puVar2 + -1;
    } while (-1 < iVar5);
    iVar4 = iVar4 + 1;
    puVar3 = puVar3 + 0x40;
  } while (iVar4 < 0x20);
  (*D_801373EC) = 0x3c;
  (*D_801373E8) = 0;
  (*D_801373E4) = 0;
  return;
}

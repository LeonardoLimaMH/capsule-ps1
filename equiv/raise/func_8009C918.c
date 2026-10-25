#include "common.h"

#include "ghidra.h"
void func_8009C918(int param_1)

{
    extern u8 D_80018600[];
    extern int func_8009C5F4();
  undefined1 uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar3 = func_80015B3C(func_8009C5F4,D_80018600,1);
  iVar4 = func_800202A4(4);
  iVar5 = func_80015B3C(D_80018600,D_80018600,5);
  func_80015EF8(iVar5);
  uVar6 = func_80019F30(0x6000e,0x271);
  *(undefined4 *)(iVar5 + 0x18) = uVar6;
  *(uint *)(iVar5 + 0x38) = *(uint *)(iVar5 + 0x38) & 0xffffffcf | 0x50;
  *(uint *)(iVar5 + 0x34) = *(uint *)(iVar5 + 0x34) & 0xffffff80 | param_1 + 1U & 0x7f;
  *(int *)(iVar3 + 0x28) = iVar5;
  sVar2 = func_800202A4(0x65);
  *(short *)(iVar3 + 0x2c) = sVar2 + -0x32;
  sVar2 = func_800202A4(100);
  *(short *)(iVar3 + 0x2e) = -sVar2;
  *(undefined2 *)(iVar3 + 0x30) = 6;
  uVar1 = func_800202A4(5);
  *(undefined1 *)(iVar3 + 0x32) = uVar1;
  if (iVar4 == 0) {
    *(undefined1 *)(iVar3 + 0x33) = 6;
    *(undefined1 *)(iVar3 + 0x34) = 4;
    sVar2 = func_800202A4(400);
    sVar2 = sVar2 + -200;
  }
  else {
    *(undefined1 *)(iVar3 + 0x33) = 0x14;
    *(undefined1 *)(iVar3 + 0x34) = 1;
    sVar2 = func_800202A4(0x1000);
  }
  *(short *)(iVar3 + 0x38) = sVar2;
  sVar2 = func_800202A4(0x32);
  *(short *)(iVar3 + 0x3a) = sVar2 + 0x32;
  sVar2 = func_800202A4(0x14);
  *(short *)(iVar3 + 0x3c) = sVar2 + 0x28;
  return;
}

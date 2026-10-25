#include "common.h"

#include "ghidra.h"
void func_800EE690(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
    extern u8 D_80085A10[];
    extern int func_800EE4F4();
    extern int func_800F8B48();
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  
  iVar3 = 0;
  puVar4 = D_80085A10 + param_3 * 0x2e8 + param_4 * 0x7c;
  puVar4[0x20] = 3;
  puVar4[0x21] = 4;
  *(uint *)(puVar4 + 0x18) = *(uint *)(puVar4 + 0x18) | 0x200000;
  do {
    iVar2 = func_80015B3C(func_800EE4F4,func_800F8B48,1);
    func_800FE188(puVar4,iVar2 + 0x28);
    *(undefined1 *)(iVar2 + 0x30) = 0x7f;
    *(undefined1 *)(iVar2 + 0x31) = 0x7f;
    *(undefined1 *)(iVar2 + 0x32) = 0x7f;
    *(undefined1 *)(iVar2 + 0x34) = 0x7f;
    *(undefined1 *)(iVar2 + 0x35) = 0x7f;
    *(undefined1 *)(iVar2 + 0x36) = 0x7f;
    *(undefined1 *)(iVar2 + 0x38) = 5;
    uVar1 = GetTPage(0,1,0x280,0x100);
    *(undefined2 *)(iVar2 + 0x3a) = uVar1;
    uVar1 = GetClut(0x20,0x1f0);
    *(char *)(iVar2 + 0x14) = (char)iVar3;
    iVar3 = iVar3 + 1;
    *(undefined2 *)(iVar2 + 0x3c) = uVar1;
    *(undefined1 *)(iVar2 + 0x40) = 1;
    *(undefined2 *)(iVar2 + 0x42) = 0x14;
    *(undefined1 *)(iVar2 + 0x3e) = 0;
    *(undefined1 *)(iVar2 + 0x3f) = 0;
    *(undefined2 *)(iVar2 + 0x46) = 0x32;
    *(undefined2 *)(iVar2 + 0x44) = 0x32;
    *(int *)(iVar2 + 0x18) = (int)*(short *)(iVar2 + 0x2a);
  } while (iVar3 < 5);
  return;
}

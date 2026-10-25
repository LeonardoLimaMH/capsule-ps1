#include "common.h"

#include "ghidra.h"
void func_800EDD8C(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
    extern u8 D_80085A10[];
    extern int func_800EE8CC();
    extern int func_800FB650();
  undefined2 uVar1;
  int iVar2;
  
  iVar2 = func_80015B3C(func_800EE8CC,func_800FB650,1);
  func_800FE188(D_80085A10 + param_3 * 0x2e8 + param_4 * 0x7c,iVar2 + 0x28);
  *(undefined1 *)(iVar2 + 0x30) = 0x7f;
  *(undefined1 *)(iVar2 + 0x31) = 0x7f;
  *(undefined1 *)(iVar2 + 0x32) = 0x7f;
  *(undefined1 *)(iVar2 + 0x34) = 0x10;
  *(undefined2 *)(iVar2 + 0x36) = 0x3c;
  *(undefined2 *)(iVar2 + 0x3e) = 0x40;
  *(undefined2 *)(iVar2 + 0x3a) = 0;
  *(undefined2 *)(iVar2 + 0x3c) = 0;
  *(undefined1 *)(iVar2 + 0x40) = 1;
  uVar1 = GetTPage(0,1,0x280,0x100);
  *(undefined2 *)(iVar2 + 0x42) = uVar1;
  uVar1 = GetClut(0xb0,0x1f0);
  *(undefined2 *)(iVar2 + 0x44) = uVar1;
  *(undefined1 *)(iVar2 + 0x46) = 0;
  func_800374E8(0x800f);
  return;
}

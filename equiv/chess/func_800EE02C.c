#include "common.h"

#include "ghidra.h"
void func_800EE02C(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
    extern u8 D_80018600[];
    extern u8 D_80085A10[];
    extern int func_800EDE7C();
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = func_80015B3C(func_800EDE7C,D_80018600,1);
  puVar2 = D_80085A10 + param_3 * 0x2e8 + param_4 * 0x7c;
  *(uint *)(puVar2 + 0x18) = *(uint *)(puVar2 + 0x18) | 0x80000;
  *(undefined1 **)(iVar1 + 0x14) = puVar2;
  func_800FE188(puVar2,iVar1 + 0x2c);
  func_80034AB0(0x800d);
  return;
}

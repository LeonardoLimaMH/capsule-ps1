#include "common.h"

#include "ghidra.h"
void func_800FBB90(undefined2 param_1)

{
    extern u8 D_80018600[];
    extern int func_800F52C4();
  int iVar1;
  
  iVar1 = func_80015B3C(D_80018600,func_800F52C4,1);
  *(undefined1 *)(iVar1 + 0x28) = 0xff;
  *(undefined1 *)(iVar1 + 0x29) = 0xff;
  *(undefined1 *)(iVar1 + 0x2a) = 0xff;
  *(undefined1 *)(iVar1 + 0x2c) = 0;
  *(undefined1 *)(iVar1 + 0x2d) = 0;
  *(undefined1 *)(iVar1 + 0x2e) = 0;
  *(undefined1 *)(iVar1 + 0x30) = 1;
  *(undefined2 *)(iVar1 + 0x32) = param_1;
  return;
}

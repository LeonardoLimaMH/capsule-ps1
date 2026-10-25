#include "common.h"

#include "ghidra.h"
void func_800EDAC8(int param_1)

{
    extern u8 D_80018600[];
    extern s8 D_8008610C[];
    extern int func_800F5514();
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x40) == 2) {
    func_80034AB0(0x8009);
  }
  if (*(int *)(param_1 + 0x40) == (int)*(short *)(param_1 + 0x32)) {
    iVar2 = func_80015B3C(D_80018600,func_800F5514,1);
    *(undefined2 *)(iVar2 + 0x28) = *(undefined2 *)(param_1 + 0x2c);
    *(undefined2 *)(iVar2 + 0x2a) = *(undefined2 *)(param_1 + 0x2e);
    uVar1 = *(undefined2 *)(param_1 + 0x30);
    *(undefined1 *)(iVar2 + 0x32) = 1;
    *(undefined1 *)(iVar2 + 0x33) = 1;
    *(undefined1 *)(iVar2 + 0x34) = 8;
    *(undefined2 *)(iVar2 + 0x36) = 0x28;
    *(undefined1 *)(iVar2 + 0x2e) = 0xff;
    *(undefined1 *)(iVar2 + 0x2f) = 0xff;
    *(undefined1 *)(iVar2 + 0x30) = 0;
    *(undefined2 *)(iVar2 + 0x38) = 0x1e;
    *(undefined2 *)(iVar2 + 0x2c) = uVar1;
    *(undefined1 *)(param_1 + 0x38) = 0xff;
    *(undefined1 *)(param_1 + 0x39) = 0xff;
    *(undefined1 *)(param_1 + 0x3a) = 0x7f;
    func_80034AB0(0x65);
  }
  if ((int)*(short *)(param_1 + 0x32) < *(int *)(param_1 + 0x40)) {
    *(uint *)(iVar3 + 0x34) =
         *(uint *)(iVar3 + 0x34) & 0xffffff80 | (uint)(*(int *)(param_1 + 0x40) % 3 != 0);
  }
  if (*(int *)(param_1 + 0x40) == (int)*(short *)(param_1 + 0x36)) {
    *(uint *)(iVar3 + 0x34) = *(uint *)(iVar3 + 0x34) & 0xffffff80;
    (*D_8008610C) = 1;
  }
  return;
}

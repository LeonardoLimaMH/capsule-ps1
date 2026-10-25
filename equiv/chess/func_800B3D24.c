#include "common.h"

#include "ghidra.h"
void func_800B3D24(int param_1)

{
    extern int func_800161C4();
    extern int func_800B4304();
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = func_800C9414();
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0xbe0) = 2;
    func_800B38B0(param_1);
    iVar1 = func_80015B3C(func_800B4304,&func_800161C4,5);
    func_80015EF8(iVar1);
    uVar2 = func_80019F30(0x60012,0x1b);
    *(undefined4 *)(iVar1 + 0x18) = uVar2;
    *(undefined2 *)(iVar1 + 0x46) = 0xff70;
    *(undefined2 *)(iVar1 + 0x4a) = 0xff98;
    *(undefined2 *)(iVar1 + 0x4e) = 4;
    *(uint *)(iVar1 + 0x34) = *(uint *)(iVar1 + 0x34) & 0xffffff80 | 10;
    uVar3 = 0;
    if (*(char *)(param_1 + 0xbca) != '\0') {
      *(short *)(iVar1 + 0x46) = *(short *)(iVar1 + 0x46) + 0xe0;
    }
    do {
      iVar1 = func_80015B3C(func_800B4304,&func_800161C4,5);
      func_80015EF8(iVar1);
      uVar2 = func_80019F30(0x60012,uVar3 + 0x20);
      *(undefined4 *)(iVar1 + 0x18) = uVar2;
      *(undefined2 *)(iVar1 + 0x46) = 0xff70;
      *(undefined2 *)(iVar1 + 0x4a) = 0xff98;
      *(undefined2 *)(iVar1 + 0x4e) = 3;
      *(uint *)(iVar1 + 0x34) = *(uint *)(iVar1 + 0x34) & 0xffffff80 | uVar3 & 0x7f;
      if (*(char *)(param_1 + 0xbca) != '\0') {
        *(short *)(iVar1 + 0x46) = *(short *)(iVar1 + 0x46) + 0xe0;
      }
      if (*(char *)(param_1 + uVar3 + 0xbf0) == '\0') {
        *(undefined1 *)(iVar1 + 0x5a) = 0x40;
        *(undefined1 *)(iVar1 + 0x59) = 0x40;
        *(undefined1 *)(iVar1 + 0x58) = 0x40;
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < 4);
    *(undefined1 *)(param_1 + 0xbe9) = 1;
    func_800125D8();
  }
  return;
}

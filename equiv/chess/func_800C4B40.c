#include "common.h"

#include "ghidra.h"
extern s32 func_80015B3C();
extern s32 func_80015CD0();
extern s32 func_80015EF8();
extern s32 func_800161C4();
extern s32 func_80019F30();
extern s32 func_80034AB0();
extern s32 func_8009CA60();
extern s32 func_800C48DC();
int func_800C4B40
              (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;

  func_8009CA60(1);
  func_80034AB0(0x800c);
  iVar3 = 0;
  do {
    iVar1 = func_80015B3C(func_800C48DC,&func_800161C4,5);
    func_80015EF8(iVar1);
    iVar3 = iVar3 + 1;
    *(undefined4 *)(iVar1 + 0x7c) = param_3;
    *(undefined4 *)(iVar1 + 0x80) = param_4;
    *(int *)(iVar1 + 0x84) = iVar3;
    *(undefined4 *)(iVar1 + 0x40) = param_2;
    *(uint *)(iVar1 + 0x38) = *(uint *)(iVar1 + 0x38) | 1;
    uVar2 = func_80019F30(0x70013,0x59);
    func_80015CD0(iVar1 + 0x14,uVar2,2);
  } while (iVar3 < 10);
  return iVar1;
}

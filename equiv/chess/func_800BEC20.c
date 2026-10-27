#include "common.h"

#include "ghidra.h"
#define _D_8008EE50 (*(u16 *)0x8008EE50)
#define bRam8008ee6b (*(u8 *)0x8008EE6B)
extern s32 func_800125AC();
extern s32 func_800125D8();
extern s32 func_80012628();
extern s32 func_8001264C();
extern s32 func_800A0290();
extern s32 func_800A3FC0();
extern s32 func_800A41C4();
extern s32 func_800AECC4();
extern s32 func_800D76D8();
void func_800BEC20(int param_1)

{
  char cVar1;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;

  uVar4 = (uint)*(byte *)(param_1 + 0xbca);
  uVar5 = (uint)*(byte *)(param_1 + uVar4 + 0xbcb);
  if (_D_8008EE50 == 1) {
    func_800A0290(param_1,*(undefined2 *)(param_1 + 0xc));
    if (5 < *(ushort *)(param_1 + 0xc)) {
      if (*(char *)(param_1 + 0x5d0 + uVar4 + 0x10) != '\0') {
        if (bRam8008ee6b < 2) {
          uVar2 = *(short *)(param_1 + 0xc) + 1;
        }
        else {
          uVar2 = *(short *)(param_1 + 0xc) + (ushort)bRam8008ee6b;
        }
        *(ushort *)(param_1 + 0xc) = uVar2;
        if (0x1a < uVar2) {
          *(undefined2 *)(param_1 + 0xc) = 6;
          func_800AECC4(param_1 + 0x5d0,uVar4);
        }
      }
      if ((*(uint *)(uVar4 * 0x10 + -0x7ff71210) & 0x40) == 0) {
        return;
      }
      *(undefined1 *)(param_1 + 0xd77) = 1;
      *(undefined1 *)(param_1 + 0xbe9) = 0;
      *(undefined1 *)(param_1 + 0xbe0) = 2;
      func_8001264C();
      return;
    }
    if (bRam8008ee6b < 2) {
      sVar3 = *(short *)(param_1 + 0xc) + 1;
    }
    else {
      sVar3 = *(short *)(param_1 + 0xc) + (ushort)bRam8008ee6b;
    }
  }
  else {
    if (_D_8008EE50 < 2) {
      if (_D_8008EE50 != 0) {
        return;
      }
      cVar1 = func_800D76D8((uVar4 << 7 | uVar5 + 1) & 0xff,param_1 + 0xc00);
      if (cVar1 == '\0') {
        func_80012628();
      }
      else {
        func_800125D8();
      }
      *(undefined1 *)(param_1 + 0xd77) = 0;
      func_800A3FC0(param_1,uVar4,uVar5,func_800A41C4);
      *(undefined1 *)(param_1 + 0xbe9) = 1;
      *(undefined1 *)(param_1 + 0xbe5) = 1;
      *(undefined1 *)(param_1 + 0xbe0) = 3;
      *(undefined2 *)(param_1 + 0xc) = 0;
      return;
    }
    if (3 < _D_8008EE50) {
      return;
    }
    func_800A0290(param_1,*(undefined2 *)(param_1 + 0xc));
    if (*(short *)(param_1 + 0xc) == 0) {
      if (_D_8008EE50 == 2) {
        func_800125AC(3);
        return;
      }
      func_800125D8();
      return;
    }
    if (bRam8008ee6b < 2) {
      sVar3 = *(short *)(param_1 + 0xc) + -1;
    }
    else {
      sVar3 = *(short *)(param_1 + 0xc) - (ushort)bRam8008ee6b;
    }
  }
  *(short *)(param_1 + 0xc) = sVar3;
  return;
}

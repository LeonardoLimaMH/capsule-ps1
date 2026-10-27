#include "common.h"

#include "ghidra.h"
#define _D_8008EE50 (*(u16 *)0x8008EE50)
#define bRam8008ee6b (*(u8 *)0x8008EE6B)
extern s32 func_800125AC();
extern s32 func_800125D8();
extern s32 func_80012628();
extern s32 func_8001264C();
extern s32 func_8001A998();
extern s32 func_80034AB0();
extern s32 func_800A0290();
extern s32 func_800A02BC();
extern s32 func_800A3FC0();
extern s32 func_800A8E34();
extern s32 func_800AECC4();
extern s32 func_800B4384();
extern s32 func_800D4EEC();
void func_800B4518(int param_1)

{
  bool bVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;

  iVar9 = param_1 + 0x5d0;
  uVar11 = (uint)*(byte *)(param_1 + 0xbca);
  uVar10 = (uint)*(byte *)(iVar9 + uVar11 + 0x5fb);
  if (_D_8008EE50 == 1) {
    if (*(char *)(iVar9 + uVar10 * 0x7c + uVar11 * 0x2e8 + 0x29) == '\0') {
      func_800A02BC(param_1,*(undefined2 *)(param_1 + 0xc));
    }
    else {
      func_800A0290(param_1,*(undefined2 *)(param_1 + 0xc));
    }
    if (5 < *(ushort *)(param_1 + 0xc)) {
      if (*(char *)(iVar9 + uVar11 + 0x10) != '\0') {
        if (bRam8008ee6b < 2) {
          uVar2 = *(short *)(param_1 + 0xc) + 1;
        }
        else {
          uVar2 = *(short *)(param_1 + 0xc) + (ushort)bRam8008ee6b;
        }
        *(ushort *)(param_1 + 0xc) = uVar2;
        if (0x1a < uVar2) {
          func_800AECC4(iVar9,uVar11);
        }
      }
      if ((*(uint *)(uVar11 * 0x10 + -0x7ff71210) & 0x40) == 0) {
        return;
      }
      func_80034AB0(0x5d);
      bVar1 = false;
      *(undefined1 *)(param_1 + 0xbe9) = 0;
      *(undefined1 *)(param_1 + 0xd77) = 1;
      if (*(char *)(param_1 + 0xbde) != '\0') {
        bVar1 = *(char *)(param_1 + 0xbee) == '\a';
      }
      if (bVar1) {
        *(undefined1 *)(param_1 + 0xbde) = 0;
      }
      func_8001264C(2);
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
      func_8001A998(param_1 + 0xcb0,0x2b);
      iVar4 = func_800D4EEC(param_1 + 0xc00);
      iVar8 = uVar11 * 0x2e8;
      iVar7 = iVar9 + uVar10 * 0x7c + iVar8;
      *(undefined1 *)(param_1 + 0xd77) = 0;
      if ((*(char *)(iVar7 + 0x18) == '\x17') && (*(char *)(iVar7 + 0x41) != '\0')) {
        iVar7 = 0;
        do {
          iVar5 = func_800A8E34(iVar9,uVar11,iVar7);
          if ((iVar5 == 0) &&
             (pcVar6 = (char *)((uint)*(byte *)(iVar9 + iVar8 + 0x2d) * 0xd + iVar9 + 0x630 +
                               (uint)*(byte *)(iVar9 + iVar8 + 0x2e)), *pcVar6 != '\0')) {
            iVar4 = iVar4 + -1;
            *pcVar6 = '\0';
          }
          iVar7 = iVar7 + 1;
          iVar8 = iVar8 + 0x7c;
        } while (iVar7 < 6);
      }
      func_800A3FC0(param_1,uVar11,uVar10,func_800B4384);
      *(undefined1 *)(param_1 + 0xbe9) = 1;
      if (0 < iVar4) {
        func_800125D8();
        *(undefined2 *)(param_1 + 0xc) = 0;
        return;
      }
      func_80012628();
      *(undefined2 *)(param_1 + 0xc) = 0;
      return;
    }
    if (3 < _D_8008EE50) {
      return;
    }
    if (*(char *)(iVar9 + uVar10 * 0x7c + uVar11 * 0x2e8 + 0x29) == '\0') {
      func_800A02BC(param_1,*(undefined2 *)(param_1 + 0xc));
    }
    else {
      func_800A0290(param_1,*(undefined2 *)(param_1 + 0xc));
    }
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

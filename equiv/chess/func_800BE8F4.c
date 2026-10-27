#include "common.h"

#include "ghidra.h"
#define DAT_8008edf0 (*(s32 *)0x8008EDF0)
#define DAT_8008ee50 (*(u16 *)0x8008EE50)
#define DAT_8008ee6b (*(u8 *)0x8008EE6B)
extern s32 func_800125AC();
extern s32 func_800125D8();
extern s32 func_80012628();
extern s32 func_8001264C();
extern s32 func_800A0290();
extern s32 func_800A3FC0();
extern s32 func_800A8E34();
extern s32 func_800A8E84();
extern s32 func_800AECC4();
extern s32 func_800B4384();
extern s32 func_800D4EEC();
void func_800BE8F4(int param_1)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;

  iVar8 = param_1 + 0x5d0;
  uVar10 = (uint)*(byte *)(param_1 + 0xbca);
  iVar9 = uVar10 * 0x2e8;
  uVar12 = (uint)*(byte *)(iVar8 + uVar10 + 0x5fb);
  iVar11 = iVar8 + iVar9 + 0x18 + uVar12 * 0x7c;
  iVar3 = func_800A8E84(iVar8);
  if (DAT_8008ee50 == 1) {
    func_800A0290(param_1,*(undefined2 *)(param_1 + 0xc));
    if (5 < *(ushort *)(param_1 + 0xc)) {
      if (*(char *)(iVar8 + uVar10 + 0x10) != '\0') {
        if (DAT_8008ee6b < 2) {
          uVar1 = *(short *)(param_1 + 0xc) + 1;
        }
        else {
          uVar1 = *(short *)(param_1 + 0xc) + (ushort)DAT_8008ee6b;
        }
        *(ushort *)(param_1 + 0xc) = uVar1;
        if (0x1a < uVar1) {
          *(undefined2 *)(param_1 + 0xc) = 6;
          func_800AECC4(iVar8,uVar10);
        }
      }
      if (((&DAT_8008edf0)[uVar10 * 4] & 0x40) == 0) {
        return;
      }
      *(undefined1 *)(param_1 + 0xbde) = 0;
      *(undefined1 *)(param_1 + 0xbe9) = 0;
      *(undefined1 *)(param_1 + 0xd77) = 1;
      func_8001264C(2);
      return;
    }
    if (DAT_8008ee6b < 2) {
      sVar2 = *(short *)(param_1 + 0xc) + 1;
    }
    else {
      sVar2 = *(short *)(param_1 + 0xc) + (ushort)DAT_8008ee6b;
    }
  }
  else {
    if (DAT_8008ee50 < 2) {
      if (DAT_8008ee50 != 0) {
        return;
      }
      *(undefined1 *)(param_1 + 0xbde) = 1;
      iVar7 = 0;
      *(char *)(iVar11 + 0x11) = *(char *)(iVar11 + 0x11) + *(char *)(iVar3 + 0x14);
      iVar4 = func_800D4EEC(param_1 + 0xc00);
      *(undefined1 *)(param_1 + 0xd77) = 0;
      do {
        iVar5 = func_800A8E34(iVar8,uVar10,iVar7);
        if ((iVar5 == 0) &&
           (pcVar6 = (char *)((uint)*(byte *)(iVar8 + iVar9 + 0x2d) * 0xd + iVar8 + 0x630 +
                             (uint)*(byte *)(iVar8 + iVar9 + 0x2e)), *pcVar6 != '\0')) {
          iVar4 = iVar4 + -1;
          *pcVar6 = '\0';
        }
        iVar7 = iVar7 + 1;
        iVar9 = iVar9 + 0x7c;
      } while (iVar7 < 6);
      *(char *)(iVar11 + 0x11) = *(char *)(iVar11 + 0x11) - *(char *)(iVar3 + 0x14);
      func_800A3FC0(param_1,uVar10,uVar12,func_800B4384);
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
    if (3 < DAT_8008ee50) {
      return;
    }
    func_800A0290(param_1,*(undefined2 *)(param_1 + 0xc));
    if (*(short *)(param_1 + 0xc) == 0) {
      if (DAT_8008ee50 == 2) {
        func_800125AC(3);
        return;
      }
      func_800125D8();
      return;
    }
    if (DAT_8008ee6b < 2) {
      sVar2 = *(short *)(param_1 + 0xc) + -1;
    }
    else {
      sVar2 = *(short *)(param_1 + 0xc) - (ushort)DAT_8008ee6b;
    }
  }
  *(short *)(param_1 + 0xc) = sVar2;
  return;
}

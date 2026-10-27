#include "common.h"

#include "ghidra.h"
#define DAT_8008edf0 (*(s32 *)0x8008EDF0)
#define DAT_8008ee50 (*(u16 *)0x8008EE50)
#define DAT_8008ee6b (*(u8 *)0x8008EE6B)
extern s32 func_800125AC();
extern s32 func_800125D8();
extern s32 func_80012628();
extern s32 func_8001264C();
extern s32 func_800A0238();
extern s32 func_800A0264();
extern s32 func_800A0290();
extern s32 func_800A03C4();
extern s32 func_800A3FC0();
extern s32 func_800A4108();
extern s32 func_800A41C4();
extern s32 func_800A431C();
extern s32 func_800A8E84();
extern s32 func_800AECC4();
extern s32 func_800BE244();
extern s32 func_800D72CC();
void func_800BE46C(int param_1,int param_2)

{
  char cVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;

  iVar6 = param_1 + 0x5d0;
  uVar7 = (uint)*(byte *)(param_1 + 0xbca);
  uVar8 = (uint)*(byte *)(param_1 + uVar7 + 0xbcb);
  iVar4 = func_800A8E84(iVar6);
  if (DAT_8008ee50 != 0) {
    if ((*(uint *)(iVar4 + 0x10) & 0x1807c) == 0x8024) {
      if (*(char *)(iVar6 + uVar7 * 0x2e8 + 0x18 + uVar8 * 0x7c) == 'X') {
        func_800A03C4(param_1,*(undefined2 *)(param_1 + 0xc));
      }
      else {
        func_800A0290(param_1,*(undefined2 *)(param_1 + 0xc));
      }
    }
    else if ((*(uint *)(iVar4 + 0x10) >> 2 & 0x1f) - 0xe < 2) {
      func_800A0264(param_1,*(undefined2 *)(param_1 + 0xc));
    }
    else {
      func_800A0238(param_1,*(undefined2 *)(param_1 + 0xc));
    }
  }
  if (DAT_8008ee50 == 1) {
    if (5 < *(ushort *)(param_1 + 0xc)) {
      if (*(char *)(uVar7 + iVar6 + 0x10) != '\0') {
        if (DAT_8008ee6b < 2) {
          uVar2 = *(short *)(param_1 + 0xc) + 1;
        }
        else {
          uVar2 = *(short *)(param_1 + 0xc) + (ushort)DAT_8008ee6b;
        }
        *(ushort *)(param_1 + 0xc) = uVar2;
        if (0x1a < uVar2) {
          *(undefined2 *)(param_1 + 0xc) = 6;
          func_800AECC4(iVar6,uVar7);
        }
      }
      if (((&DAT_8008edf0)[uVar7 * 4] & 0x40) == 0) {
        return;
      }
      *(undefined1 *)(param_1 + 0xbe9) = 0;
      *(undefined1 *)(param_1 + 0xd77) = 1;
      *(undefined1 *)(iVar6 + uVar8 * 0x7c + uVar7 * 0x2e8 + 0x2f) = 1;
      *(undefined1 *)(param_1 + 0xbe0) = 2;
      func_8001264C();
      return;
    }
    if (DAT_8008ee6b < 2) {
      sVar3 = *(short *)(param_1 + 0xc) + 1;
    }
    else {
      sVar3 = *(short *)(param_1 + 0xc) + (ushort)DAT_8008ee6b;
    }
  }
  else {
    if (DAT_8008ee50 < 2) {
      if (DAT_8008ee50 != 0) {
        return;
      }
      cVar1 = func_800D72CC((uVar7 << 7 | uVar8 + 1) & 0xff,param_1 + 0xc00);
      if (cVar1 == '\0') {
        func_80012628();
        *(undefined1 *)(param_1 + 0xd77) = 0;
      }
      else {
        iVar5 = func_800A8E84(iVar6);
        if ((*(uint *)(iVar5 + 0x10) >> 0x15 & 7) == 1) {
          func_800BE244(iVar6,uVar7,0);
        }
        func_800125D8();
        *(undefined1 *)(param_1 + 0xd77) = 0;
      }
      if (param_2 == 1) {
        func_800A3FC0(param_1,uVar7,uVar8,func_800A431C);
        *(undefined1 *)(param_1 + 0xd78) = 0xff;
      }
      else if (((*(uint *)(iVar4 + 0x10) >> 7 & 0xf) == 7) &&
              (*(char *)(iVar6 + uVar8 * 0x7c + uVar7 * 0x2e8 + 0x18) != 'B')) {
        func_800A4108();
      }
      else {
        func_800A3FC0(param_1,uVar7,uVar8,func_800A41C4);
      }
      iVar6 = iVar6 + uVar8 * 0x7c + uVar7 * 0x2e8;
      *(undefined1 *)(iVar6 + 0x2f) = 0x81;
      *(undefined1 *)(iVar6 + 0x3b) = 0;
      *(undefined1 *)(param_1 + 0xbe9) = 1;
      if (param_2 == 2) {
        *(undefined1 *)(param_1 + 0xbe5) = 0;
        *(undefined1 *)(param_1 + 0xbe0) = 0;
      }
      else {
        *(undefined1 *)(param_1 + 0xbe5) = 1;
        *(undefined1 *)(param_1 + 0xbe0) = 3;
      }
      *(undefined2 *)(param_1 + 0xc) = 0;
      return;
    }
    if (3 < DAT_8008ee50) {
      return;
    }
    if (*(short *)(param_1 + 0xc) == 0) {
      if (DAT_8008ee50 == 2) {
        *(undefined1 *)(param_1 + 0xbe5) = 1;
        func_800125AC(3);
        return;
      }
      func_800125D8();
      return;
    }
    if (DAT_8008ee6b < 2) {
      sVar3 = *(short *)(param_1 + 0xc) + -1;
    }
    else {
      sVar3 = *(short *)(param_1 + 0xc) - (ushort)DAT_8008ee6b;
    }
  }
  *(short *)(param_1 + 0xc) = sVar3;
  return;
}

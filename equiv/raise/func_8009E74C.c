#include "common.h"

#include "ghidra.h"
#define D_80085429 (*(u8 *)0x80085429)
#define D_80091618 (*(s32 *)0x80091618)
#define D_800EC084 (*(s32 *)0x800EC084)
#define D_800EC0D8 (*(s32 *)0x800EC0D8)
#define D_800ED884 (*(s16 *)0x800ED884)
#define D_800ED886 (*(u16 *)0x800ED886)
#define D_800EE630 (*(s32 *)0x800EE630)
#define D_800F01E4 (*(s32 *)0x800F01E4)
#define D_800F2CC0 (*(s32 *)0x800F2CC0)
#define D_80103EE0 (*(s32 *)0x80103EE0)
#define _D_8006AF80 (*(u16 *)0x8006AF80)
#define _D_8006AF90 (*(u16 *)0x8006AF90)
#define _D_8008ED80 (*(s32 *)0x8008ED80)
#define _D_8008EDF0 (*(s32 *)0x8008EDF0)
#define _D_800EFFE8 (*(s32 *)0x800EFFE8)
extern s32 __divdf3();
extern s32 __fixdfsi();
extern s32 __floatsidf();
extern s32 __muldf3();
extern s32 func_80015CD0();
extern s32 func_80019F30();
extern s32 func_8009ED54();
extern s32 func_800A7280();
extern s32 func_800A72E0();
extern s32 func_800A7340();
extern s32 func_800A74C0();
extern s32 func_800A7600();
extern s32 func_800A76C0();
extern s32 func_800A865C();
extern s32 func_800A875C();
extern s32 func_800A8CD0();
extern s32 func_800C5EFC();
extern s32 func_800C60E0();
extern s32 func_800C62A4();
extern s32 func_800D1598();
extern s32 func_800DBAA8();
extern s32 rand();
undefined4 func_8009E74C(void)

{
  bool bVar1;
  short sVar2;
  undefined2 uVar3;
  ushort uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  ushort uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  if (D_800ED884 == 1) {
    if (D_80085429 == '\0') {
      iVar5 = rand();
      D_800ED884 = 2;
      D_800ED886 = (short)(iVar5 + _D_8008ED80) + (short)((uint)(iVar5 + _D_8008ED80) / 6) * -6;
    }
    else {
      func_800D1598(&D_80103EE0);
      if ((_D_8008EDF0 & 0x20) != 0) {
        D_800ED884 = 2;
      }
    }
    uVar6 = 0;
  }
  else if ((D_800ED884 < 2) && (D_800ED884 == 0)) {
    iVar5 = func_8009ED54();
    uVar6 = 0;
    if (iVar5 != 0) {
      D_800ED884 = 1;
    }
  }
  else {
    D_800ED884 = 0;
    uVar4 = 0;
    uVar9 = 0;
    do {
      uVar4 = uVar4 + 1;
      *(undefined2 *)(&D_800F2CC0 + uVar9 * 2) =
           *(undefined2 *)
            (D_800EC084 +
            uVar9 * 2 + (uint)*(ushort *)((uint)_D_8006AF80 * 0x1a8 + -0x7ff6e9d8) * 0xc);
      uVar9 = (uint)uVar4;
    } while (uVar4 < 6);
    uVar9 = 0;
    if (0 < _D_800EFFE8) {
      do {
        uVar4 = *(ushort *)((uVar9 & 0xffff) * 2 + (uint)_D_8006AF80 * 0x1a8 + -0x7ff6e9d4);
        uVar10 = 0;
        do {
          uVar7 = (uint)uVar10;
          uVar10 = uVar10 + 1;
          *(short *)(&D_800F2CC0 + uVar7 * 2) =
               *(short *)(&D_800F2CC0 + uVar7 * 2) +
               *(short *)(&D_800EC0D8 + uVar7 * 2 + (uint)uVar4 * 0xc);
        } while (uVar10 < 6);
        uVar9 = uVar9 + 1;
      } while ((int)(uVar9 & 0xffff) < _D_800EFFE8);
    }
    uVar4 = 0;
    uVar9 = 0;
    do {
      if (*(short *)(&D_800F2CC0 + uVar9 * 2) < 0) {
        uVar10 = 0;
        uVar7 = 0;
        do {
          uVar10 = uVar10 + 1;
          *(short *)(&D_800F2CC0 + uVar7 * 2) =
               *(short *)(&D_800F2CC0 + uVar7 * 2) -
               *(short *)(&D_800F2CC0 + uVar9 * 2);
          uVar7 = (uint)uVar10;
        } while (uVar10 < 6);
      }
      uVar4 = uVar4 + 1;
      uVar9 = (uint)uVar4;
    } while (uVar4 < 6);
    iVar5 = 0;
    uVar4 = 0;
    do {
      uVar9 = (uint)uVar4;
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + (uint)*(ushort *)(&D_800F2CC0 + uVar9 * 2);
    } while (uVar4 < 6);
    uVar11 = __floatsidf(iVar5 * 0x10000 >> 0x10);
    uVar4 = 0;
    uVar11 = __divdf3(0,0x40590000,(int)uVar11,(int)((ulonglong)uVar11 >> 0x20));
    uVar9 = 0;
    do {
      uVar4 = uVar4 + 1;
      uVar12 = __floatsidf((int)*(short *)(&D_800F2CC0 + uVar9 * 2));
      uVar12 = __muldf3((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar12,
                               (int)((ulonglong)uVar12 >> 0x20));
      sVar2 = __fixdfsi((int)uVar12,(int)((ulonglong)uVar12 >> 0x20));
      *(short *)(&D_800F2CC0 + uVar9 * 2) = sVar2;
      uVar10 = _D_8006AF80;
      uVar9 = (uint)uVar4;
    } while (uVar4 < 6);
    uVar4 = 1;
    do {
      bVar1 = uVar4 < 6;
      uVar4 = uVar4 + 1;
    } while (bVar1);
    uVar9 = (uint)_D_8006AF80;
    uVar3 = func_800A8CD0(6,&D_800F2CC0);
    iVar5 = uVar9 * 0x1a8;
    *(undefined2 *)(iVar5 + -0x7ff6e956) = uVar3;
    uVar3 = func_800A7280(0,*(undefined2 *)(iVar5 + -0x7ff6e956));
    *(undefined2 *)(iVar5 + -0x7ff6e948) = uVar3;
    uVar4 = func_800A72E0(0,*(undefined2 *)(iVar5 + -0x7ff6e956));
    *(ushort *)(&D_80091618 + iVar5) = uVar4;
    func_800A7340(uVar9,(uint)uVar4);
    func_800DBAA8((int)(short)uVar10);
    iVar8 = (uint)uVar4 * 0x3c;
    *(ushort *)(iVar5 + -0x7ff6e934) = (ushort)*(byte *)(iVar8 + -0x7ff9c6b2);
    *(ushort *)(iVar5 + -0x7ff6e932) = (ushort)*(byte *)(iVar8 + -0x7ff9c6b1);
    *(ushort *)(iVar5 + -0x7ff6e930) = (ushort)*(byte *)(iVar8 + -0x7ff9c6b0);
    *(ushort *)(iVar5 + -0x7ff6e92e) = (ushort)*(byte *)(iVar8 + -0x7ff9c6af);
    *(ushort *)(iVar5 + -0x7ff6e92c) = (ushort)*(byte *)(iVar8 + -0x7ff9c6ae);
    func_800A7600(uVar9);
    func_800A76C0(uVar9);
    func_800C60E0(1,1);
    func_800C62A4(1,1);
    func_800C5EFC(1,1);
    func_800A74C0(uVar9,*(undefined2 *)(iVar5 + -0x7ff6e890));
    func_800A865C(uVar9);
    func_800A875C(uVar9);
    uVar6 = 0xffffffff;
    if (4 < (int)(*(u32 *)((u8 *)&D_800F01E4 + 184))) {
      uVar7 = ((*(u32 *)((u8 *)&D_800F01E4 + 184)) & 0xffff) - 5;
      uVar9 = uVar7 & 0xffff;
      if ((int)uVar9 < _D_8006AF90 + -1) {
        do {
          iVar8 = uVar9 * 4;
          *(undefined2 *)(uVar9 * 2 + -0x7ff9506e) = *(undefined2 *)(uVar9 * 2 + -0x7ff9506c);
          iVar5 = (uVar9 + 1) * 4;
          *(undefined2 *)(iVar8 + -0x7ff95068) = *(undefined2 *)(iVar5 + -0x7ff95068);
          *(undefined2 *)(iVar8 + -0x7ff95066) = *(undefined2 *)(iVar5 + -0x7ff95066);
          uVar7 = uVar7 + 1;
          *(undefined4 *)(D_800F01E4 + iVar8 + 0x15c) = *(undefined4 *)(D_800F01E4 + iVar8 + 0x160);
          uVar9 = uVar7 & 0xffff;
        } while ((int)uVar9 < _D_8006AF90 + -1);
      }
      (*(u32 *)((u8 *)&D_800F01E4 + 184)) = 0;
      _D_8006AF90 = _D_8006AF90 + -1;
      (*(u32 *)((u8 *)&D_800F01E4 + 188)) = (*(u32 *)((u8 *)&D_800F01E4 + 188)) + -1;
      iVar5 = (*(u32 *)((u8 *)&D_800EE630 + 24)) + *(int *)(D_800F01E4 + (*(u32 *)((u8 *)&D_800F01E4 + 328)) * 4 + 0x10c);
      uVar6 = func_80019F30((*(u32 *)((u8 *)&D_800EE630 + 0)) | 0x70000,iVar5);
      func_80015CD0((*(u32 *)((u8 *)&D_800F01E4 + 392)) + 0x14,uVar6,0);
      *(int *)((*(u32 *)((u8 *)&D_800F01E4 + 392)) + 0x7c) = iVar5;
      uVar6 = 0xffffffff;
    }
  }
  return uVar6;
}

#include "common.h"

#include "ghidra.h"
#define D_80018600 (*(s32 *)0x80018600)
#define bRam8008ee6b (*(u8 *)0x8008EE6B)
extern s32 func_80012604();
extern s32 func_80015B3C();
extern s32 func_8001602C();
extern s32 func_80034AB0();
extern s32 func_800A3E20();
extern s32 func_800A4678();
extern s32 func_800A4900();
extern s32 func_800A5B00();
extern s32 func_800A8548();
extern s32 func_800A87C8();
extern s32 func_800AE35C();
extern s32 func_800C8EF0();
extern s32 func_800CA730();
extern s32 func_800CAE6C();
extern s32 func_800D4EEC();
void func_800A4F2C(int param_1)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 uVar10;
  uint uStack_38;
  int iStack_34;
  uint uStack_30;
  uint uStack_2c;

  iVar8 = param_1 + 0x5d0;
  uVar6 = (uint)*(byte *)(param_1 + 0xbca);
  if (*(int *)(uVar6 * 0x10 + -0x7ff71210) != 0) {
    *(undefined2 *)(param_1 + 0xc) = 0;
  }
  iVar3 = func_800CAE6C(iVar8);
  if (iVar3 != 0) {
    return;
  }
  if (*(char *)(param_1 + 0xbea) == '\0') {
    if (*(char *)(iVar8 + uVar6 + 0x10) != '\0') {
      func_800AE35C(param_1,iVar8,uVar6);
    }
    if (*(char *)(param_1 + 0xbf4) != '\0') {
      return;
    }
    if (bRam8008ee6b < 2) {
      uVar2 = *(short *)(param_1 + 0xc) + 1;
    }
    else {
      uVar2 = *(short *)(param_1 + 0xc) + (ushort)bRam8008ee6b;
    }
    *(ushort *)(param_1 + 0xc) = uVar2;
    if (8000 < uVar2) {
      if ((*(char *)(param_1 + uVar6 + 0x5e4) != -1) || (*(char *)((param_1 + 0x5e5) - uVar6) != -1)
         ) {
        func_80012604(6);
      }
      *(undefined2 *)(param_1 + 0xc) = 0;
    }
    func_800C8EF0(param_1,uVar6,iVar8 + uVar6 * 2 + 0x601);
    func_800A8548(param_1,iVar8,uVar6);
    if ((*(uint *)(uVar6 * 0x10 + -0x7ff71210) & 0x20) == 0) {
      return;
    }
    func_800CA730(param_1,uVar6,&uStack_38,&iStack_34);
    if (iStack_34 == -1) {
      return;
    }
    if (uStack_38 == uVar6) {
      func_800A87C8(param_1,uVar6,iStack_34,0);
      *(undefined1 *)(iVar8 + uVar6 + 0x5fb) = (undefined1)iStack_34;
      *(undefined1 *)(param_1 + 0xbeb) = 0;
      if (*(char *)(iVar8 + uVar6 + 0x10) == '\0') {
        *(undefined1 *)(iVar8 + uVar6 * 6 + 0x5ec) = (undefined1)iStack_34;
      }
      iVar3 = iVar8 + uVar6 * 2;
      *(undefined1 *)(param_1 + 0xcb0) = *(undefined1 *)(iVar3 + 0x601);
      *(undefined1 *)(param_1 + 0xcb1) = *(undefined1 *)(iVar3 + 0x602);
      if (*(char *)(iVar8 + iStack_34 * 0x7c + uStack_38 * 0x2e8 + 0x40) == '\0') {
        func_80012604(7);
        return;
      }
      func_80012604(5);
      return;
    }
    if (*(char *)(param_1 + 0xd77) != '\0') {
      return;
    }
    iVar8 = func_800D4EEC(param_1 + 0xc00);
    uVar10 = 0;
    if (iVar8 != 0) {
      iVar3 = 0;
      iVar9 = param_1 + uVar6 * 2;
      iVar8 = param_1;
      uStack_2c = uVar6;
      do {
        iVar7 = 0;
        pcVar5 = (char *)(iVar8 + 0xc00);
        do {
          if (*pcVar5 != '\0') {
            iVar4 = func_800A4678(func_800A3E20);
            *(int *)(iVar4 + 0x60) = iVar3;
            *(int *)(iVar4 + 100) = iVar7;
            *(uint *)(iVar4 + 0x5c) = uStack_2c;
            *(uint *)(iVar4 + 0x68) = (uint)*(byte *)(iVar9 + 0xbd1);
            bVar1 = *(byte *)(iVar9 + 0xbd2);
            *(uint *)(iVar4 + 0x50) = *(uint *)(iVar4 + 0x50) & 0xffffffce | 0x40;
            *(uint *)(iVar4 + 0x6c) = (uint)bVar1;
            func_800A4900(param_1,iVar4 + 0x18,iVar3,iVar7);
            *(undefined1 *)(iVar4 + 0x58) = uVar10;
            uVar10 = 1;
          }
          iVar7 = iVar7 + 1;
          pcVar5 = (char *)(iVar8 + 0xc00) + iVar7;
        } while (iVar7 < 0xd);
        iVar3 = iVar3 + 1;
        iVar8 = iVar8 + 0xd;
      } while (iVar3 < 0xd);
      goto L800A545C;
    }
  }
  else {
    if (*(char *)(param_1 + 0xbea) != '\x05') {
      return;
    }
    func_800C8EF0(param_1,uVar6,iVar8 + uVar6 * 2 + 0x601);
    if (*(char *)(param_1 + 0xd77) != '\0') {
      return;
    }
    if ((*(uint *)(uVar6 * 0x10 + -0x7ff71210) & 0x20) == 0) {
      return;
    }
    func_800CA730(param_1,uVar6,&uStack_38,&iStack_34);
    if (uStack_38 == uVar6) {
      return;
    }
    if (iStack_34 == -1) {
      return;
    }
    func_80034AB0(0x48);
    iVar8 = func_800D4EEC(param_1 + 0xc00);
    uVar10 = 0;
    if (iVar8 != 0) {
      iVar3 = 0;
      iVar9 = param_1 + uVar6 * 2;
      iVar8 = param_1;
      uStack_30 = uVar6;
      do {
        iVar7 = 0;
        pcVar5 = (char *)(iVar8 + 0xc00);
        do {
          if (*pcVar5 != '\0') {
            iVar4 = func_800A4678(func_800A3E20);
            *(int *)(iVar4 + 0x60) = iVar3;
            *(int *)(iVar4 + 100) = iVar7;
            *(uint *)(iVar4 + 0x5c) = uStack_30;
            *(uint *)(iVar4 + 0x68) = (uint)*(byte *)(iVar9 + 0xbd1);
            bVar1 = *(byte *)(iVar9 + 0xbd2);
            *(uint *)(iVar4 + 0x50) = *(uint *)(iVar4 + 0x50) & 0xffffffce | 0x40;
            *(uint *)(iVar4 + 0x6c) = (uint)bVar1;
            func_800A4900(param_1,iVar4 + 0x18,iVar3,iVar7);
            *(undefined1 *)(iVar4 + 0x58) = uVar10;
            uVar10 = 1;
          }
          iVar7 = iVar7 + 1;
          pcVar5 = (char *)(iVar8 + 0xc00) + iVar7;
        } while (iVar7 < 0xd);
        iVar3 = iVar3 + 1;
        iVar8 = iVar8 + 0xd;
      } while (iVar3 < 0xd);
      goto L800A545C;
    }
  }
  iVar8 = func_80015B3C(func_800A5B00,&D_80018600,3);
  func_8001602C(iVar8);
  *(uint *)(iVar8 + 0x5c) = uVar6;
  iVar3 = param_1 + uVar6 * 2;
  *(uint *)(iVar8 + 0x68) = (uint)*(byte *)(iVar3 + 0xbd1);
  *(uint *)(iVar8 + 0x6c) = (uint)*(byte *)(iVar3 + 0xbd2);
L800A545C:
  *(undefined1 *)(param_1 + 0xd77) = 1;
  *(undefined1 *)(param_1 + 0xbe0) = 2;
  return;
}

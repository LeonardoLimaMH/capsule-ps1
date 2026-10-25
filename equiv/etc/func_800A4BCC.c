#include "common.h"

#include "ghidra.h"
void func_800A4BCC(void)

{
    extern u8 D_80033450[];
    extern u8 D_80063940[];
    extern u8 D_80091618[];
    extern s32 D_800B3C1C[];
    extern int func_800A81F4();
    extern int func_800A822C();
    extern int func_800A8278();
    extern int func_800A8350();
    extern int func_800A83CC();
    extern int func_800A847C();
    extern int func_800A8534();
    extern int func_800A8638();
    extern int func_800A86A4();
    extern int func_800A8758();
    extern int func_800A8810();
    extern int func_800A88DC();
    extern int func_800A8988();
    extern int func_800A8B74();
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  ushort uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ushort *puVar9;
  int iVar10;
  uint uVar11;
  byte bVar12;
  
  iVar10 = 0;
  do {
    uVar1 = func_80019F30(0x2000c,iVar10);
    func_80012A20(uVar1,1,0,0);
    iVar10 = iVar10 + 1;
  } while (iVar10 < 0x13);
  iVar10 = 0;
  do {
    uVar1 = func_80019F30(0x2000c,iVar10 + 0x13);
    func_80012A20(uVar1,1,0,0);
    iVar10 = iVar10 + 1;
  } while (iVar10 < 2);
  uVar1 = func_80019F30(0x5000c,0);
  func_80012A20(uVar1,1,0,0);
  uVar11 = 0;
  iVar10 = 6;
  do {
    uVar1 = 0xffffff88;
    if ((uVar11 & 1) != 0) {
      uVar1 = 0x28;
    }
    uVar7 = 0xffffff98;
    if ((int)uVar11 / 2 != 0) {
      uVar7 = 0xfffffff0;
    }
    iVar2 = iVar10;
    if (uVar11 == 0) {
      iVar2 = 5;
    }
    iVar2 = func_80032DB0(uVar1,uVar7,4,0xc,iVar2,func_800A8278);
    *(uint *)(iVar2 + 0x80) = uVar11;
    uVar11 = uVar11 + 1;
    *(uint *)(iVar2 + 0x30) = *(uint *)(iVar2 + 0x30) & 0xffffffcf | 0x20;
    iVar10 = iVar10 + 2;
  } while ((int)uVar11 < 4);
  func_80032DB0(0xffffffa8,0xffffff90,4,0xc,1,func_800A8350);
  iVar10 = 0;
  do {
    uVar1 = 0xffffffa8;
    if (iVar10 != 0) {
      uVar1 = 0xffffffb8;
    }
    uVar7 = 0x48;
    if (iVar10 != 0) {
      uVar7 = 0x50;
    }
    uVar8 = 4;
    if (iVar10 == 0) {
      uVar3 = 0x70;
    }
    else {
      uVar8 = 3;
      uVar3 = 0x6d;
    }
    iVar2 = func_80032DB0(uVar1,uVar7,uVar8,0xc,uVar3,func_800A822C);
    iVar10 = iVar10 + 1;
    *(undefined4 *)(iVar2 + 0x80) = 5;
    *(undefined4 *)(iVar2 + 0x84) = 8;
    *(uint *)(iVar2 + 0x30) = *(uint *)(iVar2 + 0x30) & 0xffffffcf | 0x20;
  } while (iVar10 < 2);
  iVar10 = func_80032DB0(0xffffffa0,0xffffffe0,3,0xc,0x71,func_800A8534);
  *(undefined2 *)(iVar10 + 0x76) = 0x200;
  *(undefined2 *)(iVar10 + 0x74) = 0x200;
  *(undefined2 *)(iVar10 + 0x52) = 0;
  *(undefined2 *)(iVar10 + 0x50) = 0;
  iVar10 = func_80032DB0(0x20,0xffffffb0,0x401,0xc,0x19,func_800A822C);
  *(undefined4 *)(iVar10 + 0x80) = 6;
  *(undefined4 *)(iVar10 + 0x84) = 7;
  func_80032DB0(0,0,0x401,0xc,0x10,func_800A83CC);
  iVar10 = func_80032DB0(0xffffff78,0xffffffb0,0x401,0xc,0x14,func_800A81F4);
  *(undefined4 *)(iVar10 + 0x84) = 6;
  iVar10 = func_80032DB0(0xffffff98,0xffffffb0,0x401,0xc,0x1c,func_800A81F4);
  *(undefined4 *)(iVar10 + 0x84) = 7;
  iVar10 = func_80032DB0(0xffffff78,0xffffffb0,0x401,0xc,0x1b,func_800A81F4);
  *(undefined4 *)(iVar10 + 0x84) = 7;
  func_80032DB0(0xffffff98,0xffffffb0,5,0xc,0x22,func_800A8638);
  func_80032DB0(0xffffff98,0xffffffb0,5,0xc,0x2e,func_800A86A4);
  iVar10 = 0;
  iVar2 = -0x44;
  do {
    iVar4 = func_80032DB0(0xffffff80,iVar2,5,0xc,iVar10 + 0x36,func_800A8758);
    *(int *)(iVar4 + 0x84) = iVar10;
    iVar10 = iVar10 + 1;
    *(uint *)(iVar4 + 0x30) = *(uint *)(iVar4 + 0x30) & 0xffffffcf | 0x20;
    iVar2 = iVar2 + 0x14;
  } while (iVar10 < 3);
  iVar10 = 0;
  do {
    uVar1 = 0x47;
    if (iVar10 / 3 != 0) {
      uVar1 = 0x80;
    }
    iVar2 = func_80032E78(uVar1,(iVar10 % 3) * 0x16 + 10,5,0xc,iVar10 + 4,
                            func_800A8810);
    *(int *)(iVar2 + 0x84) = iVar10;
    iVar10 = iVar10 + 1;
    *(uint *)(iVar2 + 0x30) = *(uint *)(iVar2 + 0x30) & 0xffffffcf | 0x20;
  } while (iVar10 < 6);
  iVar10 = func_80032E78(0x50,0xfffffff0,5,0xc,0xb,func_800A8988);
  iVar2 = 0;
  iVar4 = 0x58;
  *(uint *)(iVar10 + 0x30) = *(uint *)(iVar10 + 0x30) & 0xfffffe0f | 0x50;
  do {
    iVar10 = func_80032DB0(iVar4,0xffffffc0,5,0xc,0x73,func_800A8B74);
    *(int *)(iVar10 + 0x84) = iVar2;
    iVar2 = iVar2 + 1;
    iVar4 = iVar4 + 0xe;
  } while (iVar2 < 3);
  iVar10 = 0;
  iVar2 = -0x68;
  do {
    iVar4 = func_80032DB0(iVar2,0x50,4,0xc,0x11,func_800A847C);
    *(int *)(iVar4 + 0x84) = iVar10;
    iVar10 = iVar10 + 1;
    *(uint *)(iVar4 + 0x30) = *(uint *)(iVar4 + 0x30) & 0xffffffcf | 0x20;
    iVar2 = iVar2 + 0x70;
  } while (iVar10 < 2);
  iVar2 = 0;
  iVar4 = -0x88;
  iVar10 = -0x60;
  do {
    iVar5 = func_80032DB0(iVar4,0xffffffc0,4,0xc,0x6f,func_800A81F4);
    *(undefined4 *)(iVar5 + 0x84) = 8;
    *(uint *)(iVar5 + 0x30) = *(uint *)(iVar5 + 0x30) & 0xffffffcf | 0x20;
    iVar5 = func_80032DB0(iVar10,8,3,0xc,iVar2 + 0x59,func_800A88DC);
    *(int *)(iVar5 + 0x84) = iVar2;
    iVar2 = iVar2 + 1;
    *(uint *)(iVar5 + 0x30) = *(uint *)(iVar5 + 0x30) & 0xffffffcf | 0x20;
    iVar4 = iVar4 + 0x60;
    iVar10 = iVar10 + 0x60;
  } while (iVar2 < 3);
  iVar10 = func_80032DB0(0xffffff60,0xffffffb8,0x401,0xc,0x68,func_800A81F4);
  bVar12 = 0;
  iVar4 = 0;
  iVar2 = -0xa0;
  *(undefined4 *)(iVar10 + 0x84) = 9;
  *(uint *)(iVar10 + 0x30) = *(uint *)(iVar10 + 0x30) & 0xffffffcf | 0x20;
  do {
    iVar10 = -0xa0;
    do {
      uVar1 = 0x1f;
      if ((bool)(bVar12 & 1)) {
        uVar1 = 0x1e;
      }
      iVar5 = func_80032F50(iVar10,iVar2,0x401,uVar1,D_80033450);
      iVar10 = iVar10 + 0x40;
      bVar12 = bVar12 ^ 1;
      *(undefined2 *)(iVar5 + 0x6a) = 0xffff;
      *(undefined2 *)(iVar5 + 0x6e) = 1;
      *(undefined1 *)(iVar5 + 0x5a) = 0x70;
      *(undefined1 *)(iVar5 + 0x59) = 0x70;
      *(undefined1 *)(iVar5 + 0x58) = 0x70;
      *(uint *)(iVar5 + 0x38) = *(uint *)(iVar5 + 0x38) | 8;
    } while (iVar10 < 0xa1);
    iVar2 = iVar2 + 0x40;
    iVar4 = iVar4 + 1;
    bVar12 = bVar12 + 1;
  } while (iVar4 < 5);
  puVar9 = (ushort *)D_80091618;
  do {
    if (puVar9[8] != 0xffff) {
      uVar11 = *(byte *)((uint)*puVar9 * 0x3c + -0x7ff9c6b5) | 0x80;
      uVar6 = (ushort)(((short)puVar9[0x73] * 100) / (int)uVar11);
      puVar9[0x4f] = (ushort)uVar11;
      puVar9[0x60] = uVar6;
      if ((short)uVar6 < 0) {
        uVar6 = 0;
      }
      else if (0x96 < (short)uVar6) {
        uVar6 = 0x96;
      }
      puVar9[0x60] = uVar6;
      puVar9[0x61] = puVar9[0x6a];
      if ((short)puVar9[0x6a] < (short)puVar9[0x6b]) {
        puVar9[0x61] = puVar9[0x6b];
      }
      puVar9[0x61] = 0xff - puVar9[0x61];
      iVar10 = ((int)(((uint)puVar9[0x69] + (uint)puVar9[0x6d] + (uint)puVar9[0x6e] +
                       (uint)puVar9[0x6f] + (uint)puVar9[0x70] + (uint)puVar9[0x6c]) * 0x10000) >>
               0x10) / 0x16f + 1;
      uVar6 = (ushort)iVar10;
      if (5 < iVar10 * 0x10000 >> 0x10) {
        uVar6 = 5;
      }
      puVar9[0x5e] = uVar6;
    }
    puVar9 = puVar9 + 0xd4;
  } while ((int)puVar9 < -0x7ff6dff8);
  (*D_800B3C1C) = 0;
  func_80012508();
  return;
}

#include "common.h"

#include "ghidra.h"
void func_800AA280(int param_1)

{
    extern s8 D_800B3D20[];
    extern u8 D_800B3D24[];
    extern s32 D_800B3D30[];
    extern int func_800AC4A4();
    extern int func_800AC570();
    extern int func_800AC650();
    extern int func_800AC780();
    extern int func_800AC9EC();
    extern int func_800ACC04();
    extern int func_800ACCA8();
    extern int func_800ACD40();
    extern int func_800ACD98();
    extern int func_800ACEDC();
  byte bVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  
  func_80097B24(param_1,0,5);
  func_80097B24(param_1,1,5);
  *(undefined1 *)(param_1 + (uint)(*D_800B3D24) * 0x2e8 + 0x87a) = 3;
  iVar6 = 0;
  func_80097C6C(param_1,(*D_800B3D24),5);
  do {
    uVar3 = func_80019F30(0x20012,iVar6 + 8);
    func_80012A20(uVar3,1,0,0);
    iVar6 = iVar6 + 1;
  } while (iVar6 < 2);
  uVar3 = func_80019F30(0x50012,2);
  func_80012A20(uVar3,1,0,0);
  iVar6 = 0;
  do {
    uVar3 = 0xfffffed8;
    if (iVar6 != 0) {
      uVar3 = 0xa0;
    }
    iVar4 = func_80032DB0(uVar3,0xffffffa0,5,0x12,0x3b,func_800AC4A4);
    if (iVar6 == 0) {
      uVar2 = 2;
    }
    else {
      uVar2 = 0xfffe;
    }
    *(undefined2 *)(iVar4 + 0x6a) = uVar2;
    *(int *)(iVar4 + 0x84) = iVar6;
    *(int *)(iVar4 + 0x80) = iVar6;
    iVar6 = iVar6 + 1;
    *(uint *)(iVar4 + 0x38) = *(uint *)(iVar4 + 0x38) | 8;
  } while (iVar6 < 2);
  iVar6 = 0;
  do {
    uVar3 = 0xfffffee0;
    if (iVar6 == 0) {
      uVar8 = 0x3c;
    }
    else {
      uVar8 = 0x3e;
      if (*(char *)(param_1 + 0x5d0) == '\x02') {
        uVar8 = 0x3d;
      }
      uVar3 = 0xa8;
    }
    iVar4 = func_80032DB0(uVar3,0xffffff98,4,0x12,uVar8,func_800AC4A4);
    if (iVar6 == 0) {
      *(undefined2 *)(iVar4 + 0x6a) = 2;
    }
    else {
      *(undefined2 *)(iVar4 + 0x6a) = 0xfffe;
    }
    iVar5 = iVar6 + 2;
    *(int *)(iVar4 + 0x84) = iVar6;
    iVar6 = iVar6 + 1;
    *(int *)(iVar4 + 0x80) = iVar5;
    *(uint *)(iVar4 + 0x38) = *(uint *)(iVar4 + 0x38) | 8;
  } while (iVar6 < 2);
  uVar7 = 0;
  do {
    uVar3 = 0xffffffa8;
    if (uVar7 != 0) {
      uVar3 = 0x40;
    }
    uVar8 = 0x40;
    if ((*D_800B3D24) == uVar7) {
      uVar8 = 0x3f;
    }
    iVar6 = func_80032DB0(uVar3,0xffffff90,4,0x12,uVar8,func_800AC570);
    *(uint *)(iVar6 + 0x84) = uVar7;
    uVar7 = uVar7 + 1;
    *(undefined2 *)(iVar6 + 0x76) = 0x80;
    *(undefined2 *)(iVar6 + 0x52) = 0;
  } while ((int)uVar7 < 2);
  iVar6 = func_80032DB0(0xffffff70,0xffffffe8,2,0x12,0x44,func_800AC780);
  iVar4 = 0;
  *(undefined2 *)(iVar6 + 0x52) = 0;
  *(undefined2 *)(iVar6 + 0x50) = 0;
  *(undefined2 *)(iVar6 + 0x76) = 0x200;
  *(undefined2 *)(iVar6 + 0x74) = 0x200;
  do {
    uVar3 = 0xffffff70;
    if (iVar4 != 0) {
      uVar3 = 0x10;
    }
    iVar6 = func_80032DB0(uVar3,0x10,2,0x12,iVar4 + 0x18,func_800ACD40);
    uVar3 = 0xffffff78;
    *(int *)(iVar6 + 0x84) = iVar4;
    if (iVar4 != 0) {
      uVar3 = 0x10;
    }
    iVar6 = func_80032DB0(uVar3,0x10,2,0x12,0x17,func_800ACCA8);
    uVar3 = 0xffffff68;
    *(int *)(iVar6 + 0x84) = iVar4;
    if (iVar4 != 0) {
      uVar3 = 0xc;
    }
    iVar6 = func_80032DB0(uVar3,0xffffff98,2,0x12,0x42,func_800AC9EC);
    uVar3 = 0xfffffec8;
    *(int *)(iVar6 + 0x84) = iVar4;
    if (iVar4 != 0) {
      uVar3 = 0xa0;
    }
    iVar6 = func_80032DB0(uVar3,0xffffff98,4,0x12,0x45,func_800ACC04);
    *(int *)(iVar6 + 0x84) = iVar4;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 2);
  iVar6 = 0;
  uVar7 = 0;
  do {
    do {
      iVar4 = func_80032DB0(0,0,3,0x12,0x41,func_800AC650);
      *(int *)(iVar4 + 0x7c) = iVar6;
      *(uint *)(iVar4 + 0x80) = uVar7;
      *(short *)(iVar4 + 0x4a) = (short)((int)uVar7 >> 1) * 0x38 + -0x40;
      if (iVar6 == 0) {
        uVar2 = 0xff80;
        if ((uVar7 & 1) == 0) {
          uVar2 = 0xffb8;
        }
      }
      else {
        uVar2 = 0x18;
        if ((uVar7 & 1) == 0) {
          uVar2 = 0x50;
        }
      }
      *(undefined2 *)(iVar4 + 0x46) = uVar2;
      uVar7 = uVar7 + 1;
      *(int *)(iVar4 + 0x84) = iVar6;
    } while ((int)uVar7 < 6);
    iVar6 = iVar6 + 1;
    uVar7 = 0;
  } while (iVar6 < 2);
  iVar6 = 0;
  do {
    uVar3 = 0xfffffef0;
    if (iVar6 != 0) {
      uVar3 = 0xb8;
    }
    iVar4 = func_80032DB0(uVar3,0x28,3,0x12,0x43,func_800ACEDC);
    if (iVar6 == 0) {
      *(undefined2 *)(iVar4 + 0x6a) = 2;
    }
    else {
      *(undefined2 *)(iVar4 + 0x6a) = 0xfffe;
    }
    uVar3 = 0xffffff00;
    *(int *)(iVar4 + 0x7c) = iVar6;
    *(uint *)(iVar4 + 0x38) = *(uint *)(iVar4 + 0x38) | 8;
    if (iVar6 != 0) {
      uVar3 = 200;
    }
    iVar4 = func_80032DB0(uVar3,0x58,4,0x12,0xd,func_800ACEDC);
    *(int *)(iVar4 + 0x7c) = iVar6;
    *(undefined4 *)(iVar4 + 0x80) = 5;
    if (iVar6 == 0) {
      *(undefined2 *)(iVar4 + 0x6a) = 2;
    }
    else {
      *(undefined2 *)(iVar4 + 0x6a) = 0xfffe;
    }
    iVar6 = iVar6 + 1;
    *(uint *)(iVar4 + 0x38) = *(uint *)(iVar4 + 0x38) | 8;
  } while (iVar6 < 2);
  iVar6 = func_80032DB0(0xffffff68,0xffffffcc,2,0x12,0x47,func_800ACD98);
  bVar1 = (*D_800B3D24);
  *(undefined2 *)(iVar6 + 0x52) = 0;
  *(undefined2 *)(iVar6 + 0x50) = 0;
  *(undefined2 *)(iVar6 + 0x76) = 0x200;
  *(undefined2 *)(iVar6 + 0x74) = 0x200;
  func_80033100(param_1,3,bVar1);
  (*D_800B3D30) = 0x4c;
  (*D_800B3D20) = 0;
  func_800ABEA0();
  func_80012508();
  return;
}

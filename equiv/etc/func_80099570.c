#include "common.h"

#include "ghidra.h"
void func_80099570(void)

{
    extern u8 D_80033450[];
    extern s8 D_800859F3[];
    extern s32 D_8008F788[];
    extern int func_80099AE4();
    extern int func_80099B18();
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = 0;
  do {
    uVar1 = func_80019F30(0x20009,iVar3 + 2);
    func_80012A20(uVar1,1,0,0);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  uVar1 = func_80019F30(0x50009,0);
  func_80012A20(uVar1,1,0,0);
  iVar3 = func_80032DB0(0xffffff90,0xffffff98,4,9,7,func_80099B18);
  bVar4 = 0;
  iVar6 = 0;
  iVar5 = -0xa0;
  *(undefined4 *)(iVar3 + 0x80) = 0;
  *(uint *)(iVar3 + 0x30) = *(uint *)(iVar3 + 0x30) & 0xfffffe3f | 0x40;
  iVar3 = func_80032DB0(0x20,0xffffff98,4,9,0xf,func_80099B18);
  *(undefined4 *)(iVar3 + 0x80) = 1;
  iVar3 = func_80032DB0(0xffffff90,0xfffffff0,4,9,0x11,func_80099B18);
  *(undefined4 *)(iVar3 + 0x80) = 2;
  iVar3 = func_80032DB0(0x20,0xfffffff0,4,9,0x18,func_80099B18);
  *(undefined4 *)(iVar3 + 0x80) = 3;
  func_80032DB0(0xffffff78,0x48,4,9,0,func_80099AE4);
  do {
    iVar3 = -0xa0;
    do {
      uVar1 = 0x1f;
      if ((bool)(bVar4 & 1)) {
        uVar1 = 0x1e;
      }
      iVar2 = func_80032F50(iVar3,iVar5,5,uVar1,D_80033450);
      iVar3 = iVar3 + 0x40;
      bVar4 = bVar4 ^ 1;
      *(undefined2 *)(iVar2 + 0x6a) = 0xffff;
      *(undefined2 *)(iVar2 + 0x6e) = 1;
      *(undefined1 *)(iVar2 + 0x5a) = 0x70;
      *(undefined1 *)(iVar2 + 0x59) = 0x70;
      *(undefined1 *)(iVar2 + 0x58) = 0x70;
      *(uint *)(iVar2 + 0x38) = *(uint *)(iVar2 + 0x38) | 8;
    } while (iVar3 < 0xa1);
    iVar5 = iVar5 + 0x40;
    iVar6 = iVar6 + 1;
    bVar4 = bVar4 + 1;
  } while (iVar6 < 5);
  if ((*D_8008F788) == 1) {
    func_8002E708();
    (*D_800859F3) = 0;
    func_80012544(6);
  }
  else {
    func_8001AD48(4);
    func_80012508();
  }
  return;
}

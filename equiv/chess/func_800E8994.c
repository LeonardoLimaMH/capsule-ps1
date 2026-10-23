#include "common.h"

#include "ghidra.h"
void func_800E8994(undefined4 param_1,int param_2,int param_3)

{
    extern s16 D_8008F754[];
    extern s32 D_80118C18[];
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  short sVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar6 = 0;
  uVar5 = 0;
  bVar1 = *(byte *)((uint)*(byte *)(param_3 + 0x16) * 4 +
                    (uint)*(byte *)(param_3 + 0x15) * 0x34 + (*D_80118C18) + 3);
  sVar4 = 0;
  switch((*D_8008F754)) {
  case 0:
  case 1:
  case 2:
    return;
  case 3:
    uVar6 = 0;
    uVar5 = 0;
    uVar3 = 0x800d;
    sVar4 = (ushort)*(byte *)(param_3 + 9) - (ushort)*(byte *)(param_3 + 0xe);
    uVar2 = *(uint *)(param_3 + 0x1c) | 0x10;
    break;
  case 4:
    uVar6 = 1;
    uVar5 = 3;
    sVar4 = 0x14;
    uVar3 = 0x800d;
    uVar2 = *(uint *)(param_3 + 0x1c) | 0x10;
    break;
  case 5:
    uVar6 = 2;
    uVar5 = 3;
    sVar4 = 0x14;
    uVar3 = 0x800d;
    uVar2 = *(uint *)(param_3 + 0x1c) | 0x10;
    break;
  case 6:
    uVar6 = 1;
    goto L800E8A9C;
  case 7:
    uVar6 = 2;
L800E8A9C:
    uVar5 = 3;
    sVar4 = -0x14;
    uVar3 = 0x800e;
    uVar2 = *(uint *)(param_3 + 0x1c) | 0x20;
    break;
  default:
    goto L800E8AB8;
  }
  *(uint *)(param_3 + 0x1c) = uVar2;
  func_80034AB0(uVar3);
L800E8AB8:
  *(short *)(param_2 + 0x710) = sVar4;
  *(undefined1 *)(param_2 + (uint)*(byte *)(param_2 + 0x5fa) * 2 + 0x601) =
       *(undefined1 *)(param_3 + 0x15);
  *(undefined1 *)(param_2 + (uint)*(byte *)(param_2 + 0x5fa) * 2 + 0x602) =
       *(undefined1 *)(param_3 + 0x16);
  *(undefined1 *)(param_2 + 0x610) = 2;
  func_800CB9F4(param_2,bVar1 >> 7,(bVar1 & 0x7f) - 1);
  func_800CAA44(param_1,param_3);
  func_800CA7B0(param_1,param_3,uVar6,uVar5,(int)sVar4);
  func_800CABDC(param_1,param_3,0x10000);
  return;
}

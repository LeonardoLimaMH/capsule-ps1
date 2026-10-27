#include "common.h"

#include "ghidra.h"
#define D_8008EE6A (*(u8 *)0x8008EE6A)
#define _D_8008EE4C (*(u16 *)0x8008EE4C)
#define _D_8008EE50 (*(u16 *)0x8008EE50)
extern s32 func_800125AC();
extern s32 func_800125D8();
extern s32 func_80012604();
extern s32 func_80012628();
extern s32 func_8001A998();
extern s32 func_80034AB0();
extern s32 func_800A3FC0();
extern s32 func_800A41C4();
extern s32 func_800A835C();
extern s32 func_800A903C();
extern s32 func_800B2ABC();
extern s32 func_800B9020();
extern s32 func_800B9298();
extern s32 func_800B9684();
extern s32 func_800B97B4();
extern s32 func_800B9990();
extern s32 func_800B9B88();
extern s32 func_800B9E8C();
extern s32 func_800B9F9C();
extern s32 func_800BA108();
extern s32 func_800BA274();
extern s32 func_800BA3C4();
extern s32 func_800BA4E0();
extern s32 func_800BB880();
extern s32 func_800BB8BC();
extern s32 func_800BB910();
extern s32 func_800C7F74();
extern s32 func_800C7FDC();
extern s32 func_800CAF74();
void func_800BA820(int param_1)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  undefined1 uVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;

  switch(_D_8008EE4C) {
  case 0:
    uVar6 = (uint)*(byte *)(param_1 + 0xbca);
    uVar8 = (uint)*(byte *)(param_1 + uVar6 + 0xbcb);
    func_8001A998(param_1 + 0xcdc,6);
    func_800CAF74(param_1 + 0xc00);
    *(undefined1 *)(param_1 + 0xd77) = 0;
    func_800A3FC0(param_1,uVar6,uVar8,func_800A41C4);
    *(undefined1 *)(param_1 + 0xbe5) = 1;
    uVar4 = func_800B9020(param_1,param_1 + 0x5d0,uVar6);
    *(undefined1 *)(param_1 + 0xd78) = uVar4;
    iVar7 = param_1 + 0x5d0 + uVar8 * 0x7c + uVar6 * 0x2e8;
    *(undefined1 *)(iVar7 + 0x2f) = 0x81;
    *(undefined1 *)(iVar7 + 0x3b) = 0;
    *(undefined1 *)(param_1 + 0xbe0) = 3;
    *(undefined1 *)(param_1 + 0xbe9) = 1;
    goto L800BA90C;
  case 1:
    func_800B9298(param_1);
    break;
  case 2:
    func_800B9684(param_1);
    break;
  case 3:
    func_800B97B4(param_1);
    goto L800BA90C;
  case 4:
    iVar7 = param_1 + 0x5d0;
    uVar6 = (uint)*(byte *)(param_1 + 0xbca);
    iVar7 = func_800B2ABC
                      (param_1,0,
                       iVar7 + uVar6 * 0x2e8 + 0x18 + (uint)*(byte *)(iVar7 + uVar6 + 0x5fb) * 0x7c,
                       iVar7 + (1 - uVar6) * 0x2e8 + 0x18 + (uint)*(byte *)(param_1 + 0xcdc) * 0x7c)
    ;
    goto L800BAB9C;
  case 5:
    func_800B9990(param_1);
    break;
  case 6:
    func_800B9B88(param_1);
    break;
  case 7:
    func_800B9E8C(param_1);
    break;
  case 8:
    func_800B9F9C(param_1);
    break;
  case 9:
    cVar1 = *(char *)(param_1 + (1 - (uint)*(byte *)(param_1 + 0xbca)) * 0x2e8 + 0x5e8 +
                     (uint)*(byte *)(param_1 + 0xcdc) * 0x7c);
    if (cVar1 == '\x03') {
      iVar7 = func_800BB880(param_1);
    }
    else {
      if (cVar1 != 'Y') {
        return;
      }
      iVar7 = func_800BB8BC(param_1);
    }
    goto L800BAB9C;
  case 10:
    func_800BA108(param_1);
    break;
  case 0xb:
    bVar2 = *(byte *)(param_1 + 0xbca);
    uVar4 = *(undefined1 *)(param_1 + 0xcdc);
    if (*(char *)(param_1 + 0xcf0) != '\0') {
      pbVar5 = (byte *)((param_1 + 0xbdb) - (uint)bVar2);
      *(undefined1 *)(param_1 + 0xcdd) = 1;
      bVar3 = *pbVar5 + 1;
      *pbVar5 = bVar3;
      if (bVar3 < 5) {
        func_80034AB0(0x50);
        func_80012604(0xe);
      }
      else {
        func_80034AB0(5);
        func_800A903C(param_1,param_1 + 0x5d0,1 - (uint)bVar2,uVar4);
        func_80012604(0xc);
      }
    }
    break;
  case 0xc:
    func_800BA274(param_1);
    break;
  case 0xd:
    if (*(char *)(param_1 + (1 - (uint)*(byte *)(param_1 + 0xbca)) * 0x2e8 + 0x5e8 +
                 (uint)*(byte *)(param_1 + 0xcdc) * 0x7c) != '(') {
      return;
    }
    iVar7 = func_800BB910(param_1);
L800BAB9C:
    if (iVar7 == 0) {
      return;
    }
    goto L800BA90C;
  case 0xe:
    func_800BA3C4(param_1);
    break;
  case 0xf:
    func_800BA4E0(param_1,*(undefined1 *)(param_1 + 0xbca),0);
    break;
  case 0x10:
    uVar6 = (uint)_D_8008EE50;
    if (uVar6 < 0xb) {
      if (uVar6 != 0) {
        iVar7 = func_800C7FDC(param_1,param_1 + 0x5d0,(int)(uVar6 - 1) / 5,(int)(uVar6 - 1) % 5);
        if (iVar7 == 0) {
          return;
        }
L800BAC68:
        func_80012628();
        return;
      }
      iVar7 = func_800C7F74(param_1 + 0x5d0);
      if (iVar7 != 0) goto L800BAC68;
    }
    else if (uVar6 != 0xb) {
      return;
    }
L800BA90C:
    func_800125D8();
    break;
  case 0x11:
    iVar7 = param_1 + 0x5d0;
    uVar6 = (uint)*(byte *)(param_1 + 0xbca);
    bVar2 = *(byte *)(param_1 + 0xcdc);
    bVar3 = *(byte *)(iVar7 + uVar6 + 0x5fb);
    D_8008EE6A = 0;
    *(undefined1 *)(param_1 + 0xbe4) = 0;
    uVar4 = func_800A835C(param_1);
    *(undefined1 *)(iVar7 + uVar6 * 0x2e8 + (uint)bVar3 * 0x7c + 0x3d) = uVar4;
    uVar4 = func_800A835C(param_1,1 - uVar6);
    *(undefined1 *)(iVar7 + (1 - uVar6) * 0x2e8 + (uint)bVar2 * 0x7c + 0x3d) = uVar4;
    func_800125AC(10);
  }
  return;
}

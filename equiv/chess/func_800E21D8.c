/* real-callee: func_800FE188 */
/* real-callee: func_800FEC2C */
/* rand-u16: 0x8008EE54 1 0,1,2,3,4,5,6,7,8,9,10,15,19,20,21,31,32,63,64,98,99,100,65535 */
#include "common.h"

#include "ghidra.h"
#define D_80018600 (*(s32 *)0x80018600)
#define D_80119714 (*(s32 *)0x80119714)
#define _D_8008EE54 (*(u16 *)0x8008EE54)
#define _D_8008EE70 (*(s32 *)0x8008EE70)
#define _D_8008EE74 (*(s32 *)0x8008EE74)
#define _D_8008F7A4 (*(u32 *)0x8008F7A4)
#define _D_80118C18 (*(s32 *)0x80118C18)
extern s32 func_80015B3C();
extern s32 func_80034AB0();
extern s32 func_800374E8();
extern s32 func_8009C4B0();
extern s32 func_800A835C();
extern s32 func_800A84A0();
extern s32 func_800DDAD4();
extern s32 func_800E1F68();
extern s32 func_800E3798();
extern s32 func_800F7484();
extern s32 func_800F7AB4();
extern s32 func_800FBB90();
extern s32 func_800FE188();
extern s32 func_800FEC2C();
undefined4 func_800E21D8(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined1 uVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_30 [8];

  uVar3 = (uint)*(byte *)((uint)*(byte *)(param_4 + 0x16) * 4 +
                          (uint)*(byte *)(param_4 + 0x15) * 0x34 + _D_80118C18 + 3);
  iVar7 = (int)uVar3 >> 7;
  iVar8 = (uVar3 & 0x7f) - 1;
  if (_D_8008EE54 == 2) {
    if (D_80119714 == 0x1e) {
      func_800A84A0(param_4,iVar7,iVar8,1);
      *(undefined1 *)(param_4 + 0x26) = 3;
      func_8009C4B0(param_1,iVar7,iVar8);
      *(undefined1 *)(param_4 + 0x17) = 0x84;
      *(undefined1 *)(param_4 + 0x23) = 0;
    }
    if (D_80119714 != (D_80119714 / 0xf) * 0xf) {
      return 0;
    }
    iVar6 = 0;
    do {
      iVar4 = func_80015B3C(func_800E3798,func_800F7484,1);
      *(short *)(iVar4 + 0x28) = (short)(_D_8008EE70 / 2);
      iVar5 = _D_8008EE74;
      *(undefined2 *)(iVar4 + 0x2c) = 0;
      *(short *)(iVar4 + 0x2a) = (short)(iVar5 / 2);
      if (D_80119714 % 2 == iVar6) {
        sVar2 = *(short *)(iVar4 + 0x28) + 0x28;
      }
      else {
        sVar2 = *(short *)(iVar4 + 0x28) + -0x28;
      }
      *(short *)(iVar4 + 0x28) = sVar2;
      *(short *)(iVar4 + 0x1c) = (short)iVar6;
      iVar6 = iVar6 + 1;
      *(undefined2 *)(iVar4 + 0x36) = 0x14;
      *(undefined1 *)(iVar4 + 0x3a) = 0x10;
      *(undefined1 *)(iVar4 + 0x32) = 0;
      *(undefined1 *)(iVar4 + 0x33) = 0;
      *(undefined1 *)(iVar4 + 0x34) = 0;
      *(undefined1 *)(iVar4 + 0x3b) = 1;
      *(undefined1 *)(iVar4 + 0x3c) = 1;
    } while (iVar6 < 2);
    if (0x76 < D_80119714) {
      _D_8008F7A4 = 1;
    }
    if (D_80119714 < 0x78) {
      return 0;
    }
    func_800FBB90(0x1e);
    iVar5 = func_80015B3C(&D_80018600,func_800F7AB4,1);
    iVar4 = func_800DDAD4(param_4,(int)*(short *)(*(int *)(param_4 + 0x70) + 0x4e));
    *(short *)(iVar5 + 0x2a) =
         *(short *)(*(int *)(param_4 + 0x70) + 0x46) + (short)(_D_8008EE70 / 2);
    iVar6 = _D_8008EE74;
    sVar2 = *(short *)(*(int *)(param_4 + 0x70) + 0x4a);
    *(undefined2 *)(iVar5 + 0x32) = 0x5a;
    *(undefined2 *)(iVar5 + 0x40) = 0x32;
    *(undefined2 *)(iVar5 + 0x42) = 0x1e;
    *(undefined1 *)(iVar5 + 0x44) = 0xff;
    *(undefined1 *)(iVar5 + 0x45) = 0xff;
    *(undefined1 *)(iVar5 + 0x46) = 0xbf;
    *(undefined1 *)(iVar5 + 0x4c) = 1;
    *(short *)(iVar5 + 0x2e) = (sVar2 + (short)(iVar6 / 2)) - (short)(iVar4 / 2);
    func_80034AB0(0x8014);
    *(undefined1 *)(param_4 + 0x17) = 1;
    uVar1 = func_800A835C(param_1,iVar7);
    *(undefined1 *)(param_4 + 0x25) = uVar1;
    func_800A84A0(param_4,iVar7,iVar8,0);
  }
  else {
    if (2 < _D_8008EE54) {
      if (_D_8008EE54 == 3) {
        if (D_80119714 < 0x3c) {
          return 0;
        }
      }
      else if (_D_8008EE54 != 99) {
        return 0;
      }
      return 1;
    }
    if (_D_8008EE54 == 0) {
      *(undefined1 *)(param_3 + 0x17) = 0x88;
      *(undefined1 *)(param_3 + 0x23) = 1;
      func_800374E8(0x8014);
      _D_8008EE54 = _D_8008EE54 + 1;
      _D_8008F7A4 = 0;
      D_80119714 = 0;
      return 0;
    }
    if (_D_8008EE54 != 1) {
      return 0;
    }
    func_800FE188(param_4,auStack_30);
    iVar7 = func_800FEC2C(auStack_30);
    if (iVar7 == 0) {
      return 0;
    }
    if (D_80119714 < 0x3c) {
      return 0;
    }
    iVar7 = func_80015B3C(&D_80018600,func_800E1F68,1);
    *(int *)(iVar7 + 0x14) = param_4;
    func_80034AB0(10);
  }
  D_80119714 = 0;
  _D_8008EE54 = _D_8008EE54 + 1;
  return 0;
}

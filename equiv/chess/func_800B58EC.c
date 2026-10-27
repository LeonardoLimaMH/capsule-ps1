#include "common.h"

#include "ghidra.h"
#define D_80102018 (*(s32 *)0x80102018)
#define _D_8008EE4C (*(u16 *)0x8008EE4C)
#define _D_8008EE50 (*(u16 *)0x8008EE50)
extern s32 func_800125D8();
extern s32 func_80012604();
extern s32 func_80012628();
extern s32 func_8001264C();
extern s32 func_800220B8();
extern s32 func_800220D4();
extern s32 func_800A070C();
extern s32 func_800A0850();
extern s32 func_800AF1C0();
extern s32 func_800AF340();
extern s32 func_800AF81C();
extern s32 func_800B4518();
extern s32 func_800B48F0();
extern s32 func_800B4CA4();
extern s32 func_800B5020();
extern s32 func_800B5184();
extern s32 func_800B52FC();
extern s32 func_800B5438();
extern s32 func_800B5780();
extern s32 func_800DCE48();
extern s32 func_800DCE78();
void func_800B58EC(int param_1)

{
  int iVar1;
  byte *pbVar2;

  switch(_D_8008EE4C) {
  case 0:
    func_800125D8();
  case 1:
    if (_D_8008EE50 == 1) {
L800B5A50:
      iVar1 = func_800220D4(param_1,1,*(undefined1 *)(param_1 + 0xbca),0);
      if (iVar1 != 0) {
        func_80012628();
      }
    }
    else if (_D_8008EE50 < 2) {
      if (_D_8008EE50 == 0) {
        iVar1 = func_800A070C(param_1);
joined_r0x800b5a20:
        if (iVar1 == 0) {
          func_8001264C(2);
        }
        else {
          func_800220B8(param_1);
          func_80012628();
        }
      }
    }
    else if (_D_8008EE50 == 2) {
      func_80012604(2);
    }
    break;
  case 2:
    func_800B4518(param_1);
    break;
  case 3:
    func_800B48F0(param_1);
    break;
  case 4:
    func_800B4CA4(param_1);
    break;
  case 5:
    if (_D_8008EE50 == 1) goto L800B5A50;
    if (1 < _D_8008EE50) {
      if (_D_8008EE50 != 2) {
        return;
      }
      func_80012604(7);
      return;
    }
    if (_D_8008EE50 != 0) {
      return;
    }
    iVar1 = func_800A0850(param_1,*(undefined1 *)(param_1 + 0xbca));
    goto joined_r0x800b5a20;
  case 6:
    iVar1 = param_1 + 0x5d0;
    pbVar2 = (byte *)(iVar1 + (uint)*(byte *)(param_1 + 0xbca) * 0x2e8 + 0x18 +
                     (uint)*(byte *)(iVar1 + (uint)*(byte *)(param_1 + 0xbca) + 0x5fb) * 0x7c);
    if (_D_8008EE50 == 0) {
      func_800DCE48();
      func_80012628();
    }
    else if (_D_8008EE50 == 1) {
      func_800DCE78();
      iVar1 = (*(code *)(&D_80102018)[*pbVar2])(param_1,iVar1,pbVar2);
      if (iVar1 != 0) {
        func_80012604(0xe);
      }
    }
    break;
  case 7:
    func_800B5020(param_1);
    break;
  case 8:
    func_800B5184(param_1);
  case 9:
    func_800B52FC(param_1);
    break;
  case 10:
    func_800B5438(param_1);
    break;
  case 0xb:
    func_800AF1C0(param_1);
    break;
  case 0xc:
    func_800AF340(param_1);
    break;
  case 0xd:
    func_800AF81C(param_1);
    break;
  case 0xe:
    func_800B5780(param_1);
  }
  return;
}

#include "common.h"

/* rand-u16: 0x8008EE54 1 0,1,2,3,4,5,6,7,8,9,10,15,19,20,21,31,32,63,64,98,99,100,65535 */
#include "ghidra.h"
/* rand-u16: 0x8008EE54 1 0,1,2,3,4,5,6,7,8,9,98,99,100,65535 */
#define D_80018600 (*(s32 *)0x80018600)
#define D_80119714 (*(s32 *)0x80119714)
#define _D_8008EE54 (*(u16 *)0x8008EE54)
#define _D_8008EE70 (*(s32 *)0x8008EE70)
#define _D_8008EE74 (*(s32 *)0x8008EE74)
#define _D_8008F760 (*(s32 *)0x8008F760)
extern s32 func_80013928();
extern s32 func_80015B3C();
extern s32 func_80034AB0();
extern s32 func_800F7484();
undefined4 func_800E0E2C(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;

  iVar2 = _D_8008F760;
  if (_D_8008EE54 == 3) {
L800E0FF8:
    *(short *)(iVar2 + 0x3e) = *(short *)(iVar2 + 0x3e) + 100;
    *(short *)(iVar2 + 0x36) = (0x14 - (short)D_80119714) * 10 + -0x32;
    if (D_80119714 < 0x14) {
      return 0;
    }
    D_80119714 = 0;
    _D_8008EE54 = _D_8008EE54 + 1;
L800E105C:
    *(short *)(iVar2 + 0x3e) = *(short *)(iVar2 + 0x3e) + 100;
    if (*(int *)(*(int *)(param_3 + 0x70) + 0x1c) != 0) {
      return 0;
    }
    D_80119714 = 0;
    _D_8008EE54 = _D_8008EE54 + 1;
  }
  else {
    if (_D_8008EE54 < 4) {
      if (_D_8008EE54 == 1) {
        _D_8008F760 = func_80015B3C(&D_80018600,func_800F7484,1);
        *(short *)(_D_8008F760 + 0x28) =
             *(short *)(*(int *)(param_3 + 0x70) + 0x44) + (short)(_D_8008EE70 / 2);
        *(short *)(_D_8008F760 + 0x2a) =
             *(short *)(*(int *)(param_3 + 0x70) + 0x48) + (short)(_D_8008EE74 / 2) + -10;
        uVar1 = *(undefined2 *)(*(int *)(param_3 + 0x70) + 0x4c);
        *(undefined1 *)(_D_8008F760 + 0x2e) = 0xff;
        *(undefined1 *)(_D_8008F760 + 0x33) = 0xff;
        *(undefined2 *)(_D_8008F760 + 0x36) = 200;
        *(undefined2 *)(_D_8008F760 + 0x38) = 200;
        *(undefined1 *)(_D_8008F760 + 0x2f) = 0;
        *(undefined1 *)(_D_8008F760 + 0x30) = 0;
        *(undefined1 *)(_D_8008F760 + 0x32) = 0;
        *(undefined1 *)(_D_8008F760 + 0x34) = 0;
        *(undefined1 *)(_D_8008F760 + 0x3a) = 0x10;
        *(undefined1 *)(_D_8008F760 + 0x3b) = 1;
        *(undefined1 *)(_D_8008F760 + 0x3c) = 1;
        *(undefined2 *)(_D_8008F760 + 0x2c) = uVar1;
L800E0F7C:
        _D_8008EE54 = _D_8008EE54 + 1;
        D_80119714 = 0;
        return 0;
      }
      if (_D_8008EE54 < 2) {
        if (_D_8008EE54 != 0) {
          return 0;
        }
        *(undefined1 *)(param_3 + 0x17) = 0x88;
        *(undefined1 *)(param_3 + 0x23) = 1;
        goto L800E0F7C;
      }
      *(short *)(_D_8008F760 + 0x3e) = *(short *)(_D_8008F760 + 0x3e) + 100;
      *(short *)(iVar2 + 0x38) = (0x14 - (short)D_80119714) * 10 + -0x28;
      if (D_80119714 < 0x14) {
        return 0;
      }
      func_80034AB0(0x801c);
      D_80119714 = 0;
      _D_8008EE54 = _D_8008EE54 + 1;
      goto L800E0FF8;
    }
    if (_D_8008EE54 != 5) {
      if (4 < _D_8008EE54) {
        if (_D_8008EE54 != 6) {
          if (_D_8008EE54 == 99) {
            return 1;
          }
          return 0;
        }
        goto L800E1148;
      }
      goto L800E105C;
    }
  }
  *(short *)(iVar2 + 0x3e) = *(short *)(iVar2 + 0x3e) + 100;
  iVar3 = D_80119714 * 200;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xf;
  }
  *(short *)(iVar2 + 0x36) = (short)(iVar3 >> 4) + -0x32;
  iVar3 = D_80119714 * 200;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xf;
  }
  *(short *)(iVar2 + 0x38) = (short)(iVar3 >> 4) + -0x28;
  if (D_80119714 < 0x10) {
    return 0;
  }
  D_80119714 = 0;
  _D_8008EE54 = _D_8008EE54 + 1;
L800E1148:
  func_80013928(iVar2);
  return 1;
}

/* real-callee: func_800FE188 */
/* real-callee: func_800FEC2C */
/* rand-u16: 0x8008EE54 1 0,1,2,3,4,5,6,7,8,9,10,15,19,20,21,31,32,63,64,98,99,100,65535 */
#include "common.h"

#include "ghidra.h"
#define D_80018600 (*(s32 *)0x80018600)
#define D_80119714 (*(s32 *)0x80119714)
#define D_80119718 (*(u32 *)0x80119718)
#define _D_8008EE54 (*(u16 *)0x8008EE54)
#define _D_8008EE70 (*(s32 *)0x8008EE70)
#define _D_8008EE74 (*(s32 *)0x8008EE74)
#define _D_8008F760 (*(s32 *)0x8008F760)
extern s32 func_80013928();
extern s32 func_80015B3C();
extern s32 func_80034AB0();
extern s32 func_800C94DC();
extern s32 func_800DD274();
extern s32 func_800E4EAC();
extern s32 func_800FE188();
extern s32 func_800FEC2C();
undefined4 func_800E5078(undefined4 param_1,int param_2,int param_3)

{
  short sVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_30 [8];

  iVar4 = _D_8008F760;
  if (_D_8008EE54 == 4) {
    func_800FE188(param_3,auStack_30);
    iVar4 = func_800FEC2C(auStack_30);
    if (iVar4 == 0) {
      return 0;
    }
    func_80034AB0(0);
L800E54F8:
    _D_8008EE54 = _D_8008EE54 + 1;
    D_80119714 = 0;
    return 0;
  }
  if (_D_8008EE54 < 5) {
    if (_D_8008EE54 == 1) {
      if (D_80119714 < 0x14) {
        return 0;
      }
      iVar3 = *(int *)(param_3 + 0x70);
      _D_8008F760 = func_80015B3C(&D_80018600,func_800E4EAC,1);
      *(undefined1 *)(_D_8008F760 + 0x2c) = 0;
      *(undefined1 *)(_D_8008F760 + 0x2d) = 1;
      *(int *)(_D_8008F760 + 0x28) = iVar3;
      *(undefined2 *)(_D_8008F760 + 0x2e) = *(undefined2 *)(iVar3 + 0x4e);
      *(short *)(_D_8008F760 + 0x30) = *(short *)(iVar3 + 0x46) + (short)(_D_8008EE70 / 2);
      iVar4 = _D_8008EE74;
      sVar1 = *(short *)(iVar3 + 0x4a);
      *(undefined2 *)(_D_8008F760 + 0x3c) = 0xf800;
      *(undefined2 *)(_D_8008F760 + 0x34) = 0xf800;
      *(undefined2 *)(_D_8008F760 + 0x40) = 0x800;
      *(undefined2 *)(_D_8008F760 + 0x38) = 0x800;
      *(undefined2 *)(_D_8008F760 + 0x3a) = 0xf000;
      *(undefined2 *)(_D_8008F760 + 0x36) = 0xf000;
      *(undefined2 *)(_D_8008F760 + 0x4a) = 0x1000;
      *(undefined2 *)(_D_8008F760 + 0x48) = 0x1000;
      *(undefined2 *)(_D_8008F760 + 0x42) = 0;
      *(undefined2 *)(_D_8008F760 + 0x3e) = 0;
      *(undefined2 *)(_D_8008F760 + 0x44) = 0;
      *(undefined2 *)(_D_8008F760 + 0x46) = 0;
      *(undefined1 *)(_D_8008F760 + 0x4c) = 0x80;
      *(undefined1 *)(_D_8008F760 + 0x4d) = 0x80;
      *(undefined1 *)(_D_8008F760 + 0x4e) = 0x80;
      *(undefined1 *)(_D_8008F760 + 0x50) = 0x80;
      *(undefined1 *)(_D_8008F760 + 0x51) = 0x80;
      *(undefined1 *)(_D_8008F760 + 0x52) = 0x80;
      *(undefined1 *)(_D_8008F760 + 0x54) = 0x80;
      *(undefined1 *)(_D_8008F760 + 0x55) = 0x80;
      *(undefined1 *)(_D_8008F760 + 0x56) = 0x80;
      *(undefined1 *)(_D_8008F760 + 0x58) = 0x80;
      *(short *)(_D_8008F760 + 0x32) = sVar1 + (short)(iVar4 / 2) + -1;
      *(undefined1 *)(_D_8008F760 + 0x59) = 0x80;
      *(undefined1 *)(_D_8008F760 + 0x5a) = 0x80;
      *(uint *)(param_3 + 0x18) = *(uint *)(param_3 + 0x18) | 0x4000000;
      (*(u32 *)((u8 *)&D_80119718 + 0)) = 0;
    }
    else if (_D_8008EE54 < 2) {
      if (_D_8008EE54 != 0) {
        return 0;
      }
      uVar2 = func_800C94DC(param_1,0);
      *(undefined1 *)(param_3 + 0x25) = uVar2;
    }
    else {
      if (_D_8008EE54 == 2) {
        *(short *)(_D_8008F760 + 0x18) = (short)((D_80119714 << 10) / 0x78);
        iVar3 = D_80119714 << 0xc;
        *(undefined2 *)(iVar4 + 0x1c) = 0;
        *(short *)(iVar4 + 0x1a) = (short)(iVar3 / 0x78) + 0x1000;
        if (D_80119714 < 0x78) {
          return 0;
        }
        func_80034AB0(0);
        *(uint *)(param_3 + 0x18) = *(uint *)(param_3 + 0x18) | 0x2000000;
        D_80119714 = 0;
        _D_8008EE54 = _D_8008EE54 + 1;
      }
      else if (_D_8008EE54 != 3) {
        return 0;
      }
      *(short *)(iVar4 + 0x1c) = (short)((D_80119714 * 0x1c2) / 0x78);
      uVar5 = *(uint *)(param_3 + 0x18) ^ 0x4000000;
      *(uint *)(param_3 + 0x18) = uVar5;
      if (D_80119714 < 0x78) {
        return 0;
      }
      *(uint *)(param_3 + 0x18) = uVar5 | 0x2000000;
      param_2 = param_2 + (uint)*(byte *)(param_2 + 0x5fa) * 2;
      func_800DD274
                (param_3,*(undefined1 *)(param_2 + 0x601),*(undefined1 *)(param_2 + 0x602));
    }
    goto L800E54F8;
  }
  if (_D_8008EE54 == 6) {
L800E5448:
    *(short *)(iVar4 + 0x18) = (short)(((0x78 - D_80119714) * 0x400) / 0x78);
    iVar3 = 0x78 - D_80119714;
    *(undefined2 *)(iVar4 + 0x1c) = 0;
    *(short *)(iVar4 + 0x1a) = (short)((iVar3 * 0x1000) / 0x78) + 0x1000;
    if (D_80119714 < 0x78) {
      return 0;
    }
    D_80119714 = 0;
    _D_8008EE54 = _D_8008EE54 + 1;
  }
  else {
    if (_D_8008EE54 < 6) {
      *(short *)(_D_8008F760 + 0x1c) = (short)(((0x78 - D_80119714) * 0x1c2) / 0x78);
      uVar5 = *(uint *)(param_3 + 0x18) ^ 0x4000000;
      *(uint *)(param_3 + 0x18) = uVar5;
      if (D_80119714 < 0x78) {
        return 0;
      }
      *(uint *)(param_3 + 0x18) = uVar5 | 0x4000000;
      D_80119714 = 0;
      _D_8008EE54 = _D_8008EE54 + 1;
      goto L800E5448;
    }
    if (_D_8008EE54 != 7) {
      if (_D_8008EE54 != 99) {
        return 0;
      }
      goto L800E54D4;
    }
  }
  func_80013928(iVar4);
L800E54D4:
  *(uint *)(param_3 + 0x18) = *(uint *)(param_3 + 0x18) ^ 0x2000000;
  *(undefined2 *)(*(int *)(param_3 + 0x70) + 0x24) = 0xffff;
  return 1;
}

/* real-callee: func_800FE188 */
/* real-callee: func_800FEC2C */
/* rand-u16: 0x8008EE54 1 0,1,2,3,4,5,6,7,8,9,10,15,19,20,21,31,32,63,64,98,99,100,65535 */
#include "common.h"

#include "ghidra.h"
#define D_80018600 (*(s32 *)0x80018600)
#define D_80119714 (*(s32 *)0x80119714)
#define _D_8008EE54 (*(u16 *)0x8008EE54)
#define _D_8008F756 (*(u16 *)0x8008F756)
#define _D_8008F760 (*(s32 *)0x8008F760)
extern s32 func_80013928();
extern s32 func_80015B3C();
extern s32 func_80034AB0();
extern s32 func_800F8B48();
extern s32 func_800FE188();
extern s32 func_800FEC2C();
extern s32 rcos();
undefined4 func_800EA3E4(undefined4 param_1,int param_2,int param_3,int param_4)

{
  short *psVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_28 [8];

  iVar5 = _D_8008F760;
  if (_D_8008EE54 == 3) {
L800EA5C8:
    *(short *)(iVar5 + 0x44) = *(short *)(iVar5 + 0x44) + -1;
    *(short *)(iVar5 + 0x48) = *(short *)(iVar5 + 0x48) + 100;
    *(short *)(iVar5 + 0x46) = *(short *)(iVar5 + 0x46) + -1;
    uVar2 = (undefined1)((*(short *)(iVar5 + 0x44) * 0x7f) / 0x32);
    *(undefined1 *)(iVar5 + 0x32) = uVar2;
    *(undefined1 *)(iVar5 + 0x31) = uVar2;
    *(undefined1 *)(iVar5 + 0x30) = uVar2;
    iVar7 = *(int *)(param_4 + 0x70);
    uVar3 = (undefined2)(((int)_D_8008F756 * (int)*(short *)(iVar5 + 0x44)) / 0x32);
    *(undefined2 *)(*(int *)(param_4 + 0x74) + 0x50) = uVar3;
    *(undefined2 *)(iVar7 + 0x50) = uVar3;
    if ((*(short *)(param_2 + 0x710) == 1) && (*(short *)(iVar5 + 0x44) < 0x1a)) {
      D_80119714 = 0;
      _D_8008EE54 = _D_8008EE54 + 1;
    }
    if (*(short *)(iVar5 + 0x44) < 2) {
      func_80013928(iVar5);
      D_80119714 = 0;
      _D_8008EE54 = 5;
      return 0;
    }
    return 0;
  }
  if (_D_8008EE54 < 4) {
    if (_D_8008EE54 == 1) {
      if (*(uint *)(*(int *)(param_3 + 0x70) + 0x20) < 7) {
        return 0;
      }
      iVar5 = func_80015B3C(&D_80018600,func_800F8B48,1);
      _D_8008F760 = iVar5;
      func_800FE188(param_4,iVar5 + 0x28);
      *(undefined1 *)(iVar5 + 0x30) = 0x7f;
      *(undefined1 *)(iVar5 + 0x31) = 0x7f;
      *(undefined1 *)(iVar5 + 0x32) = 0x7f;
      *(undefined1 *)(iVar5 + 0x38) = 0xc;
      *(undefined2 *)(iVar5 + 0x3a) = 0xffff;
      *(undefined1 *)(iVar5 + 0x34) = 0;
      *(undefined1 *)(iVar5 + 0x35) = 0;
      *(undefined1 *)(iVar5 + 0x36) = 0;
      *(undefined2 *)(iVar5 + 0x42) = 0;
      *(undefined2 *)(iVar5 + 0x46) = 0x32;
      *(undefined2 *)(iVar5 + 0x44) = 0x32;
      *(undefined1 *)(iVar5 + 0x40) = 1;
      func_80034AB0(0x800e);
      D_80119714 = 0;
      _D_8008EE54 = _D_8008EE54 + 1;
    }
    else if (_D_8008EE54 < 2) {
      if (_D_8008EE54 == 0) {
        *(undefined1 *)(param_3 + 0x17) = 0x87;
        *(undefined1 *)(param_3 + 0x23) = 1;
        _D_8008EE54 = _D_8008EE54 + 1;
        _D_8008F756 = *(undefined2 *)(*(int *)(param_4 + 0x70) + 0x50);
        D_80119714 = 0;
        return 0;
      }
      return 0;
    }
    *(short *)(iVar5 + 0x42) = *(short *)(iVar5 + 0x42) + 4;
    *(short *)(iVar5 + 0x48) = *(short *)(iVar5 + 0x48) + 100;
    func_800FE188(param_4,auStack_28);
    func_800FEC2C(auStack_28);
    if (*(short *)(iVar5 + 0x42) < 300) {
      return 0;
    }
    *(uint *)(param_4 + 0x18) = *(uint *)(param_4 + 0x18) | 0x80000000;
    D_80119714 = 0;
    _D_8008EE54 = _D_8008EE54 + 1;
    goto L800EA5C8;
  }
  if (_D_8008EE54 != 5) {
    if (4 < _D_8008EE54) {
      if (_D_8008EE54 != 99) {
        return 0;
      }
      goto L800EA7E8;
    }
    sVar4 = *(short *)(_D_8008F760 + 0x44) + -1;
    psVar1 = (short *)(_D_8008F760 + 0x48);
    *(short *)(_D_8008F760 + 0x44) = sVar4;
    *(short *)(iVar5 + 0x48) = *psVar1 + 100;
    uVar2 = (undefined1)((sVar4 * 0x7f) / 0x32);
    *(undefined1 *)(iVar5 + 0x32) = uVar2;
    *(undefined1 *)(iVar5 + 0x31) = uVar2;
    *(undefined1 *)(iVar5 + 0x30) = uVar2;
    iVar6 = (int)_D_8008F756;
    sVar4 = *(short *)(iVar5 + 0x44);
    iVar7 = rcos(D_80119714 * 500);
    iVar7 = ((iVar6 * sVar4) / 0x32) * iVar7;
    iVar6 = *(int *)(param_4 + 0x70);
    if (iVar7 < 0) {
      iVar7 = iVar7 + 0xfff;
    }
    sVar4 = _D_8008F756 - (short)(iVar7 >> 0xc);
    *(short *)(*(int *)(param_4 + 0x74) + 0x50) = sVar4;
    *(short *)(iVar6 + 0x50) = sVar4;
    if (0 < *(short *)(iVar5 + 0x44)) {
      return 0;
    }
    func_80013928(iVar5);
    D_80119714 = 0;
    _D_8008EE54 = _D_8008EE54 + 1;
  }
  *(uint *)(param_4 + 0x18) = *(uint *)(param_4 + 0x18) ^ 0x80000000;
L800EA7E8:
  *(undefined1 *)(param_3 + 0x17) = 1;
  return 1;
}

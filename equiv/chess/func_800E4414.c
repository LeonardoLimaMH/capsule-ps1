#include "common.h"

/* rand-u16: 0x8008EE54 1 0,1,2,3,4,5,6,7,8,9,10,15,19,20,21,31,32,63,64,98,99,100,65535 */
#include "ghidra.h"
/* rand-u16: 0x8008EE54 1 0,1,2,3,4,5,6,7,8,9,98,99,100,65535 */
#define D_80018600 (*(s32 *)0x80018600)
#define D_80119714 (*(s32 *)0x80119714)
#define _D_8008EE54 (*(u16 *)0x8008EE54)
#define _D_8008F760 (*(s32 *)0x8008F760)
extern s32 func_80013928();
extern s32 func_80015B3C();
extern s32 func_80034AB0();
extern s32 func_800C8A48();
extern s32 func_800DD1D4();
extern s32 func_800F5AF4();
extern s32 func_800FE188();
extern s32 func_800FE21C();
extern s32 func_800FEC2C();
extern s32 func_800FF3B4();
undefined4 func_800E4414(undefined4 param_1,int param_2,byte *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];

  iVar5 = _D_8008F760;
  iVar4 = param_2 + (uint)*(byte *)(param_2 + 0x5fa) * 2;
  uVar1 = *(undefined1 *)(iVar4 + 0x601);
  uVar2 = *(undefined1 *)(iVar4 + 0x602);
  if (_D_8008EE54 != 3) {
    if (3 < _D_8008EE54) {
      if (_D_8008EE54 == 5) {
        *(short *)(_D_8008F760 + 0x38) = (short)((D_80119714 * 0x600) / 0x28);
        if (D_80119714 < 0x28) {
          return 0;
        }
        func_80013928(iVar5);
      }
      else {
        if (4 < _D_8008EE54) {
          if ((_D_8008EE54 != 6) && (_D_8008EE54 != 99)) {
            return 0;
          }
          return 1;
        }
        func_800C8A48(param_1,param_2,uVar1,uVar2,
                      *(uint *)((*(uint *)((uint)*param_3 * 0x3c + -0x7ff9c6b8) >> 0x11 & 0x7f) *
                                0x58 + -0x7ff94d4c) >> 0x1a & 7);
      }
      goto L800E4734;
    }
    if (_D_8008EE54 == 1) {
      func_800FE188(param_3,auStack_30);
      func_800FE21C(uVar1,uVar2,auStack_28);
      func_800FF3B4(auStack_30,auStack_28,2,1,auStack_38);
      iVar5 = func_800FEC2C(auStack_38);
      if (iVar5 == 0) {
        return 0;
      }
      param_3[0x17] = 0x88;
      param_3[0x23] = 1;
      goto L800E4734;
    }
    if (_D_8008EE54 < 2) {
      if (_D_8008EE54 != 0) {
        return 0;
      }
      bVar3 = func_800DD1D4(param_3,uVar1,uVar2);
      param_3[0x25] = bVar3;
      goto L800E4734;
    }
    if (D_80119714 < 0x1e) {
      return 0;
    }
    iVar5 = func_80015B3C(&D_80018600,func_800F5AF4,1);
    _D_8008F760 = iVar5;
    func_800FE21C(uVar1,uVar2,iVar5 + 0x28);
    *(undefined1 *)(iVar5 + 0x30) = 0x7f;
    *(undefined1 *)(iVar5 + 0x31) = 0xff;
    *(undefined1 *)(iVar5 + 0x32) = 0xff;
    *(undefined2 *)(iVar5 + 0x34) = 0x3c;
    *(undefined1 *)(iVar5 + 0x36) = 8;
    *(undefined1 *)(iVar5 + 0x37) = 8;
    *(undefined2 *)(iVar5 + 0x38) = 0;
    *(undefined2 *)(iVar5 + 0x3a) = 0;
    *(undefined2 *)(iVar5 + 0x3e) = 0xffff;
    *(undefined1 *)(iVar5 + 0x43) = 1;
    *(short *)(iVar5 + 0x2a) = *(short *)(iVar5 + 0x2a) + -0x14;
    func_80034AB0(0x800d);
    D_80119714 = 0;
    _D_8008EE54 = _D_8008EE54 + 1;
  }
  *(short *)(iVar5 + 0x3a) = (short)((D_80119714 * 0x600) / 0x28);
  if (D_80119714 < 0x28) {
    return 0;
  }
L800E4734:
  _D_8008EE54 = _D_8008EE54 + 1;
  D_80119714 = 0;
  return 0;
}

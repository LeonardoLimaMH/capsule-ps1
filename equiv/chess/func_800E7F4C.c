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
extern s32 func_800F52C4();
extern s32 func_800F71B4();
undefined4 func_800E7F4C(undefined4 param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  short sVar2;
  bool bVar3;
  int iVar4;
  int iVar5;

  iVar4 = _D_8008F760;
  if (_D_8008EE54 == 3) {
    if (D_80119714 < 0x1e) {
      return 0;
    }
    param_2 = param_2 + (uint)*(byte *)(param_2 + 0x5fa);
    cVar1 = *(char *)(param_2 + 0x60a);
    if (cVar1 != '\0') {
      *(char *)(param_2 + 0x60a) = cVar1 + -1;
      iVar4 = func_80015B3C(&D_80018600,func_800F52C4,1);
      *(undefined1 *)(iVar4 + 0x28) = 0xbf;
      *(undefined1 *)(iVar4 + 0x29) = 0xff;
      *(undefined1 *)(iVar4 + 0x2a) = 0xff;
      *(undefined1 *)(iVar4 + 0x30) = 1;
      *(undefined2 *)(iVar4 + 0x32) = 0x28;
      func_80034AB0(6);
    }
  }
  else if (_D_8008EE54 < 4) {
    if (_D_8008EE54 == 1) {
      _D_8008F760 = func_80015B3C(&D_80018600,func_800F71B4,1);
      *(short *)(_D_8008F760 + 0x28) =
           *(short *)(*(int *)(param_4 + 0x74) + 0x46) + (short)(_D_8008EE70 / 2);
      *(short *)(_D_8008F760 + 0x2a) =
           *(short *)(*(int *)(param_4 + 0x74) + 0x4a) + (short)(_D_8008EE74 / 2) + -0x1a;
      sVar2 = *(short *)(*(int *)(param_4 + 0x74) + 0x4e);
      *(undefined1 *)(_D_8008F760 + 0x2e) = 10;
      *(undefined2 *)(_D_8008F760 + 0x30) = 0x10;
      *(undefined2 *)(_D_8008F760 + 0x36) = 0x96;
      *(undefined1 *)(_D_8008F760 + 0x38) = 0xdf;
      *(undefined1 *)(_D_8008F760 + 0x39) = 3;
      *(undefined1 *)(_D_8008F760 + 0x3a) = 0xc6;
      *(short *)(_D_8008F760 + 0x2c) = sVar2 + -10;
      func_80034AB0(0x13);
    }
    else if (_D_8008EE54 < 2) {
      if (_D_8008EE54 != 0) {
        return 0;
      }
      *(undefined1 *)(param_3 + 0x17) = 0x88;
      *(undefined1 *)(param_3 + 0x23) = 1;
    }
    else {
      *(short *)(_D_8008F760 + 0x34) = (short)((D_80119714 * 0x78) / 0x3c);
      if (D_80119714 < 0x3c) {
        return 0;
      }
    }
  }
  else {
    if (_D_8008EE54 == 5) {
      return 1;
    }
    if (4 < _D_8008EE54) {
      if (_D_8008EE54 == 99) {
        return 1;
      }
      return 0;
    }
    iVar5 = 0x3c - D_80119714;
    bVar3 = D_80119714 < 0x3c;
    *(char *)(_D_8008F760 + 0x38) = (char)((iVar5 * 0xdf) / 0x3c);
    *(char *)(iVar4 + 0x39) = (char)((iVar5 * 3) / 0x3c);
    *(char *)(iVar4 + 0x3a) = (char)((iVar5 * 0xc6) / 0x3c);
    if (bVar3) {
      return 0;
    }
    func_80013928(iVar4);
  }
  D_80119714 = 0;
  _D_8008EE54 = _D_8008EE54 + 1;
  return 0;
}

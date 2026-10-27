#include "common.h"

/* rand-u16: 0x8008EE54 1 0,1,2,3,4,5,6,7,8,9,10,15,19,20,21,31,32,63,64,98,99,100,65535 */
#include "ghidra.h"
/* rand-u16: 0x8008EE54 1 0,1,2,3,4,5,6,7,8,9,98,99,100,65535 */
#define D_80085994 (*(s32 *)0x80085994)
#define D_8008EE6A (*(u8 *)0x8008EE6A)
#define D_80119714 (*(s32 *)0x80119714)
#define D_8011974C (*(u8 *)0x8011974C)
#define _D_8008EE54 (*(u16 *)0x8008EE54)
#define _D_80118C18 (*(s32 *)0x80118C18)
extern s32 GetClut();
extern s32 GetTPage();
extern s32 func_80015B3C();
extern s32 func_80034AB0();
extern s32 func_800D7328();
extern s32 func_800DDA78();
extern s32 func_800DE0F4();
extern s32 func_800FA548();
extern s32 func_800FE188();
extern s32 func_800FE958();
undefined4 func_800DE26C(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  byte abStack_28 [16];

  if (_D_8008EE54 == 2) {
    if ((D_80119714 / 0x3c) * 0x3c != D_80119714 + -0x28) {
      return 0;
    }
    iVar2 = 0;
    uVar3 = func_800D7328
                      (*(undefined1 *)
                        ((uint)*(byte *)(param_3 + 0x16) * 4 +
                         (uint)*(byte *)(param_3 + 0x15) * 0x34 + _D_80118C18 + 3),
                       abStack_28);
    pbVar4 = abStack_28;
    if ((uVar3 & 0xff) != 0) {
      do {
        iVar2 = iVar2 + 1;
        func_800DDA78
                  (&D_80085994 + (*pbVar4 & 0x7f) * 0x7c + (uint)(*pbVar4 >> 7) * 0x2e8);
        pbVar4 = abStack_28 + iVar2;
      } while (iVar2 < (int)(uVar3 & 0xff));
      return 0;
    }
  }
  else if (_D_8008EE54 < 3) {
    if (_D_8008EE54 == 0) {
      D_8008EE6A = 2;
      *(undefined1 *)(param_3 + 0x17) = 0x88;
      *(undefined1 *)(param_3 + 0x23) = 1;
    }
    else {
      if (_D_8008EE54 != 1) {
        return 0;
      }
      if (D_80119714 < 0x28) {
        return 0;
      }
      iVar2 = func_80015B3C(func_800DE0F4,func_800FA548,1);
      func_800FE188(param_3,iVar2 + 0x28);
      *(undefined2 *)(iVar2 + 0x36) = 0x46;
      *(undefined2 *)(iVar2 + 0x3c) = 1000;
      *(undefined2 *)(iVar2 + 0x3e) = 0x32;
      *(undefined2 *)(iVar2 + 0x42) = 100;
      *(undefined2 *)(iVar2 + 0x44) = 0x2800;
      uVar1 = GetTPage(0,1,0x280,0x100);
      *(undefined2 *)(iVar2 + 0x46) = uVar1;
      uVar1 = GetClut(0xb0,0x1f0);
      *(undefined2 *)(iVar2 + 0x48) = uVar1;
      *(undefined1 *)(iVar2 + 0x4a) = 0;
      func_80034AB0(0x801e);
      func_800FE958(0xfffffed4,0x1000,300);
      D_8011974C = '\x01';
    }
    D_80119714 = 0;
    _D_8008EE54 = _D_8008EE54 + 1;
  }
  else if (_D_8008EE54 == 4) {
    if (D_8011974C == '\0') {
      D_8008EE6A = 0;
      return 1;
    }
  }
  else {
    if (3 < _D_8008EE54) {
      if (_D_8008EE54 == 99) {
        D_8008EE6A = 0;
        return 1;
      }
      return 0;
    }
    D_8011974C = '\x02';
    D_80119714 = 0;
    _D_8008EE54 = _D_8008EE54 + 1;
  }
  return 0;
}

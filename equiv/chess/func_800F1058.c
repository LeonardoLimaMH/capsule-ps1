#include "common.h"

/* rand-u16: 0x8008EE54 1 0,1,2,3,4,5,6,7,8,9,10,15,19,20,21,31,32,63,64,98,99,100,65535 */
#include "ghidra.h"
/* rand-u16: 0x8008EE54 1 0,1,2,3,4,5,6,7,8,9,99,65535 */
#define D_80018600 (*(s32 *)0x80018600)
#define D_80119714 (*(s32 *)0x80119714)
#define _D_8008EE54 (*(u16 *)0x8008EE54)
extern s32 func_80015B3C();
extern s32 func_80034AB0();
extern s32 func_800F52C4();
undefined4 func_800F1058(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;

  if (_D_8008EE54 != 1) {
    if (1 < _D_8008EE54) {
      if (_D_8008EE54 != 2) {
        return 0;
      }
      if (D_80119714 < 10) {
        return 0;
      }
      *(undefined1 *)(param_2 + 0x60d) = 2;
      return 1;
    }
    if (_D_8008EE54 != 0) {
      return 0;
    }
    *(undefined1 *)(param_3 + 0x17) = 0x88;
    *(undefined1 *)(param_3 + 0x23) = 0;
    D_80119714 = 0;
    _D_8008EE54 = _D_8008EE54 + 1;
    func_80034AB0(0x8009);
  }
  iVar1 = func_80015B3C(&D_80018600,func_800F52C4,1);
  if (D_80119714 == 0) {
    *(undefined1 *)(iVar1 + 0x2c) = 200;
    *(undefined1 *)(iVar1 + 0x30) = 1;
    *(undefined1 *)(iVar1 + 0x28) = 0;
    *(undefined1 *)(iVar1 + 0x29) = 0;
    *(undefined1 *)(iVar1 + 0x2a) = 0;
    *(undefined1 *)(iVar1 + 0x2d) = 0;
    *(undefined1 *)(iVar1 + 0x2e) = 0;
    *(undefined2 *)(iVar1 + 0x32) = 0x14;
  }
  if (D_80119714 == 0x14) {
    *(undefined1 *)(iVar1 + 0x28) = 200;
    *(undefined1 *)(iVar1 + 0x2c) = 100;
    *(undefined1 *)(iVar1 + 0x2d) = 100;
    *(undefined1 *)(iVar1 + 0x30) = 1;
    *(undefined1 *)(iVar1 + 0x29) = 0;
    *(undefined1 *)(iVar1 + 0x2a) = 0;
    *(undefined1 *)(iVar1 + 0x2e) = 0;
    *(undefined2 *)(iVar1 + 0x32) = 0x1e;
  }
  if (D_80119714 == 0x32) {
    *(undefined1 *)(iVar1 + 0x28) = 100;
    *(undefined1 *)(iVar1 + 0x29) = 100;
    *(undefined1 *)(iVar1 + 0x2e) = 200;
    *(undefined1 *)(iVar1 + 0x30) = 1;
    *(undefined1 *)(iVar1 + 0x2a) = 0;
    *(undefined1 *)(iVar1 + 0x2c) = 0;
    *(undefined1 *)(iVar1 + 0x2d) = 0;
    *(undefined2 *)(iVar1 + 0x32) = 0x1e;
  }
  if (D_80119714 == 0x50) {
    *(undefined1 *)(iVar1 + 0x2a) = 200;
    *(undefined1 *)(iVar1 + 0x2c) = 0xff;
    *(undefined1 *)(iVar1 + 0x2d) = 0xff;
    *(undefined1 *)(iVar1 + 0x2e) = 0xff;
    *(undefined1 *)(iVar1 + 0x30) = 1;
    *(undefined1 *)(iVar1 + 0x28) = 0;
    *(undefined1 *)(iVar1 + 0x29) = 0;
    *(undefined2 *)(iVar1 + 0x32) = 10;
  }
  if (D_80119714 == 0x5a) {
    *(undefined1 *)(iVar1 + 0x28) = 0xff;
    *(undefined1 *)(iVar1 + 0x29) = 0xff;
    *(undefined1 *)(iVar1 + 0x2a) = 0xff;
    *(undefined1 *)(iVar1 + 0x30) = 1;
    *(undefined1 *)(iVar1 + 0x2c) = 0;
    *(undefined1 *)(iVar1 + 0x2d) = 0;
    *(undefined1 *)(iVar1 + 0x2e) = 0;
    *(undefined2 *)(iVar1 + 0x32) = 10;
  }
  if (99 < D_80119714) {
    D_80119714 = 0;
    _D_8008EE54 = _D_8008EE54 + 1;
  }
  return 0;
}

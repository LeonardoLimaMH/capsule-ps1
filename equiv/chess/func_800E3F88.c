#include "common.h"

/* rand-u16: 0x8008EE54 1 0,1,2,3,4,5,6,7,8,9,10,15,19,20,21,31,32,63,64,98,99,100,65535 */
#include "ghidra.h"
/* rand-u16: 0x8008EE54 1 0,1,2,3,4,5,6,7,8,9,98,99,100,65535 */
#define D_80018600 (*(s32 *)0x80018600)
#define D_80119714 (*(s32 *)0x80119714)
#define D_8011974C (*(u8 *)0x8011974C)
#define _D_8008EE54 (*(u16 *)0x8008EE54)
extern s32 func_80015B3C();
extern s32 func_80034AB0();
extern s32 func_800D8FC4();
extern s32 func_800DD274();
extern s32 func_800DD824();
extern s32 func_800F52C4();
extern s32 func_800FE958();
extern s32 func_800FED90();
undefined4
func_800E3F88(undefined4 param_1,int param_2,char *param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;

  if (_D_8008EE54 == 2) {
    if (D_80119714 < 0x78) {
      return 0;
    }
    D_8011974C = '\x02';
  }
  else {
    if (2 < _D_8008EE54) {
      if (_D_8008EE54 == 3) {
        if (D_8011974C != '\0') {
          return 0;
        }
      }
      else if (_D_8008EE54 != 99) {
        return 0;
      }
      *(undefined1 *)(param_2 + 0x60d) = 2;
      return 1;
    }
    if (_D_8008EE54 == 0) {
      iVar3 = func_800FED90(param_4);
      if (iVar3 == 0) {
        return 0;
      }
      param_3[0x17] = -0x78;
      param_3[0x23] = '\x01';
      func_800FE958(0,0,500);
      _D_8008EE54 = _D_8008EE54 + 1;
      D_80119714 = 0;
      D_8011974C = 1;
      return 0;
    }
    if (_D_8008EE54 != 1) {
      return 0;
    }
    if (*(uint *)(*(int *)(param_3 + 0x70) + 0x20) < 3) {
      return 0;
    }
    uVar4 = 3;
    if (*param_3 == '\x1e') {
      uVar4 = 2;
    }
    uVar2 = func_800D8FC4(param_3,param_4,uVar4);
    uVar1 = (uVar2 & 0xff) / 0xd;
    uVar2 = (uVar2 & 0xff) % 0xd;
    func_800DD824(param_4,uVar1,uVar2,1,1);
    func_800DD274(param_4,uVar1,uVar2);
    *(char *)(param_2 + (uint)*(byte *)(param_2 + 0x5fa) * 2 + 0x601) = (char)uVar1;
    *(char *)(param_2 + (uint)*(byte *)(param_2 + 0x5fa) * 2 + 0x602) = (char)uVar2;
    iVar3 = func_80015B3C(&D_80018600,func_800F52C4,3);
    *(undefined1 *)(iVar3 + 0x28) = 0xff;
    *(undefined1 *)(iVar3 + 0x29) = 0xff;
    *(undefined1 *)(iVar3 + 0x2a) = 0xff;
    *(undefined1 *)(iVar3 + 0x2c) = 0;
    *(undefined1 *)(iVar3 + 0x2d) = 0;
    *(undefined1 *)(iVar3 + 0x2e) = 0;
    *(undefined1 *)(iVar3 + 0x30) = 1;
    *(undefined2 *)(iVar3 + 0x32) = 10;
    func_80034AB0(0x800a);
  }
  D_80119714 = 0;
  _D_8008EE54 = _D_8008EE54 + 1;
  return 0;
}

#include "common.h"

/* rand-u16: 0x8008EE54 1 0,1,2,3,4,5,6,7,8,9,10,15,19,20,21,31,32,63,64,98,99,100,65535 */
#include "ghidra.h"
/* rand-u16: 0x8008EE54 1 0,1,2,3,4,5,6,7,8,9,98,99,100,65535 */
#define D_80119714 (*(s32 *)0x80119714)
#define _D_8008EE54 (*(u16 *)0x8008EE54)
#define _D_8008F754 (*(s16 *)0x8008F754)
#define _D_8008F756 (*(u16 *)0x8008F756)
extern s32 func_80034AB0();
undefined4 func_800DDF6C(undefined4 param_1,int param_2,byte *param_3)

{
  byte bVar1;

  if (_D_8008EE54 == 1) {
    if (D_80119714 == _D_8008F754) {
      func_80034AB0(_D_8008F756);
    }
    if (*(int *)(*(int *)(param_3 + 0x70) + 0x1c) != 0) {
      return 0;
    }
  }
  else {
    if (1 < _D_8008EE54) {
      if (_D_8008EE54 == 2) {
        if (D_80119714 < 0x1e) {
          return 0;
        }
      }
      else if (_D_8008EE54 != 99) {
        return 0;
      }
      *(undefined1 *)(param_2 + 0x60d) = 2;
      return 1;
    }
    if (_D_8008EE54 != 0) {
      return 0;
    }
    bVar1 = *param_3;
    param_3[0x17] = 0x88;
    param_3[0x23] = 1;
    if (bVar1 == 0x31) {
      _D_8008F754 = 0x14;
      _D_8008F756 = 0x85;
    }
    else if (bVar1 < 0x32) {
      if (bVar1 == 6) {
        _D_8008F754 = 0x14;
        _D_8008F756 = 0x800f;
      }
    }
    else if (bVar1 == 0x5b) {
      _D_8008F756 = 0x8010;
      _D_8008F754 = 1;
    }
  }
  _D_8008EE54 = _D_8008EE54 + 1;
  D_80119714 = 0;
  return 0;
}

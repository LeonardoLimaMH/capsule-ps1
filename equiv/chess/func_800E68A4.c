#include "common.h"

/* rand-u16: 0x8008EE54 1 0,1,2,3,4,5,6,7,8,9,10,15,19,20,21,31,32,63,64,98,99,100,65535 */
#include "ghidra.h"
/* rand-u16: 0x8008EE54 1 0,1,2,3,4,5,6,7,8,9,98,99,100,65535 */
#define D_80119714 (*(s32 *)0x80119714)
#define _D_8008EE54 (*(u16 *)0x8008EE54)
extern s32 func_80034AB0();
extern s32 func_800A83E0();
undefined4 func_800E68A4(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined1 uVar1;

  if (_D_8008EE54 == 1) {
    if (D_80119714 < 0x1e) {
      return 0;
    }
    func_80034AB0(0x801c,param_2,param_4);
  }
  else {
    if (1 < _D_8008EE54) {
      if (_D_8008EE54 == 2) {
        if (D_80119714 < 0x3c) {
          return 0;
        }
      }
      else if (_D_8008EE54 != 99) {
        return 0;
      }
      return 1;
    }
    if (_D_8008EE54 != 0) {
      return 0;
    }
    uVar1 = func_800A83E0(param_1,param_3);
    *(undefined1 *)(param_3 + 0x25) = uVar1;
    *(undefined1 *)(param_3 + 0x17) = 0x88;
    *(undefined1 *)(param_3 + 0x23) = 1;
  }
  D_80119714 = 0;
  _D_8008EE54 = _D_8008EE54 + 1;
  return 0;
}

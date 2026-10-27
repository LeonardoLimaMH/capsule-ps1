#include "common.h"

/* rand-u16: 0x8008EE54 1 0,1,2,3,4,5,6,7,8,9,10,15,19,20,21,31,32,63,64,98,99,100,65535 */
#include "ghidra.h"
/* rand-u16: 0x8008EE54 1 0,1,2,3,4,5,6,7,8,9,99,65535 */
#define _D_8008EE54 (*(u16 *)0x8008EE54)
extern s32 func_80012668();
extern s32 func_80034AB0();
undefined4 func_800C768C(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;

  if (_D_8008EE54 == 1) {
    uVar1 = 0;
    if (*(short *)(*(int *)(param_3 + 0x70) + 0x24) < 0) {
      *(undefined1 *)(param_3 + 0x17) = 0x88;
      *(undefined1 *)(param_3 + 0x23) = 1;
      func_80012668();
      uVar1 = 0;
    }
  }
  else if (_D_8008EE54 < 2) {
    uVar1 = 0;
    if ((_D_8008EE54 == 0) && (uVar1 = 0, *(char *)(param_3 + 0x22) == *(char *)(param_3 + 0x17))) {
      *(undefined1 *)(param_3 + 0x17) = 0x8a;
      *(undefined1 *)(param_3 + 0x23) = 1;
      *(undefined1 *)(param_3 + 0x24) = 0x45;
      func_80034AB0(4);
      func_80012668();
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
    if ((_D_8008EE54 == 2) && (uVar1 = 0, *(short *)(*(int *)(param_3 + 0x70) + 0x24) < 0)) {
      *(undefined1 *)(param_3 + 0x17) = 0x88;
      *(undefined1 *)(param_3 + 0x23) = 0;
      *(uint *)(param_3 + 0x18) = *(uint *)(param_3 + 0x18) | 0x1040040;
      uVar1 = 1;
    }
  }
  return uVar1;
}

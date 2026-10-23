#include "common.h"

#include "ghidra.h"
void func_8009F820(int param_1)

{
    extern M2C_UNK D_80085428[];
    extern s32 D_8008619F[];
  ushort uVar1;
  uint uVar2;
  
  uVar1 = *(ushort *)(param_1 + 0x7a);
  if (uVar1 != 1) {
    if (1 < uVar1) {
      if (uVar1 == 2) {
        if (D_8008619F == '\0') {
          return;
        }
        *(undefined4 *)(param_1 + 0x3c) = 0;
        *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 8;
        *(short *)(param_1 + 0x6a) = -*(short *)(param_1 + 0x6a);
        *(short *)(param_1 + 0x6e) = -*(short *)(param_1 + 0x6e);
        *(short *)(param_1 + 0x7a) = *(short *)(param_1 + 0x7a) + 1;
      }
      else if (uVar1 != 3) {
        return;
      }
      uVar2 = *(int *)(param_1 + 0x3c) + 1;
      *(uint *)(param_1 + 0x3c) = uVar2;
      if (uVar2 < 0x1a) {
        return;
      }
      func_80012628();
      func_80012628(param_1);
      return;
    }
    if (uVar1 != 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xfffffffe | 8;
    *(short *)(param_1 + 0x7a) = *(short *)(param_1 + 0x7a) + 1;
  }
  uVar2 = *(int *)(param_1 + 0x3c) + 1;
  *(uint *)(param_1 + 0x3c) = uVar2;
  if (0x19 < uVar2) {
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xfffffff7;
    *(short *)(param_1 + 0x7a) = *(short *)(param_1 + 0x7a) + 1;
    func_800185F8();
  }
  return;
}

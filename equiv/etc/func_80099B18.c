#include "common.h"

#include "ghidra.h"
void func_80099B18(int param_1)

{
    extern M2C_UNK D_80085428[];
    extern u16 D_8008EE44[];
    extern s16 D_800B3ACC[];
    extern s32 D_800859F3[];
  undefined4 uVar1;
  int iVar2;
  
  if (((*D_8008EE44) < 7) && (D_800859F3 == '\x04')) {
    iVar2 = (int)(*D_800B3ACC);
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xfffffffe;
    if (*(int *)(param_1 + 0x80) == iVar2) {
      *(undefined1 *)(param_1 + 0x5a) = 0x80;
      *(undefined1 *)(param_1 + 0x59) = 0x80;
      *(undefined1 *)(param_1 + 0x58) = 0x80;
      if (*(int *)(param_1 + 0x1c) == 0) {
        *(undefined4 *)(param_1 + 0x18) = 0;
        uVar1 = func_80019F30(0x70009,*(int *)(param_1 + 0x80) + 1);
        func_80015CD0(param_1 + 0x14,uVar1,0);
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x5a) = 0x50;
      *(undefined1 *)(param_1 + 0x59) = 0x50;
      *(undefined1 *)(param_1 + 0x58) = 0x50;
      uVar1 = func_80019F30(0x60009,*(undefined4 *)(param_1 + 0x7c));
      *(undefined4 *)(param_1 + 0x18) = uVar1;
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
  }
  else {
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 1;
  }
  return;
}

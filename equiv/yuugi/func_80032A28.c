#include "common.h"

#include "ghidra.h"
void func_80032A28(int param_1)

{
    extern u16 D_8008EE58[];
    extern s32 D_800922D8[];
    extern u16 D_800922E6[];
    extern u16 D_800922E8[];
  short sVar1;
  int iVar2;
  
  if ((*D_8008EE58) == 3) {
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xfffffffe;
    sVar1 = (*D_800922E6);
    if (*(int *)(param_1 + 0x84) != 0) {
      sVar1 = (*D_800922E8);
    }
    iVar2 = 0;
    do {
      if ((int)sVar1 == *(int *)(param_1 + 0x80)) {
        *(undefined1 *)(param_1 + 0x5a) = 0x80;
        *(undefined1 *)(param_1 + 0x59) = 0x80;
        *(undefined1 *)(param_1 + 0x58) = 0x80;
      }
      else {
        *(undefined1 *)(param_1 + 0x5a) = 0x30;
        *(undefined1 *)(param_1 + 0x59) = 0x30;
        *(undefined1 *)(param_1 + 0x58) = 0x30;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 8);
  }
  else {
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 1;
  }
  if ((*D_800922D8) - 3U < 2) {
    func_800185F8(param_1);
  }
  return;
}

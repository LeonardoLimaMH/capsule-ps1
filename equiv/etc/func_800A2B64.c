#include "common.h"

#include "ghidra.h"
void func_800A2B64(int param_1,int param_2)

{
  undefined1 uVar1;
  
  if (*(char *)(param_1 + 0x5da) == '\0') {
    if (param_2 << 0x10 == 0) {
      *(undefined1 *)(param_1 + 0x5de) = 2;
      uVar1 = 1;
      goto L800A2BA8;
    }
  }
  else if (param_2 << 0x10 != 0) {
    *(undefined1 *)(param_1 + 0x5de) = 2;
    uVar1 = 1;
    goto L800A2BA8;
  }
  *(undefined1 *)(param_1 + 0x5de) = 1;
  uVar1 = 2;
L800A2BA8:
  *(undefined1 *)(param_1 + 0x5df) = uVar1;
  return;
}

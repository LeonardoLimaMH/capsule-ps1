#include "common.h"
#include "yuugi.h"

#include "ghidra.h"
void SetTexWindow(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  *(undefined1 *)(param_1 + 3) = 2;
  uVar1 = func_8004B054(param_2);
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

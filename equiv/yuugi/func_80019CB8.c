#include "common.h"

#include "ghidra.h"
void func_80019CB8(int param_1)

{
  int iVar1;
  int iVar2;
  
  VSync(3);
  do {
    iVar1 = DsControlB(9,0,0);
  } while (iVar1 == 0);
  do {
    iVar1 = DsReset();
    iVar2 = 0;
  } while (iVar1 == 0);
  do {
    VSync(0);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 200);
  *(undefined1 *)(param_1 + 3) = 0xff;
  *(undefined1 *)(param_1 + 0x408) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  return;
}

#include "common.h"

#include "ghidra.h"
void func_8009D330(int param_1)

{
    extern s16 D_8006AFFE[];
    extern void * D_8008F724[];
  int iVar1;
  
  iVar1 = (*D_8008F724);
  *(undefined2 *)(param_1 + 0x46) = *(undefined2 *)((*D_8008F724) + 0x46);
  *(undefined2 *)(param_1 + 0x4a) = *(undefined2 *)(iVar1 + 0x4a);
  *(short *)(param_1 + 0x4e) = *(short *)(iVar1 + 0x4e) + -1;
  if (*(short *)(param_1 + 0x7a) == *(short *)(param_1 + 0x26)) {
    func_80034AB0(2);
    *(short *)(param_1 + 0x7a) = *(short *)(param_1 + 0x7a) + 1;
  }
  if ((*(short *)(param_1 + 0x26) == 3) && (iVar1 = func_80015E60(param_1), iVar1 != 0)) {
    (*D_8006AFFE) = 0;
    func_800185F8(param_1);
  }
  return;
}

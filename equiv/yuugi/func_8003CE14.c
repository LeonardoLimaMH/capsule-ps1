#include "common.h"

#include "ghidra.h"
void func_8003CE14(short param_1)

{
    extern s32 D_80078C84[];
    extern M2C_UNK D_800944B8[];
  int iVar1;
  
  if ((param_1 != -1) && (iVar1 = param_1 * 0x2ac, *(short *)(iVar1 + -0x7ff6b8c0) != -1)) {
    *(undefined2 *)(iVar1 + -0x7ff6b8c0) = 0xffff;
    *(undefined2 *)(iVar1 + -0x7ff6b8be) = 0;
    *(undefined2 *)(iVar1 + -0x7ff6b8ba) = 0x7f;
    *(undefined2 *)(iVar1 + -0x7ff6b8bc) = 0x7f;
    (*D_80078C84) = 0;
  }
  return;
}

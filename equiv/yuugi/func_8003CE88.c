#include "common.h"

#include "ghidra.h"
void func_8003CE88(short param_1,ushort param_2,ushort param_3)

{
    extern M2C_UNK D_800944B8[];
  int iVar1;
  
  iVar1 = param_1 * 0x2ac;
  *(ushort *)(iVar1 + -0x7ff6b8bc) = param_2 & 0x7f;
  *(ushort *)(iVar1 + -0x7ff6b8ba) = param_3 & 0x7f;
  if (*(short *)(iVar1 + -0x7ff6b8be) != 2) {
    func_80037E40();
  }
  return;
}

#include "common.h"

#include "ghidra.h"
bool func_800D3BD8(undefined4 param_1)

{
    extern M2C_UNK D_80091618[];
  ushort uVar1;
  ushort uVar2;
  
  uVar1 = func_800B1260();
  uVar2 = uVar1;
  if ((*(short *)((uint)uVar1 * 0x1a8 + -0x7ff6e958) != 0) &&
     (uVar2 = func_800B12D8(param_1), uVar2 == 0xffff)) {
    *(undefined2 *)((uint)uVar1 * 0x1a8 + -0x7ff6e958) = 0;
    uVar2 = uVar1;
  }
  return *(short *)((uint)uVar2 * 0x1a8 + -0x7ff6e9d8) == 0;
}

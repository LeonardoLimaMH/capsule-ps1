#include "common.h"

#include "ghidra.h"
void func_800339D8(short param_1,undefined1 param_2)

{
    extern u16 D_800922F0[];
  if (((*D_800922F0) & 0x80) != 0) {
    func_80034BD8((int)param_1,param_2);
  }
  if (((*D_800922F0) & 0xc) != 0) {
    func_8003727C((int)param_1,param_2);
  }
  return;
}

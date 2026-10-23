#include "common.h"

#include "ghidra.h"
void func_800AAB8C(int param_1,int param_2,int param_3,int param_4)

{
    extern M2C_UNK D_80100F40[];
  int iVar1;
  
  func_8001F1A8((param_3 + 5) * 0x10000 >> 0x10,(param_4 + 7) * 0x10000 >> 0x10,0,0,0,D_80100F40,
                  0,7,3);
  iVar1 = (param_4 + 0x15) * 0x10000 >> 0x10;
  func_800188F0((param_3 + 9) * 0x10000 >> 0x10,iVar1,3,0,3);
  func_8001F35C((param_3 + 0x1f) * 0x10000 >> 0x10,iVar1,0,0,0,
                  5 - (uint)*(byte *)(param_1 + param_2 + 0xbda),1,3);
  func_800A9810(param_1,param_2,param_3 + 5,param_4 + 7,2);
  return;
}

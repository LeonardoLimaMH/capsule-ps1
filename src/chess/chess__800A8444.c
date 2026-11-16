#include "ghidra.h"
#include "matching.h"
#include "common.h"

int func_800A8444(undefined4 param_1, int param_2, int param_3, int param_4)
{
  int iVar1;
  param_3 = param_3 - ((uint) (*((byte *) (param_2 + 0x15))));
  param_4 = param_4 - ((uint) (*((byte *) (param_2 + 0x16))));
  if (!(param_3 < 1))
  {
    iVar1 = 5;
    if ((param_4 < 1) && ((iVar1 = 6, param_4 < 0)))
    {
      iVar1 = 7;
    }
  }
  else
    if (param_3 < 0)
  {
    iVar1 = 3;
    if ((param_4 < 1) && ((iVar1 = 2, param_4 < 0)))
    {
      iVar1 = 1;
    }
  }
  else
  {
    iVar1 = ((uint) (0 < param_4)) << 2;
  }
  return iVar1;
}

void func_800A84A0(undefined1 *param_1,undefined4 param_2,int param_3,int param_4)

{
    extern u8 D_80085428[];
  if (param_3 != 5) {
    switch(*param_1) {
    case 0x13:
    case 0x22:
    case 0x25:
    case 0x31:
    case 0x47:
    case 0x48:
    case 0x5c:
    case 0x5d:
      if (param_4 == 0) {
        if (param_1[0x27] == '\0') {
          param_1[0x27] = 1;
          func_8009C5C4(D_80085428,param_2,param_3,param_1);
        }
      }
      else if (param_1[0x27] != '\0') {
        param_1[0x27] = 0;
        func_8009C278(D_80085428);
      }
    }
  }
  return;
}

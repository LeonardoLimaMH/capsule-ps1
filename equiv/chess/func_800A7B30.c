#include "common.h"

#include "ghidra.h"
int func_800A7B30(undefined4 param_1,char *param_2,int param_3,uint param_4)

{
  int iVar1;
  
  iVar1 = 0;
  switch(param_4 & 0x7f) {
  case 1:
    iVar1 = param_3;
    break;
  case 2:
    iVar1 = param_3 + 0x13;
    break;
  case 4:
    iVar1 = 0x1b;
    break;
  case 5:
    iVar1 = 0x1c;
    break;
  case 6:
    iVar1 = param_3 + 0x31;
    break;
  case 7:
  case 8:
  case 9:
    iVar1 = param_3 + 0x39;
    break;
  case 10:
    iVar1 = param_3 + 0x46;
    if (*param_2 != 'R') {
      iVar1 = (uint)(byte)param_2[0x24] + param_3;
    }
  }
  return iVar1;
}

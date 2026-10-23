#include "common.h"

#include "ghidra.h"
int func_800A7BB4(int param_1,uint param_2,byte *param_3)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = 0;
  switch(param_2 & 0x7f) {
  case 1:
    if (param_3[0x27] == 0) {
      if ((*param_3 != 0xc) || (iVar2 = param_1 + 0xe3, param_3[0x29] == 0)) {
        iVar2 = param_1 * 3;
      }
    }
    else {
      bVar1 = *param_3;
      if (bVar1 == 0x47) {
        iVar2 = param_1 + 0xe8;
      }
      else if (bVar1 < 0x48) {
        if (bVar1 != 0x31) {
          return param_1 + 0xd8;
        }
        iVar2 = param_1 + 0x100;
      }
      else {
        if (bVar1 != 0x48) {
          return param_1 + 0xd8;
        }
        iVar2 = param_1 + 0xe0;
      }
    }
    break;
  case 2:
    iVar2 = param_1 * 3 + 0x3f;
    break;
  case 4:
    iVar2 = 0x57;
    break;
  case 5:
    iVar2 = 0x5d;
    break;
  case 6:
    iVar2 = param_1 * 3 + 0x9c;
    break;
  case 7:
  case 8:
  case 9:
    iVar2 = param_1 * 3 + 0xb4;
  }
  return iVar2;
}

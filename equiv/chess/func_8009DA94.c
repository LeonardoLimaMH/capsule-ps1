#include "common.h"

#include "ghidra.h"
byte func_8009DA94(undefined4 param_1,undefined4 param_2,byte param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  
  bVar3 = param_3;
  if (param_4 == 0) {
    bVar3 = 0xff;
  }
  do {
    if (param_4 == 1) {
      bVar1 = bVar3 == 0;
      bVar3 = bVar3 - 1;
      if (bVar1) {
        return param_3;
      }
    }
    else if (param_4 < 2) {
      if (param_4 == 0) {
L8009DB34:
        bVar3 = bVar3 + 1;
      }
    }
    else if (param_4 == 2) {
      if (4 < bVar3) {
        return param_3;
      }
      goto L8009DB34;
    }
    iVar2 = func_800A8E34(param_1,param_2,bVar3);
    if (iVar2 == 0) {
      return bVar3;
    }
  } while( true );
}

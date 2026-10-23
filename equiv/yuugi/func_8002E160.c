#include "common.h"

#include "ghidra.h"
uint func_8002E160(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = __floatsidf(*(byte *)(param_1 + 9) - 0x73);
  uVar3 = __muldf3((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),0,0x3fe00000);
  uVar4 = __floatsidf(*(byte *)(param_1 + 10) - 0x3c);
  uVar3 = __adddf3((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),(int)uVar4,
                         (int)((ulonglong)uVar4 >> 0x20));
  uVar4 = __floatsidf(*(byte *)(param_1 + 0xb) - 0x1e);
  uVar3 = __adddf3((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),(int)uVar4,
                         (int)((ulonglong)uVar4 >> 0x20));
  uVar4 = __floatsidf(*(byte *)(param_1 + 0xc) - 3);
  uVar4 = __muldf3((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),0,0x40240000);
  uVar3 = __adddf3((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),(int)uVar4,
                         (int)((ulonglong)uVar4 >> 0x20));
  uVar3 = __adddf3((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),0,0x40390000);
  uVar3 = __divdf3((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),0,0x40320000);
  uVar3 = __adddf3((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),0,0x3ff00000);
  uVar1 = __fixdfsi((int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
  if ((int)uVar1 < 1) {
    uVar2 = 1;
  }
  else {
    uVar2 = 5;
    if ((int)uVar1 < 6) {
      uVar2 = uVar1;
    }
  }
  return uVar2 & 0xff;
}

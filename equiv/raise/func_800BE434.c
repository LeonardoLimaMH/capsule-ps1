#include "common.h"

#include "ghidra.h"
bool func_800BE434(void)

{
    extern void * D_80100D40[];
    extern u16 D_80100D4E[];
  bool bVar1;
  int iVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  bVar1 = (*D_80100D4E) != 0;
  if (bVar1) {
    uVar6 = __floatsidf((0x40 - (uint)(*D_80100D4E)) * 0x10);
    uVar4 = __fixdfsi((int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
    uVar5 = rsin(uVar4);
    uVar6 = __floatsidf(uVar5);
    uVar6 = __muldf3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0,0x40590000);
    uVar6 = __muldf3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0,0x3f300000);
    uVar5 = (undefined4)((ulonglong)uVar6 >> 0x20);
    uVar4 = rcos(uVar4);
    uVar7 = __floatsidf(uVar4);
    uVar7 = __muldf3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),0,0x40590000);
    uVar7 = __muldf3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),0,0x3f300000);
    iVar2 = (*D_80100D40);
    uVar4 = (undefined4)((ulonglong)uVar7 >> 0x20);
    uVar8 = __floatsidf((int)*(short *)((*D_80100D40) + 0x1a));
    uVar8 = __adddf3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),(int)uVar6,uVar5);
    uVar3 = __fixdfsi((int)uVar8,(int)((ulonglong)uVar8 >> 0x20));
    *(undefined2 *)(iVar2 + 10) = uVar3;
    uVar8 = __floatsidf((int)*(short *)(iVar2 + 0x1c));
    uVar8 = __subdf3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),(int)uVar7,uVar4);
    uVar3 = __fixdfsi((int)uVar8,(int)((ulonglong)uVar8 >> 0x20));
    *(undefined2 *)(iVar2 + 0xc) = uVar3;
    uVar8 = __floatsidf((int)*(short *)(iVar2 + 0x22));
    uVar6 = __adddf3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),(int)uVar6,uVar5);
    uVar3 = __fixdfsi((int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
    *(undefined2 *)(iVar2 + 0x12) = uVar3;
    uVar6 = __floatsidf((int)*(short *)(iVar2 + 0x24));
    uVar6 = __subdf3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),(int)uVar7,uVar4);
    uVar3 = __fixdfsi((int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
    *(undefined2 *)(iVar2 + 0x14) = uVar3;
    (*D_80100D4E) = (*D_80100D4E) - 1;
  }
  return !bVar1;
}

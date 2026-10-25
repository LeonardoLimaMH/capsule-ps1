#include "common.h"

#include "ghidra.h"
void func_8009BB98(int param_1)

{
    extern int func_80012578();
    extern int func_8009C3BC();
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar5 = 0;
  iVar7 = 0;
  do {
    iVar4 = 0;
    iVar6 = iVar7;
    do {
      iVar1 = func_800A8B14(param_1,iVar5,iVar4,0);
      if (iVar1 == 0) {
        uVar2 = func_800A8994(param_1,iVar5,iVar4);
        iVar1 = param_1 + iVar6;
        if (*(char *)(iVar1 + 0x5e8) == '\\') {
          uVar3 = func_800A8954(*(undefined1 *)(iVar1 + 0x612));
          func_8001A464(0x174,uVar3);
          *(char *)(param_1 + 0xd77) = (char)iVar5;
          *(char *)(param_1 + 0xd78) = (char)iVar4;
          func_80019F30(0x174,func_8009C3BC);
        }
        uVar3 = func_800A8954(*(undefined1 *)(iVar1 + 0x612));
        func_8001A464(uVar2,uVar3);
        func_80019F30(uVar2,0);
      }
      iVar4 = iVar4 + 1;
      iVar6 = iVar6 + 0x7c;
    } while (iVar4 < 5);
    iVar5 = iVar5 + 1;
    iVar7 = iVar7 + 0x2e8;
  } while (iVar5 < 2);
  func_800190F4(0xff,&func_80012578,0,0);
  return;
}

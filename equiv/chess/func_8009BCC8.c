#include "common.h"

#include "ghidra.h"
void func_8009BCC8(int param_1,undefined4 param_2)

{
    extern int func_8009C3BC();
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar5 = 0x26c;
  do {
    iVar1 = func_800A89C8(param_1,iVar4,5);
    if (iVar1 == 0) {
      if ((iVar4 == 0) || (*(char *)(param_1 + 0xb3c) != *(char *)(param_1 + 0x854))) {
        iVar1 = param_1 + iVar5;
        *(char *)(iVar1 + 0x612) = (char)iVar4 + '\n';
        uVar2 = func_800A8994(param_1,iVar4,5);
        if (*(char *)(iVar1 + 0x5e8) == '\\') {
          uVar3 = func_800A8954(*(undefined1 *)(iVar1 + 0x612));
          func_8001A464(0x174,uVar3);
          *(char *)(param_1 + 0xd77) = (char)iVar4;
          *(undefined1 *)(param_1 + 0xd78) = 5;
          func_80019F30(0x174,func_8009C3BC);
        }
        uVar3 = func_800A8954(*(undefined1 *)(iVar1 + 0x612));
        func_8001A464(uVar2,uVar3);
        func_80019F30(uVar2,0);
      }
      else {
        *(undefined1 *)(param_1 + iVar5 + 0x612) = 10;
      }
    }
    else {
      *(char *)(param_1 + iVar5 + 0x612) = (char)iVar1 + -1;
    }
    iVar4 = iVar4 + 1;
    iVar5 = iVar5 + 0x2e8;
  } while (iVar4 < 2);
  func_800190F4(0xff,param_2,0,0);
  return;
}

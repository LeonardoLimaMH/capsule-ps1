#include "common.h"

#include "ghidra.h"
void func_80097E40(int param_1,undefined4 param_2)

{
    extern M2C_UNK func_800979FC[];
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = 0;
  iVar7 = 0x26c;
L80097E7C:
  iVar5 = 0;
  iVar4 = 5;
  iVar2 = iVar6;
  do {
    if (iVar4 == 0) {
      iVar2 = iVar2 + -1;
      iVar4 = 4;
      goto L80097EB4;
    }
    while( true ) {
      iVar4 = iVar4 + -1;
L80097EB4:
      iVar1 = param_1 + iVar4 * 0x7c + iVar2 * 0x2e8;
      if (*(char *)(param_1 + iVar7 + 0x5e8) == *(char *)(iVar1 + 0x5e8)) {
        iVar5 = *(byte *)(iVar1 + 0x612) + 1;
      }
      if (iVar2 != 0) break;
      if (iVar4 == 0) {
        if (iVar5 == 0) {
          if ((iVar6 == 0) || (*(char *)(param_1 + 0xb3c) != *(char *)(param_1 + 0x854))) {
            iVar2 = param_1 + iVar7;
            *(char *)(iVar2 + 0x612) = (char)iVar6 + '\n';
            iVar4 = *(byte *)(iVar2 + 0x5e8) + 0x10d;
            if (*(byte *)(iVar2 + 0x5e8) == 0x5c) {
              uVar3 = (uint)*(byte *)(iVar2 + 0x612);
              if (uVar3 < 10) {
                iVar2 = uVar3 * 0xe000 + -0x7fec0000;
              }
              else {
                iVar2 = (uVar3 - 10) * 0xe000 + -0x7fedc000;
              }
              func_8001A464(0x174,iVar2);
              *(char *)(param_1 + 0xd77) = (char)iVar6;
              *(undefined1 *)(param_1 + 0xd78) = 5;
              func_80019F30(0x174,(*func_800979FC));
            }
            uVar3 = (uint)*(byte *)(param_1 + iVar7 + 0x612);
            if (uVar3 < 10) {
              iVar2 = uVar3 * 0xe000 + -0x7fec0000;
            }
            else {
              iVar2 = (uVar3 - 10) * 0xe000 + -0x7fedc000;
            }
            func_8001A464(iVar4,iVar2);
            func_80019F30(iVar4,0);
          }
          else {
            *(undefined1 *)(param_1 + iVar7 + 0x612) = 10;
          }
        }
        else {
          *(char *)(param_1 + iVar7 + 0x612) = (char)iVar5 + -1;
        }
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + 0x2e8;
        if (1 < iVar6) {
          func_800190F4(0xff,param_2,0,0);
          return;
        }
        goto L80097E7C;
      }
    }
  } while( true );
}

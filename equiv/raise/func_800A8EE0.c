#include "common.h"

#include "ghidra.h"
void func_800A8EE0(void)

{
    extern u8 D_800900C0[];
    extern u8 D_80091618[];
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 1;
  do {
    uVar1 = func_800B1260(iVar6);
    if (uVar1 != 0xffff) {
      uVar2 = 8;
      if (*(short *)((uint)uVar1 * 0x1a8 + -0x7ff6e9d8) != -1) {
        uVar2 = uVar1;
      }
      if (((uVar2 == 1) || (uVar2 == 5)) || (iVar5 = 2, uVar2 == 3)) {
        iVar5 = 3;
      }
      iVar4 = 0;
      if (iVar5 != 0) {
        do {
          iVar3 = iVar4;
          if (iVar6 != 1) {
            iVar3 = iVar4 + 3;
          }
          *(undefined4 *)(D_800900C0 + iVar3 * 0xbc) = 0;
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar5);
      }
    }
    iVar6 = iVar6 + -1;
  } while (-1 < iVar6);
  return;
}

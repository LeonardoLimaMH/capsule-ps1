#include "common.h"

#include "ghidra.h"
void func_800D8558(void)

{
    extern s32 D_80069EAC[];
    extern s32 D_800900C0[];
    extern M2C_UNK D_80091618[];
    extern M2C_UNK D_800EF524[];
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  
  iVar6 = 1;
  func_800D8774(1,0x400,(*D_80069EAC));
  do {
    uVar1 = func_800B1260(iVar6);
    if ((uVar1 & 0xffff) != 0xffff) {
      iVar4 = 0;
      iVar3 = 0x234;
      puVar5 = (undefined4 *)(*D_800900C0);
      iVar2 = (uint)*(ushort *)((uVar1 & 0xffff) * 0x1a8 + -0x7ff6e9d8) * 0x9c;
      do {
        if (*(int *)((*D_800EF524) + iVar2) != -1) {
          if (iVar6 == 1) {
            *puVar5 = 0;
          }
          else {
            *(undefined4 *)((*D_800900C0) + iVar3) = 0;
          }
        }
        iVar3 = iVar3 + 0xbc;
        puVar5 = puVar5 + 0x2f;
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + 0x34;
      } while (iVar4 < 3);
    }
    iVar6 = iVar6 + -1;
  } while (-1 < iVar6);
  return;
}

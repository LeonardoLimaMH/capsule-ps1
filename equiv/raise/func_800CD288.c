#include "common.h"

#include "ghidra.h"
void func_800CD288(undefined4 param_1,int param_2)

{
    extern M2C_UNK D_80091618[];
    extern M2C_UNK D_800F19C8[];
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ushort uVar7;
  
  uVar1 = func_800B1260();
  uVar7 = 0;
  iVar4 = (uVar1 & 0xffff) * 0xc;
  iVar3 = (uVar1 & 0xffff) * 0x1a8;
  uVar1 = (uint)*(ushort *)(iVar3 + -0x7ff6e9d6);
  do {
    if (param_2 == 0) {
      iVar6 = (uint)uVar7 * 4;
      if (uVar7 < uVar1) {
        func_800CCAA8(*(undefined4 *)((*D_800F19C8) + iVar6 + iVar4));
        func_800B1260(*(undefined4 *)(iVar6 + iVar4 + -0x7ff0e5f0));
      }
      else {
L800CD3A0:
        *(undefined4 *)((*D_800F19C8) + (uint)uVar7 * 4 + iVar4) = 0;
        *(undefined4 *)((uint)uVar7 * 4 + iVar4 + -0x7ff0e5f0) = 0;
      }
    }
    else {
      uVar5 = (uint)uVar7;
      if (param_2 == 1) {
        if (uVar1 <= uVar5) goto L800CD3A0;
        func_800A8E78(param_1,uVar5,*(undefined2 *)(uVar5 * 2 + iVar3 + -0x7ff6e9d4));
        uVar2 = func_800A8E78(param_1);
        *(uint *)(*(int *)((*D_800F19C8) + uVar5 * 4 + (uVar2 & 0xffff) * 0xc) + 0x38) =
             *(uint *)(*(int *)((*D_800F19C8) + uVar5 * 4 + (uVar2 & 0xffff) * 0xc) + 0x38) &
             0xffffffbf;
      }
    }
    uVar7 = uVar7 + 1;
    if (2 < uVar7) {
      return;
    }
  } while( true );
}

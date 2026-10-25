#include "common.h"

#include "ghidra.h"
undefined4 func_800293E8(void)

{
    extern u8 D_80069AB4[];
    extern u8 D_80091618[];
  ushort uVar1;
  uint uVar2;
  int iVar3;
  ushort uVar4;
  
  uVar2 = func_800B1260();
  if ((uVar2 & 0xffff) != 0xffff) {
    iVar3 = (uVar2 & 0xffff) * 0x1a8;
    uVar1 = *(ushort *)(iVar3 + -0x7ff6e9d6);
    uVar4 = 0;
    if (uVar1 != 0) {
      uVar2 = 0;
      do {
        uVar4 = uVar4 + 1;
        if (1 < *(short *)((*D_80069AB4) + (uint)*(ushort *)(uVar2 * 2 + iVar3 + -0x7ff6e9d4) * 2)) {
          return 1;
        }
        uVar2 = (uint)uVar4;
      } while (uVar4 < uVar1);
    }
  }
  return 0;
}

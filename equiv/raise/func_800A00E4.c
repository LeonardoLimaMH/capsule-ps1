#include "common.h"

#include "ghidra.h"
undefined4 func_800A00E4(void)

{
    extern u16 D_8006AF80[];
    extern s16 D_80078C22[];
    extern M2C_UNK D_80091618[];
    extern M2C_UNK D_800EF364[];
    extern M2C_UNK D_80100F38[];
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = func_800A9658((int)(*D_80078C22));
  iVar4 = 0;
  if (0 < iVar1 << 0x10) {
    iVar3 = 0;
    do {
      iVar2 = (uint)(*D_8006AF80) * 0x79c;
      iVar4 = iVar4 + 1;
      if (D_800EF364
          [((int)*(short *)(iVar2 + -0x7fefed90) -
           ((short)((iVar3 >> 0x10) % ((*D_80078C22) + 1)) + 1)) +
           ((int)*(short *)(iVar2 + -0x7fefed92) -
           ((short)((iVar3 >> 0x10) / ((*D_80078C22) + 1)) + 1)) * 8 +
           (uint)*(ushort *)((uint)(*D_8006AF80) * 0x1a8 + -0x7ff6e9d8) * 0x40] == -1) {
        return 0;
      }
      iVar3 = iVar4 * 0x10000;
    } while (iVar4 * 0x10000 < iVar1 << 0x10);
  }
  return 1;
}

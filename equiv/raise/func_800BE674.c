#include "common.h"

#include "ghidra.h"
undefined4 func_800BE674(void)

{
    extern void * D_800EF300[];
    extern M2C_UNK D_800F060A[];
    extern M2C_UNK D_800F0614[];
    extern u16 D_80100D44[];
    extern u16 D_80100D46[];
    extern u16 D_80100D4C[];
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if ((*D_80100D46) == 0) {
    uVar2 = 1;
    if ((*D_80100D4C) == 1) {
      func_800BE7B4();
      uVar2 = 0;
    }
  }
  else if ((*D_80100D44) == 0) {
    (*D_80100D44) =
         *(short *)((*D_800F060A) + (uint)(*D_80100D46) * 2);
    uVar3 = (*D_80100D46) - 1;
    (*D_80100D46) = (ushort)uVar3;
    if ((uVar3 & 0xffff) == 0) {
      func_800BE7B4(0x7f);
    }
    uVar2 = 0;
  }
  else {
    (*D_80100D44) = (*D_80100D44) + -1;
    bVar1 = (*D_80100D4C) == 1;
    *(short *)((*D_800EF300) + 0x4a) =
         *(short *)((*D_800EF300) + 0x4a) +
         *(short *)((int)(*D_800F0614) + (uint)(*D_80100D46) * 2);
    if (bVar1) {
      func_800BE7A0();
    }
    uVar2 = 0;
    if (((*D_80100D46) == 2) && (uVar2 = 0, (*D_80100D44) == 0x18)) {
      (*D_80100D4C) = 1;
      func_80034AB0();
      uVar2 = 0;
    }
  }
  return uVar2;
}

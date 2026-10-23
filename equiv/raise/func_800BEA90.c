#include "common.h"

#include "ghidra.h"
undefined4 func_800BEA90(void)

{
    extern void * D_800EF300[];
    extern M2C_UNK D_800F061A[];
    extern M2C_UNK D_800F0624[];
    extern u16 D_80100D44[];
    extern u16 D_80100D46[];
  undefined4 uVar1;
  uint uVar2;
  
  if ((*D_80100D46) == 0) {
    uVar1 = 1;
  }
  else {
    if ((*D_80100D44) == 0) {
      (*D_80100D44) = *(short *)((int)(*D_800F061A) + (uint)(*D_80100D46) * 2);
      uVar2 = (*D_80100D46) - 1;
      (*D_80100D46) = (ushort)uVar2;
      if ((uVar2 & 0xffff) == 0) {
        func_80034AB0(0x7f);
      }
    }
    else {
      (*D_80100D44) = (*D_80100D44) + -1;
      *(short *)((*D_800EF300) + 0x4a) =
           *(short *)((*D_800EF300) + 0x4a) +
           *(short *)((*D_800F0624) + (uint)(*D_80100D46) * 2);
    }
    uVar1 = 0;
  }
  return uVar1;
}

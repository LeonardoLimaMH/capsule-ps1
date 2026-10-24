#include "common.h"

#include "ghidra.h"
void func_800A8CAC(void)

{
    extern u16 D_8008EE44[];
    extern M2C_UNK D_800B399C[];
    extern s16 D_800B3D0C[];
  int iVar1;
  
  if ((((3 < (*D_8008EE44)) && ((*D_8008EE44) != 8)) && (iVar1 = func_800202A4(0x20), iVar1 == 0)) &&
     ((*D_800B3D0C) < 3)) {
    (*D_800B3D0C) = (*D_800B3D0C) + 1;
    func_800A9EC8();
  }
  (**(code **)(D_800B399C + (uint)(*D_8008EE44) * 4))();
  return;
}

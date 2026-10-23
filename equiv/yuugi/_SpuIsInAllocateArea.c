#include "common.h"

#include "ghidra.h"
undefined4 _SpuIsInAllocateArea(uint param_1)

{
    extern void * D_80071600[];
  uint uVar1;
  uint *puVar2;
  
  puVar2 = (*D_80071600);
  if ((*D_80071600) == (uint *)0x0) {
    return 0;
  }
  do {
    uVar1 = *puVar2;
    if ((uVar1 & 0x80000000) == 0) {
      if ((uVar1 & 0x40000000) != 0) {
        return 0;
      }
      if (param_1 <= (uVar1 & 0xfffffff)) {
        return 1;
      }
      if (param_1 < (uVar1 & 0xfffffff) + puVar2[1]) {
        return 1;
      }
    }
    puVar2 = puVar2 + 2;
  } while( true );
}

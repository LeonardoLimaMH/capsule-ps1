#include "common.h"

#include "ghidra.h"
char func_800FF96C(void)

{
    extern M2C_UNK D_80118C18[];
    extern s32 D_80119600[];
  uint uVar1;
  uint uVar2;
  char cVar3;
  
  cVar3 = '\0';
  uVar2 = 0;
  uVar1 = 0;
  do {
    if (D_80119600[((int)((D_80119600[1] - uVar1) + 10) % 10 & 0xffU) * 4 + 3] != '\0') {
      if (D_80119600[((int)((D_80119600[1] - uVar1) + 10) % 10 & 0xffU) * 4 + 3] != '\x01') {
        return cVar3;
      }
      cVar3 = cVar3 + '\x01';
    }
    uVar2 = uVar2 + 2;
    uVar1 = uVar2 & 0xff;
  } while ((uVar2 & 0xff) < 10);
  return cVar3;
}

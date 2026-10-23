#include "common.h"

#include "ghidra.h"
char func_800D8EB4(uint param_1,uint param_2)

{
    extern M2C_UNK D_80085428[];
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  
  iVar4 = ((param_2 & 0x7f) - 1) * 0x7c + ((param_2 & 0xff) >> 7) * 0x2e8;
  iVar3 = ((param_1 & 0x7f) - 1) * 0x7c + ((param_1 & 0xff) >> 7) * 0x2e8;
  bVar2 = *(char *)(iVar4 + -0x7ff7a5db) * '\x02' - *(char *)(iVar3 + -0x7ff7a5db);
  bVar5 = *(char *)(iVar4 + -0x7ff7a5da) * '\x02' - *(char *)(iVar3 + -0x7ff7a5da);
  if (bVar2 < 0xd) {
    if (0xc < bVar5) {
      return -1;
    }
    cVar1 = func_800D0B4C(bVar2);
    if (cVar1 == '\0') {
      return bVar5 + bVar2 * '\r';
    }
  }
  return -1;
}

#include "common.h"

#include "ghidra.h"
void func_800DDD70(void)

{
    extern u8 D_80100F38[];
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = func_800B1260();
  iVar6 = 0;
  iVar4 = (uVar1 & 0xffff) * 0x79c;
  *(undefined2 *)(iVar4 + -0x7fefeb18) = 0;
  *(undefined2 *)(iVar4 + -0x7fefeb16) = 0;
  *(undefined2 *)(iVar4 + -0x7fefeb14) = 0;
  *(undefined2 *)(iVar4 + -0x7fefe992) = 2;
  *(undefined4 *)(iVar4 + -0x7fefe990) = 0;
  do {
    iVar2 = iVar6 << 0x10;
    iVar6 = iVar6 + 1;
    iVar2 = (iVar2 >> 0xe) + iVar4;
    *(undefined2 *)(D_80100F38 + iVar2 + 0x5b6) = 0xffff;
    *(undefined2 *)(D_80100F38 + iVar2 + 0x5b8) = 0xffff;
    *(undefined2 *)(D_80100F38 + iVar2 + 0x636) = 0;
    *(undefined2 *)(D_80100F38 + iVar2 + 0x638) = 0;
    *(undefined2 *)(D_80100F38 + iVar2 + 0x6b6) = 0;
    *(undefined2 *)(D_80100F38 + iVar2 + 0x6b8) = 0;
  } while (iVar6 * 0x10000 >> 0x10 < 0x20);
  iVar6 = 2;
  iVar2 = 0x20000;
  do {
    *(undefined2 *)(D_80100F38 + (iVar2 >> 0x10) * 2 + iVar4 + 0x73c) = 0;
    iVar5 = 0;
    iVar3 = 0;
    do {
      *(undefined2 *)
       (D_80100F38 + (iVar3 >> 0xf) + (iVar2 >> 0x10) * 0x10 + iVar4 + 0x746) = 0;
      iVar5 = iVar5 + 1;
      iVar3 = iVar5 * 0x10000;
    } while (iVar5 * 0x10000 >> 0x10 < 7);
    iVar6 = iVar6 + 1;
    iVar2 = iVar6 * 0x10000;
  } while (iVar6 * 0x10000 >> 0x10 < 4);
  return;
}

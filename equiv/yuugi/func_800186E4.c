#include "common.h"

#include "ghidra.h"
void func_800186E4(undefined2 *param_1,int param_2)

{
    extern M2C_UNK D_8008A7BC;
    extern void * D_8008ED68;
  uint *puVar1;
  uint *puVar2;
  undefined2 uStack_18;
  short sStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  
  uStack_18 = *param_1;
  sStack_16 = param_1[1];
  if (D_8008ED68 == D_8008A7BC) {
    sStack_16 = sStack_16 + 0xf0;
  }
  uStack_14 = param_1[2];
  uStack_12 = param_1[3];
  puVar2 = *(uint **)(D_8008ED68 + 0x1090);
  puVar1 = (uint *)0x0;
  if ((puVar2 != (uint *)0x0) && (puVar2 + 3 <= D_8008ED68 + 0x4594)) {
    puVar1 = puVar2 + 3;
  }
  *(uint **)(D_8008ED68 + 0x1090) = puVar1;
  SetDrawArea(puVar2,&uStack_18);
  param_2 = param_2 * 4;
  *puVar2 = *puVar2 & 0xff000000 | *(uint *)(D_8008ED68 + param_2 + 0x70) & 0xffffff;
  *(uint *)(D_8008ED68 + param_2 + 0x70) =
       *(uint *)(D_8008ED68 + param_2 + 0x70) & 0xff000000 | (uint)puVar2 & 0xffffff;
  return;
}

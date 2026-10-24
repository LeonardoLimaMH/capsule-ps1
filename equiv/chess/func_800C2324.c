#include "common.h"

#include "ghidra.h"
undefined4 func_800C2324(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  switch(*(undefined1 *)(param_2 + 0x16)) {
  case 7:
    uVar1 = 0x100;
    break;
  case 8:
    uVar1 = 0x200;
    break;
  case 9:
    uVar1 = 0x400;
    break;
  case 10:
    uVar1 = 0x800;
    break;
  case 0xb:
    uVar1 = 0x1000;
    break;
  case 0xc:
    uVar1 = 0x2000;
    break;
  case 0xd:
    uVar1 = 0x4000;
    break;
  case 0xe:
    uVar1 = 0x8000;
    break;
  case 0x13:
    uVar1 = 0x40000;
  }
  return uVar1;
}

#include "common.h"

#include "ghidra.h"
undefined4 func_800DBB3C(short param_1)

{
    extern u8 D_80091618[];
  undefined4 uVar1;
  
  switch(*(undefined2 *)(D_80091618 + param_1 * 0x1a8)) {
  case 0:
  case 0xd:
  case 0x1a:
  case 0x25:
  case 0x56:
    uVar1 = 5;
    break;
  case 1:
  case 2:
  case 6:
  case 7:
  case 0x14:
  case 0x15:
  case 0x1b:
  case 0x1c:
  case 0x24:
  case 0x28:
  case 0x2b:
  case 0x2d:
  case 0x2e:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x38:
  case 0x3a:
  case 0x3b:
  case 0x3d:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x52:
  case 0x5d:
  case 0x61:
  case 0x62:
    uVar1 = 1;
    break;
  case 3:
  case 5:
  case 0x33:
  case 0x36:
  case 0x3f:
  case 0x57:
  case 0x5b:
  case 0x5e:
    uVar1 = 2;
    break;
  case 4:
    uVar1 = 10;
    break;
  default:
    uVar1 = 0;
    break;
  case 9:
    uVar1 = 0x16;
    break;
  case 10:
    uVar1 = 0x18;
    break;
  case 0xb:
    uVar1 = 0x10;
    break;
  case 0xc:
    uVar1 = 0x13;
    break;
  case 0xe:
    uVar1 = 0x1c;
    break;
  case 0xf:
  case 0x11:
    uVar1 = 0xe;
    break;
  case 0x13:
  case 0x51:
  case 0x53:
    uVar1 = 9;
    break;
  case 0x17:
  case 0x59:
    uVar1 = 0x1d;
    break;
  case 0x19:
    uVar1 = 6;
    break;
  case 0x1d:
  case 0x5c:
    uVar1 = 3;
    break;
  case 0x21:
    uVar1 = 0xb;
    break;
  case 0x22:
    uVar1 = 0x11;
    break;
  case 0x23:
  case 0x35:
  case 0x42:
  case 0x5f:
    uVar1 = 0x19;
    break;
  case 0x26:
    uVar1 = 0x14;
    break;
  case 0x2a:
  case 0x2f:
    uVar1 = 7;
    break;
  case 0x37:
    uVar1 = 0xc;
    break;
  case 0x39:
    uVar1 = 0x12;
    break;
  case 0x40:
  case 0x65:
    uVar1 = 4;
    break;
  case 0x44:
  case 0x45:
  case 0x5a:
    uVar1 = 8;
    break;
  case 0x4c:
  case 0x4d:
    uVar1 = 0xd;
    break;
  case 0x4e:
    uVar1 = 0x1e;
    break;
  case 0x50:
    uVar1 = 0x1b;
    break;
  case 0x55:
    uVar1 = 0x1a;
    break;
  case 0x58:
    uVar1 = 0x15;
    break;
  case 0x60:
    uVar1 = 0x17;
    break;
  case 100:
    uVar1 = 0xf;
  }
  return uVar1;
}

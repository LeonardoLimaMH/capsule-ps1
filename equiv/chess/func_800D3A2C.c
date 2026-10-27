#include "common.h"

#include "ghidra.h"
#define DAT_80063948 (*(s32 *)0x80063948)
#define DAT_80085a10 (*(u8 *)0x80085A10)
undefined4 func_800D3A2C(uint param_1,byte param_2,byte *param_3,byte *param_4)

{
  byte bVar1;
  undefined4 uVar2;

  switch(*(uint *)(((u8 *)0x80063948) +
                  (uint)(byte)(&DAT_80085a10)
                              [((param_1 & 0x7f) - 1) * 0x7c + ((param_1 & 0xff) >> 7) * 0x2e8] *
                  0x3c) >> 8 & 0xf) {
  case 0:
  case 7:
  case 8:
  case 9:
    if (param_2 != 1) {
      if (1 < param_2) {
        if (param_2 == 2) goto switchD_800d3bbc_caseD_4;
        if (param_2 != 3) {
          return 1;
        }
        goto switchD_800d3bbc_caseD_6;
      }
      if (param_2 != 0) {
        return 1;
      }
switchD_800d3bbc_caseD_0:
      *param_3 = *param_3 - 1;
      goto switchD_800d3ac0_default;
    }
    goto switchD_800d3bbc_caseD_2;
  case 1:
  case 2:
  case 3:
    if (param_2 == 1) {
switchD_800d3bbc_caseD_3:
      *param_3 = *param_3 + 1;
    }
    else {
      if (1 < param_2) {
        if (param_2 == 2) goto switchD_800d3bbc_caseD_5;
        if (param_2 != 3) {
          return 1;
        }
        goto switchD_800d3bbc_caseD_7;
      }
      if (param_2 != 0) {
        return 1;
      }
switchD_800d3bbc_caseD_1:
      *param_3 = *param_3 - 1;
    }
    goto switchD_800d3bbc_caseD_2;
  case 4:
  case 6:
    switch(param_2) {
    case 0:
      goto switchD_800d3bbc_caseD_0;
    case 1:
      goto switchD_800d3bbc_caseD_1;
    case 2:
      goto switchD_800d3bbc_caseD_2;
    case 3:
      goto switchD_800d3bbc_caseD_3;
    case 4:
switchD_800d3bbc_caseD_4:
      *param_3 = *param_3 + 1;
      goto switchD_800d3ac0_default;
    case 5:
switchD_800d3bbc_caseD_5:
      *param_3 = *param_3 + 1;
      break;
    case 6:
      break;
    case 7:
switchD_800d3bbc_caseD_7:
      *param_3 = *param_3 - 1;
      break;
    default:
LAB_800d3d24:
      return 1;
    }
    goto switchD_800d3bbc_caseD_6;
  case 5:
    break;
  default:
    goto switchD_800d3ac0_default;
  }
  switch(param_2) {
  case 0:
    *param_3 = *param_3 - 2;
    break;
  case 1:
    *param_3 = *param_3 - 2;
  case 10:
  case 0xb:
switchD_800d3bbc_caseD_2:
    *param_4 = *param_4 + 1;
    goto switchD_800d3ac0_default;
  case 2:
    bVar1 = *param_3 - 1;
    goto LAB_800d3c30;
  case 3:
    bVar1 = *param_3 + 1;
LAB_800d3c30:
    *param_3 = bVar1;
    *param_4 = *param_4 + 2;
    goto switchD_800d3ac0_default;
  case 4:
    *param_3 = *param_3 + 2;
    goto switchD_800d3bbc_caseD_2;
  case 5:
    *param_3 = *param_3 + 2;
    break;
  case 6:
    bVar1 = *param_3 + 1;
    goto LAB_800d3c88;
  case 7:
    bVar1 = *param_3 - 1;
LAB_800d3c88:
    *param_3 = bVar1;
    *param_4 = *param_4 - 2;
    goto switchD_800d3ac0_default;
  case 8:
  case 9:
    goto switchD_800d3bbc_caseD_0;
  case 0xc:
  case 0xd:
    goto switchD_800d3bbc_caseD_4;
  case 0xe:
  case 0xf:
    break;
  default:
    goto LAB_800d3d24;
  }
switchD_800d3bbc_caseD_6:
  *param_4 = *param_4 - 1;
switchD_800d3ac0_default:
  uVar2 = 3;
  if ((*param_3 < 0xd) && (uVar2 = 0, 0xc < *param_4)) {
    uVar2 = 3;
  }
  return uVar2;
}

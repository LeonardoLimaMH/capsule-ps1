#include "common.h"

#include "ghidra.h"
#define _D_8008EE4C (*(u16 *)0x8008EE4C)
extern s32 func_800125D8();
extern s32 func_800B48F0();
extern s32 func_800B5020();
extern s32 func_800B5184();
extern s32 func_800B5438();
extern s32 func_800B5780();
extern s32 func_800BA684();
extern s32 func_800BE408();
extern s32 func_800BE46C();
extern s32 func_800BE8F4();
extern s32 func_800BEC20();
extern s32 func_800BEE98();
extern s32 func_800BF0D0();
extern s32 func_800BF39C();
extern s32 func_800BF6A0();
extern s32 func_800BF86C();
extern s32 func_800BF9B0();
extern s32 func_800BFA84();
extern s32 func_800BFC70();
extern s32 func_800BFD34();
extern s32 func_800BFE18();
extern s32 func_800BFFAC();
extern s32 func_800C01F4();
extern s32 func_800C0440();
extern s32 func_800C0658();
extern s32 func_800C087C();
extern s32 func_800C08AC();
extern s32 func_800C0A94();
extern s32 func_800C0BEC();
extern s32 func_800C0E6C();
extern s32 func_800C11F8();
extern s32 func_800C13F0();
extern s32 func_800C1528();
extern s32 func_800C1658();
extern s32 func_800C1890();
extern s32 func_800C1A50();
extern s32 func_800C1A78();
extern s32 func_800C23A8();
void func_800BDBC0(int param_1)

{
  undefined4 uVar1;

  switch(*(undefined1 *)(param_1 + 0xbee)) {
  case 0:
    switch(_D_8008EE4C) {
    case 0:
L800BE174:
      func_800BE408(param_1);
      break;
    case 1:
L800BE184:
      func_800BE46C(param_1,0);
      break;
    case 2:
L800BE198:
      func_800BF0D0(param_1,0);
      break;
    case 3:
L800BE1AC:
      func_800BF86C(param_1,0);
      break;
    case 4:
L800BE1C0:
      func_800BFA84(param_1,0);
      break;
    case 5:
L800BE1D4:
      func_800BFC70(param_1);
      break;
    case 6:
L800BE1E4:
      func_800BFE18(param_1,1);
      break;
    case 7:
L800BDE04:
      func_800C0A94(param_1);
      break;
    case 8:
      func_800C0BEC(param_1);
      break;
    case 9:
      func_800C1528(param_1);
      break;
    case 10:
      uVar1 = 0;
L800BDDB0:
      func_800C1890(param_1,uVar1,1);
      break;
    case 0xb:
L800BE208:
      func_800C1658(param_1);
      break;
    case 0xc:
L800BE218:
      func_800BA684(param_1);
      break;
    case 0xd:
L800BE228:
      func_800C1A50(param_1);
    }
    break;
  case 1:
    switch(_D_8008EE4C) {
    case 0:
      goto L800BE174;
    case 1:
L800BE0C0:
      func_800BE46C(param_1,2);
      break;
    case 2:
L800BE0D4:
      func_800BF6A0(param_1);
      break;
    case 3:
L800BE040:
      func_800BF86C(param_1,1);
      break;
    case 4:
L800BDE58:
      func_800BFA84(param_1,2);
      break;
    case 5:
L800BE0F8:
      func_800BFE18(param_1,0);
      break;
    case 6:
L800BDE6C:
      func_800BFFAC(param_1,2);
      break;
    case 7:
      func_800C01F4(param_1);
      break;
    case 8:
L800BDE80:
      func_800C0440(param_1);
      break;
    case 9:
L800BDD98:
      func_800C0E6C(param_1);
      break;
    case 10:
L800BDDA8:
      uVar1 = 1;
      goto L800BDDB0;
    case 0xb:
      goto L800BE218;
    case 0xc:
      goto L800BE228;
    }
    break;
  case 2:
    switch(_D_8008EE4C) {
    case 0:
      goto L800BE174;
    case 1:
      func_800BE46C(param_1,1);
      return;
    case 2:
      func_800BF0D0(param_1,2);
      return;
    case 3:
      goto L800BE040;
    case 4:
      func_800BFA84(param_1,1);
      return;
    case 5:
      goto L800BE0F8;
    case 6:
      func_800BFFAC(param_1,1);
      return;
    case 7:
      func_800C0658(param_1,0);
      return;
    case 8:
      goto L800BDD98;
    case 9:
      goto L800BDDA8;
    case 10:
      goto L800BE218;
    case 0xb:
      goto L800BE228;
    default:
      return;
    }
  case 3:
    switch(_D_8008EE4C) {
    case 0:
      goto L800BE174;
    case 1:
      goto L800BE184;
    case 2:
      goto L800BE198;
    case 3:
      goto L800BE040;
    case 4:
      goto L800BE1C0;
    case 5:
      goto L800BE1E4;
    case 6:
      func_800BFFAC(param_1,4);
      return;
    case 7:
      func_800C0658(param_1,1);
      return;
    case 8:
      goto L800BDD98;
    case 9:
      goto L800BDDA8;
    case 10:
      goto L800BE218;
    case 0xb:
      goto L800BE228;
    default:
      return;
    }
  case 4:
    switch(_D_8008EE4C) {
    case 0:
      goto L800BE174;
    case 1:
      goto L800BE184;
    case 2:
      goto L800BE198;
    case 3:
      goto L800BE040;
    case 4:
      goto L800BE1C0;
    case 5:
      func_800BFD34(param_1);
      return;
    case 6:
      goto L800BE1E4;
    case 7:
      goto L800BDE04;
    case 8:
      func_800C13F0(param_1);
      return;
    case 9:
      goto L800BE208;
    case 10:
L800BE1F8:
      func_800125D8();
      return;
    case 0xb:
      goto L800BE218;
    case 0xc:
      goto L800BE228;
    default:
      return;
    }
  case 5:
    switch(_D_8008EE4C) {
    case 0:
      goto L800BE174;
    case 1:
      goto L800BE0C0;
    case 2:
      goto L800BE0D4;
    case 3:
      goto L800BE040;
    case 4:
      goto L800BDE58;
    case 5:
      goto L800BE0F8;
    case 6:
      goto L800BDE6C;
    case 7:
      goto L800BDE80;
    case 8:
      func_800C11F8(param_1);
      return;
    case 9:
      goto L800BE1F8;
    case 10:
      goto L800BE218;
    case 0xb:
      goto L800BE228;
    default:
      return;
    }
  case 6:
    switch(_D_8008EE4C) {
    case 0:
      goto L800BE174;
    case 1:
      goto L800BE184;
    case 2:
      func_800BEE98(param_1);
      return;
    case 3:
      goto L800BE198;
    case 4:
      goto L800BE040;
    case 5:
L800BE054:
      func_800BFA84(param_1,4);
      return;
    case 6:
      goto L800BE0F8;
    case 7:
L800BE068:
      func_800BFFAC(param_1,0);
      return;
    case 8:
L800BE07C:
      func_800C087C(param_1);
      return;
    case 9:
      goto L800BE1F8;
    case 10:
      goto L800BE228;
    default:
      return;
    }
  case 7:
    switch(_D_8008EE4C) {
    case 0:
      goto L800BE174;
    case 1:
      func_800BE8F4(param_1);
      break;
    case 2:
      func_800B48F0(param_1);
      break;
    case 3:
      func_800B5020(param_1);
      break;
    case 4:
      func_800B5184(param_1);
    case 5:
      func_800C08AC(param_1);
      break;
    case 6:
      goto L800BE0F8;
    case 7:
      func_800B5438(param_1);
      break;
    case 8:
      func_800B5780(param_1);
    }
    break;
  case 8:
    switch(_D_8008EE4C) {
    case 0:
      goto L800BE174;
    case 1:
      goto L800BE0C0;
    case 2:
      goto L800BE0D4;
    case 3:
      goto L800BE040;
    case 4:
L800BE0E4:
      func_800BFA84(param_1,3);
      return;
    case 5:
      func_800BFE18(param_1,2);
      return;
    case 6:
L800BE10C:
      func_800BFFAC(param_1,3);
      return;
    case 7:
      goto L800BE1F8;
    case 8:
      func_800C1A78(param_1);
      return;
    default:
      return;
    }
  case 9:
    switch(_D_8008EE4C) {
    case 0:
      goto L800BE174;
    case 1:
      goto L800BE184;
    case 2:
      func_800BF0D0(param_1,1);
      return;
    case 3:
      func_800BEC20(param_1);
      return;
    case 4:
      func_800BF39C(param_1);
      return;
    case 5:
      goto L800BE040;
    case 6:
      goto L800BE054;
    case 7:
      goto L800BE1E4;
    case 8:
      goto L800BE068;
    case 9:
      goto L800BE07C;
    case 10:
      goto L800BE1F8;
    case 0xb:
      goto L800BE228;
    default:
      return;
    }
  case 10:
    switch(_D_8008EE4C) {
    case 0:
      goto L800BE174;
    case 1:
      goto L800BE0C0;
    case 2:
      goto L800BE0D4;
    case 3:
      goto L800BE1AC;
    case 4:
      goto L800BE0E4;
    case 5:
      goto L800BE0F8;
    case 6:
      goto L800BE10C;
    case 7:
      func_800C23A8(param_1);
      return;
    case 8:
      func_800BF9B0(param_1);
      return;
    case 9:
      goto L800BE228;
    default:
      return;
    }
  case 0xb:
    switch(_D_8008EE4C) {
    case 0:
      goto L800BE174;
    case 1:
      goto L800BE184;
    case 2:
      goto L800BE198;
    case 3:
      goto L800BE1AC;
    case 4:
      goto L800BE1C0;
    case 5:
      goto L800BE1D4;
    case 6:
      goto L800BE1E4;
    case 7:
      goto L800BE1F8;
    case 8:
      goto L800BE208;
    case 9:
      goto L800BE218;
    case 10:
      goto L800BE228;
    default:
      break;
    }
  default:
    break;
  }
  return;
}

#include "common.h"

#include "ghidra.h"
int func_800FFE6C(short param_1,short param_2)

{
  switch(param_1) {
  case 0:
    if (param_2 == 0x52) {
L800FFFB0:
      param_1 = 8;
      goto L80100004;
    }
    break;
  default:
    break;
  case 3:
    if (param_2 == 0x2a) {
L800FFF2C:
      param_1 = 0x2c;
      goto L80100004;
    }
    break;
  case 0xc:
    if (param_2 == 0x37) {
L800FFF50:
      param_1 = 0x3c;
      goto L80100004;
    }
    break;
  case 0x1a:
    if (param_2 == 0x5f) {
L800FFFD4:
      param_1 = 0x20;
      goto L80100004;
    }
    break;
  case 0x2a:
    if (param_2 == 3) goto L800FFF2C;
    break;
  case 0x37:
    if (param_2 == 0xc) goto L800FFF50;
    break;
  case 0x44:
    if (param_2 == 0x48) {
L800FFF90:
      param_1 = 0x4a;
      goto L80100004;
    }
    break;
  case 0x48:
    if (param_2 == 0x44) goto L800FFF90;
    break;
  case 0x52:
    if (param_2 == 0) goto L800FFFB0;
    break;
  case 0x5f:
    if (param_2 == 0x1a) goto L800FFFD4;
    break;
  case 100:
  case 0x65:
  case 0x66:
    goto L80100004;
  }
  param_1 = func_80100018((int)param_1,(int)param_2);
L80100004:
  return (int)param_1;
}

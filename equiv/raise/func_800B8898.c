#include "common.h"

#include "ghidra.h"
int func_800B8898(undefined2 param_1,undefined2 param_2,int param_3)

{
    extern u16 D_8006AF80[];
    extern s16 D_80078C20[];
    extern M2C_UNK D_80091618[];
    extern s16 D_800EFA50[];
    extern s32 D_800EFF50[];
  switch((*D_800EFA50)) {
  case 0:
    if (param_3 != 1) goto L800B89E0;
    *(undefined2 *)((uint)(*D_8006AF80) * 0x1a8 + -0x7ff6e95e) = param_1;
    goto L800B894C;
  case 1:
    (*D_800EFF50) = func_800B84FC(param_1,param_2,1 - (*D_80078C20));
L800B894C:
    (*D_800EFA50) = (*D_800EFA50) + 1;
    goto L800B89E0;
  case 2:
    if (param_3 != 0) goto L800B89E0;
    break;
  case 3:
    *(undefined2 *)((uint)(*D_8006AF80) * 0x1a8 + -0x7ff6e95e) = 0xffff;
    if ((*D_800EFF50) != 0) {
      func_80013928();
      goto L800B89BC;
    }
    break;
  case 4:
  case 5:
L800B89BC:
    break;
  case 6:
    (*D_800EFA50) = 0;
  default:
    goto L800B89E0;
  }
  (*D_800EFA50) = (*D_800EFA50) + 1;
L800B89E0:
  return (int)(*D_800EFA50);
}

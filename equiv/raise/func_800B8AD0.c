#include "common.h"

#include "ghidra.h"
void func_800B8AD0(short param_1)

{
    extern u16 D_8006AF80[];
    extern M2C_UNK D_80091618[];
    extern u16 D_800EFA4A[];
    extern s16 D_800EFA4C[];
  if (param_1 == -1) {
    (*D_800EFA4C) = (*D_800EFA4A) + -1;
    if ((*D_800EFA4C) < 0) {
      (*D_800EFA4C) = 0;
      goto L800B8B64;
    }
  }
  else {
    if (param_1 != 1) goto L800B8B64;
    (*D_800EFA4C) = (*D_800EFA4A) + 1;
    if ((*D_800EFA4C) < 0) {
      (*D_800EFA4C) = 0;
      goto L800B8B64;
    }
  }
  if (2 < (*D_800EFA4C)) {
    (*D_800EFA4C) = 2;
  }
L800B8B64:
  if ((*D_800EFA4C) != (*D_800EFA4A)) {
    func_80024990(*(undefined4 *)((uint)(*D_8006AF80) * 0x1a8 + -0x7ff6e85c),1,0x32,0);
  }
  return;
}

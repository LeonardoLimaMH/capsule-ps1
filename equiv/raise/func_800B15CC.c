#include "common.h"

#include "ghidra.h"
undefined4 func_800B15CC(void)

{
    extern u16 D_8006AF80[];
    extern M2C_UNK D_80091618[];
    extern s16 D_800EFA4A[];
    extern s16 D_800EFA4C[];
    extern s16 D_80103D38[];
  if ((*D_80103D38) == 1) {
    (*D_800EFA4C) = 2;
  }
  else {
    (*D_800EFA4C) = 0;
  }
  if ((*D_800EFA4C) != (*D_800EFA4A)) {
    func_80024990(*(undefined4 *)((uint)(*D_8006AF80) * 0x1a8 + -0x7ff6e85c),1,0x32,0);
  }
  return 1;
}

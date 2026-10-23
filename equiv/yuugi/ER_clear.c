#include "common.h"

#include "ghidra.h"
void ER_clear(void)

{
    extern M2C_UNK D_800733EC;
    extern s32 D_800733E0;
    extern s32 D_800733E4;
  if (D_800733EC == 1) {
    DsReadyCallback(D_800733E0);
    DsStartCallback(D_800733E4);
  }
  D_800733EC = 0;
  return;
}

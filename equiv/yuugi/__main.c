#include "common.h"

#include "ghidra.h"
void __main(void)

{
    extern s32 D_80071CE8[];
  if ((*D_80071CE8) == 0) {
    (*D_80071CE8) = 1;
  }
  return;
}

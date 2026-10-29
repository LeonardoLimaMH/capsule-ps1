#include "common.h"
#include "yuugi.h"

void func_8002E708(void) {
    extern s16 D_8008EE58[];
    (*D_8008EE58) = 0;
}

#include "common.h"

#include "ghidra.h"
undefined4 func_8002E714(void)

{
    extern M2C_UNK D_8006DB10[];
    extern u16 D_8008EE58[];
    extern s32 D_800922D8[];
  (*(code *)(D_8006DB10)[(*D_8008EE58)])();
  return (*D_800922D8);
}

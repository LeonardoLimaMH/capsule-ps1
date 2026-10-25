#include "common.h"

#include "ghidra.h"
bool func_8001BAD8(char *param_1,int param_2,char *param_3)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = '\a';
  uVar2 = 0;
  if (param_2 != 4) {
    do {
      uVar2 = uVar2 + 1;
      cVar1 = cVar1 + *param_1;
      param_1 = param_1 + 1;
    } while (uVar2 < param_2 - 4U);
  }
  *param_3 = cVar1;
  return *param_1 == cVar1;
}

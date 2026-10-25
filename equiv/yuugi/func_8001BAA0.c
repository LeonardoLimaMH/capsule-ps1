#include "common.h"

#include "ghidra.h"
char func_8001BAA0(char *param_1,int param_2,char *param_3)

{
  uint uVar1;
  char cVar2;
  
  cVar2 = '\a';
  uVar1 = 0;
  if (param_2 != 4) {
    do {
      uVar1 = uVar1 + 1;
      cVar2 = cVar2 + *param_1;
      param_1 = param_1 + 1;
    } while (uVar1 < param_2 - 4U);
  }
  *param_1 = cVar2;
  *param_3 = cVar2;
  return cVar2;
}

#include "common.h"

#include "ghidra.h"
void func_800CF220(int param_1,int param_2,int param_3,uint param_4)

{
  char cVar1;
  char cVar2;
  char cVar3;
  
  cVar1 = '\x01';
  cVar2 = '!';
  if (param_2 == 6) {
    cVar2 = '\x01';
  }
  cVar3 = '\x1e';
  if (param_2 == 6) {
    cVar3 = '\x0e';
  }
  if (param_3 != 0) {
    cVar1 = 'A';
  }
  if (1 < (param_4 / 0x1e & 3)) {
    cVar1 = cVar1 + ' ';
  }
  if ((param_4 / 0x1e & 1) != 0) {
    cVar2 = cVar2 + cVar3;
  }
  *(char *)(param_1 + 0xc) = cVar1;
  *(char *)(param_1 + 0xd) = cVar2;
  *(char *)(param_1 + 0x14) = cVar1 + '\x1e';
  *(char *)(param_1 + 0x15) = cVar2;
  *(char *)(param_1 + 0x1c) = cVar1;
  *(char *)(param_1 + 0x1d) = cVar2 + cVar3;
  *(char *)(param_1 + 0x24) = cVar1 + '\x1e';
  *(char *)(param_1 + 0x25) = cVar2 + cVar3;
  return;
}

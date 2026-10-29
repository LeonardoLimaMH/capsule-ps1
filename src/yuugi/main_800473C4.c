#include "common.h"
#include "yuugi.h"

#include "common.h"

#include "ghidra.h"
bool DsControl(undefined1 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = DsCommand(param_1,param_2,0,0);
  if (iVar3 == 0) {
    bVar2 = false;
  }
  else {
    do {
      cVar1 = DsSync(iVar3,param_3);
    } while (cVar1 == '\0');
    bVar2 = cVar1 == '\x02';
  }
  return bVar2;
}

#include "common.h"

#include "ghidra.h"
bool DsControlB(undefined1 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = DsCommand(param_1,param_2,0,0);
  if (iVar3 == 0) {
    bVar2 = false;
  }
  else {
    do {
      cVar1 = DsSync(iVar3,param_3);
    } while (cVar1 == '\0');
    bVar2 = cVar1 == '\x02';
  }
  return bVar2;
}

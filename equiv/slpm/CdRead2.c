#include "common.h"

#include "ghidra.h"
void CdRead2(uint param_1)

{
    extern s32 D_80134F08[];
    extern int func_80119C78();
    extern int func_80119D84();
  undefined1 auStack_10 [8];
  
  auStack_10[0] = (undefined1)param_1;
  CdControl(0xe,auStack_10,0);
  if ((param_1 & 0x100) != 0) {
    (*D_80134F08) = (uint)((param_1 & 0x20) == 0);
    CdDataCallback(func_80119D84);
    CdReadyCallback(func_80119C78);
  }
  CdControl(0x1b,0,0);
  return;
}

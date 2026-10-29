#include "common.h"

void CdFlush(void) {
    slpm_CD_flush();
}

extern s32 D_80131D28;

s32 CdSetDebug(s32 arg0) {
    s32 old = D_80131D28;

    D_80131D28 = arg0;
    return old;
}

#include "common.h"

#include "ghidra.h"
undefined * CdComstr(uint param_1)

{
    extern u8 D_80131D44[];
    extern s32 D_801105F8[];
  undefined *puVar1;

  if ((param_1 & 0xff) < 0x1c) {
    puVar1 = *(undefined **)(D_80131D44 + (param_1 & 0xff) * 4);
  }
  else {
    puVar1 = &D_801105F8;
  }
  return puVar1;
}

#include "common.h"

#include "ghidra.h"
undefined * CdIntstr(uint param_1)

{
    extern u8 D_80131DC4[];
    extern s32 D_801105F8[];
  undefined *puVar1;

  if ((param_1 & 0xff) < 7) {
    puVar1 = *(undefined **)(D_80131DC4 + (param_1 & 0xff) * 4);
  }
  else {
    puVar1 = &D_801105F8;
  }
  return puVar1;
}

void CdSync(void) {
    slpm_CD_sync();
}

void CdReady(void) {
    slpm_CD_ready();
}

extern s32 D_80131D1C;

s32 CdSyncCallback(s32 arg0) {
    s32 old = D_80131D1C;

    D_80131D1C = arg0;
    return old;
}

extern s32 D_80131D20;

s32 CdReadyCallback(s32 arg0) {
    s32 old = D_80131D20;

    D_80131D20 = arg0;
    return old;
}

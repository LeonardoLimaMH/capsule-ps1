#include "common.h"

#include "ghidra.h"
void slpm_ResetCallback(void)

{
    extern void * D_80133264[];
  (**(code **)((*D_80133264) + 0xc))();
  return;
}

#include "ghidra.h"
void slpm_InterruptCallback(void)

{
    extern void * D_80133264[];
  (**(code **)((*D_80133264) + 8))();
  return;
}

#include "ghidra.h"
void slpm_DMACallback(void)

{
    extern void * D_80133264[];
  (**(code **)((*D_80133264) + 4))();
  return;
}

#include "ghidra.h"
void slpm_VSyncCallback(undefined4 param_1)

{
    extern void * D_80133264[];
  (**(code **)((*D_80133264) + 0x14))(4,param_1);
  return;
}

#include "ghidra.h"
void slpm_VSyncCallbacks(void)

{
    extern void * D_80133264[];
  (**(code **)((*D_80133264) + 0x14))();
  return;
}

#include "ghidra.h"
void slpm_StopCallback(void)

{
    extern void * D_80133264[];
  (**(code **)((*D_80133264) + 0x10))();
  return;
}

#include "ghidra.h"
void slpm_RestartCallback(void)

{
    extern void * D_80133264[];
  (**(code **)((*D_80133264) + 0x18))();
  return;
}

u16 slpm_CheckCallback(void) {
    extern u16 D_801321DE[];
    return (*D_801321DE);
}

u16 slpm_GetIntrMask(void) {
    extern u16 * D_8013326C[];
    return *(*D_8013326C);
}

u16 slpm_SetIntrMask(u16 arg0) {
    extern u16 * D_8013326C[];
    u16 temp_v0;

    temp_v0 = *(*D_8013326C);
    *(*D_8013326C) = arg0;
    return temp_v0;
}

#include "common.h"
#include "yuugi.h"

#include "ghidra.h"
void ResetCallback(void)

{
    extern void * D_80072E0C[];
  (**(code **)((*D_80072E0C) + 0xc))();
  return;
}

#include "ghidra.h"
void InterruptCallback(void)

{
    extern void * D_80072E0C[];
  (**(code **)((*D_80072E0C) + 8))();
  return;
}

#include "ghidra.h"
void DMACallback(void)

{
    extern void * D_80072E0C[];
  (**(code **)((*D_80072E0C) + 4))();
  return;
}

#include "ghidra.h"
void VSyncCallback(undefined4 param_1)

{
    extern void * D_80072E0C[];
  (**(code **)((*D_80072E0C) + 0x14))(4,param_1);
  return;
}

#include "ghidra.h"
void VSyncCallbacks(void)

{
    extern void * D_80072E0C[];
  (**(code **)((*D_80072E0C) + 0x14))();
  return;
}

#include "ghidra.h"
void StopCallback(void)

{
    extern void * D_80072E0C[];
  (**(code **)((*D_80072E0C) + 0x10))();
  return;
}

#include "ghidra.h"
void RestartCallback(void)

{
    extern void * D_80072E0C[];
  (**(code **)((*D_80072E0C) + 0x18))();
  return;
}

u16 CheckCallback(void) {
    extern u16 D_80071D86[];
    return (*D_80071D86);
}

u16 GetIntrMask(void) {
    extern u16 * D_80072E14[];
    return *(*D_80072E14);
}

u16 SetIntrMask(u16 arg0) {
    extern u16 * D_80072E14[];
    u16 temp_v0;

    temp_v0 = *(*D_80072E14);
    *(*D_80072E14) = arg0;
    return temp_v0;
}

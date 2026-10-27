#include "common.h"

/* real-callee: func_800FEC2C */
#include "ghidra.h"
typedef struct { s16 vx, vy, vz, pad; } SVECTOR;
#define D_80118C18 (*(s32 *)0x80118C18)
extern s32 func_800FEC2C();
void func_800FED90(int param_1)

{
  byte bVar1;
  SVECTOR local_10;

  bVar1 = *(byte *)(param_1 + 0x16);
  local_10.vx = (ushort)*(byte *)(param_1 + 0x15) * 100 + -0x226;
  local_10.vz = ((ushort)bVar1 * 0x10 + (ushort)bVar1 * 8) * 4 + (ushort)bVar1 * 4 + -0x226;
  local_10.vy = ((ushort)((uint)*(undefined4 *)
                                 ((uint)bVar1 * 4 +
                                 (uint)*(byte *)(param_1 + 0x15) * 0x34 + D_80118C18) >> 0x13) & 7)
                * -0x32;
  func_800FEC2C(&local_10);
  return;
}

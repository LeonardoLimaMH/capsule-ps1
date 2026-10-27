#include "common.h"

/* real-callee: func_800FEC2C */
#include "ghidra.h"
typedef struct { s16 vx, vy, vz, pad; } SVECTOR;
#define D_80118C18 (*(s32 *)0x80118C18)
extern s32 func_800FEC2C();
void func_800FEE40(int param_1,int param_2)

{
  SVECTOR local_10;

  local_10.vx = (short)param_1 * 100 + -0x226;
  local_10.vz = (short)param_2 * 100 + -0x226;
  if ((param_1 < 0xd) && (param_2 < 0xd)) {
    local_10.vy = ((ushort)((uint)*(undefined4 *)(param_2 * 4 + param_1 * 0x34 + D_80118C18) >> 0x13
                           ) & 7) * -0x32;
  }
  else {
    local_10.vy = 0;
  }
  func_800FEC2C(&local_10);
  return;
}

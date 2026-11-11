#include "common.h"
#include "yuugi.h"

extern u16 D_80078C20[];
extern u8 D_80069EC4[];

#include "ghidra.h"

void func_80024A7C(void *);

void func_80025000(void *arg0)
{
  extern s32 D_80069C4C[];
  int new_var;
  extern s16 D_80078C28;
  s32 flags;
  extern s16 D_80078C2A;
  extern s16 D_80078C2C;
  func_800254A0();
  flags = *((s32 *) (((s8 *) arg0) + 0x50));
 do { if (arg0) { *((s32 *) (((s8 *) arg0) + 0x54)) = 0; D_80078C28 = 0; D_80078C2C = 0; new_var = ~8; D_80078C2A = 0; } else { *((s32 *) (((s8 *) arg0) + 0x54)) = 0; D_80078C28 = 0; D_80078C2C = 0; new_var = ~8; D_80078C2A = 0; } } while (0);
  *((s32 *) (((s8 *) arg0) + 0x50)) = flags & new_var;
  D_80069C4C[0] = 0;
}

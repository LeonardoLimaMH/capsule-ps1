#include "ghidra.h"
#include "common.h"

#include "common.h"

typedef struct {
    s16 vx, vy, vz, pad;
    s16 dx, dx_pad;
    s16 dz, dz_pad;
    s16 sx, sy;
    s32 p;
    s32 flag;
} S_800EFCF4_Work;

typedef struct { u8 b[4]; } U4_800DD;

typedef struct {
    u8 pad0[0x10];
    u32 a;
    u32 b;
    u8 pad18[0x24];
} S_800DD_Tab;

typedef struct {
    u8 pad0[0x13];
    u8 f13;
    u8 pad14[0x28];
} S_800DD_Tab8;

void func_800F5228(void *arg0)
{
  u16 temp_v1;
  *((u16 *) (((s8 *) arg0) + 0x2A)) = (u16) ((*((u16 *) (((s8 *) arg0) + 0x2A))) - func_800202A4(2));
  temp_v1 = 8;
  temp_v1 = ((*((u16 *) (((s8 *) arg0) + 0x36))) - temp_v1) + func_800202A4(0x11);
  *((u16 *) (((s8 *) arg0) + 0x36)) = temp_v1;
  if (((s16) temp_v1) >= 0x2E)
  {
    *((u16 *) (((s8 *) arg0) + 0x36)) = 0x2DU;
  }
  if (((s16) (*((u16 *) (((s8 *) arg0) + 0x36)))) <= 0)
  {
    *((u16 *) (((s8 *) arg0) + 0x36)) = 1U;
  }
  temp_v1 = 7;
  *((u16 *) (((s8 *) arg0) + 0x28)) = (u16) (((*((u16 *) (((s8 *) arg0) + 0x28))) - temp_v1) + func_800202A4(0xF));
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC__800EE224__800EE434__800EEAE0__800F1280__800F3080__800F5228", func_800F52C4);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC__800EE224__800EE434__800EEAE0__800F1280__800F3080__800F5228", func_800F5514);

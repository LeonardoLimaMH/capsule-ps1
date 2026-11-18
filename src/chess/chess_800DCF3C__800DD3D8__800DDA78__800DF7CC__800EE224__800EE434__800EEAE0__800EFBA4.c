#include "ghidra.h"
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

extern s32 rsin(s32);
extern s32 rcos(s32);
extern void func_80013920(void *);

typedef struct {
    u8 pad0[0x34];
    u32 bf0 : 7;
    u32 bf7 : 25;
} S_EECC0_Sub;

typedef struct {
    u8 pad0[0x10];
    u32 unk10;
    s16 unk14;
    u8 pad16[0x42];
} S_6B2A4_EF1FC;

void func_800EFBA4(u8 dir, s32 flag, s16 step, s32 target)
{
  typedef struct 
  {
    u8 pad[0xea];
    s16 ang;
  } Ang_S;
  extern Ang_S D_80069AD4;
  s32 cur;
  u16 u;
  if (flag != 0)
  {
    switch (dir)
    {
      case 0: goto t200;
      case 1: goto tc00;
      case 2: goto te00;
      case 3: goto t800;
      case 4: goto ta00;
      case 5: goto t400;
      case 6: goto t600;
      case 7: goto t0;
      default: goto end;
    }
  }
  else
  {
    switch (dir)
    {
      case 0: goto te00;
      case 1: goto t0;
      case 2: goto ta00;
      case 3: goto tc00;
      case 4: goto t600;
      case 5: goto t800;
      case 6: goto t200;
      case 7: goto t400;
      default: goto end;
    }
  }
  t0:
  target = 0;
  goto end;
  t200:
  target = 0x200;
  goto end;
  t400:
  target = 0x400;
  goto end;
  t600:
  target = 0x600;
  goto end;
  t800:
  target = 0x800;
  goto end;
  ta00:
  target = 0xa00;
  goto end;
  tc00:
  target = 0xc00;
  goto end;
  te00:
  target = 0xe00;
  end:
  if (D_80069AD4.ang > 0x1000)
  {
    D_80069AD4.ang = 0;
  }
  if (D_80069AD4.ang < 0)
  {
    D_80069AD4.ang = 0x1000;
  }
  if ((D_80069AD4.ang >= (target - 0x14)) && ((target + 0x14) >= D_80069AD4.ang))
  {
    D_80069AD4.ang = target;
    return;
  }
  cur = D_80069AD4.ang;
  u = D_80069AD4.ang;
  if ((cur - target) > 0)
  {
    if ((cur - target) < ((target - cur) + 0x1019))
    {
      D_80069AD4.ang = u - step;
    }
    else
    {
      D_80069AD4.ang = u + step;
    }
  }
  else
  {
    s32 tmp;
    if ((target - cur) < ((tmp = cur + 0x1000) - target))
    {
      D_80069AD4.ang = u + step;
    }
    else
    {
      D_80069AD4.ang = u - step;
    }
  }
}


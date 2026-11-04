#include "common.h"

void func_800A9738(s32 arg0) {
    extern s32 D_800EE914[];
    (*D_800EE914) = arg0;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A9738", func_800A9744);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A9738", func_800A99AC);

s32 func_800A9A74(void)
{
  extern struct {
    s32 f0;
    s32 f4;
  } D_800EEB9C;
  if (D_800EEB9C.f4 <= 0)
  {
    if (D_800EEB9C.f0)
    {
      D_800EEB9C.f0 = 0;
      return -1;
    }
    else
    {
      D_800EEB9C.f0 = 0;
      return -1;
    }
  }
  D_800EEB9C.f4 = (s32) (D_800EEB9C.f4 - 1);
  func_800B7298(D_800EEB9C.f0);
  return 0;
}

typedef struct {
    u8 pad[0x38];
    u32 flags;
} WorkSlotRecordTask;
typedef struct {
    u8 pad[0x18C];
    WorkSlotRecordTask *task;
    u8 middle[0x21F];
    u8 slots[32];
    u8 tail[0x3C9];
    u32 state;
} WorkSlotRecord;

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A9738", func_800A9AC0);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A9738", func_800A9D6C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A9738", func_800A9F84);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A9738", func_800AA0E4);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A9738", func_800AA45C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A9738", func_800AA494);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A9738", func_800AA60C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A9738", func_800AA77C);

void func_800AA8D0(u32 player) {
    extern WorkSlotRecord D_80100F38[];
    WorkSlotRecord *record = &D_80100F38[player & 0xFFFF];
    record->slots[(record->state >> 26) & 31] = 0;
    record->task->flags |= 1;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A9738", func_800AA930);

#include "common.h"

void func_800A9738(s32 arg0) {
    extern s32 D_800EE914[];
    (*D_800EE914) = arg0;
}


INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A9738", func_800A9744);

void func_800A99AC(s32 arg0, s32 arg1) {
    typedef struct {
        s32 state;
        s32 cells[27];
        s32 indices[9];
        s32 unk94;
    } Result_800EE914;
    extern s16 D_80078C22;
    extern s32 D_800900C0[];
    extern Result_800EE914 D_800EE914;
    Result_800EE914 *res;
    s32 i;
    s32 count;
    s32 step;
    s32 temp;

    D_800EE914.state = 0;
    switch (D_80078C22) {
    case 0:
        temp = 1;
        break;
    case 1:
        temp = 4;
        break;
    default:
        temp = 9;
        break;
    }
    count = temp;

    i = 0;
    if (count != 0) {
        step = D_80078C22 + 1;
        res = &D_800EE914;
        do {
            s32 y = i / step;
            s32 x = i % step;
            s32 val = (arg0 - y) * 8 + (arg1 - x);
            res->indices[i] = val;
            res->cells[i] = D_800900C0[0x15C / 4] + val * 0x2C;
            i++;
        } while (i < count);
    }

    D_800EE914.unk94 = 0x40;
    D_800EE914.state = 1;
}

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

s32 func_800AA45C(void) {
    typedef struct {
        u8 pad[0xA68];
        s32 unkA68;
    } S_8ED68;
    extern S_8ED68 D_8008ED68[];
    extern s32 D_800ED8DC[];
    S_8ED68 *p = D_8008ED68;

    if (*D_800ED8DC == 1) {
        if (p->unkA68 != 0) {
            return 0;
        }
    }
    return -1;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A9738", func_800AA494);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A9738", func_800AA60C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A9738", func_800AA77C);

void func_800AA8D0(u32 player) {
    extern WorkSlotRecord D_80100F38[];
    WorkSlotRecord *record = &D_80100F38[player & 0xFFFF];
    record->slots[(record->state >> 26) & 31] = 0;
    record->task->flags |= 1;
}

void func_800AA930(s32 idx) {
    typedef struct {
        u8 pad[0x38];
        u32 flags;
    } Obj_800AA930;
    typedef struct {
        u8 pad[0x21C];
        Obj_800AA930 *obj;
        u8 pad2[0x189];
        u8 slots[32];
        u8 pad3[0x3CD];
        u32 state;
    } Player_800AA930;
    extern Player_800AA930 D_80100F38[];
    Player_800AA930 *rec = &D_80100F38[idx & 0xFFFF];
    u32 w;

    rec->obj->flags |= 1;
    w = rec->state;
    rec->obj = 0;
    rec->slots[(w >> 26) & 0x1F] = 0;
}

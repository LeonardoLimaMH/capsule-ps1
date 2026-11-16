#include "common.h"

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

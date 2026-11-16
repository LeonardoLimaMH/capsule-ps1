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

typedef struct {
    u32 pad[0x14];
    u32 b0 : 1;
    u32 b1 : 2;
    u32 b3 : 1;
    u32 rest : 28;
} Flags_800AA494;

typedef struct {
    u8 pad[0x10];
    u16 f10;
    u8 pad2[0x17A];
    Flags_800AA494 *fl[2];
} Ent_800AA494;

s32 func_800AA77C(u32 arg0) {
    register s32 i asm("s3");
    register s32 ret asm("s2");
    s32 v;
    ret = 0;
    for (i = 1; i >= 0; i--) {
        v = func_800B1260(i) & 0xFFFF;
        if (v == 0xFFFF) continue;
        switch (arg0) {
        case 0:
        case 1:
            if (func_800E1594((u16)v) == 1) return 0;
            if (func_800E1388((u16)v) != 1) return 0;
            if (func_800E1140((u16)v) == 0) return 0;
            if (func_800E16AC((u16)v) == 1) break;
            if (func_800E14C4((u16)v) != 1) ret |= 1;
            break;
        case 2:
            ret = 1;
            break;
        case 3:
            if (func_800E1594((u16)v) == 1) return 0;
            if (func_800E1388((u16)v) != 1) return 0;
            if (func_800E16AC((u16)v) == 1) break;
            ret |= 1;
            break;
        case 4:
            if (func_800E1594() == 1) return 0;
            break;
        }
    }
    return ret;
}


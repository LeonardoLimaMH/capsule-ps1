#include "common.h"

struct WorkTimerRecord {
    u8 pad[0x384];
    u16 enabled;
    u16 timer;
    u8 tail[0x414];
};

s32 func_800D1B98(void) {
    return 1;
}

s32 func_800D1BA0(void) {
    return 0;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98", func_800D1BA8);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98", func_800D1CC4);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98", func_800D262C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98", func_800D2748);

typedef struct WorkTimerRecord WorkTimerRecord;
void func_800D2828(s32 unused, s32 player) {
    extern WorkTimerRecord D_80100F38[];
    WorkTimerRecord *record = &D_80100F38[player];
    record->enabled = 1;
    record->timer = 0x960;
}

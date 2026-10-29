#include "common.h"

typedef struct {
    u8 pad[0x18C];
    u32 value18C;
    u8 tail[0x18];
} MonsterValueRecord_800B15CC;

s32 func_800B15CC(void) {
    extern u16 D_8006AF80[];
    extern u8 D_80091618[];
    extern s16 D_800EFA4A[];
    extern s16 D_800EFA4C[];
    extern s16 D_80103D38[];

    if (*D_80103D38 == 1) {
        *D_800EFA4C = 2;
    } else {
        *D_800EFA4C = 0;
    }
    if (*D_800EFA4C != *D_800EFA4A) {
        u32 base = (u32)D_80091618;
        u32 index = *D_8006AF80;
        MonsterValueRecord_800B15CC *record =
            (MonsterValueRecord_800B15CC *)(base + index * 0x1A8);
        func_80024990(record->value18C, 1, 0x32, 0);
    }
    return 1;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B15CC", func_800B1668);

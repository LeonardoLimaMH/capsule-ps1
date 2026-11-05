#include "common.h"

typedef struct {
    u8 pad[0x18C];
    u32 value18C;
    u8 tail[0x18];
} MonsterValueRecord_800B15CC;

typedef struct {
    u8 pad[0x34];
    s32 val;
    u8 pad2[0x84];
} Record_800900C0;

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

s32 func_800B1668(void) {
    extern s16 D_80103D38[];
    extern u8 D_800900C0[];
    u8 *p;
    s32 i;
    u8 *v1;

    if (*D_80103D38 == 1) {
        p = D_800900C0;
        if (*(s32 *)(p + 0x34) == 0x320) {
            return 1;
        }
        i = 0;
        v1 = p;
        do {
            *(s32 *)(v1 + 0x34) += 0x14;
            i++;
            v1 += 0xBC;
        } while (i < 3);
        return 0;
    }
    p = D_800900C0;
    if (*(s32 *)(p + 0x268) == -0x640) {
        return 1;
    }
    i = 3;
    v1 = p + 0x234;
    do {
        *(s32 *)(v1 + 0x34) -= 0x14;
        i++;
        v1 += 0xBC;
    } while (i < 6);
    return 0;
}

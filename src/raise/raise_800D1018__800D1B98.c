#include "common.h"

s32 func_800D1B98(void) {
    return 1;
}

s32 func_800D1BA0(void) {
    return 0;
}

u8 func_800D1BA8(void) {
    extern u8 D_80085429[];
    extern u8 D_8008ED68[];
    extern s16 D_800F1D0A[];
    extern s16 D_800F1D0C[];
    u8 *w = D_8008ED68;
    s32 v;

    if (*D_80085429 != 0) {
        return 0;
    }
    if (*(s32 *)(w + 0x88) == 0x800) {
        func_80034AB0(0x58);
        v = w[0x99A] != 1;
        w[0x99A] = v;
        if (v != 1) {
            goto end;
        }
        D_800F1D0C[0] = 0x20;
        D_800F1D0A[0] = v;
    }
    v = w[0x99A];
    if (v == 1) {
        if (D_800F1D0A[0] == v) {
            func_80015944(2);
            if (--D_800F1D0C[0] == 0) {
                D_800F1D0A[0] = 0;
                D_800F1D0C[0] = 0x20;
            }
        } else {
            func_80015A0C();
            if (--D_800F1D0C[0] == 0) {
                D_800F1D0A[0] = v;
                D_800F1D0C[0] = 0x20;
            }
        }
    }
end:
    return w[0x99A];
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98", func_800D1CC4);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98", func_800D262C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98", func_800D2748);

typedef struct {
    u8 pad[0x384];
    s16 enabled;
    s16 timer;
    u8 tail[0x414];
} WorkTimerRecord;

extern WorkTimerRecord D_80100F38[];

void func_800D2828(s32 unused, s32 player) {
    extern WorkTimerRecord D_80100F38[];
    WorkTimerRecord *record = &D_80100F38[player];
    record->enabled = 1;
    record->timer = 0x960;
}

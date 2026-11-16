#include "common.h"

void func_800D0F10(void) {
    typedef struct { u8 pad0[4]; s16 idx; u16 count; } Log;
    extern Log D_80103D38[];
    extern u8 D_80100F38[];
    extern u8 D_80091618[];
    u16 k = func_800B1260();
    u8 *p = D_80100F38 + k * 0x79C;
    u16 *e = (u16 *)((u8 *)D_80103D38 + D_80103D38[0].idx * 6);
    int off = 0x90;
    e[4] = *(u16 *)(p + 0x336);
    e[5] = *(u16 *)(p + 0x338);
    e[6] = *(u16 *)(off + (D_80091618 + k * 0x1A8));
    D_80103D38[0].count += 1;
    D_80103D38[0].idx = (D_80103D38[0].idx == 0x3F) ? 0 : D_80103D38[0].idx + 1;
}

typedef struct { u8 pad[0x388]; u16 value; u8 tail[0x79C - 0x38A]; } RaiseRecord;
extern RaiseRecord D_80100F38[];


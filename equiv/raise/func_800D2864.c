#include "common.h"

extern u8 D_80100F38[];

void func_800D2864(s32 unused, s32 idx) {
    *(s16 *)(D_80100F38 + idx * 0x79C + 0x384) = 0;
}

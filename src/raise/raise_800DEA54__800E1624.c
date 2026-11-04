#include "common.h"

extern u8 D_80100F38[];

s32 func_800E1624(u16 idx) {
    u8 *b = D_80100F38;
    s16 v = *(s16 *)(b + idx * 0x79C + 0x37E);

    if (v == 1) {
        return 1;
    }
    return v == 2;
}


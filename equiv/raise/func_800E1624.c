#include "common.h"

extern u8 D_80100F38[];

s32 func_800E1624(u16 a0) {
    s16 v = *(s16 *)(D_80100F38 + a0 * 0x79C + 0x37E);
    return v == 1 || v == 2;
}

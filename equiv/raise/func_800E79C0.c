#include "common.h"

extern u8 D_800859F2;
extern u8 D_800F2C68[];

s32 func_800E79C0(s32 value) {
    return value * *(s32 *)(D_800F2C68 + (D_800859F2 & 7) * 4);
}

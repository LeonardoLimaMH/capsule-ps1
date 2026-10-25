#include "common.h"

extern u8 D_800EFF58[];

s32 func_800BBC28(s32 a0) {
    u8 *p = D_800EFF58;
    *(s32 *)(p + 0x84) = a0;
    *(s32 *)(p + 0x84 + 4) = 0x20;
    return (s32)p;
}

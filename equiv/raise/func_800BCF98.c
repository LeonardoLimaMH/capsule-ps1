#include "common.h"

extern u8 D_800EFF58[];

s32 func_800BCF98(s32 a0) {
    u8 *p = D_800EFF58;
    *(s32 *)(p + 0x33C) = a0;
    *(s32 *)(p + 0x33C + 4) = 0x20;
    return (s32)p;
}

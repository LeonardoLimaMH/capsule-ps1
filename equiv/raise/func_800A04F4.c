#include "common.h"

extern u8 D_800EFF58[];

s32 func_800A04F4(void) {
    u8 *p = D_800EFF58;
    u8 *o = *(u8 **)(p + 0x31C);
    s32 r;
    *(s32 *)(o + 0x38) = (*(s32 *)(o + 0x38) & ~1) | (*(s32 *)(p + 0x32C) == 0);
    r = *(s32 *)(p + 0x330) == 0xD;
    o = *(u8 **)(p + 0x320);
    *(s32 *)(o + 0x38) = (*(s32 *)(o + 0x38) & ~1) | r;
    return r;
}

#include "common.h"

extern u8 D_800EE5F0[], D_800EFF58[];
extern s32 func_800BC8FC(s32, s32, s32, s32, s32, void *, s32, s32, s32, s32, s32, s32, s32);

s32 func_800BC728(s32 a0) {
    u8 *p = D_800EFF58 + a0 * 4;
    return *(s32 *)(p + 0x31C) = func_800BC8FC(0x19, -0xE0, a0 ? 0x90 : 0x38, 4, 0, D_800EE5F0,
                                               *(s32 *)(p + 0x324), 0, 1, 0, 2, 0, 0);
}

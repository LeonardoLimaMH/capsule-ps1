#include "common.h"

extern u8 D_800EFF58[];

s32 func_800BD66C(s32 a0) {
    u8 *p = D_800EFF58;
    *(s32 *)(p + 0x420) = a0;
    *(s32 *)(p + 0x420 + 4) = 0x20;
    return (s32)p;
}

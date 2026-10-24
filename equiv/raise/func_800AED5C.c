#include "common.h"

extern s16 D_800EEAE4[];
extern u16 D_800EEB14[];
extern u8 D_80069AD4[];

s32 func_800AED5C(s32 i, s32 x) {
    s32 v = D_800EEB14[i] + (x * D_800EEAE4[i]) / 1200;

    *(s16 *)(D_80069AD4 + 0x7C) = v;
    *(s16 *)(D_80069AD4 + 0x76) = v;
    *(s16 *)(D_80069AD4 + 0x70) = v;
    return v;
}

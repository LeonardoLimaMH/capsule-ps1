#include "common.h"

extern u8 D_8008F702;
extern s32 D_80069E4C[];

s32 func_800D8AF8(u8 *o, s32 a1) {
    s16 *d, *s;
    s32 i;
    if (D_8008F702 == 1) return 0x80070000;
    d = (s16 *)(*(u8 **)(o + 0xB4) + a1 * 32);
    s = (s16 *)(*(u8 **)(o + 0xB8) + a1 * 32);
    for (i = 0; i < 4; i++, d += 4, s += 4) {
        if (D_80069E4C[0x1C] >= 9) {
            d[0] += s[0] >> 7;
            d[1] += s[1] >> 7;
            d[2] += s[2] >> 7;
        } else {
            d[0] -= s[0] >> 7;
            d[1] -= s[1] >> 7;
            d[2] -= s[2] >> 7;
        }
    }
    return 0;
}

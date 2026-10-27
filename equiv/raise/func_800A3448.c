/* stub-ret: mixed */
/* args: small */
/* max-insns: 50000 */
#include "common.h"

extern u8 D_80091618[], D_800EF364[];
extern s16 D_80069AB4[];
extern s32 func_800A9658(s32);

s32 func_800A3448(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    u16 b = a3;
    u8 *e = D_80091618 + (u16)a1 * 0x1A8;
    u16 i;
    if (D_800EF364[(u16)a0 * 64 + ((s16)a4 + (s16)a2) * 8 + (s16)a5 + (s16)a3 - 9] == 0xFF) return 1;
    for (i = 0; i < *(u16 *)(e + 0x12); i++) {
        s32 s2 = *(s32 *)(e + 0x1C + i * 12);
        s32 s1 = *(s32 *)(e + 0x20 + i * 12);
        s16 s0 = D_80069AB4[*(u16 *)(e + 0x14 + i * 2)];
        s16 n = func_800A9658((s16)(s0 - 1));
        s32 j;
        for (j = 0; j < n; j++)
            if (s2 - j / s0 == (u16)a2 + (s16)a4 && s1 - j % s0 == b + (s16)a5) return 1;
    }
    return 0;
}

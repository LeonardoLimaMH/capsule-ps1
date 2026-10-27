#include "common.h"

/* stub-ret: mixed */
/* args: small */
/* max-insns: 50000 */
extern u8 D_80091618[], D_800EF364[];
extern s16 D_80069AB4[];
extern s32 func_800A9658(s32), func_800A4320(s32, s32, s32, s32);

s32 func_800A510C(s32 a0, s32 a1, s32 a2) {
    u16 k = a0;
    u8 *e = D_80091618 + k * 0x1A8;
    u16 fp = *(u16 *)(e + 0x10);
    u16 i;
    if (D_800EF364[fp * 64 + (u16)a1 * 8 + (u16)a2 - 9] == 0xFF) return 0;
    for (i = 0; i < *(u16 *)(e + 0x12); i++) {
        s32 s3 = *(s32 *)(e + 0x1C + i * 12);
        s32 s1 = *(s32 *)(e + 0x20 + i * 12);
        s16 s0 = D_80069AB4[*(u16 *)(e + 0x14 + i * 2)];
        s16 n = func_800A9658((s16)(s0 - 1));
        s32 j;
        for (j = 0; j < n; j++) {
            if (s3 - j / s0 == (u16)a1 && s1 - j % s0 == (u16)a2) return 0;
        }
    }
    return func_800A4320(fp, k, (u16)a1, (u16)a2) == 0;
}

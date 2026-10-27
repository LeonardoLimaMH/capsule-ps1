/* stub-ret: mixed */
/* args: small */
/* rand-u16: 0x8006AF90 1 0,1,2,3,4 */
/* rand-u16: 0x8006AFA4 1 0,1,2 */
#include "common.h"

extern u8 D_80091618[], D_800EFF58[];
extern s16 D_8006AF90[];
extern u8 D_8008542E;
extern s32 D_800EEB64, D_800EEB68;
extern s16 D_8008EE4C;
extern s32 func_800202A4(s32);

void func_800B2C64(s32 a0, s32 a1) {
    s16 *D = D_8006AF90;
    s32 n = D[0];
    s16 *s;
    if (n < 3) {
        s = &D[1 + n];
        *s = 5;
        *s += (s16)(func_800202A4((D_8008542E & 0x40) ? 5 : 4) * 2 + 1);
        D[4 + n * 2] = *(u16 *)(D_80091618 + (u16)a0 * 0x1A8);
        D[5 + n * 2] = *(u16 *)(D_80091618 + (u16)a1 * 0x1A8);
        D[0] += 1;
        *(s32 *)(D_800EFF58 + 0x348) += 1;
        *(s32 *)(D_800EFF58 + n * 4 + 0x3E8) = *s;
        if (D_800EEB64 == 0) {
            D_800EEB64 = 2;
            D_800EEB68 = *(s32 *)(D_800EFF58 + 0x348);
        }
    } else {
        s = &D[11 + D[10]];
        *s = 5;
        *s += (s16)(func_800202A4((D_8008542E & 0x40) ? 5 : 4) * 2 + 1);
        D[13] = *(u16 *)(D_80091618 + (u16)a0 * 0x1A8);
        D[10] += 1;
        D_8008EE4C = 0;
        D[14] = *(u16 *)(D_80091618 + (u16)a1 * 0x1A8);
    }
}

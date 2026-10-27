/* arg0: small */
#include "common.h"

extern u8 D_80091618[], D_80063940[], D_800EC7A8[];
extern s32 func_800E6A1C(s32, s32);

s32 func_800A7730(s32 a0) {
    u16 k = a0;
    u8 *e = D_80091618 + k * 0x1A8;
    u8 s2 = D_80063940[*(u16 *)e * 60 + 0xE];
    s32 sum = 0;
    s16 i, r;
    s16 x, d;
    for (i = 3; i < 10; i++) {
        s16 *pv = (s16 *)(e + 0xD4 + (i - 3) * 2);
        if ((u16)(i - 3) < 2) sum += *(s16 *)(D_800EC7A8 + i * 2 + 0) * (0xFF - *pv);
        else sum += *(u16 *)(D_800EC7A8 + i * 2 + 0) * *(u16 *)pv;
    }
    r = (s16)sum / 100;
    x = s2 + func_800E6A1C(k, (s16)((r * 80) / 255));
    e = D_80091618 + k * 0x1A8;
    d = *(s16 *)(e + 0xBE);
    *(s16 *)(e + 0xB4) = x;
    if (d < 0xF5) *(s16 *)(e + 0xB4) = (x * (d + 0x172)) / 615;
    else if (d >= 0x100) *(s16 *)(e + 0xB4) = (x * (0x366 - d)) / 615;
    else *(s16 *)(e + 0xB4) = (x * 11) / 10;
    if (*(s16 *)(e + 0xB4) >= 0x100) *(s16 *)(e + 0xB4) = 0xFF;
    return *(s16 *)(e + 0xB4);
}

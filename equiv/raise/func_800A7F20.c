/* arg0: small */
#include "common.h"

extern u8 D_80091618[], D_80063940[], D_800EC7A8[];
extern s32 func_800E6A1C(s32, s32);

s32 func_800A7F20(s32 a0) {
    u16 k = a0;
    u8 *e = D_80091618 + k * 0x1A8;
    u8 s2 = D_80063940[*(u16 *)e * 60 + 0x11];
    s32 sum = 0;
    s16 i, r;
    s16 d;
    s32 v;
    for (i = 2; i < 8; i++) {
        s16 *pv = (s16 *)(e + 0xD2 + (i - 2) * 2);
        if ((u16)(i - 3) < 2) sum += *(s16 *)(D_800EC7A8 + i * 2 + 0x5A) * (0xFF - *pv);
        else sum += *(u16 *)(D_800EC7A8 + i * 2 + 0x5A) * *(u16 *)pv;
    }
    r = (s16)sum / 100;
    r = r / 51;
    if (r >= 5) r = 4;
    v = func_800E6A1C(k, r);
    e = D_80091618 + k * 0x1A8;
    d = *(s16 *)(e + 0xBE);
    *(s16 *)(e + 0xBA) = v;
    if (d < 200) {
        *(s16 *)(e + 0xBA) = v - 1;
        if (d < 100) *(s16 *)(e + 0xBA) = v - 2;
    } else if (d < 301) {
        *(s16 *)(e + 0xBA) = v + 1;
    } else {
        *(s16 *)(e + 0xBA) = v - 1;
        if (d >= 401) *(s16 *)(e + 0xBA) = v - 2;
    }
    if (*(s16 *)(e + 0xBA) < 0) *(s16 *)(e + 0xBA) = 0;
    *(s16 *)(e + 0xBA) += s2;
    if (*(s16 *)(e + 0xBA) >= 10) *(s16 *)(e + 0xBA) = 9;
    return *(s16 *)(e + 0xBA);
}

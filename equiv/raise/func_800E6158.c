/* rand-u16: 0x80106206 1 0,1,2 */
/* rand-u16: 0x8010622E 1 0,1,2 */
/* rand-u16: 0x80106256 1 0,1,2 */
/* rand-u16: 0x8010627E 1 0,1,2 */
/* rand-u16: 0x801062A6 1 0,1,2 */
/* rand-u16: 0x801062CE 1 0,1,2 */
/* rand-u16: 0x801062F6 1 0,1,2 */
/* rand-u16: 0x8010631E 1 0,1,2 */
/* rand-u16: 0x80106346 1 0,1,2 */
/* rand-u16: 0x8010636E 1 0,1,2 */
/* rand-u16: 0x80106396 1 0,1,2 */
/* rand-u16: 0x801063BE 1 0,1,2 */
/* rand-u16: 0x801063E6 1 0,1,2 */
/* rand-u16: 0x8010640E 1 0,1,2 */
/* rand-u16: 0x80106436 1 0,1,2 */
/* rand-u16: 0x8010645E 1 0,1,2 */
/* rand-u16: 0x800917B6 1 0,1 */
/* rand-u16: 0x8009195E 1 0,1 */
/* rand-u16: 0x80091B06 1 0,1 */
/* rand-u16: 0x80091CAE 1 0,1 */
/* rand-u16: 0x80091E56 1 0,1 */
/* rand-u16: 0x80091FFE 1 0,1 */
/* rand-u16: 0x800921A6 1 0,1 */
/* rand-u16: 0x8009234E 1 0,1 */
/* rand-u16: 0x800924F6 1 0,1 */
/* rand-u16: 0x8009269E 1 0,1 */
/* rand-u16: 0x80092846 1 0,1 */
/* rand-u16: 0x800929EE 1 0,1 */
/* rand-u16: 0x80092B96 1 0,1 */
/* rand-u16: 0x80092D3E 1 0,1 */
/* rand-u16: 0x80092EE6 1 0,1 */
/* rand-u16: 0x8009308E 1 0,1 */
/* stub-ret: mixed */
/* arg0: small */
/* arg1: small */
#include "common.h"

/* variante de func_800E5C08: aplica D_800EC898[a1] aos atributos, escalando por +0xE4 */
extern u8 D_80091618[], D_800EC898[], D_801061E0[];
extern s32 func_800B84BC(s32, s32);

#define E(i) (D_80091618 + (i) * 0x1A8)

void func_800E6158(s32 a0, s32 a1) {
    u16 k = a0;
    u8 *e = E(k);
    u16 *T;
    s16 *v;
    s32 r, t4, d, t2;
    s16 i;
    if (*(s16 *)(e + 0x19C) == 1) return;
    r = func_800B84BC(k, (u16)a1);
    if (r == 3) {
        t4 = 5;
        d = 2;
    } else if (r == 4) {
        t4 = 10;
        d = 5;
    } else if (r >= 0 && r < 3) {
        t4 = 0;
        d = 0;
    } else {
        t4 = 20;
        d = 10;
    }
    e = E(k);
    *(u16 *)(e + 0xE4) -= d;
    if (*(s16 *)(e + 0xE4) < 0) *(u16 *)(e + 0xE4) = 0;
    T = (u16 *)(D_800EC898 + (u16)a1 * 34);
    t2 = (u16)(a1 - 11) < 2;
    v = (s16 *)(e + 0xD2);
    for (i = 2; i < 16; i++, v++) {
        s16 a = T[i];
        s16 s = a > 0 ? 1 : (a < 0 ? -1 : 0);
        if ((u16)(i - 3) >= 2 && i < 11) {
            s16 g = *(s16 *)(D_801061E0 + k * 40 + 0x26);
            if ((g == 0 && t2) || (g == 2 && !t2)) a = (s16)(a * 70) / 100;
            else if (g == 0 || g == 2) a = a + a / 2;
            a = (s16)(a * *(u16 *)(e + 0xE4)) / 255;
            if (a == 0) a = s;
        }
        if (i == 4) a += t4;
        if (*(s16 *)(e + 0x19E) != 0 && (i == 2 || (u16)(i - 5) < 7) && a > 0) a = a / 2;
        *v += a;
        if (*v < 0) *v = 0;
        else if (i < 13) {
            if (*v >= 0x100) *v = 0xFF;
        } else if (*v >= 0x65) {
            *v = 0x64;
        }
    }
    switch ((u16)a1) {
    case 8: *(s16 *)(e + 0x198) = 0; *(s16 *)(e + 0x19A) = 3; break;
    case 9: *(s16 *)(e + 0x198) = 3; *(s16 *)(e + 0x19A) = 1; break;
    case 10: *(s16 *)(e + 0x198) = 2; *(s16 *)(e + 0x19A) = 0; break;
    case 11: *(s16 *)(e + 0x198) = 5; *(s16 *)(e + 0x19A) = 0; break;
    case 12: *(s16 *)(e + 0x198) = 5; *(s16 *)(e + 0x19A) = 3; break;
    case 13: *(s16 *)(e + 0x198) = 1; *(s16 *)(e + 0x19A) = -1; break;
    case 14: *(s16 *)(e + 0x198) = 3; *(s16 *)(e + 0x19A) = -1; break;
    default: *(s16 *)(e + 0x198) = -1; *(s16 *)(e + 0x19A) = -1; break;
    }
}

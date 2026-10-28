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
/* stub-ret: mixed */
/* arg0: small */
/* arg1: small */
#include "common.h"

/* aplica a tabela D_800EC898[a1] aos atributos da criatura a0 (+0xD2..), com os limites de cada um */
extern u8 D_80091618[], D_800EC898[], D_801061E0[];
extern s32 func_800B847C(s32, s32);

#define E(i) (D_80091618 + (i) * 0x1A8)

void func_800E5C08(s32 a0, s32 a1) {
    u16 k = a0;
    u8 *e = E(k);
    u16 *T;
    s16 *v;
    s32 r, t3, d;
    s16 i;
    if (*(s16 *)(e + 0x19C) == 1) return;
    r = func_800B847C(k, (u16)a1);
    if (r == 3) {
        t3 = 3;
        d = 2;
    } else if (r == 4) {
        t3 = 5;
        d = 5;
    } else if (r >= 0 && r < 3) {
        t3 = 0;
        d = 0;
    } else {
        t3 = 7;
        d = 10;
    }
    e = E(k);
    *(u16 *)(e + 0xE4) -= d;
    if (*(s16 *)(e + 0xE4) < 0) *(u16 *)(e + 0xE4) = 0;
    T = (u16 *)(D_800EC898 + (u16)a1 * 34);
    v = (s16 *)(e + 0xD2);
    for (i = 2; i < 16; i++, v++) {
        s16 a = T[i];
        if ((u16)(i - 3) < 2) {
            s16 g = *(s16 *)(D_801061E0 + k * 40 + 0x26);
            if (g == 0) {
                a = (a * 6) / 5;
            } else if (g == 2) {
                s16 s = a > 0 ? 1 : (a < 0 ? -1 : 0);
                a = (s16)(a * 80) / 100;
                if (a == 0) a = s;
            }
        }
        *v += a;
        if (i == 4) *v += t3;
        if (*v < 0) {
            *v = 0;
        } else if (i == 12) {
            u16 h = *(u16 *)(e + 0x9E);
            s16 m = h + (s16)h / 2;
            if (m < *v) *v = m;
        } else if (i < 13) {
            if (*v >= 0x100) *v = 0xFF;
        } else {
            if (*v >= 0x65) *v = 0x64;
        }
    }
    if ((u16)a1 < 6) {
        *(s16 *)(e + 0x198) = 4;
        *(s16 *)(e + 0x19A) = -1;
    } else if ((u16)a1 < 8) {
        *(s16 *)(e + 0x198) = 5;
        *(s16 *)(e + 0x19A) = 2;
    } else {
        *(s16 *)(e + 0x198) = -1;
        *(s16 *)(e + 0x19A) = -1;
    }
}

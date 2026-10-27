#include "common.h"

/* arg0: small */
/* arg1: small */
extern u8 D_80091618[], D_800EC898[];

s32 func_800E66A4(s32 a0, s32 a1) {
    u8 *e = D_80091618 + (u16)a0 * 0x1A8;
    u16 *t = (u16 *)(D_800EC898 + (u16)a1 * 34);
    s16 *v = (s16 *)(e + 0xD2);
    s16 i;
    *(s16 *)(e + 0x19A) = -1;
    *(s16 *)(e + 0x198) = -1;
    if ((u16)a1 == 0x14) {
        if (*(s16 *)(e + 0x19C) == 0) *(s16 *)(e + 0x198) = 5;
        else *(s16 *)(e + 0x19A) = 5;
    } else if ((u16)a1 == 0x15) {
        *(s16 *)(e + 0x19A) = 5;
        *(s16 *)(e + 0x198) = -1;
    }
    for (i = 2; i < 12; i++, v++) {
        u16 s = *v + t[i];
        *v = s;
        if (*(s16 *)(e + 0x19C) != 0 && (u16)(i - 3) < 2) *v = s + 4;
        if (*v < 0) *v = 0;
        else if (*v >= 0x100) *v = 0xFF;
    }
    return 0;
}

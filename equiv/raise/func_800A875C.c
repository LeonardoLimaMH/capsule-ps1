#include "common.h"

/* arg0: small */
/* rand-u16: 0x8009162A 1 0,1,2,3 */
/* rand-u16: 0x800917D2 1 0,1,2,3 */
extern u8 D_80091618[], D_800EC368[];

s32 func_800A875C(s32 a0) {
    u8 *e = D_80091618 + (u16)a0 * 0x1A8;
    s16 t;
    if (*(u16 *)(e + 0x12) == 0) return 0;
    for (t = 0; t < *(u16 *)(e + 0x12); t++) {
        u16 *T = (u16 *)(D_800EC368 + *(s16 *)(e + 0x14 + t * 2) * 34);
        s16 *v = (s16 *)(e + 0xD0);
        s16 i;
        for (i = 1; i < 17; i++, v++) {
            s16 x = *v + T[i];
            if (i >= 2) {
                if (x < 0) x = 0;
                else if (x >= 0x100) x = 0xFF;
            }
            if (i >= 13) {
                if (x < 0) x = 0;
                else if (x >= 0x65) x = 0x64;
            }
            *v = x;
        }
    }
    return 0;
}

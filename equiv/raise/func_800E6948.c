/* arg0: small */
#include "common.h"

extern u8 D_80091618[], D_800ED75C[];

s32 func_800E6948(u16 a0) {
    u8 *e = D_80091618 + a0 * 0x1A8;
    s16 *v = (s16 *)(e + 0xD2);
    u8 *t = D_800ED75C + *(u16 *)(e + 0x92) * 26;
    s16 i;
    for (i = 2; i < 12; i++, v++) {
        *v += *(u16 *)(t + i * 2);
        if (*v < 0) *v = 0;
        else if (*v >= 0x100) *v = 0xFF;
    }
    return 0;
}

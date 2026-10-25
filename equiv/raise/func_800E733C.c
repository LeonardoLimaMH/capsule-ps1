/* rand-u16: 0x800916AA 1 0,1,2,3 */
/* arg0: small */
/* arg1: small */
#include "common.h"

extern u8 D_800916E8[], D_800F21C0[];

s32 func_800E733C(u16 a0, s32 a1) {
    u8 *e = D_800916E8 + 2 + a0 * 0x1A8;
    u8 *t = D_800F21C0 + *(u16 *)(e - 0x40) * 0xA0;
    s32 i;
    for (i = 0; i < 8; i++)
        if (*(s16 *)(e + i * 2) < *(s16 *)(t + a1 * 16 + i * 2)) return 1;
    return 0;
}

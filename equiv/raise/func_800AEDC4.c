#include "common.h"

/* rand-u16: 0x8006AF80 1 0,1,2,3 */
/* rand-u16: 0x800916A2 1 0,1,2,3 */
/* rand-u16: 0x8009184A 1 0,1,2,3 */
/* rand-u16: 0x800919F2 1 0,1,2,3 */
/* rand-u16: 0x80091B9A 1 0,1,2,3 */
extern u8 D_80091618[], D_80063940[];
extern u16 D_8006AF80;
extern void func_800A89E0(s32, s32);

s32 func_800AEDC4(void) {
    u16 a = D_8006AF80;
    u8 *e = D_80091618 + a * 0x1A8;
    u16 j = *(u16 *)(e + 0x8A);
    u8 *f = D_80091618 + j * 0x1A8;
    s32 v = (((*(u32 *)(D_80063940 + *(u16 *)f * 60 + 8) ^ *(u32 *)(D_80063940 + *(u16 *)e * 60 + 8)) >> 12) & 3) != 0;
    s16 s = v * 2;
    *(s16 *)(e + 0x8E) = v * 2;
    *(s16 *)(f + 0x8E) = v * 2;
    func_800A89E0(a, s);
    func_800A89E0(j, s);
    return s;
}

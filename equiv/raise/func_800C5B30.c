/* arg2: small */
#include "common.h"

extern u8 D_80100F38[];
extern s32 func_800B1260(s32);

#define PL(a) (D_80100F38 + (func_800B1260(a) & 0xFFFF) * 0x79C)
#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))
extern u8 D_8008ED68[];

s32 func_800C5B30(s32 a0, s32 a1, s32 a2) {
    u8 *p = PL(a0);
    u8 **q = (u8 **)(p + 0x278 + a2 * 4);
    if (a1 == 1) {
        *(s32 *)(*q + 0x38) &= ~1;
        *(s16 *)(*q + 0x46) = -(*(s32 *)(D_8008ED68 + 0x108) / 2);
        *(s16 *)(*q + 0x4A) = -(*(s32 *)(D_8008ED68 + 0x10C) / 2);
        return *(u16 *)(*q + 0x4E) = P16(0x1E0);
    }
    return *(s32 *)(*q + 0x38) |= 1;
}

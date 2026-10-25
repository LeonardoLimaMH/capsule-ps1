#include "common.h"

/* arg0: small */
extern s32 D_800EE610[];
extern u8 D_80091618[];
extern u8 *func_80015B3C(void *, void *, s32);
extern void func_80015EF8(u8 *);
extern s32 func_80019F30(s32, s32);
extern void func_800A8184(void), func_800161C4(void);

#define O16(x) (*(s16 *)(o + (x)))
#define O32(x) (*(s32 *)(o + (x)))

s32 func_800A8340(u16 a0) {
    u8 *o = func_80015B3C(func_800A8184, func_800161C4, 1);
    if (o == 0) return 0;
    func_80015EF8(o);
    O32(0x18) = func_80019F30(D_800EE610[0] | 0x60000, D_800EE610[3] + *(s16 *)(D_80091618 + a0 * 0x1A8 + 0xBC) - 1);
    O32(0x3C) = 0x18;
    O16(0x78) = 0xAA;
    O16(0x74) = 0xAA;
    O16(0x76) = 0xAA;
    O16(0x4E) = 3;
    O16(0x66) = 0;
    O32(0x1C) = 0;
    O16(0x54) = 0;
    O16(0x50) = 0;
    O16(0x52) = 0;
    O16(0x46) = 0;
    O16(0x4A) = 0;
    O32(0x30) = ((O32(0x30) & ~0x1C0) | 0x40) & ~0x30 & ~8;
    O32(0x38) = (O32(0x38) | 8) & ~2 & ~4;
    return O32(0x38) &= ~1;
}

#include "common.h"

extern u8 D_80100F38[];
extern s32 func_800B1260(s32);

#define PL(a) (D_80100F38 + (func_800B1260(a) & 0xFFFF) * 0x79C)
#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))

s32 func_800CE164(s32 a0) {
    u8 *p = PL(a0);
    u16 v;
    if (PS16(0x328) > 0) {
        P16(0x328) -= 1;
        v = PS16(0x324) == 7 ? 0 : P16(0x324) + 1;
    } else {
        P16(0x328) += 1;
        v = PS16(0x324) == 0 ? 7 : P16(0x324) - 1;
    }
    P16(0x324) = v;
    return P16(0x326) = P16(0x324);
}

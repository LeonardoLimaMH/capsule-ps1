#include "common.h"

extern u8 D_80100F38[];
extern s32 func_800B1260(s32);

#define PL(a) (D_80100F38 + (func_800B1260(a) & 0xFFFF) * 0x79C)
#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))

extern u8 D_800F170C[];

s32 func_800C1280(s32 a0, s32 a1) {
    u8 *p = PL(a1);
    return (*(s32 (**)(s32, s32))(D_800F170C + **(u8 **)(p + 0x2C4) * 4))(a0, a1);
}

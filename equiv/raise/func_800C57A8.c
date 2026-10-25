#include "common.h"

extern u8 D_80100F38[];
extern s32 func_800B1260(s32);

#define PL(a) (D_80100F38 + (func_800B1260(a) & 0xFFFF) * 0x79C)
#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))
extern s32 D_800EE5D0[];
extern u8 D_800EEB9C[];
extern s32 func_80019F30(s32, s32);

s32 func_800C57A8(s32 a0) {
    u8 *p = PL(a0);
    s32 v = func_80019F30(D_800EE5D0[0] | 0x60000, D_800EE5D0[6] + *(s32 *)(D_800EEB9C + 0x6E0 + PS16(0x2BA) * 4));
    *(s32 *)(*(u8 **)(p + 0x230 + PS16(0x2BA) * 4) + 0x18) = v;
    P16(0x37A) = 0;
    return v;
}

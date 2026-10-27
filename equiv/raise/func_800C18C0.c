/* stub-ret: mixed */
/* rand-ptr: 0x80101168 18 */
/* rand-ptr: 0x801010BC 4 */
/* rand-ptr: 0x80101904 18 */
/* rand-ptr: 0x80101858 4 */
#include "common.h"

extern u8 D_80100F38[], D_800F07E4[];
extern s16 D_800F0738;
extern s32 D_800F0C94[];
extern s32 func_800B1260(s32), func_800CE128(s32);
extern void func_800D8E90(s32), func_800CE4B8(s32, s32, s32, s32);

#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))
#define SET1(o) (*(s32 *)((o) + 0x38) |= 1)

static void hide(s32 a1) {
    u8 *q = D_80100F38 + (func_800B1260(a1) & 0xFFFF) * 0x79C;
    s16 i;
    for (i = 0; i < 9; i++) SET1(*(u8 **)(q + 0x230 + i * 4));
    for (i = 0; i < 7; i++) SET1(*(u8 **)(q + 0x278 + i * 4));
    SET1(*(u8 **)(q + 0x184));
    SET1(*(u8 **)(q + 0x18C));
}

s32 func_800C18C0(s32 a0, s32 a1) {
    u8 *p = D_80100F38 + (func_800B1260(a1) & 0xFFFF) * 0x79C;
    func_800D8E90(a1);
    func_800CE4B8(a1, a0, D_800F0738 + func_800CE128(PS16(0x326)), 0);
    P16(0x2CA) = 0;
    P16(0x2C8) = 0;
    P16(0x2B8) = P16(0x2C0);
    *(u8 **)(p + 0x2C4) = D_800F07E4;
    P16(0x2BA) = P16(0x2C2);
    switch ((u32)PS16(0x2B8)) {
    case 0:
        P32(0x2BC) = D_800F0C94[0];
        hide(a1);
        break;
    case 1:
    case 2:
    case 3:
    case 4:
        P32(0x2BC) = D_800F0C94[1 + PS16(0x2BA)];
        break;
    case 5:
        P32(0x2BC) = D_800F0C94[0x17 + PS16(0x2BA)];
        hide(a1);
        break;
    case 6:
        P32(0x2BC) = D_800F0C94[0x25 + PS16(0x2BA)];
        break;
    }
    return P32(0x2C4);
}

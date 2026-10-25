#include "common.h"

/* stub-ret: mixed */
extern u8 D_80100F38[];
extern s32 func_800B1260(s32);

#define PL(a) (D_80100F38 + (func_800B1260(a) & 0xFFFF) * 0x79C)
#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))
extern s32 D_8008ED80;
extern s32 func_800D06D4(s32, s32);
extern void func_800CE164(s32), func_800CE204(s32, s32);

s32 func_800C3448(s32 a0, s32 a1) {
    u8 *p = PL(a1);
    switch (PS16(0x344)) {
    case 0:
        P16(0x344) = 1;
        break;
    case 1:
        P16(0x324) = P16(0x326);
        P16(0x326) = 7;
        P16(0x328) = func_800D06D4(PS16(0x324), 7);
        P16(0x344) = 2;
        break;
    case 2:
        if ((D_8008ED80 & 3) == 3) {
            if (PS16(0x328) == 0) {
                P16(0x344) = 3;
            } else {
                func_800CE164(a1);
                func_800CE204(a1, a0);
            }
        }
        break;
    default:
        P16(0x344) = 0;
        P32(0x2BC) += 1;
        break;
    }
    return P32(0x2BC);
}

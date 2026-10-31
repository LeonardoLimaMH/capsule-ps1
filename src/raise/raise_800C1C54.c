#include "common.h"

#include "common.h"

/* stub-ret: mixed */
extern u8 D_80100F38[];
extern s32 func_800B1260(s32);

#define PL(a) (D_80100F38 + (func_800B1260(a) & 0xFFFF) * 0x79C)
#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))
extern s16 D_800F0738[];
extern s32 func_800E14C4(s32), func_800CE128(s32);
extern void func_800CE4B8(s32, s32, s32, s32), func_800D8E90(s32);

s32 func_800C1C54(s32 a0, s32 a1) {
    u16 k = func_800B1260(a1);
    u8 *p = D_80100F38 + k * 0x79C;
    if (func_800E14C4(k) != 1) {
        u8 c = **(u8 **)(p + 0x2BC);
        if (c == 0x52 || c == 0xD || c == 0x53 || c == 0x69 || c == 0x79 || c == 0x7A || c == 0x71 ||
            c == 0x74 || c == 0x77 || c == 0x70) {
            if (PS16(0x344) == 2 && PS16(0x342) != 4) return P32(0x2C4);
        }
    }
    P16(0x2CA) = 1;
    P32(0x2C4) += 1;
    func_800CE4B8(a1, a0, (*D_800F0738) + func_800CE128(PS16(0x326)), 0);
    func_800D8E90(a1);
    return P32(0x2C4);
}

s32 func_800C1D94(void) {
    return 0;
}

s32 func_800C1D9C(void) {
    return 0;
}

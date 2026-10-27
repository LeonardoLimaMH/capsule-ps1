/* stub-ret: mixed */
#include "common.h"

extern u8 D_80100F38[];
extern s16 D_800F07C0;
extern s32 D_8008ED80;
extern s32 func_800B1260(s32), func_800B12D8(s32), func_800B21F0(s32, s32), func_800D06D4(s32, s32);
extern s32 func_800CE128(s32), func_80015E60(s32);
extern void func_800CE4B8(s32, s32, s32, s32), func_800CE164(s32), func_800CE204(s32, s32);

#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))

s32 func_800C79E0(s32 a0, s32 a1) {
    u16 k = func_800B1260(a1);
    u8 *p = D_80100F38 + k * 0x79C;
    switch (PS16(0x344)) {
    case 0: {
        s32 j, r;
        P16(0x344) = 1;
        j = func_800B12D8(a1);
        P16(0x324) = P16(0x326);
        r = func_800B21F0(k, (u16)j);
        if ((s16)r != -1) P16(0x326) = r;
        P16(0x328) = func_800D06D4(PS16(0x324), PS16(0x326));
        break;
    }
    case 1:
        if ((D_8008ED80 & 3) != 3) break;
        if (PS16(0x328) != 0) goto turn;
        func_800CE4B8(a1, a0, D_800F07C0 + func_800CE128(PS16(0x326)), 1);
        P16(0x344) = 2;
        break;
    case 2:
        if (func_80015E60(a0) == 1) {
            u16 a = P16(0x324), b = P16(0x326);
            P16(0x324) = b;
            P16(0x326) = a;
            P16(0x328) = func_800D06D4(PS16(0x324), (s16)a);
            P16(0x344) = 3;
        }
        break;
    case 3:
        if (!(D_8008ED80 & 1)) break;
        if (PS16(0x328) != 0) goto turn;
        P16(0x344) = 0;
        P32(0x2BC) += 1;
        break;
    }
    return P32(0x2BC);
turn:
    func_800CE164(a1);
    func_800CE204(a1, a0);
    return P32(0x2BC);
}

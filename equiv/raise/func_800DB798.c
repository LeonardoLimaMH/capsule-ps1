/* stub-ret: mixed */
/* max-insns: 5000 */
#include "common.h"

extern u8 D_80100F38[], D_80091618[], D_80063940[];
extern s16 D_800F07D0;
extern s32 D_8008ED80, D_8010531C;
extern s32 func_800B1260(s32), func_800E14C4(s32), func_800DBC98(s32, s32), func_800D06D4(s32, s32);
extern s32 func_80015E60(s32), func_800D0CFC(s32);
extern void func_800CE4B8(s32, s32, s32, s32), func_800CE164(s32), func_800CE204(s32, s32);
extern void func_80098FEC(s32, s32, s32);

#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))
#define T(d) ((*(u32 *)((d) + 0xC) >> 11) & 0x1F)

s32 func_800DB798(s32 a0, s32 a1) {
    s32 k = func_800B1260(a1);
    u8 *p = D_80100F38 + (u16)k * 0x79C;
    switch (PS16(0x344)) {
    case 0: {
        u16 c = *(u16 *)(D_80091618 + (u16)k * 0x1A8);
        u8 *d = D_80063940 + c * 60;
        s32 t;
        if ((u32)(T(d) - 0x17) < 8 && func_800E14C4((u16)k) != 1) {
            s32 r = func_800DBC98((s16)k, T(d));
            D_8010531C = r;
            if (r != 0 && (T(d) != 0x17 || func_800D0CFC(a1) != 1)) goto set;
        }
        P32(0x2BC) += 1;
    set:
        P16(0x324) = P16(0x326);
        t = (*(u32 *)(D_80063940 + c * 60 + 0x1C) >> 8) & 7;
        P16(0x326) = t;
        P16(0x328) = func_800D06D4(PS16(0x324), t);
        P16(0x344) = 1;
        break;
    }
    case 1:
        if ((D_8008ED80 & 3) != 3) break;
        if (PS16(0x328) == 0) {
            func_800CE4B8(a1, a0, D_800F07D0, 1);
            P16(0x344) = 2;
        } else {
            func_800CE164(a1);
            func_800CE204(a1, a0);
        }
        break;
    case 2:
        if (func_80015E60(a0) == 1) P16(0x344) = 3;
        else func_80098FEC(a0, a1, (u16)k);
        break;
    default: {
        u8 *pc = *(u8 **)(p + 0x2BC);
        P16(0x344) = 0;
        *(u8 **)(p + 0x2BC) = pc + 1;
        if (T(D_80063940 + *(u16 *)(D_80091618 + (u16)k * 0x1A8) * 60) == 0x17) break;
        if (pc[1] != 1) {
            u8 *q;
            do {
                q = *(u8 **)(p + 0x2BC);
                *(u8 **)(p + 0x2BC) = q + 1;
            } while (q[1] != 1);
        }
        break;
    }
    }
    return P32(0x2BC);
}

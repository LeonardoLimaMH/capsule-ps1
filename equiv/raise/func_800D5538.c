/* arg0: small */
#include "common.h"

extern u8 D_80100F38[], D_8008ED68[];
extern void func_800D613C(s32, s32, s32, s32);

#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))

s32 func_800D5538(u16 a0) {
    u8 *p = D_80100F38 + a0 * 0x79C;
    u8 *w;
    s16 v;
    if (PS16(0x396) == 0) return 0;
    w = D_8008ED68;
    if (w[0x99A] == 0) {
        s32 t = PS16(0x398) == 1 ? PS16(0x390) + 4 : PS16(0x390) - 4;
        P16(0x390) = t;
        if ((s16)t < 0) P16(0x390) = 0;
        else if ((s16)t >= 0xF1) P16(0x390) = 0xF0;
    }
    func_800D613C(a0, PS16(0x3A4), PS16(0x3A6), 3);
    if (w[0x99A] != 0) return w[0x99A];
    if (PS16(0x398) == 1) {
        if (PS16(0x390) == 0xF0) P16(0x398) = 0;
        return 0xF0;
    }
    v = PS16(0x390);
    if (v == 0) P16(0x398) = 1;
    return v;
}

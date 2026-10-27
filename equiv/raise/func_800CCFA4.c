/* stub-ret: mixed */
/* arg1: small */
/* rand-ptr: 0x800F19C8 120 */
#include "common.h"

extern u8 D_80100F38[], D_80091618[];
extern s32 D_800F19C8[];
extern u16 D_80069AB4[];
extern s32 func_800B1260(s32);
extern void func_800CD1A0(s32, s32, s32, s32), func_800A8E78(s32);

void func_800CCFA4(s32 a0, s32 a1, s32 a2) {
    u16 k = func_800B1260(a0);
    s32 *T = D_800F19C8 + k * 3;
    if (a2 == 0) {
        u8 *e, *q;
        u16 x, y;
        *(s32 *)((u8 *)T[a1] + 0x38) |= 1;
        *(s32 *)((u8 *)T[a1 + 0x12] + 0x38) |= 1;
        e = D_80091618 + k * 0x1A8;
        q = e + 0x1C + a1 * 12;
        x = *(u16 *)q;
        if (*(s16 *)q == -1 || (y = *(u16 *)(q + 4), *(s16 *)(q + 4) == -1)) {
            u8 *p = D_80100F38 + k * 0x79C;
            x = *(u16 *)(p + 0x336);
            y = *(u16 *)(p + 0x338);
        }
        func_800CD1A0(a0, (s16)(D_80069AB4[*(u16 *)(e + 0x14 + a1 * 2)] - 1), (s16)x, (s16)y);
        func_800A8E78(T[a1]);
        func_800A8E78(T[a1 + 0x12]);
        T[a1] = 0;
        T[a1 + 0x12] = 0;
    } else if (a2 == 1) {
        *(s32 *)((u8 *)T[a1] + 0x38) &= ~1;
        *(s32 *)((u8 *)T[a1 + 0x12] + 0x38) &= ~1;
    }
}

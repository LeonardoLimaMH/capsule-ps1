#include "common.h"

/* arg0: small */
/* rand-ptr: 0x800F2DC0 6 */
extern u8 D_80100F38[], D_800EEB9C[];
extern s32 D_800EE5D0[], D_800F2DBC;
extern u8 *D_800F2DC0[];
extern s32 func_80019F30(s32, s32);
extern void func_80015CD0(void *, s32, s32);

s32 func_800B19E0(u16 a0) {
    u8 *p = D_80100F38 + a0 * 0x79C;
    s32 i;
    *(s32 *)(p + 0x190) = D_800F2DBC;
    for (i = 0; i < 6; i++) {
        u8 **q = (u8 **)(p + 0x194 + i * 4);
        s16 *s = (s16 *)(p + 0x356 + i * 2);
        s32 r;
        *q = D_800F2DC0[i];
        r = func_80019F30(D_800EE5D0[0] | 0x70000, D_800EE5D0[6] + *(s32 *)(D_800EEB9C + 0x780) + *s);
        func_80015CD0(*q + 0x14, r, 0);
        *(u16 *)(*q + 0x66) = 0;
        *(s32 *)(*q + 0x30) &= ~0x1C0;
        *(s32 *)(*q + 0x30) = (*(s32 *)(*q + 0x30) & ~0x30) | 0x20;
        *(s32 *)(*q + 0x7C) = *(s32 *)(D_800EEB9C + 0x780) + *s;
    }
    return 0;
}

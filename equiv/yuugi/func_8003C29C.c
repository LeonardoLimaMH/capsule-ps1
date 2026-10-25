#include "common.h"

extern u8 D_800944B8[];
extern s32 D_80078C98;
extern s32 D_80078C9C;
extern s32 func_8003AAF0();

s32 func_8003C29C(s32 n) {
    u8 *e = D_800944B8 + n * 684;
    u8 *t;
    s32 i;
    s32 v;

    D_80078C98 = 0;
    e[0x2A8] = 0;
    D_80078C9C = n;
    func_8003AF34(n);
    for (i = 0; i < *(u16 *)(e + 0x2A2); i++) {
        t = D_800944B8 + n * 684 + i * 0x28;
        *(s32 *)(t + 4) = *(s32 *)t;
        v = func_8003AAF0(t);
        t[0x20] = 0;
        t[0x23] = 0;
        t[0x25] = 0;
        t[0x24] = 0;
        *(s16 *)(t + 0x1C) = v;
        *(s16 *)(t + 0x18) = 0;
        if (D_80078C98 != 0) {
            func_8003C0C8(t);
        }
    }
    return 0;
}

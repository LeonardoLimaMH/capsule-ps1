/* max-insns: 200000 */
#include "common.h"

extern u8 D_8008ED68[];
extern u8 D_8008F702;
extern s16 D_8006B00E;
extern s32 rsin(s32), rcos(s32), func_80019F30(s32, s32);
extern void func_80034AB0(s32), func_80013928(u8 *), func_80013920(u8 *), func_800161C4(u8 *);

#define OS(x) (*(s16 *)(o + (x)))
#define Q32(x) (*(s32 *)(q + (x)))

void func_8009C5F4(u8 *o) {
    s32 n = o[0x34] + 1;
    u8 *q = *(u8 **)(o + 0x28);
    u32 lim;
    s32 s, d, b, c, i, j, acc;
    if (D_8008ED68[0x99A] == 0) Q32(0x3C) += 1;
    lim = (Q32(0x34) & 0x7F) * 30 + 1;
    if ((u32)Q32(0x3C) < lim) return;
    if (Q32(0x3C) == lim) func_80034AB0(0x40);
    if (D_8008ED68[0x99A] == 0) s = OS(0x1A) += 1;
    else s = OS(0x1A);
    if (OS(0x3C) < s) {
        if ((Q32(0x34) & 0x7F) == 10) D_8006B00E = 0;
        func_80013928(q);
        func_80013920(o);
        return;
    }
    if (D_8008F702 == 0) OS(0x36) += 10;
    d = OS(0x3C);
    b = (s * OS(0x3A)) / d;
    c = (rsin(((s << 12) / d) / 2) * 255) / 4096;
    q[0x5A] = c;
    q[0x59] = c;
    q[0x58] = c;
    *(u16 *)(q + 0x4E) = *(u16 *)(o + 0x30);
    *(s32 *)(q + 0x18) = func_80019F30(0x6000E, o[0x32] * 6 + (s / 2) % 2 + 0x271);
    acc = b;
    for (i = 1; i < n; i++) {
        s32 m = o[0x33] * i;
        s32 r = acc / n;
        s32 v = (rcos(((i << 12) / n) / 4) + 0x1000) / 2;
        *(s16 *)(q + 0x52) = v;
        *(s16 *)(q + 0x50) = v;
        for (j = 0; j < m; j++) {
            s32 t = (j << 12) / m + OS(0x36);
            s32 x = OS(0x2C) + (r * rcos(t)) / 4096;
            *(s16 *)(q + 0x46) = x;
            *(s16 *)(q + 0x4A) = OS(0x2E) + (r * rsin(t + OS(0x38))) / 4096;
            func_800161C4(q);
        }
        acc += b;
    }
}

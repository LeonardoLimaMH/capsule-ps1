#include "common.h"

int func_8009C5F4(u8 *arg0) {
    extern u8 D_8008ED68[];
    extern u8 D_8008F702[];
    extern s16 D_8006B00E[];
    extern s32 rsin(s32), rcos(s32), func_80019F30(s32, s32);
    extern void func_80034AB0(s32), func_80013920(void *), func_800161C4(void *);

    register u8 *o asm("s7");
    register s32 v1 asm("v1");
    s32 n;
    u8 *q;
    u32 lim;
    s32 s, d, b, c;
    s32 acc;
    s32 j;
    s32 i;
    s32 k;

    o = arg0;
    n = o[0x34] + 1;
    q = *(u8 **)(o + 0x28);

    if (D_8008ED68[0x99A] == 0) {
        *(s32 *)(q + 0x3C) += 1;
    }
    lim = (*(s32 *)(q + 0x34) & 0x7F) * 30 + 1;
    if ((u32)*(s32 *)(q + 0x3C) < lim) {
        return;
    }
    if (*(s32 *)(q + 0x3C) == lim) {
        func_80034AB0(0x40);
    }
    if (D_8008ED68[0x99A] == 0) {
        s = ++*(s16 *)(o + 0x1A);
    } else {
        s = *(s16 *)(o + 0x1A);
    }
    if (*(s16 *)(o + 0x3C) < s) {
        if ((*(s32 *)(q + 0x34) & 0x7F) == 10) {
            *D_8006B00E = 0;
        }
        func_80013928(q);
        func_80013920(o);
        return;
    }
    if (D_8008F702[0] == 0) {
        *(u16 *)(o + 0x36) += 10;
    }
    d = *(s16 *)(o + 0x3C);
    b = (s * *(s16 *)(o + 0x3A)) / d;
    c = (rsin(((s << 12) / d) / 2) * 255) / 4096;
    q[0x5A] = c;
    q[0x59] = c;
    q[0x58] = c;
    *(u16 *)(q + 0x4E) = *(u16 *)(o + 0x30);
    v1 = o[0x32] * 6;
    k = (s / 2) % 2 + 0x271;
    *(s32 *)(q + 0x18) = func_80019F30(0x6000E, v1 + k);
    for (i = 1; i < n; i++) {
        s32 m = o[0x33] * i;
        s32 r = (b * i) / n;
        s32 v = (rcos(((i << 12) / n) / 4) + 0x1000) / 2;
        *(s16 *)(q + 0x52) = v;
        *(s16 *)(q + 0x50) = v;
        for (j = 0; j < m; j++) {
            s32 t = (j << 12) / m + *(s16 *)(o + 0x36);
            s32 x = *(s16 *)(o + 0x2C) + (r * rcos(t)) / 4096;
            s32 y = *(s16 *)(o + 0x2E) + (r * rsin(t + *(s16 *)(o + 0x38))) / 4096;
            *(s16 *)(q + 0x46) = x;
            *(s16 *)(q + 0x4A) = y;
            func_800161C4(q);
        }
    }
}

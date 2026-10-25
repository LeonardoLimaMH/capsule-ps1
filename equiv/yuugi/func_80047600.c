#include "common.h"

extern s32 D_800733B8[];
extern s32 (*D_800733C0)();
extern s32 VSync();
extern s32 DsGetSector(), DsGetSector2(), func_800478D0();

s32 func_80047600(s32 a0, s32 a1) {
    s32 *d = D_800733B8;
    s32 (*cb)();
    s32 r, t;

    d[0] = VSync(-1);
    if (d[-4] & 1) {
        if (d[-5] > 0) {
            r = DsGetSector2(d[-6], d[-7]);
            d[-3] = a1;
            return r;
        }
        r = func_800478D0();
        cb = D_800733C0;
        if (cb == 0) {
            return r;
        }
    } else {
        if (d[-5] > 0) {
            DsGetSector(d[-6], d[-7]);
            d[-6] += d[-7] * 4;
            d[-5]--;
        }
        if (d[-1] + 0x4B0 < VSync(-1)) {
            d[-5] = -1;
        }
        if (d[-5] != 0) {
            t = VSync(-1);
            if (!(d[-1] + 0x4B0 < t)) {
                return t;
            }
        }
        r = func_800478D0();
        cb = D_800733C0;
        if (cb == 0) {
            return r;
        }
        a0 = 2;
    }
    if (d[-5] < 0) {
        a0 = 5;
    }
    return cb(a0 & 0xFF, a1);
}

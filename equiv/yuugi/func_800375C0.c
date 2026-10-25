#include "common.h"

extern u16 D_8007082C[][128];

u16 func_800375C0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s16 n = a1 + a3;
    s32 q = n / 128;
    s16 r = n - q * 128;
    s32 v = a0 + q - a2;
    s16 d = v;
    s16 nd, m;
    s32 t;

    if (d < 0) {
        nd = -v;
        m = nd % 12;
        t = 12 - m;
        return D_8007082C[t % 12][r] >> ((nd + 11) / 12);
    }
    m = d % 12;
    return D_8007082C[m][r] << (d / 12);
}

#include "common.h"

extern void _err_math();

s32 __divsf3(s32 a, s32 b) {
    s32 d = ((a >> 23) & 0xFF) - ((b >> 23) & 0xFF);
    s32 e = d + 0x7E;
    s32 sign = (a & 0x80000000) ^ (b & 0x80000000);
    s32 ma, mb, q, bit, s;

    if ((b & 0x7FFFFFFF) == 0) {
        return sign == 0 ? 0x4F000000 : 0x4F800000;
    }
    if ((a & 0x7FFFFFFF) == 0) {
        return sign;
    }
    ma = (a & 0x7FFFFF) | 0x800000;
    mb = (b & 0x7FFFFF) | 0x800000;
    if (ma < mb) {
        ma <<= 1;
        e = d + 0x7D;
    }
    q = 0;
    bit = 0x1000000;
    do {
        if (ma >= mb) {
            q |= bit;
            ma -= mb;
        }
        bit >>= 1;
        ma <<= 1;
    } while (bit != 0);
    if (e >= 0) {
        q = (q + 1) >> 1;
        e++;
    } else {
        s = -e;
        q = (q + (1 << s)) >> (s + 1);
        e = 0;
    }
    q &= 0xFF7FFFFF;
    if (e >= 0xFF) {
        _err_math(0x22, 0xE);
        return sign == 0 ? 0x7F800000 : 0xFF800000;
    }
    return sign | (e << 23) | q;
}

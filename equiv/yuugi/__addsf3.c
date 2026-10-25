#include "common.h"

extern void _err_math();

s32 __addsf3(s32 a, s32 b) {
    s32 sign = 0;
    s32 ea, eb, ma, mb, m;

    if ((a & 0x7FFFFFFF) == 0) {
        return b;
    }
    if ((b & 0x7FFFFFFF) == 0) {
        return a;
    }
    ea = (a >> 23) & 0xFF;
    eb = (b >> 23) & 0xFF;
    if ((u32)(eb + 25) < (u32)ea) {
        return a;
    }
    if ((u32)(ea + 25) < (u32)eb) {
        return b;
    }
    ma = ((a & 0x7FFFFF) | 0x800000) << 6;
    mb = ((b & 0x7FFFFF) | 0x800000) << 6;
    if (a < 0) {
        ma = -ma;
    }
    if (b & 0x80000000) {
        mb = -mb;
    }
    if ((u32)eb < (u32)ea) {
        mb >>= ea - eb;
    } else {
        ma >>= eb - ea;
        ea = eb;
    }
    m = ma + mb;
    if (m < 0) {
        m = -m;
        sign = 0x80000000;
    } else if (m == 0) {
        return 0;
    }
    if (!(m & 0xE0000000)) {
        do {
            m <<= 1;
            ea--;
        } while (!(m & 0xE0000000));
    }
    if (m & 0x40000000) {
        m >>= 1;
        ea++;
    }
    m += (m & 0x40) ? 0x20 : 0x1F;
    if (m & 0x40000000) {
        m >>= 1;
        ea++;
    }
    m = (m >> 6) & 0xFF7FFFFF;
    if ((u32)ea >= 0xFF) {
        _err_math(0x22, 0xA);
        return sign == 0 ? 0x7F800000 : 0xFF800000;
    }
    return sign | (ea << 23) | m;
}

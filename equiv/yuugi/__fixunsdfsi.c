#include "common.h"

typedef struct {
    u32 lo, hi;
} Mant;

extern void _dbl_shift();
extern void _err_math();

/* double (bits em dois registradores) -> unsigned int */
u32 __fixunsdfsi(u32 lo, s32 hi) {
    Mant m;
    u32 sign = hi & 0x80000000;
    s32 e, sh;
    u32 v;

    if (sign) {
        _err_math(0x21, 0x13);
    }
    if ((hi & 0x7FFFFFFF) == 0 && lo == 0) {
        return sign;
    }
    e = (hi >> 20) & 0x7FF;
    sh = e - 0x41E;
    if (sh > 0) {
        _err_math(0x22, 0x13);
        return -1;
    }
    m.hi = (hi & 0xFFFFF) | 0x100000;
    m.lo = lo;
    _dbl_shift(&m, 0, m, 11);
    if ((u32)(e - 0x3FF) < 0x20 && m.hi != 0) {
        v = m.hi >> -sh;
        return hi >= 0 ? v : -v;
    }
    return 0;
}

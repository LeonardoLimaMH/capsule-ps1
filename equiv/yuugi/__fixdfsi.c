#include "common.h"

typedef struct {
    u32 lo, hi;
} Mant;

extern void _dbl_shift();
extern void _err_math();

/* double (bits em dois registradores) -> int, truncando */
s32 __fixdfsi(u32 lo, s32 hi) {
    Mant m;
    volatile s32 pad[2]; /* mesmo tamanho de quadro do original */
    s32 e, sh;

    if ((hi & 0x7FFFFFFF) == 0 && lo == 0) {
        return hi & 0x80000000;
    }
    e = (hi >> 20) & 0x7FF;
    sh = e - 0x41D;
    if (sh > 0) {
        _err_math(0x22, 0x11);
        return hi >= 0 ? 0x7FFFFFFF : 0x80000000;
    }
    m.hi = (hi & 0xFFFFF) | 0x100000;
    m.lo = lo;
    _dbl_shift(&m, 0, m, 10);
    if ((u32)(e - 0x3FE) < 0x20 && m.hi != 0) {
        e = (s32)m.hi >> -sh;
        return hi >= 0 ? e : -e;
    }
    return 0;
}

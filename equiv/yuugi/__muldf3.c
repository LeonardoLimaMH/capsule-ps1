#include "common.h"

typedef struct {
    u32 lo, hi;
} Mant;

extern void _dbl_shift_us(), _mul_mant_d(), _add_mant_d(), _err_math();

/* double * double (bits em pares de registradores); retorno em v0 (baixo) / v1 (alto) */
unsigned long long __muldf3(u32 alo, u32 ahi, u32 blo, u32 bhi) {
    Mant acc, k, ma, mb, t, t2, res;
    volatile s32 es;
    u32 sign = (ahi & 0x80000000) ^ (bhi & 0x80000000);
    s32 e;
    u32 xa, xb, la, lb;

    if (((ahi & 0x7FFFFFFF) == 0 && alo == 0) || ((bhi & 0x7FFFFFFF) == 0 && blo == 0)) {
        res.hi = sign;
        res.lo = 0;
        goto out;
    }
    es = ((ahi >> 20) & 0x7FF) + ((bhi >> 20) & 0x7FF);
    e = es - 0x3FE;
    ma.hi = (ahi & 0xFFFFF) | 0x100000;
    ma.lo = alo;
    mb.hi = (bhi & 0xFFFFF) | 0x100000;
    mb.lo = blo;
    _dbl_shift_us(&t, 1, ma, 0x15);
    xa = t.lo;
    _dbl_shift_us(&t, 1, mb, 0x15);
    xb = t.lo;
    la = ma.lo & 0x1FFFFF;
    lb = mb.lo & 0x1FFFFF;
    _mul_mant_d(&acc, xa, xb);
    _mul_mant_d(&t2, la, xb);
    _dbl_shift_us(&t, 1, t2, 0x15);
    _add_mant_d(&acc, acc, t);
    _mul_mant_d(&t2, lb, xa);
    _dbl_shift_us(&t, 1, t2, 0x15);
    _add_mant_d(&acc, acc, t);
    if ((s32)acc.hi < 0) {
        k.lo = 0x400;
        k.hi = 0;
        _add_mant_d(&acc, acc, k);
        _dbl_shift_us(&acc, 1, acc, 0xB);
    } else {
        k.lo = 0x200;
        k.hi = 0;
        _add_mant_d(&acc, acc, k);
        if (acc.hi & 0x80000000) {
            _dbl_shift_us(&acc, 1, acc, 0xB);
        } else {
            e = es - 0x3FF;
            _dbl_shift_us(&acc, 1, acc, 0xA);
        }
    }
    acc.hi &= 0xFFEFFFFF;
    if (e >= 0x7FF) {
        _err_math(0x22, 0xD);
        res.hi = sign != 0 ? 0xFFF00000 : 0x7FF00000;
        res.lo = 0;
    } else {
        res.hi = sign | (e << 20) | acc.hi;
        res.lo = acc.lo;
    }
out:
    return ((unsigned long long)res.hi << 32) | res.lo;
}

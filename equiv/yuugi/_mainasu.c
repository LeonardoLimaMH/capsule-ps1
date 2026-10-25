#include "common.h"

typedef struct {
    u32 lo, hi;
} Mant;

extern void _add_mant_d();

/* negação em complemento de dois de uma mantissa de 64 bits */
Mant *_mainasu(Mant *res, Mant x) {
    Mant one;

    x.lo = ~x.lo;
    x.hi = ~x.hi;
    one.lo = 1;
    one.hi = 0;
    _add_mant_d(&x, x, one);
    *res = x;
    return res;
}

#include "common.h"

typedef unsigned long long Bits64;
typedef struct {
    u32 lo, hi;
} Mant;
typedef union {
    Bits64 d;
    Mant w;
} Dbl;

extern void _dbl_shift_us();

/* int -> double (bits em v0/v1) */
Bits64 __floatsidf(s32 i) {
    u32 sign = 0;
    s32 e = 0x41D;
    Mant m;
    Dbl r;

    if (i == 0) {
        r.w.lo = 0;
        r.w.hi = 0;
        return r.d;
    }
    if (i < 0) {
        sign = 0x80000000;
        i = -i;
    }
    if (i <= 0xFFFFFF) {
        do {
            i <<= 4;
            e -= 4;
        } while (i <= 0xFFFFFF);
    }
    if (i <= 0x3FFFFFFF) {
        do {
            i <<= 1;
            e--;
        } while (i <= 0x3FFFFFFF);
    }
    m.hi = i;
    m.lo = 0;
    _dbl_shift_us(&m, 1, m, 10);
    r.w.lo = m.lo;
    m.hi &= 0xFFEFFFFF;
    r.w.hi = m.hi | sign | (e << 20);
    return r.d;
}

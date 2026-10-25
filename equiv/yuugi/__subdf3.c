#include "common.h"

typedef unsigned long long Bits64;
typedef union {
    Bits64 d;
    struct {
        u32 lo, hi;
    } w;
} Dbl;

extern Bits64 __negdf2(Bits64);
extern Bits64 __adddf3(Bits64, Bits64);

/* a - b com doubles em software (os bits vão em pares de registradores) */
Bits64 __subdf3(Bits64 a, Bits64 b) {
    Dbl x, y;

    x.d = a;
    y.d = b;
    if ((y.w.hi & 0x7FFFFFFF) == 0 && y.w.lo == 0) {
        return a;
    }
    if ((x.w.hi & 0x7FFFFFFF) == 0 && x.w.lo == 0) {
        return __negdf2(b);
    }
    y.w.hi ^= 0x80000000;
    return __adddf3(a, y.d);
}

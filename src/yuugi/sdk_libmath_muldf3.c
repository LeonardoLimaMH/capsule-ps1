#include "common.h"
#include "yuugi.h"

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libmath_muldf3", __muldf3);

#include "common.h"

typedef struct {
    u32 lo, hi;
} Mant;

extern void _add_mant_d();

/* produto de 32 x 32 bits em 64, por metades de 16 bits */
Mant *_mul_mant_d(Mant *out, u32 a, u32 b) {
    Mant acc;
    Mant t;
    u32 al = a & 0xFFFF, ah = a >> 16;
    u32 bl = b & 0xFFFF, bh = b >> 16;
    u32 p;

    acc.lo = al * bl;
    acc.hi = 0;
    p = ah * bl;
    t.hi = p >> 16;
    t.lo = p << 16;
    _add_mant_d(&acc, acc, t);
    p = al * bh;
    t.hi = p >> 16;
    t.lo = p << 16;
    _add_mant_d(&acc, acc, t);
    acc.hi += ah * bh;
    *out = acc;
    return out;
}

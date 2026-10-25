#include "common.h"

typedef struct {
    u32 lo, hi;
} Mant;

/* soma de mantissas de 64 bits, com o vai-um calculado em metades de 16 bits */
Mant *_add_mant_d(Mant *out, Mant a, Mant b) {
    u32 l0 = (a.lo & 0xFFFF) + (b.lo & 0xFFFF);
    u32 l1 = (a.lo >> 16) + (b.lo >> 16);

    if (l0 & 0x10000) {
        l1++;
    }
    if (l1 & 0x10000) {
        a.hi++;
    }
    a.lo = (l1 << 16) | (l0 & 0xFFFF);
    a.hi += b.hi;
    *out = a;
    return out;
}

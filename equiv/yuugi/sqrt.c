#include "common.h"

typedef unsigned long long Bits64;

extern Bits64 D_80010C00; /* chute inicial */
extern Bits64 D_80010C08; /* 0.5 */
extern s32 __gtdf2(Bits64, Bits64);
extern s32 __ltdf2(Bits64, Bits64);
extern Bits64 __divdf3(Bits64, Bits64);
extern Bits64 __adddf3(Bits64, Bits64);
extern Bits64 __muldf3(Bits64, Bits64);
extern void _err_math();

/* raiz quadrada por Newton, em double de software */
Bits64 sqrt(Bits64 x) {
    Bits64 g = 0;
    Bits64 prev;

    if (__gtdf2(x, g) > 0) {
        g = D_80010C00;
        if (__gtdf2(x, g) > 0) {
            g = x;
        }
        do {
            prev = g;
            g = __muldf3(__adddf3(__divdf3(x, g), g), D_80010C08);
        } while (__ltdf2(g, prev) < 0);
        return prev;
    }
    if (__ltdf2(x, g) < 0) {
        _err_math(0x21, 6);
    }
    return g;
}

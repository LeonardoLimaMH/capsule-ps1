/* stub-ret: mixed */
/* arg0: 0x80150000 */
/* rand-u16: 0x80150000 64 0,1,0x10,0x40,0x80,0x100,0xFFC0,0xFFF0,0xFF80,0x1000 */
#include "common.h"
#include "gte_inline.h"

/* libgte: lê a matriz de rotação e a translação do GTE */
long ReadRotMatrix(long *m) {
    register long v0_ __asm__("$2");
    long keep = v0_; /* o original não mexe em v0 */
    long a, b, c, d, e;
    GTE_CFC2(a, 0);
    GTE_CFC2(b, 1);
    GTE_CFC2(c, 2);
    GTE_CFC2(d, 3);
    GTE_CFC2(e, 4);
    m[0] = a;
    m[1] = b;
    m[2] = c;
    m[3] = d;
    m[4] = e;
    GTE_CFC2(a, 5);
    GTE_CFC2(b, 6);
    GTE_CFC2(c, 7);
    m[5] = a;
    m[6] = b;
    m[7] = c;
    return keep;
}

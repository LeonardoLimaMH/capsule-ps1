/* stub-ret: mixed */
/* rand-u16: 0x80150000 64 0,1,0x10,0x40,0x80,0x100,0xFFC0,0xFFF0,0xFF80,0x1000 */
#include "common.h"
#include "gte_inline.h"

/* libgte: quantidade de bits iniciais iguais ao sinal (LZCS/LZCR) */
long Lzc(long x) {
    long n;
    gte_ldlzc(x);
    GTE_MFC2(n, 31);
    return n;
}

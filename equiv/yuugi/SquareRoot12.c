/* stub-ret: mixed */
#include "common.h"
#include "gte_inline.h"

/* libgte: raiz quadrada em ponto fixo 4.12, pela tabela D_80073C1C (normaliza o valor com o LZC do GTE) */
extern s16 D_80073C1C[];

long SquareRoot12(long a) {
    long n, e, t1, t4;
    gte_ldlzc(a);
    GTE_MFC2(n, 31);
    if (n == 32) return 0;
    e = n & ~1;
    t1 = (19 - e) >> 1;
    if (e - 24 >= 0) t4 = a << (e - 24);
    else t4 = a >> (24 - e);
    if (t1 >= 0) return D_80073C1C[t4 - 0x40] << t1;
    return (u32)D_80073C1C[t4 - 0x40] >> -t1;
}

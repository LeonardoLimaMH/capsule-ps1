/* stub-ret: mixed */
/* rand-u16: 0x80150000 64 0,1,0x10,0x40,0x80,0x100,0xFFC0,0xFFF0,0xFF80,0x1000 */
#include "common.h"
#include "gte_inline.h"

/* libgte: profundidade média de quatro valores (AVSZ4) */
long AverageZ4(long a, long b, long c, long d) {
    long otz;
    gte_ldsz4(a, b, c, d);
    gte_avsz4();
    GTE_MFC2(otz, 7);
    return otz;
}

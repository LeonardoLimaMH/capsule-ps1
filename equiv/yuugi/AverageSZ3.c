/* stub-ret: mixed */
/* rand-u16: 0x80150000 64 0,1,0x10,0x40,0x80,0x100,0xFFC0,0xFFF0,0xFF80,0x1000 */
#include "common.h"
#include "gte_inline.h"

/* libgte: profundidade média dos três últimos SZ (AVSZ3) */
long AverageSZ3(void) {
    long otz;
    gte_avsz3();
    GTE_MFC2(otz, 7);
    return otz;
}

/* stub-ret: mixed */
/* arg0: 0x80150000 */
/* arg1: 0x80150100 */
/* arg3: 0x80150300 */
/* rand-u16: 0x80150000 64 0,1,0x10,0x40,0x80,0x100,0xFFC0,0xFFF0,0xFF80,0x1000 */
#include "common.h"
#include "gte_inline.h"

/* libgte: cor rgb pela luz v com névoa de profundidade (DCPL) */
void DpqColorLight(void *v, void *rgb, long p, void *out) {
    gte_ldlvl(v);
    gte_ldrgb(rgb);
    gte_lddp(p);
    gte_dpcl();
    gte_strgb(out);
}

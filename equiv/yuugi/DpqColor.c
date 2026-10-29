/* stub-ret: mixed */
/* arg0: 0x80150000 */
/* arg2: 0x80150200 */
/* rand-u16: 0x80150000 64 0,1,0x10,0x40,0x80,0x100,0xFFC0,0xFFF0,0xFF80,0x1000 */
#include "common.h"
#include "gte_inline.h"

/* libgte: cor com névoa de profundidade (DPCS) */
void DpqColor(void *rgb, long p, void *out) {
    gte_ldrgb(rgb);
    gte_lddp(p);
    gte_dpcs();
    gte_strgb(out);
}

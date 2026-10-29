/* stub-ret: mixed */
/* arg0: 0x80150000 */
/* arg1: 0x80150100 */
/* arg2: 0x80150200 */
/* arg3: 0x80150300 */
/* arg5: 0x80150500 */
/* arg6: 0x80150600 */
/* arg7: 0x80150700 */
/* rand-u16: 0x80150000 64 0,1,0x10,0x40,0x80,0x100,0xFFC0,0xFFF0,0xFF80,0x1000 */
#include "common.h"
#include "gte_inline.h"

/* libgte: cor da luz para três normais com névoa (NCDT) */
void NormalColorDpq3(void *v0, void *v1, void *v2, void *rgb, long p, void *o0, void *o1, void *o2) {
    gte_ldv3(v0, v1, v2);
    gte_ldrgb(rgb);
    gte_lddp(p);
    gte_ncdt();
    gte_strgb3(o0, o1, o2);
}

/* stub-ret: mixed */
/* arg0: 0x80150000 */
/* arg1: 0x80150100 */
/* arg2: 0x80150200 */
/* arg3: 0x80150300 */
/* arg4: 0x80150400 */
/* arg5: 0x80150500 */
/* arg6: 0x80150600 */
/* rand-u16: 0x80150000 64 0,1,0x10,0x40,0x80,0x100,0xFFC0,0xFFF0,0xFF80,0x1000 */
#include "common.h"
#include "gte_inline.h"

/* libgte: cor da luz para três normais vezes rgb (NCCT) */
void NormalColorCol3(void *v0, void *v1, void *v2, void *rgb, void *o0, void *o1, void *o2) {
    gte_ldv3(v0, v1, v2);
    gte_ldrgb(rgb);
    gte_ncct();
    gte_strgb3(o0, o1, o2);
}

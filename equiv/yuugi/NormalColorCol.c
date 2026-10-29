/* stub-ret: mixed */
/* arg0: 0x80150000 */
/* arg1: 0x80150100 */
/* arg2: 0x80150200 */
/* rand-u16: 0x80150000 64 0,1,0x10,0x40,0x80,0x100,0xFFC0,0xFFF0,0xFF80,0x1000 */
#include "common.h"
#include "gte_inline.h"

/* libgte: cor da luz para a normal v vezes a cor rgb (NCCS) */
void NormalColorCol(void *v, void *rgb, void *out) {
    gte_ldv0(v);
    gte_ldrgb(rgb);
    gte_nccs();
    gte_strgb(out);
}

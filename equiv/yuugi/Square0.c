/* stub-ret: mixed */
/* arg0: 0x80150000 */
/* arg1: 0x80150100 */
/* rand-u16: 0x80150000 64 0,1,0x10,0x40,0x80,0x100,0xFFC0,0xFFF0,0xFF80,0x1000 */
#include "common.h"
#include "gte_inline.h"

/* libgte: quadrado de cada componente de v (SQR, sem deslocamento) */
void *Square0(void *v, void *out) {
    gte_ldlvl(v);
    gte_sqr0();
    gte_stlvnl(out);
    return out;
}

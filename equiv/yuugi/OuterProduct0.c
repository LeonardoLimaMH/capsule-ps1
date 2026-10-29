/* stub-ret: mixed */
/* arg0: 0x80150000 */
/* arg1: 0x80150100 */
/* arg2: 0x80150200 */
/* rand-u16: 0x80150000 64 0,1,0x10,0x40,0x80,0x100,0xFFC0,0xFFF0,0xFF80,0x1000 */
#include "common.h"
#include "gte_inline.h"

/* libgte: produto vetorial a x b (OP) */
long OuterProduct0(long *a, long *b, long *out) {
    register long v0_ __asm__("$2");
    long keep = v0_; /* o original não mexe em v0 */
    long d1, d2, d3;
    /* a diagonal de RT é o primeiro vetor do OP: guarda, troca por a e devolve depois */
    GTE_CFC2(d1, 0);
    GTE_CFC2(d2, 2);
    GTE_CFC2(d3, 4);
    __asm__ volatile("ctc2 %0, $0\n ctc2 %1, $2\n ctc2 %2, $4" :: "r"(a[0]), "r"(a[1]), "r"(a[2]));
    __asm__ volatile("lwc2 $11, 8(%0)\n lwc2 $9, 0(%0)\n lwc2 $10, 4(%0)" :: "r"(b));
    gte_op0();
    gte_stlvnl(out);
    __asm__ volatile("ctc2 %0, $0\n ctc2 %1, $2\n ctc2 %2, $4" :: "r"(d1), "r"(d2), "r"(d3));
    return keep;
}

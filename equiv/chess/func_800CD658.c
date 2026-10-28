/* arg0: 0x80150100 */
/* arg1: 0x80150000 */
#include "common.h"

/* projeta o vetor v com a matriz atual do GTE (RotTransPers): grava o ponto de tela em
 * *sxy e devolve a profundidade SZ3 / 4 */
s32 func_800CD658(void *v, s32 *sxy) {
    s32 p, flag, z;
    /* gte_ldv0(v); gte_rtps(); gte_stsxy(sxy); gte_stir0(&p); gte_stflg(&flag); gte_stsz(&z) */
    __asm__ volatile("lwc2 $0, 0(%3)\n"
                     "lwc2 $1, 4(%3)\n"
                     "nop\n"
                     "nop\n"
                     ".word 0x4A180001\n" /* rtps */
                     "swc2 $14, 0(%4)\n"
                     "mfc2 %0, $8\n"
                     "cfc2 %1, $31\n"
                     "mfc2 %2, $19\n"
                     "nop\n"
                     : "=r"(p), "=r"(flag), "=r"(z)
                     : "r"(v), "r"(sxy)
                     : "memory");
    return z >> 2;
}
